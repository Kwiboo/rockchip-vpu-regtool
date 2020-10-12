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
	struct reg_field cfg_dec_write_mvs_e;
	struct reg_field cfg_dec_filtering_dis;
	struct reg_field cfg_dec_fwd_interlace_e;
	struct reg_field cfg_dec_pic_topfield_e;
	struct reg_field cfg_dec_pic_inter_e;
	struct reg_field cfg_dec_pic_b_e;
	struct reg_field cfg_dec_pic_fieldmode_e;
	struct reg_field cfg_dec_pic_interlace_e;
	struct reg_field cfg_dec_rlc_mode_e;
	struct reg_field cfg_dec_mode;
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
	struct reg_field cfg_dec_stream_len;
	struct reg_field cfg_dec_init_qp;
	struct reg_field cfg_dec_refer0_base;
	struct reg_field cfg_dec_refer1_base;
	struct reg_field cfg_dec_refer2_base;
	struct reg_field cfg_dec_refer3_base;
	struct reg_field cfg_dec_mv_accuracy_bwd;
	struct reg_field cfg_dec_mv_accuracy_fwd;
	struct reg_field cfg_dec_fcode_bwd_ver;
	struct reg_field cfg_dec_fcode_bwd_hor;
	struct reg_field cfg_dec_fcode_fwd_ver;
	struct reg_field cfg_dec_fcode_fwd_hor;
	struct reg_field cfg_dec_alt_scan_flag_e;
	struct reg_field cfg_dec_qtable_base;
	struct reg_field cfg_dec_startmb_y;
	struct reg_field cfg_dec_startmb_x;
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
	.cfg_dec_write_mvs_e =		REG_FIELD(SWREG(3), 12, 12),
	.cfg_dec_filtering_dis =	REG_FIELD(SWREG(3), 14, 14),
	.cfg_dec_fwd_interlace_e =	REG_FIELD(SWREG(3), 18, 18),
	.cfg_dec_pic_topfield_e =	REG_FIELD(SWREG(3), 19, 19),
	.cfg_dec_pic_inter_e =		REG_FIELD(SWREG(3), 20, 20),
	.cfg_dec_pic_b_e =		REG_FIELD(SWREG(3), 21, 21),
	.cfg_dec_pic_fieldmode_e =	REG_FIELD(SWREG(3), 22, 22),
	.cfg_dec_pic_interlace_e =	REG_FIELD(SWREG(3), 23, 23),
	.cfg_dec_rlc_mode_e =		REG_FIELD(SWREG(3), 27, 27),
	.cfg_dec_mode =			REG_FIELD(SWREG(3), 28, 31),
	.cfg_dec_topfieldfirst_e =	REG_FIELD(SWREG(4), 5, 5),
	.cfg_dec_alt_scan_e =		REG_FIELD(SWREG(4), 6, 6),
	.cfg_dec_pic_mb_height_p =	REG_FIELD(SWREG(4), 11, 18),
	.cfg_dec_pic_mb_width =		REG_FIELD(SWREG(4), 23, 31),
	.cfg_dec_frame_pred_dct =	REG_FIELD(SWREG(5), 0, 0),
	.cfg_dec_intra_vlc_tab =	REG_FIELD(SWREG(5), 1, 1),
	.cfg_dec_intra_dc_prec =	REG_FIELD(SWREG(5), 2, 3),
	.cfg_dec_con_mv_e =		REG_FIELD(SWREG(5), 4, 4),
	.cfg_dec_qscale_type =		REG_FIELD(SWREG(5), 24, 24),
	.cfg_dec_strm_start_bit =	REG_FIELD(SWREG(5), 26, 31),
	.cfg_dec_stream_len =		REG_FIELD(SWREG(6), 0, 23),
	.cfg_dec_init_qp =		REG_FIELD(SWREG(6), 25, 30),
	.cfg_dec_refer0_base =		REG_FIELD(SWREG(14), 0, 31),
	.cfg_dec_refer1_base =		REG_FIELD(SWREG(15), 0, 31),
	.cfg_dec_refer2_base =		REG_FIELD(SWREG(16), 0, 31),
	.cfg_dec_refer3_base =		REG_FIELD(SWREG(17), 0, 31),
	.cfg_dec_mv_accuracy_bwd =	REG_FIELD(SWREG(18), 1, 1),
	.cfg_dec_mv_accuracy_fwd =	REG_FIELD(SWREG(18), 2, 2),
	.cfg_dec_fcode_bwd_ver =	REG_FIELD(SWREG(18), 3, 6),
	.cfg_dec_fcode_bwd_hor =	REG_FIELD(SWREG(18), 7, 10),
	.cfg_dec_fcode_fwd_ver =	REG_FIELD(SWREG(18), 11, 14),
	.cfg_dec_fcode_fwd_hor =	REG_FIELD(SWREG(18), 15, 18),
	.cfg_dec_alt_scan_flag_e =	REG_FIELD(SWREG(18), 19, 19),
	.cfg_dec_qtable_base =		REG_FIELD(SWREG(40), 0, 31),
	.cfg_dec_startmb_y =		REG_FIELD(SWREG(48), 15, 22),
	.cfg_dec_startmb_x =		REG_FIELD(SWREG(48), 23, 31),
	.cfg_dec_apf_threshold =	REG_FIELD(SWREG(55), 0, 13),
};
