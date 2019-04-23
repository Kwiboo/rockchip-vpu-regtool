#define VDPU_SWREG(nr)			((nr) * 4)

#define VDPU_REG_RLC_VLC_BASE		VDPU_SWREG(12)
#define VDPU_REG_DEC_OUT_BASE		VDPU_SWREG(13)
#define VDPU_REG_REFER0_BASE		VDPU_SWREG(14)
#define VDPU_REG_REFER1_BASE		VDPU_SWREG(15)
#define VDPU_REG_REFER2_BASE		VDPU_SWREG(16)
#define VDPU_REG_REFER3_BASE		VDPU_SWREG(17)
#define VDPU_REG_REFER4_BASE		VDPU_SWREG(18)
#define VDPU_REG_REFER5_BASE		VDPU_SWREG(19)
#define VDPU_REG_REFER6_BASE		VDPU_SWREG(20)
#define VDPU_REG_REFER7_BASE		VDPU_SWREG(21)
#define VDPU_REG_REFER8_BASE		VDPU_SWREG(22)
#define VDPU_REG_REFER9_BASE		VDPU_SWREG(23)
#define VDPU_REG_REFER10_BASE		VDPU_SWREG(24)
#define VDPU_REG_REFER11_BASE		VDPU_SWREG(25)
#define VDPU_REG_REFER12_BASE		VDPU_SWREG(26)
#define VDPU_REG_REFER13_BASE		VDPU_SWREG(27)
#define VDPU_REG_REFER14_BASE		VDPU_SWREG(28)
#define VDPU_REG_REFER15_BASE		VDPU_SWREG(29)
#define VDPU_REG_DEC_E(v)		((v) ? BIT(0) : 0)

#define VDPU_REG_DEC_AXI_RD_ID(v)	(((v) << 24) & GENMASK(31, 24))
#define VDPU_REG_DEC_TIMEOUT_E(v)	((v) ? BIT(23) : 0)
#define VDPU_REG_DEC_STRSWAP32_E(v)	((v) ? BIT(22) : 0)
#define VDPU_REG_DEC_STRENDIAN_E(v)	((v) ? BIT(21) : 0)
#define VDPU_REG_DEC_INSWAP32_E(v)	((v) ? BIT(20) : 0)
#define VDPU_REG_DEC_OUTSWAP32_E(v)	((v) ? BIT(19) : 0)
#define VDPU_REG_DEC_DATA_DISC_E(v)	((v) ? BIT(18) : 0)
#define VDPU_REG_DEC_LATENCY(v)		(((v) << 11) & GENMASK(16, 11))
#define VDPU_REG_DEC_CLK_GATE_E(v)	((v) ? BIT(10) : 0)
#define VDPU_REG_DEC_IN_ENDIAN(v)	((v) ? BIT(9) : 0)
#define VDPU_REG_DEC_OUT_ENDIAN(v)	((v) ? BIT(8) : 0)
#define VDPU_REG_DEC_ADV_PRE_DIS(v)	((v) ? BIT(6) : 0)
#define VDPU_REG_DEC_SCMD_DIS(v)	((v) ? BIT(5) : 0)
#define VDPU_REG_DEC_MAX_BURST(v)	(((v) << 0) & GENMASK(4, 0))

#define VDPU_REG_DEC_MODE(v)		(((v) << 28) & GENMASK(31, 28))
#define VDPU_REG_RLC_MODE_E(v)		((v) ? BIT(27) : 0)
#define VDPU_REG_PIC_INTERLACE_E(v)	((v) ? BIT(23) : 0)
#define VDPU_REG_PIC_FIELDMODE_E(v)	((v) ? BIT(22) : 0)
#define VDPU_REG_PIC_TOPFIELD_E(v)	((v) ? BIT(19) : 0)
#define VDPU_REG_FILTERING_DIS(v)	((v) ? BIT(14) : 0)
#define VDPU_REG_WRITE_MVS_E(v)		((v) ? BIT(12) : 0)
#define VDPU_REG_SEQ_MBAFF_E(v)		((v) ? BIT(10) : 0)
#define VDPU_REG_PICORD_COUNT_E(v)	((v) ? BIT(9) : 0)
#define VDPU_REG_DEC_AXI_WR_ID(v)	(((v) << 0) & GENMASK(7, 0))

#define VDPU_REG_PIC_MB_WIDTH(v)	(((v) << 23) & GENMASK(31, 23))
#define VDPU_REG_PIC_MB_HEIGHT_P(v)	(((v) << 11) & GENMASK(18, 11))
#define VDPU_REG_REF_FRAMES(v)		(((v) << 0) & GENMASK(4, 0))

