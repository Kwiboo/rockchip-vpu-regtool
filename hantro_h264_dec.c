struct hantro_field_dec {
	struct reg_field cfg_dec_max_burst;
	struct reg_field cfg_dec_scmd_dis;
	struct reg_field cfg_dec_adv_pre_dis;
	struct reg_field cfg_dec_out_endian;
	struct reg_field cfg_dec_in_endian;
	struct reg_field cfg_dec_clk_gate_e;
	struct reg_field cfg_dec_latency;
	struct reg_field cfg_dec_data_disc_e;
	struct reg_field cfg_dec_outswap32_e;
	struct reg_field cfg_dec_inswap32_e;
	struct reg_field cfg_dec_strendian_e;
	struct reg_field cfg_dec_strswap32_e;
	struct reg_field cfg_dec_timeout_e;
	struct reg_field cfg_dec_axi_rd_id;
	struct reg_field cfg_dec_axi_wr_id;
	struct reg_field cfg_dec_picord_count_e;
	struct reg_field cfg_dec_seq_mbaff_e;
	struct reg_field cfg_dec_write_mvs_e;
	struct reg_field cfg_dec_pic_fixed_quant;
	struct reg_field cfg_dec_filtering_dis;
	struct reg_field cfg_dec_pic_topfield_e;
	struct reg_field cfg_dec_pic_fieldmode_e;
	struct reg_field cfg_dec_pic_interlace_e;
	struct reg_field cfg_dec_rlc_mode_e;
	struct reg_field cfg_dec_mode;
	struct reg_field cfg_dec_ref_frames;
	struct reg_field cfg_dec_pic_mb_height_p;
	struct reg_field cfg_dec_pic_mb_width;
	struct reg_field cfg_dec_fieldpic_flag_e;
	struct reg_field cfg_dec_ch_qp_offset2;
	struct reg_field cfg_dec_ch_qp_offset;
	struct reg_field cfg_dec_type1_quant_e;
	struct reg_field cfg_dec_strm_start_bit;
	struct reg_field cfg_dec_stream_len;
	struct reg_field cfg_dec_ch_8pix_ileav_e;
	struct reg_field cfg_dec_init_qp;
	struct reg_field cfg_dec_start_code_e;
	struct reg_field cfg_dec_framenum;
	struct reg_field cfg_dec_framenum_len;
	struct reg_field cfg_dec_weight_bipr_idc;
	struct reg_field cfg_dec_weight_pred_e;
	struct reg_field cfg_dec_dir_8x8_infer_e;
	struct reg_field cfg_dec_blackwhite_e;
	struct reg_field cfg_dec_cabac_e;
	struct reg_field cfg_dec_idr_pic_id;
	struct reg_field cfg_dec_idr_pic_e;
	struct reg_field cfg_dec_refpic_mk_len;
	struct reg_field cfg_dec_8x8trans_flag_e;
	struct reg_field cfg_dec_rdpic_cnt_pres;
	struct reg_field cfg_dec_filt_ctrl_pres;
	struct reg_field cfg_dec_const_intra_e;
	struct reg_field cfg_dec_poc_length;
	struct reg_field cfg_dec_refidx0_active;
	struct reg_field cfg_dec_refidx1_active;
	struct reg_field cfg_dec_pps_id;
	struct reg_field cfg_dec_pinit_rlist_f4;
	struct reg_field cfg_dec_pinit_rlist_f5;
	struct reg_field cfg_dec_pinit_rlist_f6;
	struct reg_field cfg_dec_pinit_rlist_f7;
	struct reg_field cfg_dec_pinit_rlist_f8;
	struct reg_field cfg_dec_pinit_rlist_f9;
	struct reg_field cfg_dec_pinit_rlist_f10;
	struct reg_field cfg_dec_pinit_rlist_f11;
	struct reg_field cfg_dec_pinit_rlist_f12;
	struct reg_field cfg_dec_pinit_rlist_f13;
	struct reg_field cfg_dec_pinit_rlist_f14;
	struct reg_field cfg_dec_pinit_rlist_f15;
	struct reg_field cfg_dec_refer0_base;
	struct reg_field cfg_dec_refer1_base;
	struct reg_field cfg_dec_refer2_base;
	struct reg_field cfg_dec_refer3_base;
	struct reg_field cfg_dec_refer4_base;
	struct reg_field cfg_dec_refer5_base;
	struct reg_field cfg_dec_refer6_base;
	struct reg_field cfg_dec_refer7_base;
	struct reg_field cfg_dec_refer8_base;
	struct reg_field cfg_dec_refer9_base;
	struct reg_field cfg_dec_refer10_base;
	struct reg_field cfg_dec_refer11_base;
	struct reg_field cfg_dec_refer12_base;
	struct reg_field cfg_dec_refer13_base;
	struct reg_field cfg_dec_refer14_base;
	struct reg_field cfg_dec_refer15_base;
	struct reg_field cfg_dec_refer0_nbr;
	struct reg_field cfg_dec_refer1_nbr;
	struct reg_field cfg_dec_refer2_nbr;
	struct reg_field cfg_dec_refer3_nbr;
	struct reg_field cfg_dec_refer4_nbr;
	struct reg_field cfg_dec_refer5_nbr;
	struct reg_field cfg_dec_refer6_nbr;
	struct reg_field cfg_dec_refer7_nbr;
	struct reg_field cfg_dec_refer8_nbr;
	struct reg_field cfg_dec_refer9_nbr;
	struct reg_field cfg_dec_refer10_nbr;
	struct reg_field cfg_dec_refer11_nbr;
	struct reg_field cfg_dec_refer12_nbr;
	struct reg_field cfg_dec_refer13_nbr;
	struct reg_field cfg_dec_refer14_nbr;
	struct reg_field cfg_dec_refer15_nbr;
	struct reg_field cfg_dec_refer_lterm_e;
	struct reg_field cfg_dec_refer_valid_e;
	struct reg_field cfg_dec_qtable_base;
	struct reg_field cfg_dec_dir_mv_base;
	struct reg_field cfg_dec_binit_rlist_f0;
	struct reg_field cfg_dec_binit_rlist_b0;
	struct reg_field cfg_dec_binit_rlist_f1;
	struct reg_field cfg_dec_binit_rlist_b1;
	struct reg_field cfg_dec_binit_rlist_f2;
	struct reg_field cfg_dec_binit_rlist_b2;
	struct reg_field cfg_dec_binit_rlist_f3;
	struct reg_field cfg_dec_binit_rlist_b3;
	struct reg_field cfg_dec_binit_rlist_f4;
	struct reg_field cfg_dec_binit_rlist_b4;
	struct reg_field cfg_dec_binit_rlist_f5;
	struct reg_field cfg_dec_binit_rlist_b5;
	struct reg_field cfg_dec_binit_rlist_f6;
	struct reg_field cfg_dec_binit_rlist_b6;
	struct reg_field cfg_dec_binit_rlist_f7;
	struct reg_field cfg_dec_binit_rlist_b7;
	struct reg_field cfg_dec_binit_rlist_f8;
	struct reg_field cfg_dec_binit_rlist_b8;
	struct reg_field cfg_dec_binit_rlist_f9;
	struct reg_field cfg_dec_binit_rlist_b9;
	struct reg_field cfg_dec_binit_rlist_f10;
	struct reg_field cfg_dec_binit_rlist_b10;
	struct reg_field cfg_dec_binit_rlist_f11;
	struct reg_field cfg_dec_binit_rlist_b11;
	struct reg_field cfg_dec_binit_rlist_f12;
	struct reg_field cfg_dec_binit_rlist_b12;
	struct reg_field cfg_dec_binit_rlist_f13;
	struct reg_field cfg_dec_binit_rlist_b13;
	struct reg_field cfg_dec_binit_rlist_f14;
	struct reg_field cfg_dec_binit_rlist_b14;
	struct reg_field cfg_dec_binit_rlist_f15;
	struct reg_field cfg_dec_binit_rlist_b15;
	struct reg_field cfg_dec_pinit_rlist_f0;
	struct reg_field cfg_dec_pinit_rlist_f1;
	struct reg_field cfg_dec_pinit_rlist_f2;
	struct reg_field cfg_dec_pinit_rlist_f3;
	struct reg_field cfg_dec_startmb_y;
	struct reg_field cfg_dec_startmb_x;
	struct reg_field cfg_dec_pred_bc_tap_0_2;
	struct reg_field cfg_dec_pred_bc_tap_0_1;
	struct reg_field cfg_dec_pred_bc_tap_0_0;
	struct reg_field cfg_dec_refbu_e;
	struct reg_field cfg_dec_apf_threshold;
};

