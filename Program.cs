using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using NaturalSort.Extension;

namespace RegTool
{
    class Program
    {
        static void Main(string[] args)
        {
            var vpu1Fields = GetRegFields("vpu1hwtable.h");
            var vpu2Fields = GetRegFields("vpu2hwtable.h");

            GenerateRegHeader(vpu1Fields, "hantro_g1_regs", "G1");
            GenerateRegHeader(vpu2Fields, "rk3399_vpu_hw_regs", "VDPU");

            foreach (var field in vpu1Fields)
            {
                if (!vpu2Fields.Any(_ => _.Name == field.Name))
                    Console.WriteLine($"WARNING: VPU2 Field is not defined '{field.Name}'");
            }

            foreach (var field in vpu2Fields)
            {
                if (!vpu1Fields.Any(_ => _.Name == field.Name))
                    Console.WriteLine($"WARNING: VPU1 Field is not defined '{field.Name}'");
            }

            var codecs = new string[] { "mpeg2", "h264" };
            foreach (var codec in codecs)
            {
                var vpu2FieldsFiltered = codec == "h264" ? 
                    vpu2Fields.Where(_ => _.Reg <= 115).ToList() :
                    vpu2Fields.Where(_ => _.Reg <= 70 || _.Reg >= 120).ToList();

                var vpu1Usages = GetRegUsage($"{codec}.txt", vpu1Fields);
                var vpu2Usages = GetRegUsage($"{codec}.txt", vpu2FieldsFiltered);

                GenerateRegUsage(vpu1Fields, vpu1Usages, $"hantro_g1_{codec}_dec", "G1");
                GenerateRegUsage(vpu2FieldsFiltered, vpu2Usages, $"rk3399_vpu_hw_{codec}_dec", "VDPU");
            }
        }

        static void GenerateRegHeader(List<RegField> fields, string filename, string prefix)
        {
            using (var writer = File.CreateText($"{filename}.h"))
            {
                writer.WriteLine($"#define {prefix}_SWREG(nr)\t((nr) * 4)");
                writer.WriteLine();

                foreach (var group in fields.GroupBy(_ => _.Reg))
                {
                    writer.WriteLine($"/* SWREG{group.Key} */");

                    foreach (var field in group.Where(_ => _.IsBase))
                        WriteRegFieldLine(writer, $"#define {prefix}_REG_{field.Name}", $"{prefix}_SWREG({field.Reg})");

                    foreach (var field in group.Where(_ => _.IsMask))
                        WriteRegFieldLine(writer, $"#define {prefix}_REG_{field.Name}", field.ToField());

                    foreach (var field in group.Where(_ => !_.IsBase && !_.IsMask))
                        WriteRegFieldLine(writer, $"#define {prefix}_REG_{field.Name}(v)", field.ToFieldValue());

                    writer.WriteLine();
                }
            }
        }

        static void WriteRegFieldLine(StreamWriter writer, string field, string value)
        {
            var separator = "\t";
            if (field.Length < 8)
                separator += "\t";
            if (field.Length < 16)
                separator += "\t";
            if (field.Length < 24)
                separator += "\t";
            if (field.Length < 32)
                separator += "\t";
            writer.WriteLine($"{field}{separator}{value}");
        }