#define VDPU_REG_TYPE1_QUANT_E(v)	((v) ? BIT(24) : 0)
#define VDPU_REG_CH_QP_OFFSET(v)	(((v) << 19) & GENMASK(23, 19))
#define VDPU_REG_CH_QP_OFFSET2(v)	(((v) << 14) & GENMASK(18, 14))
#define VDPU_REG_FIELDPIC_FLAG_E(v)	((v) ? BIT(0) : 0)

#define VDPU_REG_INIT_QP(v)		(((v) << 25) & GENMASK(30, 25))
#define VDPU_REG_STREAM_LEN(v)		(((v) << 0) & GENMASK(23, 0))

#define VDPU_REG_CABAC_E(v)		((v) ? BIT(31) : 0)
#define VDPU_REG_BLACKWHITE_E(v)	((v) ? BIT(30) : 0)
#define VDPU_REG_DIR_8X8_INFER_E(v)	((v) ? BIT(29) : 0)
#define VDPU_REG_WEIGHT_PRED_E(v)	((v) ? BIT(28) : 0)
#define VDPU_REG_WEIGHT_BIPR_IDC(v)	(((v) << 26) & GENMASK(27, 26))
#define VDPU_REG_FRAMENUM_LEN(v)	(((v) << 16) & GENMASK(20, 16))
#define VDPU_REG_FRAMENUM(v)		(((v) << 0) & GENMASK(15, 0))

#define VDPU_REG_CONST_INTRA_E(v)	((v) ? BIT(31) : 0)
#define VDPU_REG_FILT_CTRL_PRES(v)	((v) ? BIT(30) : 0)
#define VDPU_REG_RDPIC_CNT_PRES(v)	((v) ? BIT(29) : 0)
#define VDPU_REG_8X8TRANS_FLAG_E(v)	((v) ? BIT(28) : 0)
#define VDPU_REG_REFPIC_MK_LEN(v)	(((v) << 17) & GENMASK(27, 17))
#define VDPU_REG_IDR_PIC_E(v)		((v) ? BIT(16) : 0)
#define VDPU_REG_IDR_PIC_ID(v)		(((v) << 0) & GENMASK(15, 0))

#define VDPU_REG_PPS_ID(v)		(((v) << 24) & GENMASK(31, 24))
#define VDPU_REG_REFIDX1_ACTIVE(v)	(((v) << 19) & GENMASK(23, 19))
#define VDPU_REG_REFIDX0_ACTIVE(v)	(((v) << 14) & GENMASK(18, 14))
#define VDPU_REG_POC_LENGTH(v)		(((v) << 0) & GENMASK(7, 0))

#define VDPU_REG_PRED_BC_TAP_0_0(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_0_1(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_BC_TAP_0_2(v)	(((v) << 2) & GENMASK(11, 2))

