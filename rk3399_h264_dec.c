struct hantro_field_dec {
	struct reg_field cfg_dec_latency;
	struct reg_field cfg_dec_pic_fixed_quant;
	struct reg_field cfg_dec_filtering_dis;
	struct reg_field cfg_dec_scmd_dis;
	struct reg_field cfg_dec_adv_pre_dis;
	struct reg_field cfg_dec_stream_len;
	struct reg_field cfg_dec_init_qp;
	struct reg_field cfg_dec_startmb_y;
	struct reg_field cfg_dec_startmb_x;
	struct reg_field cfg_dec_apf_threshold;
	struct reg_field cfg_dec_mode;
	struct reg_field cfg_dec_in_endian;
	struct reg_field cfg_dec_out_endian;
	struct reg_field cfg_dec_inswap32_e;
	struct reg_field cfg_dec_outswap32_e;
	struct reg_field cfg_dec_strswap32_e;
	struct reg_field cfg_dec_strendian_e;
	struct reg_field cfg_dec_axi_rd_id;
	struct reg_field cfg_dec_axi_wr_id;
	struct reg_field cfg_dec_max_burst;
	struct reg_field cfg_dec_data_disc_e;
	struct reg_field cfg_dec_clk_gate_e;
	struct reg_field cfg_dec_timeout_e;
	struct reg_field cfg_dec_picord_count_e;
	struct reg_field cfg_dec_seq_mbaff_e;
	struct reg_field cfg_dec_write_mvs_e;
	struct reg_field cfg_dec_pic_topfield_e;
	struct reg_field cfg_dec_pic_fieldmode_e;
	struct reg_field cfg_dec_pic_interlace_e;
	struct reg_field cfg_dec_rlc_mode_e;
	struct reg_field cfg_dec_ch_8pix_ileav_e;
	struct reg_field cfg_dec_start_code_e;
	struct reg_field cfg_dec_pred_bc_tap_0_2;
	struct reg_field cfg_dec_pred_bc_tap_0_1;
	struct reg_field cfg_dec_pred_bc_tap_0_0;
	struct reg_field cfg_dec_qtable_base;
	struct reg_field cfg_dec_dir_mv_base;
	struct reg_field cfg_dec_refbu_e;
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
	struct reg_field cfg_dec_binit_rlist_f0;
	struct reg_field cfg_dec_binit_rlist_f1;
	struct reg_field cfg_dec_binit_rlist_f2;
	struct reg_field cfg_dec_binit_rlist_f3;
	struct reg_field cfg_dec_binit_rlist_f4;
	struct reg_field cfg_dec_binit_rlist_f5;
	struct reg_field cfg_dec_binit_rlist_f6;
	struct reg_field cfg_dec_binit_rlist_f7;
	struct reg_field cfg_dec_binit_rlist_f8;
	struct reg_field cfg_dec_binit_rlist_f9;
	struct reg_field cfg_dec_binit_rlist_f10;
	struct reg_field cfg_dec_binit_rlist_f11;
	struct reg_field cfg_dec_binit_rlist_f12;
	struct reg_field cfg_dec_binit_rlist_f13;
	struct reg_field cfg_dec_binit_rlist_f14;
	struct reg_field cfg_dec_binit_rlist_f15;
	struct reg_field cfg_dec_binit_rlist_b0;
	struct reg_field cfg_dec_binit_rlist_b1;
	struct reg_field cfg_dec_binit_rlist_b2;
	struct reg_field cfg_dec_binit_rlist_b3;
	struct reg_field cfg_dec_binit_rlist_b4;
	struct reg_field cfg_dec_binit_rlist_b5;
	struct reg_field cfg_dec_binit_rlist_b6;
	struct reg_field cfg_dec_binit_rlist_b7;
	struct reg_field cfg_dec_binit_rlist_b8;
	struct reg_field cfg_dec_binit_rlist_b9;
	struct reg_field cfg_dec_binit_rlist_b10;
	struct reg_field cfg_dec_binit_rlist_b11;
	struct reg_field cfg_dec_binit_rlist_b12;
	struct reg_field cfg_dec_binit_rlist_b13;
	struct reg_field cfg_dec_binit_rlist_b14;
	struct reg_field cfg_dec_binit_rlist_b15;
	struct reg_field cfg_dec_pinit_rlist_f0;
	struct reg_field cfg_dec_pinit_rlist_f1;
	struct reg_field cfg_dec_pinit_rlist_f2;
	struct reg_field cfg_dec_pinit_rlist_f3;
	struct reg_field cfg_dec_refer_lterm_e;
	struct reg_field cfg_dec_refer_valid_e;
	struct reg_field cfg_dec_strm_start_bit;
	struct reg_field cfg_dec_pic_mb_width;
	struct reg_field cfg_dec_pic_mb_height_p;
	struct reg_field cfg_dec_ch_qp_offset;
	struct reg_field cfg_dec_ch_qp_offset2;
	struct reg_field cfg_dec_ref_frames;
	struct reg_field cfg_dec_weight_bipr_idc;
	struct reg_field cfg_dec_framenum;
	struct reg_field cfg_dec_framenum_len;
	struct reg_field cfg_dec_rdpic_cnt_pres;
	struct reg_field cfg_dec_filt_ctrl_pres;
	struct reg_field cfg_dec_idr_pic_id;
	struct reg_field cfg_dec_refpic_mk_len;
	struct reg_field cfg_dec_poc_length;
	struct reg_field cfg_dec_refidx0_active;
	struct reg_field cfg_dec_refidx1_active;
	struct reg_field cfg_dec_pps_id;
	struct reg_field cfg_dec_fieldpic_flag_e;
	struct reg_field cfg_dec_type1_quant_e;
	struct reg_field cfg_dec_8x8trans_flag_e;
	struct reg_field cfg_dec_const_intra_e;
	struct reg_field cfg_dec_weight_pred_e;
	struct reg_field cfg_dec_cabac_e;
	struct reg_field cfg_dec_blackwhite_e;
	struct reg_field cfg_dec_dir_8x8_infer_e;
	struct reg_field cfg_dec_idr_pic_e;
};