        static void GenerateRegUsage(List<RegField> fields, List<RegUsage> usages, string filename, string prefix)
        {
            using (var writer = File.CreateText($"{filename}.c"))
            {
                var dictionary = usages.ToDictionary(_ => _.Name);
                var list = fields.Where(f => usages.Any(u => u.Name == f.Name)).ToList();
                
                WriteRegFieldLine(writer, $"#define {prefix}_SWREG(nr)", "((nr) * 4)");
                writer.WriteLine();

                foreach (var field in fields.Where(_ => _.IsBase && (_.Name == "RLC_VLC_BASE" || _.Name == "DEC_OUT_BASE")))
                    WriteRegFieldLine(writer, $"#define {prefix}_REG_{field.Name}", $"{prefix}_SWREG({field.Reg})");
                foreach (var field in list.Where(_ => _.IsBase))
                    WriteRegFieldLine(writer, $"#define {prefix}_REG_{field.Name}", $"{prefix}_SWREG({field.Reg})");
                foreach (var field in fields.Where(_ => _.Name == "DEC_E"))
                    WriteRegFieldLine(writer, $"#define {prefix}_REG_{field.Name}(v)", field.ToFieldValue());
                writer.WriteLine();

                foreach (var group in list.Where(_ => !_.IsBase).GroupBy(_ => $"{prefix}_SWREG({_.Reg})"))
                {
                    foreach (var field in group.OrderByDescending(_ => _.Start))
                        WriteRegFieldLine(writer, $"#define {prefix}_REG_{field.Name}(v)", field.ToFieldValue());
                    writer.WriteLine();
                }
                
                writer.WriteLine("\tsrc_buf = hantro_get_src_buf(ctx);");
                writer.WriteLine("\tdst_buf = hantro_get_dst_buf(ctx);");
                writer.WriteLine();
                
                writer.WriteLine("\thantro_prepare_run(ctx);");
                writer.WriteLine();

                foreach (var group in list.Where(_ => !_.IsBase).GroupBy(_ => $"{prefix}_SWREG({_.Reg})"))
                {
                    var values = group.OrderByDescending(_ => _.Start).Select(_ => $"{prefix}_REG_{_.Name}({dictionary[_.Name].Value})").ToList();
                    writer.WriteLine($"\treg = {string.Join($" |{Environment.NewLine}\t      ", values)};");
                    writer.WriteLine($"\tvdpu_write_relaxed(vpu, reg, {group.Key});");
                    writer.WriteLine();
                }

                foreach (var field in list.Where(_ => _.IsBase && !_.IsRefer).OrderBy(_ => _.Name, StringComparer.OrdinalIgnoreCase.WithNaturalSort()))
                {
                    writer.WriteLine($"\tvdpu_write_relaxed(vpu, {dictionary[field.Name].Value}, {prefix}_REG_{field.Name});");
                    writer.WriteLine();
                }

                writer.WriteLine("\t/* Source bitstream buffer */");
                writer.WriteLine("\taddr = vb2_dma_contig_plane_dma_addr(&src_buf->vb2_buf, 0);");
                writer.WriteLine($"\tvdpu_write_relaxed(vpu, addr, {prefix}_REG_RLC_VLC_BASE);");
                writer.WriteLine();

                writer.WriteLine("\t/* Destination frame buffer */");
                writer.WriteLine("\taddr = vb2_dma_contig_plane_dma_addr(&dst_buf->vb2_buf, 0);");
                writer.WriteLine($"\tvdpu_write_relaxed(vpu, addr, {prefix}_REG_DEC_OUT_BASE);");
                writer.WriteLine();

                foreach (var field in list.Where(_ => _.IsRefer).OrderBy(_ => _.Name, StringComparer.OrdinalIgnoreCase.WithNaturalSort()))
                {
                    writer.WriteLine($"\tvdpu_write_relaxed(vpu, {dictionary[field.Name].Value}, {prefix}_REG_{field.Name});");
                }
                
                writer.WriteLine();
                writer.WriteLine("\thantro_finish_run(ctx);");
                writer.WriteLine();
                
                var trigger = fields.Single(_ => _.Name == "DEC_E");
                if (prefix == "G1")
                {
                    writer.WriteLine($"\treg = {prefix}_REG_DEC_E(1);");
                }
                else if (prefix == "VDPU")
                {
                    writer.WriteLine($"\treg = vdpu_read(vpu, {prefix}_SWREG({trigger.Reg})) | VDPU_REG_DEC_E(1);");
                }
                writer.WriteLine($"\tvdpu_write(vpu, reg, {prefix}_SWREG({trigger.Reg}));");
            }
        }

        static List<RegUsage> GetRegUsage(string filename, List<RegField> fields)
        {
            var dictionary = new Dictionary<string, RegUsage>();
            var list = new List<RegUsage>();
            var regex = new Regex(@"^\s*(\w+)\s*([-=:,;]\s*(.*?)\s*)?$");
            var lines = File.ReadAllLines(filename);
            foreach (var line in lines)
            {
                var match = regex.Match(line);
                if (match.Success)
                {
                    var usage = new RegUsage
                    {
                        Name = match.Groups[1].Value.ToUpperInvariant(),
                        Value = match.Groups[3]?.Value ?? string.Empty,
                    };
                    list.Add(usage);

                    if (!fields.Any(_ => _.Name == usage.Name))
                        Console.WriteLine($"ERROR: Field is not defined '{usage.Name}'");

                    if (dictionary.ContainsKey(usage.Name))
                        Console.WriteLine($"ERROR: Duplicate field name '{usage.Name}'");
                    else
                        dictionary.Add(usage.Name, usage);
                }
            }
            return list;
        }

        static List<RegField> GetRegFields(string filename)
        {
            var dictionary = new Dictionary<string, RegField>();
            var fields = new List<RegField>();
            var regex = new Regex(@"HWIF_(\w+)\s+.*?(\d+)\s*,\s*(\d+)\s*,\s*(\d+)\s*");
            var lines = File.ReadAllLines(filename);
            var index = 0;
            foreach (var line in lines)
            {
                var match = regex.Match(line);
                if (match.Success)
                {
                    var field = new RegField
                    {
                        Name = match.Groups[1].Value,
                        Reg = int.Parse(match.Groups[2].Value),
                        Bits = int.Parse(match.Groups[3].Value),
                        Start = int.Parse(match.Groups[4].Value),
                        Index = index++,
                    };
                    fields.Add(field);

                    if (dictionary.ContainsKey(field.Name))
                        Console.WriteLine($"ERROR: Duplicate field name '{field.Name}'");
                    else
                        dictionary.Add(field.Name, field);
                }
            }
            return fields;
        }
    }

    class RegUsage
    {
        public string Name { get; set; }
        public string Value { get; set; }
    }

    class RegField
    {
        public string Name { get; set; }
        public int Reg { get; set; }
        public int Bits { get; set; }
        public int Start { get; set; }
        public int End => Start + Bits - 1;
        public int Index { get; set; }

        public bool IsBase => Bits == 32 && Name.EndsWith("_BASE");
        public bool IsRefer => IsBase && Name.StartsWith("REFER");
        public bool IsMask => Bits == 32 && Name.EndsWith("_MASK");

        public string ToField()
        {
            if (Bits == 1)
                return $"BIT({Start})";
            return $"GENMASK({End}, {Start})";
        }

        public string ToFieldValue()
        {
            if (Bits == 1)
                return $"((v) ? {ToField()} : 0)";
            return $"(((v) << {Start}) & {ToField()})";
        }

        public string ToFieldPrep()
        {
            if (Bits == 1)
                return $"((v) ? {ToField()} : 0)";
            return $"FIELD_PREP({ToField()}, (v))";
        }
    }
}