#define VDPU_REG_APF_THRESHOLD(v)	(((v) << 0) & GENMASK(13, 0))

	reg = VDPU_REG_DEC_AXI_RD_ID(0xff) |
	      VDPU_REG_DEC_TIMEOUT_E(1) |
	      VDPU_REG_DEC_STRSWAP32_E(1) |
	      VDPU_REG_DEC_STRENDIAN_E(1) |
	      VDPU_REG_DEC_INSWAP32_E(1) |
	      VDPU_REG_DEC_OUTSWAP32_E(1) |
	      VDPU_REG_DEC_DATA_DISC_E(0) |
	      VDPU_REG_DEC_LATENCY(0) |
	      VDPU_REG_DEC_CLK_GATE_E(1) |
	      VDPU_REG_DEC_IN_ENDIAN(0) |
	      VDPU_REG_DEC_OUT_ENDIAN(1) |
	      VDPU_REG_DEC_ADV_PRE_DIS(0) |
	      VDPU_REG_DEC_SCMD_DIS(0) |
	      VDPU_REG_DEC_MAX_BURST(16);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(2));

	reg = VDPU_REG_DEC_MODE(0) |
	      VDPU_REG_RLC_MODE_E(0) |
	      VDPU_REG_PIC_INTERLACE_E(!(sps->flags & V4L2_H264_SPS_FLAG_FRAME_MBS_ONLY) && (sps->flags & V4L2_H264_SPS_FLAG_MB_ADAPTIVE_FRAME_FIELD || slice->flags & V4L2_SLICE_FLAG_FIELD_PIC)) |
	      VDPU_REG_PIC_FIELDMODE_E(slice->flags & V4L2_SLICE_FLAG_FIELD_PIC) |
	      VDPU_REG_PIC_TOPFIELD_E(!(slice->flags & V4L2_SLICE_FLAG_BOTTOM_FIELD)) |
	      VDPU_REG_FILTERING_DIS(0) |
	      VDPU_REG_WRITE_MVS_E(sps->profile_idc > 66) |
	      VDPU_REG_SEQ_MBAFF_E(sps->flags & V4L2_H264_SPS_FLAG_MB_ADAPTIVE_FRAME_FIELD) |
	      VDPU_REG_PICORD_COUNT_E(sps->profile_idc > 66) |
	      VDPU_REG_DEC_AXI_WR_ID(0);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(3));

	reg = VDPU_REG_PIC_MB_WIDTH(sps->pic_width_in_mbs_minus1 + 1) |
	      VDPU_REG_PIC_MB_HEIGHT_P(sps->pic_height_in_map_units_minus1 + 1) |
	      VDPU_REG_REF_FRAMES(sps->max_num_ref_frames);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(4));

	reg = VDPU_REG_TYPE1_QUANT_E(1) |
	      VDPU_REG_CH_QP_OFFSET(pps->chroma_qp_index_offset) |
	      VDPU_REG_CH_QP_OFFSET2(pps->second_chroma_qp_index_offset) |
	      VDPU_REG_FIELDPIC_FLAG_E(slice->flags & V4L2_SLICE_FLAG_FIELD_PIC);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(5));

	reg = VDPU_REG_INIT_QP(pps->pic_init_qp_minus26 + 26) |
	      VDPU_REG_STREAM_LEN();
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(6));

	reg = VDPU_REG_CABAC_E(pps->flags & V4L2_H264_PPS_FLAG_ENTROPY_CODING_MODE) |
	      VDPU_REG_BLACKWHITE_E(sps->profile_idc >= 0 && sps->chroma_format_idc == 0) |
	      VDPU_REG_DIR_8X8_INFER_E(sps->flags & V4L2_H264_SPS_FLAG_DIRECT_8X8_INFERENCE) |
	      VDPU_REG_WEIGHT_PRED_E(pps->flags & V4L2_H264_PPS_FLAG_WEIGHTED_PRED) |
	      VDPU_REG_WEIGHT_BIPR_IDC(pps->weighted_bipred_idc) |
	      VDPU_REG_FRAMENUM_LEN(sps->log2_max_frame_num_minus4 + 4) |
	      VDPU_REG_FRAMENUM(slice->frame_num);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(7));

	reg = VDPU_REG_CONST_INTRA_E(pps->flags & V4L2_H264_PPS_FLAG_CONSTRAINED_INTRA_PRED) |
	      VDPU_REG_FILT_CTRL_PRES(pps->flags & V4L2_H264_PPS_FLAG_DEBLOCKING_FILTER_CONTROL_PRESENT) |
	      VDPU_REG_RDPIC_CNT_PRES(pps->flags & V4L2_H264_PPS_FLAG_REDUNDANT_PIC_CNT_PRESENT) |
	      VDPU_REG_8X8TRANS_FLAG_E(pps->flags & V4L2_H264_PPS_FLAG_TRANSFORM_8X8_MODE) |
	      VDPU_REG_REFPIC_MK_LEN(slice->dec_ref_pic_marking_bit_size) |
	      VDPU_REG_IDR_PIC_E(dec_param->idr_pic_flag) |
	      VDPU_REG_IDR_PIC_ID(slice->idr_pic_id);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(8));

	reg = VDPU_REG_PPS_ID(slice->pic_parameter_set_id) |
	      VDPU_REG_REFIDX1_ACTIVE(pps->num_ref_idx_l1_default_active_minus1 + 1) |
	      VDPU_REG_REFIDX0_ACTIVE(pps->num_ref_idx_l0_default_active_minus1 + 1) |
	      VDPU_REG_POC_LENGTH(slice->pic_order_cnt_bit_size);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(9));

	reg = VDPU_REG_PRED_BC_TAP_0_0(1) |
	      VDPU_REG_PRED_BC_TAP_0_1((u32)-5) |
	      VDPU_REG_PRED_BC_TAP_0_2(20);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(49));

	reg = VDPU_REG_APF_THRESHOLD(8);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(55));

	/* Source bitstream buffer */
	addr = vb2_dma_contig_plane_dma_addr(&src_buf->vb2_buf, 0);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_RLC_VLC_BASE);

	/* Destination frame buffer */
	addr = vb2_dma_contig_plane_dma_addr(&dst_buf->vb2_buf, 0);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_DEC_OUT_BASE);

	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER0_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER1_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER10_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER11_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER12_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER13_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER14_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER15_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER2_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER3_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER4_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER5_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER6_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER7_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER8_BASE);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_REFER9_BASE);