static const struct hantro_field_dec rk3399_field {
	.cfg_dec_latency =		REG_FIELD(SWREG(50), 1, 6),
	.cfg_dec_pic_fixed_quant =	REG_FIELD(SWREG(50), 7, 7),
	.cfg_dec_filtering_dis =	REG_FIELD(SWREG(50), 8, 8),
	.cfg_dec_scmd_dis =		REG_FIELD(SWREG(50), 10, 10),
	.cfg_dec_adv_pre_dis =		REG_FIELD(SWREG(50), 11, 11),
	.cfg_dec_stream_len =		REG_FIELD(SWREG(51), 0, 23),
	.cfg_dec_init_qp =		REG_FIELD(SWREG(51), 25, 30),
	.cfg_dec_startmb_y =		REG_FIELD(SWREG(52), 0, 7),
	.cfg_dec_startmb_x =		REG_FIELD(SWREG(52), 8, 16),
	.cfg_dec_apf_threshold =	REG_FIELD(SWREG(52), 17, 30),
	.cfg_dec_mode =			REG_FIELD(SWREG(53), 0, 3),
	.cfg_dec_in_endian =		REG_FIELD(SWREG(54), 0, 0),
	.cfg_dec_out_endian =		REG_FIELD(SWREG(54), 1, 1),
	.cfg_dec_inswap32_e =		REG_FIELD(SWREG(54), 2, 2),
	.cfg_dec_outswap32_e =		REG_FIELD(SWREG(54), 3, 3),
	.cfg_dec_strswap32_e =		REG_FIELD(SWREG(54), 4, 4),
	.cfg_dec_strendian_e =		REG_FIELD(SWREG(54), 5, 5),
	.cfg_dec_axi_rd_id =		REG_FIELD(SWREG(56), 0, 7),
	.cfg_dec_axi_wr_id =		REG_FIELD(SWREG(56), 8, 15),
	.cfg_dec_max_burst =		REG_FIELD(SWREG(56), 16, 20),
	.cfg_dec_data_disc_e =		REG_FIELD(SWREG(56), 22, 22),
	.cfg_dec_clk_gate_e =		REG_FIELD(SWREG(57), 4, 4),
	.cfg_dec_timeout_e =		REG_FIELD(SWREG(57), 5, 5),
	.cfg_dec_picord_count_e =	REG_FIELD(SWREG(57), 6, 6),
	.cfg_dec_seq_mbaff_e =		REG_FIELD(SWREG(57), 7, 7),
	.cfg_dec_write_mvs_e =		REG_FIELD(SWREG(57), 10, 10),
	.cfg_dec_pic_topfield_e =	REG_FIELD(SWREG(57), 13, 13),
	.cfg_dec_pic_fieldmode_e =	REG_FIELD(SWREG(57), 16, 16),
	.cfg_dec_pic_interlace_e =	REG_FIELD(SWREG(57), 17, 17),
	.cfg_dec_rlc_mode_e =		REG_FIELD(SWREG(57), 20, 20),
	.cfg_dec_ch_8pix_ileav_e =	REG_FIELD(SWREG(57), 21, 21),
	.cfg_dec_start_code_e =		REG_FIELD(SWREG(57), 22, 22),
	.cfg_dec_pred_bc_tap_0_2 =	REG_FIELD(SWREG(59), 2, 11),
	.cfg_dec_pred_bc_tap_0_1 =	REG_FIELD(SWREG(59), 12, 21),
	.cfg_dec_pred_bc_tap_0_0 =	REG_FIELD(SWREG(59), 22, 31),
	.cfg_dec_qtable_base =		REG_FIELD(SWREG(61), 0, 31),
	.cfg_dec_dir_mv_base =		REG_FIELD(SWREG(62), 0, 31),
	.cfg_dec_refbu_e =		REG_FIELD(SWREG(65), 31, 31),
	.cfg_dec_pinit_rlist_f4 =	REG_FIELD(SWREG(74), 0, 4),
	.cfg_dec_pinit_rlist_f5 =	REG_FIELD(SWREG(74), 5, 9),
	.cfg_dec_pinit_rlist_f6 =	REG_FIELD(SWREG(74), 10, 14),
	.cfg_dec_pinit_rlist_f7 =	REG_FIELD(SWREG(74), 15, 19),
	.cfg_dec_pinit_rlist_f8 =	REG_FIELD(SWREG(74), 20, 24),
	.cfg_dec_pinit_rlist_f9 =	REG_FIELD(SWREG(74), 25, 29),
	.cfg_dec_pinit_rlist_f10 =	REG_FIELD(SWREG(75), 0, 4),
	.cfg_dec_pinit_rlist_f11 =	REG_FIELD(SWREG(75), 5, 9),
	.cfg_dec_pinit_rlist_f12 =	REG_FIELD(SWREG(75), 10, 14),
	.cfg_dec_pinit_rlist_f13 =	REG_FIELD(SWREG(75), 15, 19),
	.cfg_dec_pinit_rlist_f14 =	REG_FIELD(SWREG(75), 20, 24),
	.cfg_dec_pinit_rlist_f15 =	REG_FIELD(SWREG(75), 25, 29),
	.cfg_dec_refer0_nbr =		REG_FIELD(SWREG(76), 0, 15),
	.cfg_dec_refer1_nbr =		REG_FIELD(SWREG(76), 16, 31),
	.cfg_dec_refer2_nbr =		REG_FIELD(SWREG(77), 0, 15),
	.cfg_dec_refer3_nbr =		REG_FIELD(SWREG(77), 16, 31),
	.cfg_dec_refer4_nbr =		REG_FIELD(SWREG(78), 0, 15),
	.cfg_dec_refer5_nbr =		REG_FIELD(SWREG(78), 16, 31),
	.cfg_dec_refer6_nbr =		REG_FIELD(SWREG(79), 0, 15),
	.cfg_dec_refer7_nbr =		REG_FIELD(SWREG(79), 16, 31),
	.cfg_dec_refer8_nbr =		REG_FIELD(SWREG(80), 0, 15),
	.cfg_dec_refer9_nbr =		REG_FIELD(SWREG(80), 16, 31),
	.cfg_dec_refer10_nbr =		REG_FIELD(SWREG(81), 0, 15),
	.cfg_dec_refer11_nbr =		REG_FIELD(SWREG(81), 16, 31),
	.cfg_dec_refer12_nbr =		REG_FIELD(SWREG(82), 0, 15),
	.cfg_dec_refer13_nbr =		REG_FIELD(SWREG(82), 16, 31),
	.cfg_dec_refer14_nbr =		REG_FIELD(SWREG(83), 0, 15),
	.cfg_dec_refer15_nbr =		REG_FIELD(SWREG(83), 16, 31),
	.cfg_dec_refer0_base =		REG_FIELD(SWREG(84), 0, 31),
	.cfg_dec_refer1_base =		REG_FIELD(SWREG(85), 0, 31),
	.cfg_dec_refer2_base =		REG_FIELD(SWREG(86), 0, 31),
	.cfg_dec_refer3_base =		REG_FIELD(SWREG(87), 0, 31),
	.cfg_dec_refer4_base =		REG_FIELD(SWREG(88), 0, 31),
	.cfg_dec_refer5_base =		REG_FIELD(SWREG(89), 0, 31),
	.cfg_dec_refer6_base =		REG_FIELD(SWREG(90), 0, 31),
	.cfg_dec_refer7_base =		REG_FIELD(SWREG(91), 0, 31),
	.cfg_dec_refer8_base =		REG_FIELD(SWREG(92), 0, 31),
	.cfg_dec_refer9_base =		REG_FIELD(SWREG(93), 0, 31),
	.cfg_dec_refer10_base =		REG_FIELD(SWREG(94), 0, 31),
	.cfg_dec_refer11_base =		REG_FIELD(SWREG(95), 0, 31),
	.cfg_dec_refer12_base =		REG_FIELD(SWREG(96), 0, 31),
	.cfg_dec_refer13_base =		REG_FIELD(SWREG(97), 0, 31),
	.cfg_dec_refer14_base =		REG_FIELD(SWREG(98), 0, 31),
	.cfg_dec_refer15_base =		REG_FIELD(SWREG(99), 0, 31),
	.cfg_dec_binit_rlist_f0 =	REG_FIELD(SWREG(100), 0, 4),
	.cfg_dec_binit_rlist_f1 =	REG_FIELD(SWREG(100), 5, 9),
	.cfg_dec_binit_rlist_f2 =	REG_FIELD(SWREG(100), 10, 14),
	.cfg_dec_binit_rlist_f3 =	REG_FIELD(SWREG(100), 15, 19),
	.cfg_dec_binit_rlist_f4 =	REG_FIELD(SWREG(100), 20, 24),
	.cfg_dec_binit_rlist_f5 =	REG_FIELD(SWREG(100), 25, 29),
	.cfg_dec_binit_rlist_f6 =	REG_FIELD(SWREG(101), 0, 4),
	.cfg_dec_binit_rlist_f7 =	REG_FIELD(SWREG(101), 5, 9),
	.cfg_dec_binit_rlist_f8 =	REG_FIELD(SWREG(101), 10, 14),
	.cfg_dec_binit_rlist_f9 =	REG_FIELD(SWREG(101), 15, 19),
	.cfg_dec_binit_rlist_f10 =	REG_FIELD(SWREG(101), 20, 24),
	.cfg_dec_binit_rlist_f11 =	REG_FIELD(SWREG(101), 25, 29),
	.cfg_dec_binit_rlist_f12 =	REG_FIELD(SWREG(102), 0, 4),
	.cfg_dec_binit_rlist_f13 =	REG_FIELD(SWREG(102), 5, 9),
	.cfg_dec_binit_rlist_f14 =	REG_FIELD(SWREG(102), 10, 14),
	.cfg_dec_binit_rlist_f15 =	REG_FIELD(SWREG(102), 15, 19),
	.cfg_dec_binit_rlist_b0 =	REG_FIELD(SWREG(103), 0, 4),
	.cfg_dec_binit_rlist_b1 =	REG_FIELD(SWREG(103), 5, 9),
	.cfg_dec_binit_rlist_b2 =	REG_FIELD(SWREG(103), 10, 14),
	.cfg_dec_binit_rlist_b3 =	REG_FIELD(SWREG(103), 15, 19),
	.cfg_dec_binit_rlist_b4 =	REG_FIELD(SWREG(103), 20, 24),
	.cfg_dec_binit_rlist_b5 =	REG_FIELD(SWREG(103), 25, 29),
	.cfg_dec_binit_rlist_b6 =	REG_FIELD(SWREG(104), 0, 4),
	.cfg_dec_binit_rlist_b7 =	REG_FIELD(SWREG(104), 5, 9),
	.cfg_dec_binit_rlist_b8 =	REG_FIELD(SWREG(104), 10, 14),
	.cfg_dec_binit_rlist_b9 =	REG_FIELD(SWREG(104), 15, 19),
	.cfg_dec_binit_rlist_b10 =	REG_FIELD(SWREG(104), 20, 24),
	.cfg_dec_binit_rlist_b11 =	REG_FIELD(SWREG(104), 25, 29),
	.cfg_dec_binit_rlist_b12 =	REG_FIELD(SWREG(105), 0, 4),
	.cfg_dec_binit_rlist_b13 =	REG_FIELD(SWREG(105), 5, 9),
	.cfg_dec_binit_rlist_b14 =	REG_FIELD(SWREG(105), 10, 14),
	.cfg_dec_binit_rlist_b15 =	REG_FIELD(SWREG(105), 15, 19),
	.cfg_dec_pinit_rlist_f0 =	REG_FIELD(SWREG(106), 0, 4),
	.cfg_dec_pinit_rlist_f1 =	REG_FIELD(SWREG(106), 5, 9),
	.cfg_dec_pinit_rlist_f2 =	REG_FIELD(SWREG(106), 10, 14),
	.cfg_dec_pinit_rlist_f3 =	REG_FIELD(SWREG(106), 15, 19),
	.cfg_dec_refer_lterm_e =	REG_FIELD(SWREG(107), 0, 31),
	.cfg_dec_refer_valid_e =	REG_FIELD(SWREG(108), 0, 31),
	.cfg_dec_strm_start_bit =	REG_FIELD(SWREG(109), 0, 5),
	.cfg_dec_pic_mb_width =		REG_FIELD(SWREG(110), 0, 8),
	.cfg_dec_pic_mb_height_p =	REG_FIELD(SWREG(110), 9, 16),
	.cfg_dec_ch_qp_offset =		REG_FIELD(SWREG(110), 17, 21),
	.cfg_dec_ch_qp_offset2 =	REG_FIELD(SWREG(110), 22, 26),
	.cfg_dec_ref_frames =		REG_FIELD(SWREG(111), 0, 4),
	.cfg_dec_weight_bipr_idc =	REG_FIELD(SWREG(111), 16, 17),
	.cfg_dec_framenum =		REG_FIELD(SWREG(112), 0, 15),
	.cfg_dec_framenum_len =		REG_FIELD(SWREG(112), 16, 20),
	.cfg_dec_rdpic_cnt_pres =	REG_FIELD(SWREG(112), 30, 30),
	.cfg_dec_filt_ctrl_pres =	REG_FIELD(SWREG(112), 31, 31),
	.cfg_dec_idr_pic_id =		REG_FIELD(SWREG(113), 0, 15),
	.cfg_dec_refpic_mk_len =	REG_FIELD(SWREG(113), 16, 26),
	.cfg_dec_poc_length =		REG_FIELD(SWREG(114), 0, 7),
	.cfg_dec_refidx0_active =	REG_FIELD(SWREG(114), 14, 18),
	.cfg_dec_refidx1_active =	REG_FIELD(SWREG(114), 19, 23),
	.cfg_dec_pps_id =		REG_FIELD(SWREG(114), 24, 31),
	.cfg_dec_fieldpic_flag_e =	REG_FIELD(SWREG(115), 0, 0),
	.cfg_dec_type1_quant_e =	REG_FIELD(SWREG(115), 1, 1),
	.cfg_dec_8x8trans_flag_e =	REG_FIELD(SWREG(115), 2, 2),
	.cfg_dec_const_intra_e =	REG_FIELD(SWREG(115), 3, 3),
	.cfg_dec_weight_pred_e =	REG_FIELD(SWREG(115), 4, 4),
	.cfg_dec_cabac_e =		REG_FIELD(SWREG(115), 5, 5),
	.cfg_dec_blackwhite_e =		REG_FIELD(SWREG(115), 6, 6),
	.cfg_dec_dir_8x8_infer_e =	REG_FIELD(SWREG(115), 7, 7),
	.cfg_dec_idr_pic_e =		REG_FIELD(SWREG(115), 8, 8),
};
