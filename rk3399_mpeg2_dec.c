struct hantro_field_dec {
	struct reg_field cfg_dec_latency;
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
	struct reg_field cfg_dec_write_mvs_e;
	struct reg_field cfg_dec_fwd_interlace_e;
	struct reg_field cfg_dec_pic_topfield_e;
	struct reg_field cfg_dec_pic_inter_e;
	struct reg_field cfg_dec_pic_b_e;
	struct reg_field cfg_dec_pic_fieldmode_e;
	struct reg_field cfg_dec_pic_interlace_e;
	struct reg_field cfg_dec_rlc_mode_e;
	struct reg_field cfg_dec_qtable_base;
	struct reg_field cfg_dec_topfieldfirst_e;
	struct reg_field cfg_dec_alt_scan_e;
	struct reg_field cfg_dec_pic_mb_height_p;
	struct reg_field cfg_dec_pic_mb_width;
	struct reg_field cfg_dec_frame_pred_dct;
	struct reg_field cfg_dec_intra_vlc_tab;
	struct reg_field cfg_dec_intra_dc_prec;
	struct reg_field cfg_dec_con_mv_e;
	struct reg_field cfg_dec_qscale_type;
	struct reg_field cfg_dec_strm_start_bit;
	struct reg_field cfg_dec_refer0_base;
	struct reg_field cfg_dec_refer2_base;
	struct reg_field cfg_dec_refer3_base;
	struct reg_field cfg_dec_mv_accuracy_bwd;
	struct reg_field cfg_dec_mv_accuracy_fwd;
	struct reg_field cfg_dec_fcode_bwd_ver;
	struct reg_field cfg_dec_fcode_bwd_hor;
	struct reg_field cfg_dec_fcode_fwd_ver;
	struct reg_field cfg_dec_fcode_fwd_hor;
	struct reg_field cfg_dec_alt_scan_flag_e;
	struct reg_field cfg_dec_refer1_base;
};

static const struct hantro_field_dec rk3399_field {
	.cfg_dec_latency =		REG_FIELD(SWREG(50), 1, 6),
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
	.cfg_dec_write_mvs_e =		REG_FIELD(SWREG(57), 10, 10),
	.cfg_dec_fwd_interlace_e =	REG_FIELD(SWREG(57), 12, 12),
	.cfg_dec_pic_topfield_e =	REG_FIELD(SWREG(57), 13, 13),
	.cfg_dec_pic_inter_e =		REG_FIELD(SWREG(57), 14, 14),
	.cfg_dec_pic_b_e =		REG_FIELD(SWREG(57), 15, 15),
	.cfg_dec_pic_fieldmode_e =	REG_FIELD(SWREG(57), 16, 16),
	.cfg_dec_pic_interlace_e =	REG_FIELD(SWREG(57), 17, 17),
	.cfg_dec_rlc_mode_e =		REG_FIELD(SWREG(57), 20, 20),
	.cfg_dec_qtable_base =		REG_FIELD(SWREG(61), 0, 31),
	.cfg_dec_topfieldfirst_e =	REG_FIELD(SWREG(120), 5, 5),
	.cfg_dec_alt_scan_e =		REG_FIELD(SWREG(120), 6, 6),
	.cfg_dec_pic_mb_height_p =	REG_FIELD(SWREG(120), 11, 18),
	.cfg_dec_pic_mb_width =		REG_FIELD(SWREG(120), 23, 31),
	.cfg_dec_frame_pred_dct =	REG_FIELD(SWREG(122), 0, 0),
	.cfg_dec_intra_vlc_tab =	REG_FIELD(SWREG(122), 1, 1),
	.cfg_dec_intra_dc_prec =	REG_FIELD(SWREG(122), 2, 3),
	.cfg_dec_con_mv_e =		REG_FIELD(SWREG(122), 4, 4),
	.cfg_dec_qscale_type =		REG_FIELD(SWREG(122), 24, 24),
	.cfg_dec_strm_start_bit =	REG_FIELD(SWREG(122), 26, 31),
	.cfg_dec_refer0_base =		REG_FIELD(SWREG(131), 0, 31),
	.cfg_dec_refer2_base =		REG_FIELD(SWREG(134), 0, 31),
	.cfg_dec_refer3_base =		REG_FIELD(SWREG(135), 0, 31),
	.cfg_dec_mv_accuracy_bwd =	REG_FIELD(SWREG(136), 1, 1),
	.cfg_dec_mv_accuracy_fwd =	REG_FIELD(SWREG(136), 2, 2),
	.cfg_dec_fcode_bwd_ver =	REG_FIELD(SWREG(136), 3, 6),
	.cfg_dec_fcode_bwd_hor =	REG_FIELD(SWREG(136), 7, 10),
	.cfg_dec_fcode_fwd_ver =	REG_FIELD(SWREG(136), 11, 14),
	.cfg_dec_fcode_fwd_hor =	REG_FIELD(SWREG(136), 15, 18),
	.cfg_dec_alt_scan_flag_e =	REG_FIELD(SWREG(136), 19, 19),
	.cfg_dec_refer1_base =		REG_FIELD(SWREG(148), 0, 31),
};