static const struct hantro_field_dec g1_field {
	.cfg_dec_max_burst =		REG_FIELD(SWREG(2), 0, 4),
	.cfg_dec_scmd_dis =		REG_FIELD(SWREG(2), 5, 5),
	.cfg_dec_adv_pre_dis =		REG_FIELD(SWREG(2), 6, 6),
	.cfg_dec_out_endian =		REG_FIELD(SWREG(2), 8, 8),
	.cfg_dec_in_endian =		REG_FIELD(SWREG(2), 9, 9),
	.cfg_dec_clk_gate_e =		REG_FIELD(SWREG(2), 10, 10),
	.cfg_dec_latency =		REG_FIELD(SWREG(2), 11, 16),
	.cfg_dec_data_disc_e =		REG_FIELD(SWREG(2), 18, 18),
	.cfg_dec_outswap32_e =		REG_FIELD(SWREG(2), 19, 19),
	.cfg_dec_inswap32_e =		REG_FIELD(SWREG(2), 20, 20),
	.cfg_dec_strendian_e =		REG_FIELD(SWREG(2), 21, 21),
	.cfg_dec_strswap32_e =		REG_FIELD(SWREG(2), 22, 22),
	.cfg_dec_timeout_e =		REG_FIELD(SWREG(2), 23, 23),
	.cfg_dec_axi_rd_id =		REG_FIELD(SWREG(2), 24, 31),
	.cfg_dec_axi_wr_id =		REG_FIELD(SWREG(3), 0, 7),
	.cfg_dec_picord_count_e =	REG_FIELD(SWREG(3), 9, 9),
	.cfg_dec_seq_mbaff_e =		REG_FIELD(SWREG(3), 10, 10),
	.cfg_dec_write_mvs_e =		REG_FIELD(SWREG(3), 12, 12),
	.cfg_dec_pic_fixed_quant =	REG_FIELD(SWREG(3), 13, 13),
	.cfg_dec_filtering_dis =	REG_FIELD(SWREG(3), 14, 14),
	.cfg_dec_pic_topfield_e =	REG_FIELD(SWREG(3), 19, 19),
	.cfg_dec_pic_fieldmode_e =	REG_FIELD(SWREG(3), 22, 22),
	.cfg_dec_pic_interlace_e =	REG_FIELD(SWREG(3), 23, 23),
	.cfg_dec_rlc_mode_e =		REG_FIELD(SWREG(3), 27, 27),
	.cfg_dec_mode =			REG_FIELD(SWREG(3), 28, 31),
	.cfg_dec_ref_frames =		REG_FIELD(SWREG(4), 0, 4),
	.cfg_dec_pic_mb_height_p =	REG_FIELD(SWREG(4), 11, 18),
	.cfg_dec_pic_mb_width =		REG_FIELD(SWREG(4), 23, 31),
	.cfg_dec_fieldpic_flag_e =	REG_FIELD(SWREG(5), 0, 0),
	.cfg_dec_ch_qp_offset2 =	REG_FIELD(SWREG(5), 14, 18),
	.cfg_dec_ch_qp_offset =		REG_FIELD(SWREG(5), 19, 23),
	.cfg_dec_type1_quant_e =	REG_FIELD(SWREG(5), 24, 24),
	.cfg_dec_strm_start_bit =	REG_FIELD(SWREG(5), 26, 31),
	.cfg_dec_stream_len =		REG_FIELD(SWREG(6), 0, 23),
	.cfg_dec_ch_8pix_ileav_e =	REG_FIELD(SWREG(6), 24, 24),
	.cfg_dec_init_qp =		REG_FIELD(SWREG(6), 25, 30),
	.cfg_dec_start_code_e =		REG_FIELD(SWREG(6), 31, 31),
	.cfg_dec_framenum =		REG_FIELD(SWREG(7), 0, 15),
	.cfg_dec_framenum_len =		REG_FIELD(SWREG(7), 16, 20),
	.cfg_dec_weight_bipr_idc =	REG_FIELD(SWREG(7), 26, 27),
	.cfg_dec_weight_pred_e =	REG_FIELD(SWREG(7), 28, 28),
	.cfg_dec_dir_8x8_infer_e =	REG_FIELD(SWREG(7), 29, 29),
	.cfg_dec_blackwhite_e =		REG_FIELD(SWREG(7), 30, 30),
	.cfg_dec_cabac_e =		REG_FIELD(SWREG(7), 31, 31),
	.cfg_dec_idr_pic_id =		REG_FIELD(SWREG(8), 0, 15),
	.cfg_dec_idr_pic_e =		REG_FIELD(SWREG(8), 16, 16),
	.cfg_dec_refpic_mk_len =	REG_FIELD(SWREG(8), 17, 27),
	.cfg_dec_8x8trans_flag_e =	REG_FIELD(SWREG(8), 28, 28),
	.cfg_dec_rdpic_cnt_pres =	REG_FIELD(SWREG(8), 29, 29),
	.cfg_dec_filt_ctrl_pres =	REG_FIELD(SWREG(8), 30, 30),
	.cfg_dec_const_intra_e =	REG_FIELD(SWREG(8), 31, 31),
	.cfg_dec_poc_length =		REG_FIELD(SWREG(9), 0, 7),
	.cfg_dec_refidx0_active =	REG_FIELD(SWREG(9), 14, 18),
	.cfg_dec_refidx1_active =	REG_FIELD(SWREG(9), 19, 23),
	.cfg_dec_pps_id =		REG_FIELD(SWREG(9), 24, 31),
	.cfg_dec_pinit_rlist_f4 =	REG_FIELD(SWREG(10), 0, 4),
	.cfg_dec_pinit_rlist_f5 =	REG_FIELD(SWREG(10), 5, 9),
	.cfg_dec_pinit_rlist_f6 =	REG_FIELD(SWREG(10), 10, 14),
	.cfg_dec_pinit_rlist_f7 =	REG_FIELD(SWREG(10), 15, 19),
	.cfg_dec_pinit_rlist_f8 =	REG_FIELD(SWREG(10), 20, 24),
	.cfg_dec_pinit_rlist_f9 =	REG_FIELD(SWREG(10), 25, 29),
	.cfg_dec_pinit_rlist_f10 =	REG_FIELD(SWREG(11), 0, 4),
	.cfg_dec_pinit_rlist_f11 =	REG_FIELD(SWREG(11), 5, 9),
	.cfg_dec_pinit_rlist_f12 =	REG_FIELD(SWREG(11), 10, 14),
	.cfg_dec_pinit_rlist_f13 =	REG_FIELD(SWREG(11), 15, 19),
	.cfg_dec_pinit_rlist_f14 =	REG_FIELD(SWREG(11), 20, 24),
	.cfg_dec_pinit_rlist_f15 =	REG_FIELD(SWREG(11), 25, 29),
	.cfg_dec_refer0_base =		REG_FIELD(SWREG(14), 0, 31),
	.cfg_dec_refer1_base =		REG_FIELD(SWREG(15), 0, 31),
	.cfg_dec_refer2_base =		REG_FIELD(SWREG(16), 0, 31),
	.cfg_dec_refer3_base =		REG_FIELD(SWREG(17), 0, 31),
	.cfg_dec_refer4_base =		REG_FIELD(SWREG(18), 0, 31),
	.cfg_dec_refer5_base =		REG_FIELD(SWREG(19), 0, 31),
	.cfg_dec_refer6_base =		REG_FIELD(SWREG(20), 0, 31),
	.cfg_dec_refer7_base =		REG_FIELD(SWREG(21), 0, 31),
	.cfg_dec_refer8_base =		REG_FIELD(SWREG(22), 0, 31),
	.cfg_dec_refer9_base =		REG_FIELD(SWREG(23), 0, 31),
	.cfg_dec_refer10_base =		REG_FIELD(SWREG(24), 0, 31),
	.cfg_dec_refer11_base =		REG_FIELD(SWREG(25), 0, 31),
	.cfg_dec_refer12_base =		REG_FIELD(SWREG(26), 0, 31),
	.cfg_dec_refer13_base =		REG_FIELD(SWREG(27), 0, 31),
	.cfg_dec_refer14_base =		REG_FIELD(SWREG(28), 0, 31),
	.cfg_dec_refer15_base =		REG_FIELD(SWREG(29), 0, 31),
	.cfg_dec_refer0_nbr =		REG_FIELD(SWREG(30), 0, 15),
	.cfg_dec_refer1_nbr =		REG_FIELD(SWREG(30), 16, 31),
	.cfg_dec_refer2_nbr =		REG_FIELD(SWREG(31), 0, 15),
	.cfg_dec_refer3_nbr =		REG_FIELD(SWREG(31), 16, 31),
	.cfg_dec_refer4_nbr =		REG_FIELD(SWREG(32), 0, 15),
	.cfg_dec_refer5_nbr =		REG_FIELD(SWREG(32), 16, 31),
	.cfg_dec_refer6_nbr =		REG_FIELD(SWREG(33), 0, 15),
	.cfg_dec_refer7_nbr =		REG_FIELD(SWREG(33), 16, 31),
	.cfg_dec_refer8_nbr =		REG_FIELD(SWREG(34), 0, 15),
	.cfg_dec_refer9_nbr =		REG_FIELD(SWREG(34), 16, 31),
	.cfg_dec_refer10_nbr =		REG_FIELD(SWREG(35), 0, 15),
	.cfg_dec_refer11_nbr =		REG_FIELD(SWREG(35), 16, 31),
	.cfg_dec_refer12_nbr =		REG_FIELD(SWREG(36), 0, 15),
	.cfg_dec_refer13_nbr =		REG_FIELD(SWREG(36), 16, 31),
	.cfg_dec_refer14_nbr =		REG_FIELD(SWREG(37), 0, 15),
	.cfg_dec_refer15_nbr =		REG_FIELD(SWREG(37), 16, 31),
	.cfg_dec_refer_lterm_e =	REG_FIELD(SWREG(38), 0, 31),
	.cfg_dec_refer_valid_e =	REG_FIELD(SWREG(39), 0, 31),
	.cfg_dec_qtable_base =		REG_FIELD(SWREG(40), 0, 31),
	.cfg_dec_dir_mv_base =		REG_FIELD(SWREG(41), 0, 31),
	.cfg_dec_binit_rlist_f0 =	REG_FIELD(SWREG(42), 0, 4),
	.cfg_dec_binit_rlist_b0 =	REG_FIELD(SWREG(42), 5, 9),
	.cfg_dec_binit_rlist_f1 =	REG_FIELD(SWREG(42), 10, 14),
	.cfg_dec_binit_rlist_b1 =	REG_FIELD(SWREG(42), 15, 19),
	.cfg_dec_binit_rlist_f2 =	REG_FIELD(SWREG(42), 20, 24),
	.cfg_dec_binit_rlist_b2 =	REG_FIELD(SWREG(42), 25, 29),
	.cfg_dec_binit_rlist_f3 =	REG_FIELD(SWREG(43), 0, 4),
	.cfg_dec_binit_rlist_b3 =	REG_FIELD(SWREG(43), 5, 9),
	.cfg_dec_binit_rlist_f4 =	REG_FIELD(SWREG(43), 10, 14),
	.cfg_dec_binit_rlist_b4 =	REG_FIELD(SWREG(43), 15, 19),
	.cfg_dec_binit_rlist_f5 =	REG_FIELD(SWREG(43), 20, 24),
	.cfg_dec_binit_rlist_b5 =	REG_FIELD(SWREG(43), 25, 29),
	.cfg_dec_binit_rlist_f6 =	REG_FIELD(SWREG(44), 0, 4),
	.cfg_dec_binit_rlist_b6 =	REG_FIELD(SWREG(44), 5, 9),
	.cfg_dec_binit_rlist_f7 =	REG_FIELD(SWREG(44), 10, 14),
	.cfg_dec_binit_rlist_b7 =	REG_FIELD(SWREG(44), 15, 19),
	.cfg_dec_binit_rlist_f8 =	REG_FIELD(SWREG(44), 20, 24),
	.cfg_dec_binit_rlist_b8 =	REG_FIELD(SWREG(44), 25, 29),
	.cfg_dec_binit_rlist_f9 =	REG_FIELD(SWREG(45), 0, 4),
	.cfg_dec_binit_rlist_b9 =	REG_FIELD(SWREG(45), 5, 9),
	.cfg_dec_binit_rlist_f10 =	REG_FIELD(SWREG(45), 10, 14),
	.cfg_dec_binit_rlist_b10 =	REG_FIELD(SWREG(45), 15, 19),
	.cfg_dec_binit_rlist_f11 =	REG_FIELD(SWREG(45), 20, 24),
	.cfg_dec_binit_rlist_b11 =	REG_FIELD(SWREG(45), 25, 29),
	.cfg_dec_binit_rlist_f12 =	REG_FIELD(SWREG(46), 0, 4),
	.cfg_dec_binit_rlist_b12 =	REG_FIELD(SWREG(46), 5, 9),
	.cfg_dec_binit_rlist_f13 =	REG_FIELD(SWREG(46), 10, 14),
	.cfg_dec_binit_rlist_b13 =	REG_FIELD(SWREG(46), 15, 19),
	.cfg_dec_binit_rlist_f14 =	REG_FIELD(SWREG(46), 20, 24),
	.cfg_dec_binit_rlist_b14 =	REG_FIELD(SWREG(46), 25, 29),
	.cfg_dec_binit_rlist_f15 =	REG_FIELD(SWREG(47), 0, 4),
	.cfg_dec_binit_rlist_b15 =	REG_FIELD(SWREG(47), 5, 9),
	.cfg_dec_pinit_rlist_f0 =	REG_FIELD(SWREG(47), 10, 14),
	.cfg_dec_pinit_rlist_f1 =	REG_FIELD(SWREG(47), 15, 19),
	.cfg_dec_pinit_rlist_f2 =	REG_FIELD(SWREG(47), 20, 24),
	.cfg_dec_pinit_rlist_f3 =	REG_FIELD(SWREG(47), 25, 29),
	.cfg_dec_startmb_y =		REG_FIELD(SWREG(48), 15, 22),
	.cfg_dec_startmb_x =		REG_FIELD(SWREG(48), 23, 31),
	.cfg_dec_pred_bc_tap_0_2 =	REG_FIELD(SWREG(49), 2, 11),
	.cfg_dec_pred_bc_tap_0_1 =	REG_FIELD(SWREG(49), 12, 21),
	.cfg_dec_pred_bc_tap_0_0 =	REG_FIELD(SWREG(49), 22, 31),
	.cfg_dec_refbu_e =		REG_FIELD(SWREG(51), 31, 31),
	.cfg_dec_apf_threshold =	REG_FIELD(SWREG(55), 0, 13),
};
