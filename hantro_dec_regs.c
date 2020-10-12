struct hantro_field_dec {
	struct reg_field cfg_dec_dec_e;
	struct reg_field cfg_dec_dec_irq_dis;
	struct reg_field cfg_dec_dec_irq;
	struct reg_field cfg_dec_dec_rdy_int;
	struct reg_field cfg_dec_dec_bus_int;
	struct reg_field cfg_dec_dec_buffer_int;
	struct reg_field cfg_dec_dec_aso_int;
	struct reg_field cfg_dec_dec_error_int;
	struct reg_field cfg_dec_dec_slice_int;
	struct reg_field cfg_dec_dec_timeout;
	struct reg_field cfg_dec_dec_pic_inf;
	struct reg_field cfg_dec_dec_max_burst;
	struct reg_field cfg_dec_dec_scmd_dis;
	struct reg_field cfg_dec_dec_adv_pre_dis;
	struct reg_field cfg_dec_priority_mode;
	struct reg_field cfg_dec_dec_out_endian;
	struct reg_field cfg_dec_dec_in_endian;
	struct reg_field cfg_dec_dec_clk_gate_e;
	struct reg_field cfg_dec_dec_latency;
	struct reg_field cfg_dec_dec_out_tiled_e;
	struct reg_field cfg_dec_dec_data_disc_e;
	struct reg_field cfg_dec_dec_outswap32_e;
	struct reg_field cfg_dec_dec_inswap32_e;
	struct reg_field cfg_dec_dec_strendian_e;
	struct reg_field cfg_dec_dec_strswap32_e;
	struct reg_field cfg_dec_dec_timeout_e;
	struct reg_field cfg_dec_dec_axi_rd_id;
	struct reg_field cfg_dec_dec_axi_wr_id;
	struct reg_field cfg_dec_dec_ahb_hlock_e;
	struct reg_field cfg_dec_picord_count_e;
	struct reg_field cfg_dec_seq_mbaff_e;
	struct reg_field cfg_dec_reftopfirst_e;
	struct reg_field cfg_dec_write_mvs_e;
	struct reg_field cfg_dec_mvc_e;
	struct reg_field cfg_dec_pic_fixed_quant;
	struct reg_field cfg_dec_filtering_dis;
	struct reg_field cfg_dec_dec_out_dis;
	struct reg_field cfg_dec_ref_topfield_e;
	struct reg_field cfg_dec_sorenson_e;
	struct reg_field cfg_dec_fwd_interlace_e;
	struct reg_field cfg_dec_pic_topfield_e;
	struct reg_field cfg_dec_pic_inter_e;
	struct reg_field cfg_dec_pic_b_e;
	struct reg_field cfg_dec_pic_fieldmode_e;
	struct reg_field cfg_dec_pic_interlace_e;
	struct reg_field cfg_dec_pjpeg_e;
	struct reg_field cfg_dec_divx3_e;
	struct reg_field cfg_dec_skip_mode;
	struct reg_field cfg_dec_rlc_mode_e;
	struct reg_field cfg_dec_dec_mode;
	struct reg_field cfg_dec_pic_refer_flag;
	struct reg_field cfg_dec_pic_mb_h_ext;
	struct reg_field cfg_dec_ref_frames;
	struct reg_field cfg_dec_pic_mb_w_ext;
	struct reg_field cfg_dec_topfieldfirst_e;
	struct reg_field cfg_dec_alt_scan_e;
	struct reg_field cfg_dec_mb_height_off;
	struct reg_field cfg_dec_pic_mb_height_p;
	struct reg_field cfg_dec_mb_width_off;
	struct reg_field cfg_dec_pic_mb_width;
	struct reg_field cfg_dec_fieldpic_flag_e;
	struct reg_field cfg_dec_frame_pred_dct;
	struct reg_field cfg_dec_cb_dc_vlctable3;
	struct reg_field cfg_dec_4mv_blk_pat_tab;
	struct reg_field cfg_dec_beta_offset;
	struct reg_field cfg_dec_boolean_range;
	struct reg_field cfg_dec_vop_time_incr;
	struct reg_field cfg_dec_intra_vlc_tab;
	struct reg_field cfg_dec_cr_dc_vlctable3;
	struct reg_field cfg_dec_cb_dc_vlctable;
	struct reg_field cfg_dec_2mv_blk_pat_tab;
	struct reg_field cfg_dec_intra_dc_prec;
	struct reg_field cfg_dec_cr_dc_vlctable;
	struct reg_field cfg_dec_con_mv_e;
	struct reg_field cfg_dec_cb_ac_vlctable;
	struct reg_field cfg_dec_cbptab;
	struct reg_field cfg_dec_cr_ac_vlctable;
	struct reg_field cfg_dec_alpha_offset;
	struct reg_field cfg_dec_jpeg_stream_all;
	struct reg_field cfg_dec_jpeg_filright_e;
	struct reg_field cfg_dec_mvtab;
	struct reg_field cfg_dec_jpeg_mode;
	struct reg_field cfg_dec_boolean_value;
	struct reg_field cfg_dec_mb_mode_tab;
	struct reg_field cfg_dec_jpeg_qtables;
	struct reg_field cfg_dec_transacfrm2;
	struct reg_field cfg_dec_ch_qp_offset2;
	struct reg_field cfg_dec_transacfrm;
	struct reg_field cfg_dec_multistream_e;
	struct reg_field cfg_dec_intradc_vlc_thr;
	struct reg_field cfg_dec_transdctab;
	struct reg_field cfg_dec_huffman_e;
	struct reg_field cfg_dec_strm1_start_bit;
	struct reg_field cfg_dec_ch_qp_offset;
	struct reg_field cfg_dec_fast_uvmc_e;
	struct reg_field cfg_dec_range_red_frm_e;
	struct reg_field cfg_dec_dqbi_level;
	struct reg_field cfg_dec_type1_quant_e;
	struct reg_field cfg_dec_dq_profile;
	struct reg_field cfg_dec_qscale_type;
	struct reg_field cfg_dec_sync_marker_e;
	struct reg_field cfg_dec_strm_start_bit;
	struct reg_field cfg_dec_stream_len;
	struct reg_field cfg_dec_ch_8pix_ileav_e;
	struct reg_field cfg_dec_init_qp;
	struct reg_field cfg_dec_start_code_e;
	struct reg_field cfg_dec_pjpeg_se;
	struct reg_field cfg_dec_framenum;
	struct reg_field cfg_dec_vc1_adv_e;
	struct reg_field cfg_dec_vp7_version;
	struct reg_field cfg_dec_dquant_e;
	struct reg_field cfg_dec_init_dc_match1;
	struct reg_field cfg_dec_2nd_byte_emul_e;
	struct reg_field cfg_dec_ttfrm;
	struct reg_field cfg_dec_pjpeg_ss;
	struct reg_field cfg_dec_init_dc_match0;
	struct reg_field cfg_dec_halfqp_e;
	struct reg_field cfg_dec_uniqp_e;
	struct reg_field cfg_dec_bilin_mc_e;
	struct reg_field cfg_dec_ch_mv_res;
	struct reg_field cfg_dec_pqindex;
	struct reg_field cfg_dec_pjpeg_al;
	struct reg_field cfg_dec_framenum_len;
	struct reg_field cfg_dec_ttmbf;
	struct reg_field cfg_dec_dq_edges;
	struct reg_field cfg_dec_pjpeg_ah;
	struct reg_field cfg_dec_dct2_start_bit;
	struct reg_field cfg_dec_pjpeg_hdiv8;
	struct reg_field cfg_dec_alt_pquant;
	struct reg_field cfg_dec_pjpeg_wdiv8;
	struct reg_field cfg_dec_pjpeg_fildown_e;
	struct reg_field cfg_dec_weight_bipr_idc;
	struct reg_field cfg_dec_dct1_start_bit;
	struct reg_field cfg_dec_weight_pred_e;
	struct reg_field cfg_dec_dir_8x8_infer_e;
	struct reg_field cfg_dec_bitplane2_e;
	struct reg_field cfg_dec_blackwhite_e;
	struct reg_field cfg_dec_bitplane1_e;
	struct reg_field cfg_dec_cabac_e;
	struct reg_field cfg_dec_bitplane0_e;
	struct reg_field cfg_dec_divx3_slice_size;
	struct reg_field cfg_dec_var_threshold;
	struct reg_field cfg_dec_rv_bwd_scale;
	struct reg_field cfg_dec_idr_pic_id;
	struct reg_field cfg_dec_pjpeg_rest_freq;
	struct reg_field cfg_dec_init_dc_comp1;
	struct reg_field cfg_dec_divx_idct_e;
	struct reg_field cfg_dec_mv_threshold;
	struct reg_field cfg_dec_variance_test_e;
	struct reg_field cfg_dec_loop_filt_limit;
	struct reg_field cfg_dec_ref_dist_bwd;
	struct reg_field cfg_dec_rv_fwd_scale;
	struct reg_field cfg_dec_idr_pic_e;
	struct reg_field cfg_dec_init_dc_comp0;
	struct reg_field cfg_dec_refpic_mk_len;
	struct reg_field cfg_dec_ref_dist_fwd;
	struct reg_field cfg_dec_mv_scalefactor;
	struct reg_field cfg_dec_8x8trans_flag_e;
	struct reg_field cfg_dec_rv_osv_quant;
	struct reg_field cfg_dec_rdpic_cnt_pres;
	struct reg_field cfg_dec_filt_ctrl_pres;
	struct reg_field cfg_dec_rv_profile;
	struct reg_field cfg_dec_const_intra_e;
	struct reg_field cfg_dec_poc_length;
	struct reg_field cfg_dec_pic_slice_am;
	struct reg_field cfg_dec_ishift0;
	struct reg_field cfg_dec_stream1_len;
	struct reg_field cfg_dec_mb_ctrl_base;
	struct reg_field cfg_dec_refidx0_active;
	struct reg_field cfg_dec_iscale0;
	struct reg_field cfg_dec_refidx1_active;
	struct reg_field cfg_dec_icomp0_e;
	struct reg_field cfg_dec_coeffs_part_am;
	struct reg_field cfg_dec_pps_id;
	struct reg_field cfg_dec_segment_e;
	struct reg_field cfg_dec_pinit_rlist_f4;
	struct reg_field cfg_dec_ishift1;
	struct reg_field cfg_dec_diff_mv_base;
	struct reg_field cfg_dec_segment_base;
	struct reg_field cfg_dec_segment_upd_e;
	struct reg_field cfg_dec_pinit_rlist_f5;
	struct reg_field cfg_dec_pinit_rlist_f6;
	struct reg_field cfg_dec_pinit_rlist_f7;
	struct reg_field cfg_dec_iscale1;
	struct reg_field cfg_dec_pinit_rlist_f8;
	struct reg_field cfg_dec_icomp1_e;
	struct reg_field cfg_dec_pinit_rlist_f9;
	struct reg_field cfg_dec_pinit_rlist_f10;
	struct reg_field cfg_dec_dct7_start_bit;
	struct reg_field cfg_dec_ishift2;
	struct reg_field cfg_dec_i4x4_or_dc_base;
	struct reg_field cfg_dec_pinit_rlist_f11;
	struct reg_field cfg_dec_dct6_start_bit;
	struct reg_field cfg_dec_pinit_rlist_f12;
	struct reg_field cfg_dec_dct5_start_bit;
	struct reg_field cfg_dec_pinit_rlist_f13;
	struct reg_field cfg_dec_iscale2;
	struct reg_field cfg_dec_dct4_start_bit;
	struct reg_field cfg_dec_pinit_rlist_f14;
	struct reg_field cfg_dec_icomp2_e;
	struct reg_field cfg_dec_dct3_start_bit;
	struct reg_field cfg_dec_pinit_rlist_f15;
	struct reg_field cfg_dec_rlc_vlc_base;
	struct reg_field cfg_dec_dec_out_base;
	struct reg_field cfg_dec_refer0_topc_e;
	struct reg_field cfg_dec_refer0_base;
	struct reg_field cfg_dec_jpg_ch_out_base;
	struct reg_field cfg_dec_refer0_field_e;
	struct reg_field cfg_dec_refer1_topc_e;
	struct reg_field cfg_dec_jpeg_slice_h;
	struct reg_field cfg_dec_refer1_base;
	struct reg_field cfg_dec_refer1_field_e;
	struct reg_field cfg_dec_refer2_topc_e;
	struct reg_field cfg_dec_ac1_code1_cnt;
	struct reg_field cfg_dec_refer2_base;
	struct reg_field cfg_dec_refer2_field_e;
	struct reg_field cfg_dec_ac1_code2_cnt;
	struct reg_field cfg_dec_ac1_code3_cnt;
	struct reg_field cfg_dec_ac1_code4_cnt;
	struct reg_field cfg_dec_ac1_code5_cnt;
	struct reg_field cfg_dec_ac1_code6_cnt;
	struct reg_field cfg_dec_refer3_topc_e;
	struct reg_field cfg_dec_ac1_code7_cnt;
	struct reg_field cfg_dec_refer3_base;
	struct reg_field cfg_dec_refer3_field_e;
	struct reg_field cfg_dec_ac1_code8_cnt;
	struct reg_field cfg_dec_ac1_code9_cnt;
	struct reg_field cfg_dec_ac1_code10_cnt;
	struct reg_field cfg_dec_refer4_topc_e;
	struct reg_field cfg_dec_prev_anc_type;
	struct reg_field cfg_dec_gref_sign_bias;
	struct reg_field cfg_dec_ac1_code11_cnt;
	struct reg_field cfg_dec_refer4_base;
	struct reg_field cfg_dec_refer4_field_e;
	struct reg_field cfg_dec_mv_accuracy_bwd;
	struct reg_field cfg_dec_mpeg4_vc1_rc;
	struct reg_field cfg_dec_mv_accuracy_fwd;
	struct reg_field cfg_dec_overlap_method;
	struct reg_field cfg_dec_fcode_bwd_ver;
	struct reg_field cfg_dec_overlap_e;
	struct reg_field cfg_dec_mv_range;
	struct reg_field cfg_dec_fcode_bwd_hor;
	struct reg_field cfg_dec_ac1_code12_cnt;
	struct reg_field cfg_dec_vc1_difmv_range;
	struct reg_field cfg_dec_range_red_ref_e;
	struct reg_field cfg_dec_fcode_fwd_ver;
	struct reg_field cfg_dec_pic_4mv_e;
	struct reg_field cfg_dec_fcode_fwd_hor;
	struct reg_field cfg_dec_ac1_code13_cnt;
	struct reg_field cfg_dec_pic_header_len;
	struct reg_field cfg_dec_alt_scan_flag_e;
	struct reg_field cfg_dec_ac1_code14_cnt;
	struct reg_field cfg_dec_refer5_topc_e;
	struct reg_field cfg_dec_aref_sign_bias;
	struct reg_field cfg_dec_scan_map_5;
	struct reg_field cfg_dec_ac1_code15_cnt;
	struct reg_field cfg_dec_ishift3;
	struct reg_field cfg_dec_trb_per_trd_d0;
	struct reg_field cfg_dec_refer5_base;
	struct reg_field cfg_dec_refer5_field_e;
	struct reg_field cfg_dec_scan_map_4;
	struct reg_field cfg_dec_ac1_code16_cnt;
	struct reg_field cfg_dec_scan_map_3;
	struct reg_field cfg_dec_ac2_code1_cnt;
	struct reg_field cfg_dec_iscale3;
	struct reg_field cfg_dec_scan_map_2;
	struct reg_field cfg_dec_ac2_code2_cnt;
	struct reg_field cfg_dec_ac2_code3_cnt;
	struct reg_field cfg_dec_icomp3_e;
	struct reg_field cfg_dec_scan_map_1;
	struct reg_field cfg_dec_ac2_code4_cnt;
	struct reg_field cfg_dec_refer6_topc_e;
	struct reg_field cfg_dec_ac2_code5_cnt;
	struct reg_field cfg_dec_scan_map_10;
	struct reg_field cfg_dec_ishift4;
	struct reg_field cfg_dec_trb_per_trd_dm1;
	struct reg_field cfg_dec_refer6_base;
	struct reg_field cfg_dec_refer6_field_e;
	struct reg_field cfg_dec_scan_map_9;
	struct reg_field cfg_dec_ac2_code6_cnt;
	struct reg_field cfg_dec_scan_map_8;
	struct reg_field cfg_dec_iscale4;
	struct reg_field cfg_dec_ac2_code7_cnt;
	struct reg_field cfg_dec_scan_map_7;
	struct reg_field cfg_dec_icomp4_e;
	struct reg_field cfg_dec_scan_map_6;
	struct reg_field cfg_dec_ac2_code8_cnt;
	struct reg_field cfg_dec_refer7_topc_e;
	struct reg_field cfg_dec_scan_map_15;
	struct reg_field cfg_dec_ac2_code9_cnt;
	struct reg_field cfg_dec_trb_per_trd_d1;
	struct reg_field cfg_dec_refer7_base;
	struct reg_field cfg_dec_refer7_field_e;
	struct reg_field cfg_dec_scan_map_14;
	struct reg_field cfg_dec_ac2_code10_cnt;
	struct reg_field cfg_dec_scan_map_13;
	struct reg_field cfg_dec_ac2_code11_cnt;
	struct reg_field cfg_dec_scan_map_12;
	struct reg_field cfg_dec_scan_map_11;
	struct reg_field cfg_dec_ac2_code12_cnt;
	struct reg_field cfg_dec_refer8_topc_e;
	struct reg_field cfg_dec_scan_map_20;
	struct reg_field cfg_dec_ac2_code13_cnt;
	struct reg_field cfg_dec_refer8_base;
	struct reg_field cfg_dec_dct_strm1_base;
	struct reg_field cfg_dec_refer8_field_e;
	struct reg_field cfg_dec_scan_map_19;
	struct reg_field cfg_dec_ac2_code14_cnt;
	struct reg_field cfg_dec_scan_map_18;
	struct reg_field cfg_dec_ac2_code15_cnt;
	struct reg_field cfg_dec_scan_map_17;
	struct reg_field cfg_dec_scan_map_16;
	struct reg_field cfg_dec_ac2_code16_cnt;
	struct reg_field cfg_dec_refer9_topc_e;
	struct reg_field cfg_dec_dc1_code1_cnt;
	struct reg_field cfg_dec_scan_map_25;
	struct reg_field cfg_dec_refer9_base;
	struct reg_field cfg_dec_dct_strm2_base;
	struct reg_field cfg_dec_refer9_field_e;
	struct reg_field cfg_dec_dc1_code2_cnt;
	struct reg_field cfg_dec_scan_map_24;
	struct reg_field cfg_dec_dc1_code3_cnt;
	struct reg_field cfg_dec_dc1_code4_cnt;
	struct reg_field cfg_dec_scan_map_23;
	struct reg_field cfg_dec_dc1_code5_cnt;
	struct reg_field cfg_dec_scan_map_22;
	struct reg_field cfg_dec_dc1_code6_cnt;
	struct reg_field cfg_dec_dc1_code7_cnt;
	struct reg_field cfg_dec_scan_map_21;
	struct reg_field cfg_dec_dc1_code8_cnt;
	struct reg_field cfg_dec_refer10_topc_e;
	struct reg_field cfg_dec_dc1_code9_cnt;
	struct reg_field cfg_dec_scan_map_30;
	struct reg_field cfg_dec_refer10_base;
	struct reg_field cfg_dec_dct_strm3_base;
	struct reg_field cfg_dec_refer10_field_e;
	struct reg_field cfg_dec_dc1_code10_cnt;
	struct reg_field cfg_dec_scan_map_29;
	struct reg_field cfg_dec_dc1_code11_cnt;
	struct reg_field cfg_dec_dc1_code12_cnt;
	struct reg_field cfg_dec_scan_map_28;
	struct reg_field cfg_dec_dc1_code13_cnt;
	struct reg_field cfg_dec_scan_map_27;
	struct reg_field cfg_dec_dc1_code14_cnt;
	struct reg_field cfg_dec_dc1_code15_cnt;
	struct reg_field cfg_dec_scan_map_26;
	struct reg_field cfg_dec_dc1_code16_cnt;
	struct reg_field cfg_dec_refer11_topc_e;
	struct reg_field cfg_dec_dc2_code1_cnt;
	struct reg_field cfg_dec_scan_map_35;
	struct reg_field cfg_dec_refer11_base;
	struct reg_field cfg_dec_dct_strm4_base;
	struct reg_field cfg_dec_refer11_field_e;
	struct reg_field cfg_dec_dc2_code2_cnt;
	struct reg_field cfg_dec_scan_map_34;
	struct reg_field cfg_dec_dc2_code3_cnt;
	struct reg_field cfg_dec_dc2_code4_cnt;
	struct reg_field cfg_dec_scan_map_33;
	struct reg_field cfg_dec_dc2_code5_cnt;
	struct reg_field cfg_dec_scan_map_32;
	struct reg_field cfg_dec_dc2_code6_cnt;
	struct reg_field cfg_dec_dc2_code7_cnt;
	struct reg_field cfg_dec_scan_map_31;
	struct reg_field cfg_dec_dc2_code8_cnt;
	struct reg_field cfg_dec_refer12_topc_e;
	struct reg_field cfg_dec_dc2_code9_cnt;
	struct reg_field cfg_dec_scan_map_40;
	struct reg_field cfg_dec_refer12_base;
	struct reg_field cfg_dec_dct_strm5_base;
	struct reg_field cfg_dec_refer12_field_e;
	struct reg_field cfg_dec_dc2_code10_cnt;
	struct reg_field cfg_dec_scan_map_39;
	struct reg_field cfg_dec_dc2_code11_cnt;
	struct reg_field cfg_dec_dc2_code12_cnt;
	struct reg_field cfg_dec_scan_map_38;
	struct reg_field cfg_dec_dc2_code13_cnt;
	struct reg_field cfg_dec_scan_map_37;
	struct reg_field cfg_dec_dc2_code14_cnt;
	struct reg_field cfg_dec_dc2_code15_cnt;
	struct reg_field cfg_dec_scan_map_36;
	struct reg_field cfg_dec_dc2_code16_cnt;
	struct reg_field cfg_dec_refer13_topc_e;
	struct reg_field cfg_dec_dc3_code1_cnt;
	struct reg_field cfg_dec_refer13_base;
	struct reg_field cfg_dec_bitpl_ctrl_base;
	struct reg_field cfg_dec_refer13_field_e;
	struct reg_field cfg_dec_dc3_code2_cnt;
	struct reg_field cfg_dec_dc3_code3_cnt;
	struct reg_field cfg_dec_dc3_code4_cnt;
	struct reg_field cfg_dec_dc3_code5_cnt;
	struct reg_field cfg_dec_dc3_code6_cnt;
	struct reg_field cfg_dec_dc3_code7_cnt;
	struct reg_field cfg_dec_dc3_code8_cnt;
	struct reg_field cfg_dec_refer14_topc_e;
	struct reg_field cfg_dec_dc3_code9_cnt;
	struct reg_field cfg_dec_scan_map_45;
	struct reg_field cfg_dec_ref_invd_cur_0;
	struct reg_field cfg_dec_refer14_base;
	struct reg_field cfg_dec_dct_strm6_base;
	struct reg_field cfg_dec_refer14_field_e;
	struct reg_field cfg_dec_dc3_code10_cnt;
	struct reg_field cfg_dec_scan_map_44;
	struct reg_field cfg_dec_dc3_code11_cnt;
	struct reg_field cfg_dec_dc3_code12_cnt;
	struct reg_field cfg_dec_scan_map_43;
	struct reg_field cfg_dec_dc3_code13_cnt;
	struct reg_field cfg_dec_ref_invd_cur_1;
	struct reg_field cfg_dec_scan_map_42;
	struct reg_field cfg_dec_dc3_code14_cnt;
	struct reg_field cfg_dec_dc3_code15_cnt;
	struct reg_field cfg_dec_scan_map_41;
	struct reg_field cfg_dec_dc3_code16_cnt;
	struct reg_field cfg_dec_refer15_topc_e;
	struct reg_field cfg_dec_scan_map_50;
	struct reg_field cfg_dec_ref_invd_cur_2;
	struct reg_field cfg_dec_refer15_base;
	struct reg_field cfg_dec_dct_strm7_base;
	struct reg_field cfg_dec_refer15_field_e;
	struct reg_field cfg_dec_scan_map_49;
	struct reg_field cfg_dec_scan_map_48;
	struct reg_field cfg_dec_ref_invd_cur_3;
	struct reg_field cfg_dec_scan_map_47;
	struct reg_field cfg_dec_scan_map_46;
	struct reg_field cfg_dec_filt_mb_adj_3;
	struct reg_field cfg_dec_refer0_nbr;
	struct reg_field cfg_dec_ref_dist_cur_0;
	struct reg_field cfg_dec_filt_mb_adj_2;
	struct reg_field cfg_dec_filt_mb_adj_1;
	struct reg_field cfg_dec_refer1_nbr;
	struct reg_field cfg_dec_ref_dist_cur_1;
	struct reg_field cfg_dec_filt_mb_adj_0;
	struct reg_field cfg_dec_filt_sharpness;
	struct reg_field cfg_dec_filt_type;
	struct reg_field cfg_dec_scan_map_55;
	struct reg_field cfg_dec_filt_ref_adj_3;
	struct reg_field cfg_dec_refer2_nbr;
	struct reg_field cfg_dec_ref_dist_cur_2;
	struct reg_field cfg_dec_scan_map_54;
	struct reg_field cfg_dec_filt_ref_adj_2;
	struct reg_field cfg_dec_scan_map_53;
	struct reg_field cfg_dec_filt_ref_adj_1;
	struct reg_field cfg_dec_refer3_nbr;
	struct reg_field cfg_dec_ref_dist_cur_3;
	struct reg_field cfg_dec_scan_map_52;
	struct reg_field cfg_dec_filt_ref_adj_0;
	struct reg_field cfg_dec_scan_map_51;
	struct reg_field cfg_dec_scan_map_60;
	struct reg_field cfg_dec_filt_level_3;
	struct reg_field cfg_dec_refer4_nbr;
	struct reg_field cfg_dec_ref_invd_col_0;
	struct reg_field cfg_dec_scan_map_59;
	struct reg_field cfg_dec_filt_level_2;
	struct reg_field cfg_dec_scan_map_58;
	struct reg_field cfg_dec_filt_level_1;
	struct reg_field cfg_dec_refer5_nbr;
	struct reg_field cfg_dec_ref_invd_col_1;
	struct reg_field cfg_dec_scan_map_57;
	struct reg_field cfg_dec_filt_level_0;
	struct reg_field cfg_dec_scan_map_56;
	struct reg_field cfg_dec_quant_1;
	struct reg_field cfg_dec_refer6_nbr;
	struct reg_field cfg_dec_ref_invd_col_2;
	struct reg_field cfg_dec_quant_0;
	struct reg_field cfg_dec_scan_map_63;
	struct reg_field cfg_dec_refer7_nbr;
	struct reg_field cfg_dec_ref_invd_col_3;
	struct reg_field cfg_dec_scan_map_62;
	struct reg_field cfg_dec_quant_delta_1;
	struct reg_field cfg_dec_scan_map_61;
	struct reg_field cfg_dec_quant_delta_0;
	struct reg_field cfg_dec_refer8_nbr;
	struct reg_field cfg_dec_pred_bc_tap_1_1;
	struct reg_field cfg_dec_pred_bc_tap_1_0;
	struct reg_field cfg_dec_refer9_nbr;
	struct reg_field cfg_dec_pred_bc_tap_0_3;
	struct reg_field cfg_dec_refer10_nbr;
	struct reg_field cfg_dec_pred_bc_tap_2_0;
	struct reg_field cfg_dec_pred_bc_tap_1_3;
	struct reg_field cfg_dec_refer11_nbr;
	struct reg_field cfg_dec_pred_bc_tap_1_2;
	struct reg_field cfg_dec_refer12_nbr;
	struct reg_field cfg_dec_pred_bc_tap_2_3;
	struct reg_field cfg_dec_pred_bc_tap_2_2;
	struct reg_field cfg_dec_refer13_nbr;
	struct reg_field cfg_dec_pred_bc_tap_2_1;
	struct reg_field cfg_dec_refer14_nbr;
	struct reg_field cfg_dec_pred_bc_tap_3_2;
	struct reg_field cfg_dec_pred_bc_tap_3_1;
	struct reg_field cfg_dec_refer15_nbr;
	struct reg_field cfg_dec_pred_bc_tap_3_0;
	struct reg_field cfg_dec_refer_lterm_e;
	struct reg_field cfg_dec_pred_bc_tap_4_1;
	struct reg_field cfg_dec_pred_bc_tap_4_0;
	struct reg_field cfg_dec_pred_bc_tap_3_3;
	struct reg_field cfg_dec_refer_valid_e;
	struct reg_field cfg_dec_pred_bc_tap_5_0;
	struct reg_field cfg_dec_pred_bc_tap_4_3;
	struct reg_field cfg_dec_pred_bc_tap_4_2;
	struct reg_field cfg_dec_qtable_base;
	struct reg_field cfg_dec_dir_mv_base;
	struct reg_field cfg_dec_binit_rlist_f0;
	struct reg_field cfg_dec_pjpeg_dccb_base;
	struct reg_field cfg_dec_pred_bc_tap_5_3;
	struct reg_field cfg_dec_binit_rlist_b0;
	struct reg_field cfg_dec_binit_rlist_f1;
	struct reg_field cfg_dec_pred_bc_tap_5_2;
	struct reg_field cfg_dec_binit_rlist_b1;
	struct reg_field cfg_dec_binit_rlist_f2;
	struct reg_field cfg_dec_pred_bc_tap_5_1;
	struct reg_field cfg_dec_binit_rlist_b2;
	struct reg_field cfg_dec_binit_rlist_f3;
	struct reg_field cfg_dec_pjpeg_dccr_base;
	struct reg_field cfg_dec_pred_bc_tap_6_2;
	struct reg_field cfg_dec_binit_rlist_b3;
	struct reg_field cfg_dec_binit_rlist_f4;
	struct reg_field cfg_dec_pred_bc_tap_6_1;
	struct reg_field cfg_dec_binit_rlist_b4;
	struct reg_field cfg_dec_binit_rlist_f5;
	struct reg_field cfg_dec_pred_bc_tap_6_0;
	struct reg_field cfg_dec_binit_rlist_b5;
	struct reg_field cfg_dec_binit_rlist_f6;
	struct reg_field cfg_dec_pred_bc_tap_7_1;
	struct reg_field cfg_dec_binit_rlist_b6;
	struct reg_field cfg_dec_binit_rlist_f7;
	struct reg_field cfg_dec_pred_bc_tap_7_0;
	struct reg_field cfg_dec_binit_rlist_b7;
	struct reg_field cfg_dec_binit_rlist_f8;
	struct reg_field cfg_dec_pred_bc_tap_6_3;
	struct reg_field cfg_dec_binit_rlist_b8;
	struct reg_field cfg_dec_pred_tap_6_4;
	struct reg_field cfg_dec_binit_rlist_f9;
	struct reg_field cfg_dec_pred_tap_6_m1;
	struct reg_field cfg_dec_pred_tap_4_4;
	struct reg_field cfg_dec_binit_rlist_b9;
	struct reg_field cfg_dec_pred_tap_4_m1;
	struct reg_field cfg_dec_pred_tap_2_4;
	struct reg_field cfg_dec_pred_tap_2_m1;
	struct reg_field cfg_dec_binit_rlist_f10;
	struct reg_field cfg_dec_pred_bc_tap_7_3;
	struct reg_field cfg_dec_binit_rlist_b10;
	struct reg_field cfg_dec_binit_rlist_f11;
	struct reg_field cfg_dec_pred_bc_tap_7_2;
	struct reg_field cfg_dec_binit_rlist_b11;
	struct reg_field cfg_dec_binit_rlist_f12;
	struct reg_field cfg_dec_quant_3;
	struct reg_field cfg_dec_binit_rlist_b12;
	struct reg_field cfg_dec_binit_rlist_f13;
	struct reg_field cfg_dec_quant_2;
	struct reg_field cfg_dec_binit_rlist_b13;
	struct reg_field cfg_dec_binit_rlist_f14;
	struct reg_field cfg_dec_quant_delta_3;
	struct reg_field cfg_dec_binit_rlist_b14;
	struct reg_field cfg_dec_quant_delta_2;
	struct reg_field cfg_dec_binit_rlist_f15;
	struct reg_field cfg_dec_quant_5;
	struct reg_field cfg_dec_binit_rlist_b15;
	struct reg_field cfg_dec_pinit_rlist_f0;
	struct reg_field cfg_dec_quant_4;
	struct reg_field cfg_dec_pinit_rlist_f1;
	struct reg_field cfg_dec_pinit_rlist_f2;
	struct reg_field cfg_dec_pinit_rlist_f3;
	struct reg_field cfg_dec_quant_delta_4;
	struct reg_field cfg_dec_startmb_y;
	struct reg_field cfg_dec_startmb_x;
	struct reg_field cfg_dec_pred_bc_tap_0_2;
	struct reg_field cfg_dec_pred_bc_tap_0_1;
	struct reg_field cfg_dec_pred_bc_tap_0_0;
	struct reg_field cfg_dec_refbu_y_offset;
	struct reg_field cfg_dec_refbu_fparmod_e;
	struct reg_field cfg_dec_refbu_eval_e;
	struct reg_field cfg_dec_refbu_picid;
	struct reg_field cfg_dec_refbu_thr;
	struct reg_field cfg_dec_refbu_e;
	struct reg_field cfg_dec_refbu_intra_sum;
	struct reg_field cfg_dec_refbu_hit_sum;
	struct reg_field cfg_dec_refbu_y_mv_sum;
	struct reg_field cfg_dec_apf_threshold;
	struct reg_field cfg_dec_refbu2_picid;
	struct reg_field cfg_dec_refbu2_thr;
	struct reg_field cfg_dec_refbu2_buf_e;
	struct reg_field cfg_dec_refbu_bot_sum;
	struct reg_field cfg_dec_refbu_top_sum;
	struct reg_field cfg_dec_stream_len_ext;
	struct reg_field cfg_dec_inter_dblspeed;
	struct reg_field cfg_dec_intra_dblspeed;
	struct reg_field cfg_dec_intra_dbl3t;
	struct reg_field cfg_dec_paral_bus_e;
	struct reg_field cfg_dec_axiwr_sel;
	struct reg_field cfg_dec_pref_sigchan;
	struct reg_field cfg_dec_cache_enable;
	struct reg_field cfg_dec_dec_ch8pix_base;
	struct reg_field cfg_dec_pp_e;
	struct reg_field cfg_dec_pp_pipeline_e;
	struct reg_field cfg_dec_pp_irq_dis;
	struct reg_field cfg_dec_pp_irq;
	struct reg_field cfg_dec_pp_rdy_int;
	struct reg_field cfg_dec_pp_bus_int;
	struct reg_field cfg_dec_pp_max_burst;
	struct reg_field cfg_dec_pp_out_swap32_e;
	struct reg_field cfg_dec_pp_out_endian;
	struct reg_field cfg_dec_pp_in_endian;
	struct reg_field cfg_dec_pp_clk_gate_e;
	struct reg_field cfg_dec_pp_data_disc_e;
	struct reg_field cfg_dec_pp_in_swap32_e;
	struct reg_field cfg_dec_pp_in_a1_endian;
	struct reg_field cfg_dec_pp_in_a1_swap32;
	struct reg_field cfg_dec_pp_in_a2_endsel;
	struct reg_field cfg_dec_pp_scmd_dis;
	struct reg_field cfg_dec_pp_ahb_hlock_e;
	struct reg_field cfg_dec_pp_axi_wr_id;
	struct reg_field cfg_dec_pp_axi_rd_id;
	struct reg_field cfg_dec_deint_edge_det;
	struct reg_field cfg_dec_deint_blend_e;
	struct reg_field cfg_dec_deint_threshold;
	struct reg_field cfg_dec_deint_e;
	struct reg_field cfg_dec_pp_in_lu_base;
	struct reg_field cfg_dec_pp_in_cb_base;
	struct reg_field cfg_dec_pp_in_cr_base;
	struct reg_field cfg_dec_pp_out_lu_base;
	struct reg_field cfg_dec_pp_out_ch_base;
	struct reg_field cfg_dec_contrast_off1;
	struct reg_field cfg_dec_contrast_off2;
	struct reg_field cfg_dec_contrast_thr1;
	struct reg_field cfg_dec_contrast_thr2;
	struct reg_field cfg_dec_color_coeffa1;
	struct reg_field cfg_dec_color_coeffa2;
	struct reg_field cfg_dec_pp_out_cr_first;
	struct reg_field cfg_dec_pp_out_start_ch;
	struct reg_field cfg_dec_pp_in_cr_first;
	struct reg_field cfg_dec_pp_in_start_ch;
	struct reg_field cfg_dec_color_coeffb;
	struct reg_field cfg_dec_color_coeffc;
	struct reg_field cfg_dec_color_coeffd;
	struct reg_field cfg_dec_color_coeffe;
	struct reg_field cfg_dec_color_coefff;
	struct reg_field cfg_dec_rotation_mode;
	struct reg_field cfg_dec_crop_startx;
	struct reg_field cfg_dec_pp_in_width;
	struct reg_field cfg_dec_pp_in_height;
	struct reg_field cfg_dec_rangemap_coef_y;
	struct reg_field cfg_dec_crop_starty;
	struct reg_field cfg_dec_pp_bot_yin_base;
	struct reg_field cfg_dec_pp_bot_cin_base;
	struct reg_field cfg_dec_scale_wratio;
	struct reg_field cfg_dec_rgb_g_padd;
	struct reg_field cfg_dec_rgb_r_padd;
	struct reg_field cfg_dec_rgb_pix_in32;
	struct reg_field cfg_dec_ycbcr_range;
	struct reg_field cfg_dec_rangemap_c_e;
	struct reg_field cfg_dec_rangemap_y_e;
	struct reg_field cfg_dec_scale_hratio;
	struct reg_field cfg_dec_rgb_b_padd;
	struct reg_field cfg_dec_ver_scale_mode;
	struct reg_field cfg_dec_hor_scale_mode;
	struct reg_field cfg_dec_pp_in_struct;
	struct reg_field cfg_dec_pp_fast_scale_e;
	struct reg_field cfg_dec_hscale_invra;
	struct reg_field cfg_dec_wscale_invra;
	struct reg_field cfg_dec_r_mask;
	struct reg_field cfg_dec_g_mask;
	struct reg_field cfg_dec_b_mask;
	struct reg_field cfg_dec_pp_crop8_d_e;
	struct reg_field cfg_dec_pp_crop8_r_e;
	struct reg_field cfg_dec_pp_out_swap16_e;
	struct reg_field cfg_dec_pp_out_tiled_e;
	struct reg_field cfg_dec_pp_out_width;
	struct reg_field cfg_dec_pp_out_height;
	struct reg_field cfg_dec_pp_out_format;
	struct reg_field cfg_dec_pp_in_format;
	struct reg_field cfg_dec_mask1_startx;
	struct reg_field cfg_dec_mask1_starty;
	struct reg_field cfg_dec_mask1_ablend_e;
	struct reg_field cfg_dec_rangemap_coef_c;
	struct reg_field cfg_dec_pp_in_format_es;
	struct reg_field cfg_dec_mask2_startx;
	struct reg_field cfg_dec_mask2_starty;
	struct reg_field cfg_dec_mask2_ablend_e;
	struct reg_field cfg_dec_mask1_endx;
	struct reg_field cfg_dec_mask1_endy;
	struct reg_field cfg_dec_mask1_e;
	struct reg_field cfg_dec_ext_orig_width;
	struct reg_field cfg_dec_mask2_endx;
	struct reg_field cfg_dec_mask2_endy;
	struct reg_field cfg_dec_mask2_e;
	struct reg_field cfg_dec_down_cross;
	struct reg_field cfg_dec_up_cross;
	struct reg_field cfg_dec_down_cross_e;
	struct reg_field cfg_dec_up_cross_e;
	struct reg_field cfg_dec_left_cross_e;
	struct reg_field cfg_dec_right_cross_e;
	struct reg_field cfg_dec_left_cross;
	struct reg_field cfg_dec_right_cross;
	struct reg_field cfg_dec_dither_select_b;
	struct reg_field cfg_dec_dither_select_g;
	struct reg_field cfg_dec_dither_select_r;
	struct reg_field cfg_dec_display_width;
	struct reg_field cfg_dec_crop_startx_ext;
	struct reg_field cfg_dec_crop_starty_ext;
	struct reg_field cfg_dec_pp_in_w_ext;
	struct reg_field cfg_dec_pp_in_h_ext;
	struct reg_field cfg_dec_ablend1_base;
	struct reg_field cfg_dec_ablend2_base;
	struct reg_field cfg_dec_ablend1_scanl;
	struct reg_field cfg_dec_ablend2_scanl;
	struct reg_field cfg_dec_pp_out_w_ext;
	struct reg_field cfg_dec_pp_out_h_ext;
	struct reg_field cfg_dec_soft_reset;
};

static const struct hantro_field_dec g1_field {
	.cfg_dec_e =			REG_FIELD(SWREG(1), 0, 0),
	.cfg_dec_irq_dis =		REG_FIELD(SWREG(1), 4, 4),
	.cfg_dec_irq =			REG_FIELD(SWREG(1), 8, 8),
	.cfg_dec_rdy_int =		REG_FIELD(SWREG(1), 12, 12),
	.cfg_dec_bus_int =		REG_FIELD(SWREG(1), 13, 13),
	.cfg_dec_buffer_int =		REG_FIELD(SWREG(1), 14, 14),
	.cfg_dec_aso_int =		REG_FIELD(SWREG(1), 15, 15),
	.cfg_dec_error_int =		REG_FIELD(SWREG(1), 16, 16),
	.cfg_dec_slice_int =		REG_FIELD(SWREG(1), 17, 17),
	.cfg_dec_timeout =		REG_FIELD(SWREG(1), 18, 18),
	.cfg_dec_pic_inf =		REG_FIELD(SWREG(1), 24, 24),
	.cfg_dec_max_burst =		REG_FIELD(SWREG(2), 0, 4),
	.cfg_dec_scmd_dis =		REG_FIELD(SWREG(2), 5, 5),
	.cfg_dec_adv_pre_dis =		REG_FIELD(SWREG(2), 6, 6),
	.cfg_dec_priority_mode =	REG_FIELD(SWREG(2), 7, 7),
	.cfg_dec_out_endian =		REG_FIELD(SWREG(2), 8, 8),
	.cfg_dec_in_endian =		REG_FIELD(SWREG(2), 9, 9),
	.cfg_dec_clk_gate_e =		REG_FIELD(SWREG(2), 10, 10),
	.cfg_dec_latency =		REG_FIELD(SWREG(2), 11, 16),
	.cfg_dec_out_tiled_e =		REG_FIELD(SWREG(2), 17, 17),
	.cfg_dec_data_disc_e =		REG_FIELD(SWREG(2), 18, 18),
	.cfg_dec_outswap32_e =		REG_FIELD(SWREG(2), 19, 19),
	.cfg_dec_inswap32_e =		REG_FIELD(SWREG(2), 20, 20),
	.cfg_dec_strendian_e =		REG_FIELD(SWREG(2), 21, 21),
	.cfg_dec_strswap32_e =		REG_FIELD(SWREG(2), 22, 22),
	.cfg_dec_timeout_e =		REG_FIELD(SWREG(2), 23, 23),
	.cfg_dec_axi_rd_id =		REG_FIELD(SWREG(2), 24, 31),
	.cfg_dec_axi_wr_id =		REG_FIELD(SWREG(3), 0, 7),
	.cfg_dec_ahb_hlock_e =		REG_FIELD(SWREG(3), 8, 8),
	.cfg_dec_picord_count_e =	REG_FIELD(SWREG(3), 9, 9),
	.cfg_dec_seq_mbaff_e =		REG_FIELD(SWREG(3), 10, 10),
	.cfg_dec_reftopfirst_e =	REG_FIELD(SWREG(3), 11, 11),
	.cfg_dec_write_mvs_e =		REG_FIELD(SWREG(3), 12, 12),
	.cfg_dec_mvc_e =		REG_FIELD(SWREG(3), 13, 13),
	.cfg_dec_pic_fixed_quant =	REG_FIELD(SWREG(3), 13, 13),
	.cfg_dec_filtering_dis =	REG_FIELD(SWREG(3), 14, 14),
	.cfg_dec_out_dis =		REG_FIELD(SWREG(3), 15, 15),
	.cfg_dec_ref_topfield_e =	REG_FIELD(SWREG(3), 16, 16),
	.cfg_dec_sorenson_e =		REG_FIELD(SWREG(3), 17, 17),
	.cfg_dec_fwd_interlace_e =	REG_FIELD(SWREG(3), 18, 18),
	.cfg_dec_pic_topfield_e =	REG_FIELD(SWREG(3), 19, 19),
	.cfg_dec_pic_inter_e =		REG_FIELD(SWREG(3), 20, 20),
	.cfg_dec_pic_b_e =		REG_FIELD(SWREG(3), 21, 21),
	.cfg_dec_pic_fieldmode_e =	REG_FIELD(SWREG(3), 22, 22),
	.cfg_dec_pic_interlace_e =	REG_FIELD(SWREG(3), 23, 23),
	.cfg_dec_pjpeg_e =		REG_FIELD(SWREG(3), 24, 24),
	.cfg_dec_divx3_e =		REG_FIELD(SWREG(3), 25, 25),
	.cfg_dec_skip_mode =		REG_FIELD(SWREG(3), 26, 26),
	.cfg_dec_rlc_mode_e =		REG_FIELD(SWREG(3), 27, 27),
	.cfg_dec_mode =			REG_FIELD(SWREG(3), 28, 31),
	.cfg_dec_pic_refer_flag =	REG_FIELD(SWREG(4), 0, 0),
	.cfg_dec_pic_mb_h_ext =		REG_FIELD(SWREG(4), 0, 2),
	.cfg_dec_ref_frames =		REG_FIELD(SWREG(4), 0, 4),
	.cfg_dec_pic_mb_w_ext =		REG_FIELD(SWREG(4), 3, 5),
	.cfg_dec_topfieldfirst_e =	REG_FIELD(SWREG(4), 5, 5),
	.cfg_dec_alt_scan_e =		REG_FIELD(SWREG(4), 6, 6),
	.cfg_dec_mb_height_off =	REG_FIELD(SWREG(4), 7, 10),
	.cfg_dec_pic_mb_height_p =	REG_FIELD(SWREG(4), 11, 18),
	.cfg_dec_mb_width_off =		REG_FIELD(SWREG(4), 19, 22),
	.cfg_dec_pic_mb_width =		REG_FIELD(SWREG(4), 23, 31),
	.cfg_dec_fieldpic_flag_e =	REG_FIELD(SWREG(5), 0, 0),
	.cfg_dec_frame_pred_dct =	REG_FIELD(SWREG(5), 0, 0),
	.cfg_dec_cb_dc_vlctable3 =	REG_FIELD(SWREG(5), 0, 0),
	.cfg_dec_4mv_blk_pat_tab =	REG_FIELD(SWREG(5), 0, 1),
	.cfg_dec_beta_offset =		REG_FIELD(SWREG(5), 0, 4),
	.cfg_dec_boolean_range =	REG_FIELD(SWREG(5), 0, 7),
	.cfg_dec_vop_time_incr =	REG_FIELD(SWREG(5), 0, 15),
	.cfg_dec_intra_vlc_tab =	REG_FIELD(SWREG(5), 1, 1),
	.cfg_dec_cr_dc_vlctable3 =	REG_FIELD(SWREG(5), 1, 1),
	.cfg_dec_cb_dc_vlctable =	REG_FIELD(SWREG(5), 2, 2),
	.cfg_dec_2mv_blk_pat_tab =	REG_FIELD(SWREG(5), 2, 3),
	.cfg_dec_intra_dc_prec =	REG_FIELD(SWREG(5), 2, 3),
	.cfg_dec_cr_dc_vlctable =	REG_FIELD(SWREG(5), 3, 3),
	.cfg_dec_con_mv_e =		REG_FIELD(SWREG(5), 4, 4),
	.cfg_dec_cb_ac_vlctable =	REG_FIELD(SWREG(5), 4, 4),
	.cfg_dec_cbptab =		REG_FIELD(SWREG(5), 4, 6),
	.cfg_dec_cr_ac_vlctable =	REG_FIELD(SWREG(5), 5, 5),
	.cfg_dec_alpha_offset =		REG_FIELD(SWREG(5), 5, 9),
	.cfg_dec_jpeg_stream_all =	REG_FIELD(SWREG(5), 6, 6),
	.cfg_dec_jpeg_filright_e =	REG_FIELD(SWREG(5), 7, 7),
	.cfg_dec_mvtab =		REG_FIELD(SWREG(5), 7, 9),
	.cfg_dec_jpeg_mode =		REG_FIELD(SWREG(5), 8, 10),
	.cfg_dec_boolean_value =	REG_FIELD(SWREG(5), 8, 15),
	.cfg_dec_mb_mode_tab =		REG_FIELD(SWREG(5), 10, 12),
	.cfg_dec_jpeg_qtables =		REG_FIELD(SWREG(5), 11, 12),
	.cfg_dec_transacfrm2 =		REG_FIELD(SWREG(5), 13, 14),
	.cfg_dec_ch_qp_offset2 =	REG_FIELD(SWREG(5), 14, 18),
	.cfg_dec_transacfrm =		REG_FIELD(SWREG(5), 15, 16),
	.cfg_dec_multistream_e =	REG_FIELD(SWREG(5), 16, 16),
	.cfg_dec_intradc_vlc_thr =	REG_FIELD(SWREG(5), 16, 18),
	.cfg_dec_transdctab =		REG_FIELD(SWREG(5), 17, 17),
	.cfg_dec_huffman_e =		REG_FIELD(SWREG(5), 17, 17),
	.cfg_dec_strm1_start_bit =	REG_FIELD(SWREG(5), 18, 23),
	.cfg_dec_ch_qp_offset =		REG_FIELD(SWREG(5), 19, 23),
	.cfg_dec_fast_uvmc_e =		REG_FIELD(SWREG(5), 20, 20),
	.cfg_dec_range_red_frm_e =	REG_FIELD(SWREG(5), 22, 22),
	.cfg_dec_dqbi_level =		REG_FIELD(SWREG(5), 23, 23),
	.cfg_dec_type1_quant_e =	REG_FIELD(SWREG(5), 24, 24),
	.cfg_dec_dq_profile =		REG_FIELD(SWREG(5), 24, 24),
	.cfg_dec_qscale_type =		REG_FIELD(SWREG(5), 24, 24),
	.cfg_dec_sync_marker_e =	REG_FIELD(SWREG(5), 25, 25),
	.cfg_dec_strm_start_bit =	REG_FIELD(SWREG(5), 26, 31),
	.cfg_dec_stream_len =		REG_FIELD(SWREG(6), 0, 23),
	.cfg_dec_ch_8pix_ileav_e =	REG_FIELD(SWREG(6), 24, 24),
	.cfg_dec_init_qp =		REG_FIELD(SWREG(6), 25, 30),
	.cfg_dec_start_code_e =		REG_FIELD(SWREG(6), 31, 31),
	.cfg_dec_pjpeg_se =		REG_FIELD(SWREG(7), 0, 7),
	.cfg_dec_framenum =		REG_FIELD(SWREG(7), 0, 15),
	.cfg_dec_vc1_adv_e =		REG_FIELD(SWREG(7), 5, 5),
	.cfg_dec_vp7_version =		REG_FIELD(SWREG(7), 5, 5),
	.cfg_dec_dquant_e =		REG_FIELD(SWREG(7), 6, 6),
	.cfg_dec_init_dc_match1 =	REG_FIELD(SWREG(7), 6, 8),
	.cfg_dec_2nd_byte_emul_e =	REG_FIELD(SWREG(7), 7, 7),
	.cfg_dec_ttfrm =		REG_FIELD(SWREG(7), 8, 9),
	.cfg_dec_pjpeg_ss =		REG_FIELD(SWREG(7), 8, 15),
	.cfg_dec_init_dc_match0 =	REG_FIELD(SWREG(7), 9, 11),
	.cfg_dec_halfqp_e =		REG_FIELD(SWREG(7), 10, 10),
	.cfg_dec_uniqp_e =		REG_FIELD(SWREG(7), 11, 11),
	.cfg_dec_bilin_mc_e =		REG_FIELD(SWREG(7), 12, 12),
	.cfg_dec_ch_mv_res =		REG_FIELD(SWREG(7), 13, 13),
	.cfg_dec_pqindex =		REG_FIELD(SWREG(7), 14, 18),
	.cfg_dec_pjpeg_al =		REG_FIELD(SWREG(7), 16, 19),
	.cfg_dec_framenum_len =		REG_FIELD(SWREG(7), 16, 20),
	.cfg_dec_ttmbf =		REG_FIELD(SWREG(7), 19, 19),
	.cfg_dec_dq_edges =		REG_FIELD(SWREG(7), 20, 23),
	.cfg_dec_pjpeg_ah =		REG_FIELD(SWREG(7), 20, 23),
	.cfg_dec_dct2_start_bit =	REG_FIELD(SWREG(7), 20, 25),
	.cfg_dec_pjpeg_hdiv8 =		REG_FIELD(SWREG(7), 24, 24),
	.cfg_dec_alt_pquant =		REG_FIELD(SWREG(7), 24, 28),
	.cfg_dec_pjpeg_wdiv8 =		REG_FIELD(SWREG(7), 25, 25),
	.cfg_dec_pjpeg_fildown_e =	REG_FIELD(SWREG(7), 26, 26),
	.cfg_dec_weight_bipr_idc =	REG_FIELD(SWREG(7), 26, 27),
	.cfg_dec_dct1_start_bit =	REG_FIELD(SWREG(7), 26, 31),
	.cfg_dec_weight_pred_e =	REG_FIELD(SWREG(7), 28, 28),
	.cfg_dec_dir_8x8_infer_e =	REG_FIELD(SWREG(7), 29, 29),
	.cfg_dec_bitplane2_e =		REG_FIELD(SWREG(7), 29, 29),
	.cfg_dec_blackwhite_e =		REG_FIELD(SWREG(7), 30, 30),
	.cfg_dec_bitplane1_e =		REG_FIELD(SWREG(7), 30, 30),
	.cfg_dec_cabac_e =		REG_FIELD(SWREG(7), 31, 31),
	.cfg_dec_bitplane0_e =		REG_FIELD(SWREG(7), 31, 31),
	.cfg_dec_divx3_slice_size =	REG_FIELD(SWREG(8), 0, 7),
	.cfg_dec_var_threshold =	REG_FIELD(SWREG(8), 0, 9),
	.cfg_dec_rv_bwd_scale =		REG_FIELD(SWREG(8), 0, 13),
	.cfg_dec_idr_pic_id =		REG_FIELD(SWREG(8), 0, 15),
	.cfg_dec_pjpeg_rest_freq =	REG_FIELD(SWREG(8), 0, 15),
	.cfg_dec_init_dc_comp1 =	REG_FIELD(SWREG(8), 0, 15),
	.cfg_dec_divx_idct_e =		REG_FIELD(SWREG(8), 8, 8),
	.cfg_dec_mv_threshold =		REG_FIELD(SWREG(8), 10, 12),
	.cfg_dec_variance_test_e =	REG_FIELD(SWREG(8), 13, 13),
	.cfg_dec_loop_filt_limit =	REG_FIELD(SWREG(8), 14, 17),
	.cfg_dec_ref_dist_bwd =		REG_FIELD(SWREG(8), 14, 18),
	.cfg_dec_rv_fwd_scale =		REG_FIELD(SWREG(8), 14, 27),
	.cfg_dec_idr_pic_e =		REG_FIELD(SWREG(8), 16, 16),
	.cfg_dec_init_dc_comp0 =	REG_FIELD(SWREG(8), 16, 31),
	.cfg_dec_refpic_mk_len =	REG_FIELD(SWREG(8), 17, 27),
	.cfg_dec_ref_dist_fwd =		REG_FIELD(SWREG(8), 19, 23),
	.cfg_dec_mv_scalefactor =	REG_FIELD(SWREG(8), 24, 31),
	.cfg_dec_8x8trans_flag_e =	REG_FIELD(SWREG(8), 28, 28),
	.cfg_dec_rv_osv_quant =		REG_FIELD(SWREG(8), 28, 29),
	.cfg_dec_rdpic_cnt_pres =	REG_FIELD(SWREG(8), 29, 29),
	.cfg_dec_filt_ctrl_pres =	REG_FIELD(SWREG(8), 30, 30),
	.cfg_dec_rv_profile =		REG_FIELD(SWREG(8), 30, 31),
	.cfg_dec_const_intra_e =	REG_FIELD(SWREG(8), 31, 31),
	.cfg_dec_poc_length =		REG_FIELD(SWREG(9), 0, 7),
	.cfg_dec_pic_slice_am =		REG_FIELD(SWREG(9), 0, 12),
	.cfg_dec_ishift0 =		REG_FIELD(SWREG(9), 0, 15),
	.cfg_dec_stream1_len =		REG_FIELD(SWREG(9), 0, 23),
	.cfg_dec_mb_ctrl_base =		REG_FIELD(SWREG(9), 0, 31),
	.cfg_dec_refidx0_active =	REG_FIELD(SWREG(9), 14, 18),
	.cfg_dec_iscale0 =		REG_FIELD(SWREG(9), 16, 23),
	.cfg_dec_refidx1_active =	REG_FIELD(SWREG(9), 19, 23),
	.cfg_dec_icomp0_e =		REG_FIELD(SWREG(9), 24, 24),
	.cfg_dec_coeffs_part_am =	REG_FIELD(SWREG(9), 24, 27),
	.cfg_dec_pps_id =		REG_FIELD(SWREG(9), 24, 31),
	.cfg_dec_segment_e =		REG_FIELD(SWREG(10), 0, 0),
	.cfg_dec_pinit_rlist_f4 =	REG_FIELD(SWREG(10), 0, 4),
	.cfg_dec_ishift1 =		REG_FIELD(SWREG(10), 0, 15),
	.cfg_dec_diff_mv_base =		REG_FIELD(SWREG(10), 0, 31),
	.cfg_dec_segment_base =		REG_FIELD(SWREG(10), 0, 31),
	.cfg_dec_segment_upd_e =	REG_FIELD(SWREG(10), 1, 1),
	.cfg_dec_pinit_rlist_f5 =	REG_FIELD(SWREG(10), 5, 9),
	.cfg_dec_pinit_rlist_f6 =	REG_FIELD(SWREG(10), 10, 14),
	.cfg_dec_pinit_rlist_f7 =	REG_FIELD(SWREG(10), 15, 19),
	.cfg_dec_iscale1 =		REG_FIELD(SWREG(10), 16, 23),
	.cfg_dec_pinit_rlist_f8 =	REG_FIELD(SWREG(10), 20, 24),
	.cfg_dec_icomp1_e =		REG_FIELD(SWREG(10), 24, 24),
	.cfg_dec_pinit_rlist_f9 =	REG_FIELD(SWREG(10), 25, 29),
	.cfg_dec_pinit_rlist_f10 =	REG_FIELD(SWREG(11), 0, 4),
	.cfg_dec_dct7_start_bit =	REG_FIELD(SWREG(11), 0, 5),
	.cfg_dec_ishift2 =		REG_FIELD(SWREG(11), 0, 15),
	.cfg_dec_i4x4_or_dc_base =	REG_FIELD(SWREG(11), 0, 31),
	.cfg_dec_pinit_rlist_f11 =	REG_FIELD(SWREG(11), 5, 9),
	.cfg_dec_dct6_start_bit =	REG_FIELD(SWREG(11), 6, 11),
	.cfg_dec_pinit_rlist_f12 =	REG_FIELD(SWREG(11), 10, 14),
	.cfg_dec_dct5_start_bit =	REG_FIELD(SWREG(11), 12, 17),
	.cfg_dec_pinit_rlist_f13 =	REG_FIELD(SWREG(11), 15, 19),
	.cfg_dec_iscale2 =		REG_FIELD(SWREG(11), 16, 23),
	.cfg_dec_dct4_start_bit =	REG_FIELD(SWREG(11), 18, 23),
	.cfg_dec_pinit_rlist_f14 =	REG_FIELD(SWREG(11), 20, 24),
	.cfg_dec_icomp2_e =		REG_FIELD(SWREG(11), 24, 24),
	.cfg_dec_dct3_start_bit =	REG_FIELD(SWREG(11), 24, 29),
	.cfg_dec_pinit_rlist_f15 =	REG_FIELD(SWREG(11), 25, 29),
	.cfg_dec_rlc_vlc_base =		REG_FIELD(SWREG(12), 0, 31),
	.cfg_dec_out_base =		REG_FIELD(SWREG(13), 0, 31),
	.cfg_dec_refer0_topc_e =	REG_FIELD(SWREG(14), 0, 0),
	.cfg_dec_refer0_base =		REG_FIELD(SWREG(14), 0, 31),
	.cfg_dec_jpg_ch_out_base =	REG_FIELD(SWREG(14), 0, 31),
	.cfg_dec_refer0_field_e =	REG_FIELD(SWREG(14), 1, 1),
	.cfg_dec_refer1_topc_e =	REG_FIELD(SWREG(15), 0, 0),
	.cfg_dec_jpeg_slice_h =		REG_FIELD(SWREG(15), 0, 7),
	.cfg_dec_refer1_base =		REG_FIELD(SWREG(15), 0, 31),
	.cfg_dec_refer1_field_e =	REG_FIELD(SWREG(15), 1, 1),
	.cfg_dec_refer2_topc_e =	REG_FIELD(SWREG(16), 0, 0),
	.cfg_dec_ac1_code1_cnt =	REG_FIELD(SWREG(16), 0, 1),
	.cfg_dec_refer2_base =		REG_FIELD(SWREG(16), 0, 31),
	.cfg_dec_refer2_field_e =	REG_FIELD(SWREG(16), 1, 1),
	.cfg_dec_ac1_code2_cnt =	REG_FIELD(SWREG(16), 3, 5),
	.cfg_dec_ac1_code3_cnt =	REG_FIELD(SWREG(16), 7, 10),
	.cfg_dec_ac1_code4_cnt =	REG_FIELD(SWREG(16), 11, 15),
	.cfg_dec_ac1_code5_cnt =	REG_FIELD(SWREG(16), 16, 21),
	.cfg_dec_ac1_code6_cnt =	REG_FIELD(SWREG(16), 24, 30),
	.cfg_dec_refer3_topc_e =	REG_FIELD(SWREG(17), 0, 0),
	.cfg_dec_ac1_code7_cnt =	REG_FIELD(SWREG(17), 0, 7),
	.cfg_dec_refer3_base =		REG_FIELD(SWREG(17), 0, 31),
	.cfg_dec_refer3_field_e =	REG_FIELD(SWREG(17), 1, 1),
	.cfg_dec_ac1_code8_cnt =	REG_FIELD(SWREG(17), 8, 15),
	.cfg_dec_ac1_code9_cnt =	REG_FIELD(SWREG(17), 16, 23),
	.cfg_dec_ac1_code10_cnt =	REG_FIELD(SWREG(17), 24, 31),
	.cfg_dec_refer4_topc_e =	REG_FIELD(SWREG(18), 0, 0),
	.cfg_dec_prev_anc_type =	REG_FIELD(SWREG(18), 0, 0),
	.cfg_dec_gref_sign_bias =	REG_FIELD(SWREG(18), 0, 0),
	.cfg_dec_ac1_code11_cnt =	REG_FIELD(SWREG(18), 0, 7),
	.cfg_dec_refer4_base =		REG_FIELD(SWREG(18), 0, 31),
	.cfg_dec_refer4_field_e =	REG_FIELD(SWREG(18), 1, 1),
	.cfg_dec_mv_accuracy_bwd =	REG_FIELD(SWREG(18), 1, 1),
	.cfg_dec_mpeg4_vc1_rc =		REG_FIELD(SWREG(18), 1, 1),
	.cfg_dec_mv_accuracy_fwd =	REG_FIELD(SWREG(18), 2, 2),
	.cfg_dec_overlap_method =	REG_FIELD(SWREG(18), 3, 4),
	.cfg_dec_fcode_bwd_ver =	REG_FIELD(SWREG(18), 3, 6),
	.cfg_dec_overlap_e =		REG_FIELD(SWREG(18), 5, 5),
	.cfg_dec_mv_range =		REG_FIELD(SWREG(18), 6, 7),
	.cfg_dec_fcode_bwd_hor =	REG_FIELD(SWREG(18), 7, 10),
	.cfg_dec_ac1_code12_cnt =	REG_FIELD(SWREG(18), 8, 15),
	.cfg_dec_vc1_difmv_range =	REG_FIELD(SWREG(18), 9, 10),
	.cfg_dec_range_red_ref_e =	REG_FIELD(SWREG(18), 11, 11),
	.cfg_dec_fcode_fwd_ver =	REG_FIELD(SWREG(18), 11, 14),
	.cfg_dec_pic_4mv_e =		REG_FIELD(SWREG(18), 13, 13),
	.cfg_dec_fcode_fwd_hor =	REG_FIELD(SWREG(18), 15, 18),
	.cfg_dec_ac1_code13_cnt =	REG_FIELD(SWREG(18), 16, 23),
	.cfg_dec_pic_header_len =	REG_FIELD(SWREG(18), 16, 31),
	.cfg_dec_alt_scan_flag_e =	REG_FIELD(SWREG(18), 19, 19),
	.cfg_dec_ac1_code14_cnt =	REG_FIELD(SWREG(18), 24, 31),
	.cfg_dec_refer5_topc_e =	REG_FIELD(SWREG(19), 0, 0),
	.cfg_dec_aref_sign_bias =	REG_FIELD(SWREG(19), 0, 0),
	.cfg_dec_scan_map_5 =		REG_FIELD(SWREG(19), 0, 5),
	.cfg_dec_ac1_code15_cnt =	REG_FIELD(SWREG(19), 0, 7),
	.cfg_dec_ishift3 =		REG_FIELD(SWREG(19), 0, 15),
	.cfg_dec_trb_per_trd_d0 =	REG_FIELD(SWREG(19), 0, 26),
	.cfg_dec_refer5_base =		REG_FIELD(SWREG(19), 0, 31),
	.cfg_dec_refer5_field_e =	REG_FIELD(SWREG(19), 1, 1),
	.cfg_dec_scan_map_4 =		REG_FIELD(SWREG(19), 6, 11),
	.cfg_dec_ac1_code16_cnt =	REG_FIELD(SWREG(19), 8, 15),
	.cfg_dec_scan_map_3 =		REG_FIELD(SWREG(19), 12, 17),
	.cfg_dec_ac2_code1_cnt =	REG_FIELD(SWREG(19), 16, 17),
	.cfg_dec_iscale3 =		REG_FIELD(SWREG(19), 16, 23),
	.cfg_dec_scan_map_2 =		REG_FIELD(SWREG(19), 18, 23),
	.cfg_dec_ac2_code2_cnt =	REG_FIELD(SWREG(19), 19, 21),
	.cfg_dec_ac2_code3_cnt =	REG_FIELD(SWREG(19), 23, 26),
	.cfg_dec_icomp3_e =		REG_FIELD(SWREG(19), 24, 24),
	.cfg_dec_scan_map_1 =		REG_FIELD(SWREG(19), 24, 29),
	.cfg_dec_ac2_code4_cnt =	REG_FIELD(SWREG(19), 27, 31),
	.cfg_dec_refer6_topc_e =	REG_FIELD(SWREG(20), 0, 0),
	.cfg_dec_ac2_code5_cnt =	REG_FIELD(SWREG(20), 0, 5),
	.cfg_dec_scan_map_10 =		REG_FIELD(SWREG(20), 0, 5),
	.cfg_dec_ishift4 =		REG_FIELD(SWREG(20), 0, 15),
	.cfg_dec_trb_per_trd_dm1 =	REG_FIELD(SWREG(20), 0, 26),
	.cfg_dec_refer6_base =		REG_FIELD(SWREG(20), 0, 31),
	.cfg_dec_refer6_field_e =	REG_FIELD(SWREG(20), 1, 1),
	.cfg_dec_scan_map_9 =		REG_FIELD(SWREG(20), 6, 11),
	.cfg_dec_ac2_code6_cnt =	REG_FIELD(SWREG(20), 8, 14),
	.cfg_dec_scan_map_8 =		REG_FIELD(SWREG(20), 12, 17),
	.cfg_dec_iscale4 =		REG_FIELD(SWREG(20), 16, 23),
	.cfg_dec_ac2_code7_cnt =	REG_FIELD(SWREG(20), 16, 23),
	.cfg_dec_scan_map_7 =		REG_FIELD(SWREG(20), 18, 23),
	.cfg_dec_icomp4_e =		REG_FIELD(SWREG(20), 24, 24),
	.cfg_dec_scan_map_6 =		REG_FIELD(SWREG(20), 24, 29),
	.cfg_dec_ac2_code8_cnt =	REG_FIELD(SWREG(20), 24, 31),
	.cfg_dec_refer7_topc_e =	REG_FIELD(SWREG(21), 0, 0),
	.cfg_dec_scan_map_15 =		REG_FIELD(SWREG(21), 0, 5),
	.cfg_dec_ac2_code9_cnt =	REG_FIELD(SWREG(21), 0, 7),
	.cfg_dec_trb_per_trd_d1 =	REG_FIELD(SWREG(21), 0, 26),
	.cfg_dec_refer7_base =		REG_FIELD(SWREG(21), 0, 31),
	.cfg_dec_refer7_field_e =	REG_FIELD(SWREG(21), 1, 1),
	.cfg_dec_scan_map_14 =		REG_FIELD(SWREG(21), 6, 11),
	.cfg_dec_ac2_code10_cnt =	REG_FIELD(SWREG(21), 8, 15),
	.cfg_dec_scan_map_13 =		REG_FIELD(SWREG(21), 12, 17),
	.cfg_dec_ac2_code11_cnt =	REG_FIELD(SWREG(21), 16, 23),
	.cfg_dec_scan_map_12 =		REG_FIELD(SWREG(21), 18, 23),
	.cfg_dec_scan_map_11 =		REG_FIELD(SWREG(21), 24, 29),
	.cfg_dec_ac2_code12_cnt =	REG_FIELD(SWREG(21), 24, 31),
	.cfg_dec_refer8_topc_e =	REG_FIELD(SWREG(22), 0, 0),
	.cfg_dec_scan_map_20 =		REG_FIELD(SWREG(22), 0, 5),
	.cfg_dec_ac2_code13_cnt =	REG_FIELD(SWREG(22), 0, 7),
	.cfg_dec_refer8_base =		REG_FIELD(SWREG(22), 0, 31),
	.cfg_dec_dct_strm1_base =	REG_FIELD(SWREG(22), 0, 31),
	.cfg_dec_refer8_field_e =	REG_FIELD(SWREG(22), 1, 1),
	.cfg_dec_scan_map_19 =		REG_FIELD(SWREG(22), 6, 11),
	.cfg_dec_ac2_code14_cnt =	REG_FIELD(SWREG(22), 8, 15),
	.cfg_dec_scan_map_18 =		REG_FIELD(SWREG(22), 12, 17),
	.cfg_dec_ac2_code15_cnt =	REG_FIELD(SWREG(22), 16, 23),
	.cfg_dec_scan_map_17 =		REG_FIELD(SWREG(22), 18, 23),
	.cfg_dec_scan_map_16 =		REG_FIELD(SWREG(22), 24, 29),
	.cfg_dec_ac2_code16_cnt =	REG_FIELD(SWREG(22), 24, 31),
	.cfg_dec_refer9_topc_e =	REG_FIELD(SWREG(23), 0, 0),
	.cfg_dec_dc1_code1_cnt =	REG_FIELD(SWREG(23), 0, 1),
	.cfg_dec_scan_map_25 =		REG_FIELD(SWREG(23), 0, 5),
	.cfg_dec_refer9_base =		REG_FIELD(SWREG(23), 0, 31),
	.cfg_dec_dct_strm2_base =	REG_FIELD(SWREG(23), 0, 31),
	.cfg_dec_refer9_field_e =	REG_FIELD(SWREG(23), 1, 1),
	.cfg_dec_dc1_code2_cnt =	REG_FIELD(SWREG(23), 4, 6),
	.cfg_dec_scan_map_24 =		REG_FIELD(SWREG(23), 6, 11),
	.cfg_dec_dc1_code3_cnt =	REG_FIELD(SWREG(23), 8, 11),
	.cfg_dec_dc1_code4_cnt =	REG_FIELD(SWREG(23), 12, 15),
	.cfg_dec_scan_map_23 =		REG_FIELD(SWREG(23), 12, 17),
	.cfg_dec_dc1_code5_cnt =	REG_FIELD(SWREG(23), 16, 19),
	.cfg_dec_scan_map_22 =		REG_FIELD(SWREG(23), 18, 23),
	.cfg_dec_dc1_code6_cnt =	REG_FIELD(SWREG(23), 20, 23),
	.cfg_dec_dc1_code7_cnt =	REG_FIELD(SWREG(23), 24, 27),
	.cfg_dec_scan_map_21 =		REG_FIELD(SWREG(23), 24, 29),
	.cfg_dec_dc1_code8_cnt =	REG_FIELD(SWREG(23), 28, 31),
	.cfg_dec_refer10_topc_e =	REG_FIELD(SWREG(24), 0, 0),
	.cfg_dec_dc1_code9_cnt =	REG_FIELD(SWREG(24), 0, 3),
	.cfg_dec_scan_map_30 =		REG_FIELD(SWREG(24), 0, 5),
	.cfg_dec_refer10_base =		REG_FIELD(SWREG(24), 0, 31),
	.cfg_dec_dct_strm3_base =	REG_FIELD(SWREG(24), 0, 31),
	.cfg_dec_refer10_field_e =	REG_FIELD(SWREG(24), 1, 1),
	.cfg_dec_dc1_code10_cnt =	REG_FIELD(SWREG(24), 4, 7),
	.cfg_dec_scan_map_29 =		REG_FIELD(SWREG(24), 6, 11),
	.cfg_dec_dc1_code11_cnt =	REG_FIELD(SWREG(24), 8, 11),
	.cfg_dec_dc1_code12_cnt =	REG_FIELD(SWREG(24), 12, 15),
	.cfg_dec_scan_map_28 =		REG_FIELD(SWREG(24), 12, 17),
	.cfg_dec_dc1_code13_cnt =	REG_FIELD(SWREG(24), 16, 19),
	.cfg_dec_scan_map_27 =		REG_FIELD(SWREG(24), 18, 23),
	.cfg_dec_dc1_code14_cnt =	REG_FIELD(SWREG(24), 20, 23),
	.cfg_dec_dc1_code15_cnt =	REG_FIELD(SWREG(24), 24, 27),
	.cfg_dec_scan_map_26 =		REG_FIELD(SWREG(24), 24, 29),
	.cfg_dec_dc1_code16_cnt =	REG_FIELD(SWREG(24), 28, 31),
	.cfg_dec_refer11_topc_e =	REG_FIELD(SWREG(25), 0, 0),
	.cfg_dec_dc2_code1_cnt =	REG_FIELD(SWREG(25), 0, 1),
	.cfg_dec_scan_map_35 =		REG_FIELD(SWREG(25), 0, 5),
	.cfg_dec_refer11_base =		REG_FIELD(SWREG(25), 0, 31),
	.cfg_dec_dct_strm4_base =	REG_FIELD(SWREG(25), 0, 31),
	.cfg_dec_refer11_field_e =	REG_FIELD(SWREG(25), 1, 1),
	.cfg_dec_dc2_code2_cnt =	REG_FIELD(SWREG(25), 4, 6),
	.cfg_dec_scan_map_34 =		REG_FIELD(SWREG(25), 6, 11),
	.cfg_dec_dc2_code3_cnt =	REG_FIELD(SWREG(25), 8, 11),
	.cfg_dec_dc2_code4_cnt =	REG_FIELD(SWREG(25), 12, 15),
	.cfg_dec_scan_map_33 =		REG_FIELD(SWREG(25), 12, 17),
	.cfg_dec_dc2_code5_cnt =	REG_FIELD(SWREG(25), 16, 19),
	.cfg_dec_scan_map_32 =		REG_FIELD(SWREG(25), 18, 23),
	.cfg_dec_dc2_code6_cnt =	REG_FIELD(SWREG(25), 20, 23),
	.cfg_dec_dc2_code7_cnt =	REG_FIELD(SWREG(25), 24, 27),
	.cfg_dec_scan_map_31 =		REG_FIELD(SWREG(25), 24, 29),
	.cfg_dec_dc2_code8_cnt =	REG_FIELD(SWREG(25), 28, 31),
	.cfg_dec_refer12_topc_e =	REG_FIELD(SWREG(26), 0, 0),
	.cfg_dec_dc2_code9_cnt =	REG_FIELD(SWREG(26), 0, 3),
	.cfg_dec_scan_map_40 =		REG_FIELD(SWREG(26), 0, 5),
	.cfg_dec_refer12_base =		REG_FIELD(SWREG(26), 0, 31),
	.cfg_dec_dct_strm5_base =	REG_FIELD(SWREG(26), 0, 31),
	.cfg_dec_refer12_field_e =	REG_FIELD(SWREG(26), 1, 1),
	.cfg_dec_dc2_code10_cnt =	REG_FIELD(SWREG(26), 4, 7),
	.cfg_dec_scan_map_39 =		REG_FIELD(SWREG(26), 6, 11),
	.cfg_dec_dc2_code11_cnt =	REG_FIELD(SWREG(26), 8, 11),
	.cfg_dec_dc2_code12_cnt =	REG_FIELD(SWREG(26), 12, 15),
	.cfg_dec_scan_map_38 =		REG_FIELD(SWREG(26), 12, 17),
	.cfg_dec_dc2_code13_cnt =	REG_FIELD(SWREG(26), 16, 19),
	.cfg_dec_scan_map_37 =		REG_FIELD(SWREG(26), 18, 23),
	.cfg_dec_dc2_code14_cnt =	REG_FIELD(SWREG(26), 20, 23),
	.cfg_dec_dc2_code15_cnt =	REG_FIELD(SWREG(26), 24, 27),
	.cfg_dec_scan_map_36 =		REG_FIELD(SWREG(26), 24, 29),
	.cfg_dec_dc2_code16_cnt =	REG_FIELD(SWREG(26), 28, 31),
	.cfg_dec_refer13_topc_e =	REG_FIELD(SWREG(27), 0, 0),
	.cfg_dec_dc3_code1_cnt =	REG_FIELD(SWREG(27), 0, 1),
	.cfg_dec_refer13_base =		REG_FIELD(SWREG(27), 0, 31),
	.cfg_dec_bitpl_ctrl_base =	REG_FIELD(SWREG(27), 0, 31),
	.cfg_dec_refer13_field_e =	REG_FIELD(SWREG(27), 1, 1),
	.cfg_dec_dc3_code2_cnt =	REG_FIELD(SWREG(27), 4, 6),
	.cfg_dec_dc3_code3_cnt =	REG_FIELD(SWREG(27), 8, 11),
	.cfg_dec_dc3_code4_cnt =	REG_FIELD(SWREG(27), 12, 15),
	.cfg_dec_dc3_code5_cnt =	REG_FIELD(SWREG(27), 16, 19),
	.cfg_dec_dc3_code6_cnt =	REG_FIELD(SWREG(27), 20, 23),
	.cfg_dec_dc3_code7_cnt =	REG_FIELD(SWREG(27), 24, 27),
	.cfg_dec_dc3_code8_cnt =	REG_FIELD(SWREG(27), 28, 31),
	.cfg_dec_refer14_topc_e =	REG_FIELD(SWREG(28), 0, 0),
	.cfg_dec_dc3_code9_cnt =	REG_FIELD(SWREG(28), 0, 3),
	.cfg_dec_scan_map_45 =		REG_FIELD(SWREG(28), 0, 5),
	.cfg_dec_ref_invd_cur_0 =	REG_FIELD(SWREG(28), 0, 15),
	.cfg_dec_refer14_base =		REG_FIELD(SWREG(28), 0, 31),
	.cfg_dec_dct_strm6_base =	REG_FIELD(SWREG(28), 0, 31),
	.cfg_dec_refer14_field_e =	REG_FIELD(SWREG(28), 1, 1),
	.cfg_dec_dc3_code10_cnt =	REG_FIELD(SWREG(28), 4, 7),
	.cfg_dec_scan_map_44 =		REG_FIELD(SWREG(28), 6, 11),
	.cfg_dec_dc3_code11_cnt =	REG_FIELD(SWREG(28), 8, 11),
	.cfg_dec_dc3_code12_cnt =	REG_FIELD(SWREG(28), 12, 15),
	.cfg_dec_scan_map_43 =		REG_FIELD(SWREG(28), 12, 17),
	.cfg_dec_dc3_code13_cnt =	REG_FIELD(SWREG(28), 16, 19),
	.cfg_dec_ref_invd_cur_1 =	REG_FIELD(SWREG(28), 16, 31),
	.cfg_dec_scan_map_42 =		REG_FIELD(SWREG(28), 18, 23),
	.cfg_dec_dc3_code14_cnt =	REG_FIELD(SWREG(28), 20, 23),
	.cfg_dec_dc3_code15_cnt =	REG_FIELD(SWREG(28), 24, 27),
	.cfg_dec_scan_map_41 =		REG_FIELD(SWREG(28), 24, 29),
	.cfg_dec_dc3_code16_cnt =	REG_FIELD(SWREG(28), 28, 31),
	.cfg_dec_refer15_topc_e =	REG_FIELD(SWREG(29), 0, 0),
	.cfg_dec_scan_map_50 =		REG_FIELD(SWREG(29), 0, 5),
	.cfg_dec_ref_invd_cur_2 =	REG_FIELD(SWREG(29), 0, 15),
	.cfg_dec_refer15_base =		REG_FIELD(SWREG(29), 0, 31),
	.cfg_dec_dct_strm7_base =	REG_FIELD(SWREG(29), 0, 31),
	.cfg_dec_refer15_field_e =	REG_FIELD(SWREG(29), 1, 1),
	.cfg_dec_scan_map_49 =		REG_FIELD(SWREG(29), 6, 11),
	.cfg_dec_scan_map_48 =		REG_FIELD(SWREG(29), 12, 17),
	.cfg_dec_ref_invd_cur_3 =	REG_FIELD(SWREG(29), 16, 31),
	.cfg_dec_scan_map_47 =		REG_FIELD(SWREG(29), 18, 23),
	.cfg_dec_scan_map_46 =		REG_FIELD(SWREG(29), 24, 29),
	.cfg_dec_filt_mb_adj_3 =	REG_FIELD(SWREG(30), 0, 6),
	.cfg_dec_refer0_nbr =		REG_FIELD(SWREG(30), 0, 15),
	.cfg_dec_ref_dist_cur_0 =	REG_FIELD(SWREG(30), 0, 15),
	.cfg_dec_filt_mb_adj_2 =	REG_FIELD(SWREG(30), 7, 13),
	.cfg_dec_filt_mb_adj_1 =	REG_FIELD(SWREG(30), 14, 20),
	.cfg_dec_refer1_nbr =		REG_FIELD(SWREG(30), 16, 31),
	.cfg_dec_ref_dist_cur_1 =	REG_FIELD(SWREG(30), 16, 31),
	.cfg_dec_filt_mb_adj_0 =	REG_FIELD(SWREG(30), 21, 27),
	.cfg_dec_filt_sharpness =	REG_FIELD(SWREG(30), 28, 30),
	.cfg_dec_filt_type =		REG_FIELD(SWREG(30), 31, 31),
	.cfg_dec_scan_map_55 =		REG_FIELD(SWREG(31), 0, 5),
	.cfg_dec_filt_ref_adj_3 =	REG_FIELD(SWREG(31), 0, 6),
	.cfg_dec_refer2_nbr =		REG_FIELD(SWREG(31), 0, 15),
	.cfg_dec_ref_dist_cur_2 =	REG_FIELD(SWREG(31), 0, 15),
	.cfg_dec_scan_map_54 =		REG_FIELD(SWREG(31), 6, 11),
	.cfg_dec_filt_ref_adj_2 =	REG_FIELD(SWREG(31), 7, 13),
	.cfg_dec_scan_map_53 =		REG_FIELD(SWREG(31), 12, 17),
	.cfg_dec_filt_ref_adj_1 =	REG_FIELD(SWREG(31), 14, 20),
	.cfg_dec_refer3_nbr =		REG_FIELD(SWREG(31), 16, 31),
	.cfg_dec_ref_dist_cur_3 =	REG_FIELD(SWREG(31), 16, 31),
	.cfg_dec_scan_map_52 =		REG_FIELD(SWREG(31), 18, 23),
	.cfg_dec_filt_ref_adj_0 =	REG_FIELD(SWREG(31), 21, 27),
	.cfg_dec_scan_map_51 =		REG_FIELD(SWREG(31), 24, 29),
	.cfg_dec_scan_map_60 =		REG_FIELD(SWREG(32), 0, 5),
	.cfg_dec_filt_level_3 =		REG_FIELD(SWREG(32), 0, 5),
	.cfg_dec_refer4_nbr =		REG_FIELD(SWREG(32), 0, 15),
	.cfg_dec_ref_invd_col_0 =	REG_FIELD(SWREG(32), 0, 15),
	.cfg_dec_scan_map_59 =		REG_FIELD(SWREG(32), 6, 11),
	.cfg_dec_filt_level_2 =		REG_FIELD(SWREG(32), 6, 11),
	.cfg_dec_scan_map_58 =		REG_FIELD(SWREG(32), 12, 17),
	.cfg_dec_filt_level_1 =		REG_FIELD(SWREG(32), 12, 17),
	.cfg_dec_refer5_nbr =		REG_FIELD(SWREG(32), 16, 31),
	.cfg_dec_ref_invd_col_1 =	REG_FIELD(SWREG(32), 16, 31),
	.cfg_dec_scan_map_57 =		REG_FIELD(SWREG(32), 18, 23),
	.cfg_dec_filt_level_0 =		REG_FIELD(SWREG(32), 18, 23),
	.cfg_dec_scan_map_56 =		REG_FIELD(SWREG(32), 24, 29),
	.cfg_dec_quant_1 =		REG_FIELD(SWREG(33), 0, 10),
	.cfg_dec_refer6_nbr =		REG_FIELD(SWREG(33), 0, 15),
	.cfg_dec_ref_invd_col_2 =	REG_FIELD(SWREG(33), 0, 15),
	.cfg_dec_quant_0 =		REG_FIELD(SWREG(33), 11, 21),
	.cfg_dec_scan_map_63 =		REG_FIELD(SWREG(33), 12, 17),
	.cfg_dec_refer7_nbr =		REG_FIELD(SWREG(33), 16, 31),
	.cfg_dec_ref_invd_col_3 =	REG_FIELD(SWREG(33), 16, 31),
	.cfg_dec_scan_map_62 =		REG_FIELD(SWREG(33), 18, 23),
	.cfg_dec_quant_delta_1 =	REG_FIELD(SWREG(33), 22, 26),
	.cfg_dec_scan_map_61 =		REG_FIELD(SWREG(33), 24, 29),
	.cfg_dec_quant_delta_0 =	REG_FIELD(SWREG(33), 27, 31),
	.cfg_dec_refer8_nbr =		REG_FIELD(SWREG(34), 0, 15),
	.cfg_dec_pred_bc_tap_1_1 =	REG_FIELD(SWREG(34), 2, 11),
	.cfg_dec_pred_bc_tap_1_0 =	REG_FIELD(SWREG(34), 12, 21),
	.cfg_dec_refer9_nbr =		REG_FIELD(SWREG(34), 16, 31),
	.cfg_dec_pred_bc_tap_0_3 =	REG_FIELD(SWREG(34), 22, 31),
	.cfg_dec_refer10_nbr =		REG_FIELD(SWREG(35), 0, 15),
	.cfg_dec_pred_bc_tap_2_0 =	REG_FIELD(SWREG(35), 2, 11),
	.cfg_dec_pred_bc_tap_1_3 =	REG_FIELD(SWREG(35), 12, 21),
	.cfg_dec_refer11_nbr =		REG_FIELD(SWREG(35), 16, 31),
	.cfg_dec_pred_bc_tap_1_2 =	REG_FIELD(SWREG(35), 22, 31),
	.cfg_dec_refer12_nbr =		REG_FIELD(SWREG(36), 0, 15),
	.cfg_dec_pred_bc_tap_2_3 =	REG_FIELD(SWREG(36), 2, 11),
	.cfg_dec_pred_bc_tap_2_2 =	REG_FIELD(SWREG(36), 12, 21),
	.cfg_dec_refer13_nbr =		REG_FIELD(SWREG(36), 16, 31),
	.cfg_dec_pred_bc_tap_2_1 =	REG_FIELD(SWREG(36), 22, 31),
	.cfg_dec_refer14_nbr =		REG_FIELD(SWREG(37), 0, 15),
	.cfg_dec_pred_bc_tap_3_2 =	REG_FIELD(SWREG(37), 2, 11),
	.cfg_dec_pred_bc_tap_3_1 =	REG_FIELD(SWREG(37), 12, 21),
	.cfg_dec_refer15_nbr =		REG_FIELD(SWREG(37), 16, 31),
	.cfg_dec_pred_bc_tap_3_0 =	REG_FIELD(SWREG(37), 22, 31),
	.cfg_dec_refer_lterm_e =	REG_FIELD(SWREG(38), 0, 31),
	.cfg_dec_pred_bc_tap_4_1 =	REG_FIELD(SWREG(38), 2, 11),
	.cfg_dec_pred_bc_tap_4_0 =	REG_FIELD(SWREG(38), 12, 21),
	.cfg_dec_pred_bc_tap_3_3 =	REG_FIELD(SWREG(38), 22, 31),
	.cfg_dec_refer_valid_e =	REG_FIELD(SWREG(39), 0, 31),
	.cfg_dec_pred_bc_tap_5_0 =	REG_FIELD(SWREG(39), 2, 11),
	.cfg_dec_pred_bc_tap_4_3 =	REG_FIELD(SWREG(39), 12, 21),
	.cfg_dec_pred_bc_tap_4_2 =	REG_FIELD(SWREG(39), 22, 31),
	.cfg_dec_qtable_base =		REG_FIELD(SWREG(40), 0, 31),
	.cfg_dec_dir_mv_base =		REG_FIELD(SWREG(41), 0, 31),
	.cfg_dec_binit_rlist_f0 =	REG_FIELD(SWREG(42), 0, 4),
	.cfg_dec_pjpeg_dccb_base =	REG_FIELD(SWREG(42), 0, 31),
	.cfg_dec_pred_bc_tap_5_3 =	REG_FIELD(SWREG(42), 2, 11),
	.cfg_dec_binit_rlist_b0 =	REG_FIELD(SWREG(42), 5, 9),
	.cfg_dec_binit_rlist_f1 =	REG_FIELD(SWREG(42), 10, 14),
	.cfg_dec_pred_bc_tap_5_2 =	REG_FIELD(SWREG(42), 12, 21),
	.cfg_dec_binit_rlist_b1 =	REG_FIELD(SWREG(42), 15, 19),
	.cfg_dec_binit_rlist_f2 =	REG_FIELD(SWREG(42), 20, 24),
	.cfg_dec_pred_bc_tap_5_1 =	REG_FIELD(SWREG(42), 22, 31),
	.cfg_dec_binit_rlist_b2 =	REG_FIELD(SWREG(42), 25, 29),
	.cfg_dec_binit_rlist_f3 =	REG_FIELD(SWREG(43), 0, 4),
	.cfg_dec_pjpeg_dccr_base =	REG_FIELD(SWREG(43), 0, 31),
	.cfg_dec_pred_bc_tap_6_2 =	REG_FIELD(SWREG(43), 2, 11),
	.cfg_dec_binit_rlist_b3 =	REG_FIELD(SWREG(43), 5, 9),
	.cfg_dec_binit_rlist_f4 =	REG_FIELD(SWREG(43), 10, 14),
	.cfg_dec_pred_bc_tap_6_1 =	REG_FIELD(SWREG(43), 12, 21),
	.cfg_dec_binit_rlist_b4 =	REG_FIELD(SWREG(43), 15, 19),
	.cfg_dec_binit_rlist_f5 =	REG_FIELD(SWREG(43), 20, 24),
	.cfg_dec_pred_bc_tap_6_0 =	REG_FIELD(SWREG(43), 22, 31),
	.cfg_dec_binit_rlist_b5 =	REG_FIELD(SWREG(43), 25, 29),
	.cfg_dec_binit_rlist_f6 =	REG_FIELD(SWREG(44), 0, 4),
	.cfg_dec_pred_bc_tap_7_1 =	REG_FIELD(SWREG(44), 2, 11),
	.cfg_dec_binit_rlist_b6 =	REG_FIELD(SWREG(44), 5, 9),
	.cfg_dec_binit_rlist_f7 =	REG_FIELD(SWREG(44), 10, 14),
	.cfg_dec_pred_bc_tap_7_0 =	REG_FIELD(SWREG(44), 12, 21),
	.cfg_dec_binit_rlist_b7 =	REG_FIELD(SWREG(44), 15, 19),
	.cfg_dec_binit_rlist_f8 =	REG_FIELD(SWREG(44), 20, 24),
	.cfg_dec_pred_bc_tap_6_3 =	REG_FIELD(SWREG(44), 22, 31),
	.cfg_dec_binit_rlist_b8 =	REG_FIELD(SWREG(44), 25, 29),
	.cfg_dec_pred_tap_6_4 =		REG_FIELD(SWREG(45), 0, 1),
	.cfg_dec_binit_rlist_f9 =	REG_FIELD(SWREG(45), 0, 4),
	.cfg_dec_pred_tap_6_m1 =	REG_FIELD(SWREG(45), 2, 3),
	.cfg_dec_pred_tap_4_4 =		REG_FIELD(SWREG(45), 4, 5),
	.cfg_dec_binit_rlist_b9 =	REG_FIELD(SWREG(45), 5, 9),
	.cfg_dec_pred_tap_4_m1 =	REG_FIELD(SWREG(45), 6, 7),
	.cfg_dec_pred_tap_2_4 =		REG_FIELD(SWREG(45), 8, 9),
	.cfg_dec_pred_tap_2_m1 =	REG_FIELD(SWREG(45), 10, 11),
	.cfg_dec_binit_rlist_f10 =	REG_FIELD(SWREG(45), 10, 14),
	.cfg_dec_pred_bc_tap_7_3 =	REG_FIELD(SWREG(45), 12, 21),
	.cfg_dec_binit_rlist_b10 =	REG_FIELD(SWREG(45), 15, 19),
	.cfg_dec_binit_rlist_f11 =	REG_FIELD(SWREG(45), 20, 24),
	.cfg_dec_pred_bc_tap_7_2 =	REG_FIELD(SWREG(45), 22, 31),
	.cfg_dec_binit_rlist_b11 =	REG_FIELD(SWREG(45), 25, 29),
	.cfg_dec_binit_rlist_f12 =	REG_FIELD(SWREG(46), 0, 4),
	.cfg_dec_quant_3 =		REG_FIELD(SWREG(46), 0, 10),
	.cfg_dec_binit_rlist_b12 =	REG_FIELD(SWREG(46), 5, 9),
	.cfg_dec_binit_rlist_f13 =	REG_FIELD(SWREG(46), 10, 14),
	.cfg_dec_quant_2 =		REG_FIELD(SWREG(46), 11, 21),
	.cfg_dec_binit_rlist_b13 =	REG_FIELD(SWREG(46), 15, 19),
	.cfg_dec_binit_rlist_f14 =	REG_FIELD(SWREG(46), 20, 24),
	.cfg_dec_quant_delta_3 =	REG_FIELD(SWREG(46), 22, 26),
	.cfg_dec_binit_rlist_b14 =	REG_FIELD(SWREG(46), 25, 29),
	.cfg_dec_quant_delta_2 =	REG_FIELD(SWREG(46), 27, 31),
	.cfg_dec_binit_rlist_f15 =	REG_FIELD(SWREG(47), 0, 4),
	.cfg_dec_quant_5 =		REG_FIELD(SWREG(47), 0, 10),
	.cfg_dec_binit_rlist_b15 =	REG_FIELD(SWREG(47), 5, 9),
	.cfg_dec_pinit_rlist_f0 =	REG_FIELD(SWREG(47), 10, 14),
	.cfg_dec_quant_4 =		REG_FIELD(SWREG(47), 11, 21),
	.cfg_dec_pinit_rlist_f1 =	REG_FIELD(SWREG(47), 15, 19),
	.cfg_dec_pinit_rlist_f2 =	REG_FIELD(SWREG(47), 20, 24),
	.cfg_dec_pinit_rlist_f3 =	REG_FIELD(SWREG(47), 25, 29),
	.cfg_dec_quant_delta_4 =	REG_FIELD(SWREG(47), 27, 31),
	.cfg_dec_startmb_y =		REG_FIELD(SWREG(48), 15, 22),
	.cfg_dec_startmb_x =		REG_FIELD(SWREG(48), 23, 31),
	.cfg_dec_pred_bc_tap_0_2 =	REG_FIELD(SWREG(49), 2, 11),
	.cfg_dec_pred_bc_tap_0_1 =	REG_FIELD(SWREG(49), 12, 21),
	.cfg_dec_pred_bc_tap_0_0 =	REG_FIELD(SWREG(49), 22, 31),
	.cfg_dec_refbu_y_offset =	REG_FIELD(SWREG(51), 0, 8),
	.cfg_dec_refbu_fparmod_e =	REG_FIELD(SWREG(51), 12, 12),
	.cfg_dec_refbu_eval_e =		REG_FIELD(SWREG(51), 13, 13),
	.cfg_dec_refbu_picid =		REG_FIELD(SWREG(51), 14, 18),
	.cfg_dec_refbu_thr =		REG_FIELD(SWREG(51), 19, 30),
	.cfg_dec_refbu_e =		REG_FIELD(SWREG(51), 31, 31),
	.cfg_dec_refbu_intra_sum =	REG_FIELD(SWREG(52), 0, 15),
	.cfg_dec_refbu_hit_sum =	REG_FIELD(SWREG(52), 16, 31),
	.cfg_dec_refbu_y_mv_sum =	REG_FIELD(SWREG(53), 0, 21),
	.cfg_dec_apf_threshold =	REG_FIELD(SWREG(55), 0, 13),
	.cfg_dec_refbu2_picid =		REG_FIELD(SWREG(55), 14, 18),
	.cfg_dec_refbu2_thr =		REG_FIELD(SWREG(55), 19, 30),
	.cfg_dec_refbu2_buf_e =		REG_FIELD(SWREG(55), 31, 31),
	.cfg_dec_refbu_bot_sum =	REG_FIELD(SWREG(56), 0, 15),
	.cfg_dec_refbu_top_sum =	REG_FIELD(SWREG(56), 16, 31),
	.cfg_dec_stream_len_ext =	REG_FIELD(SWREG(57), 0, 0),
	.cfg_dec_inter_dblspeed =	REG_FIELD(SWREG(57), 1, 1),
	.cfg_dec_intra_dblspeed =	REG_FIELD(SWREG(57), 2, 2),
	.cfg_dec_intra_dbl3t =		REG_FIELD(SWREG(57), 3, 3),
	.cfg_dec_paral_bus_e =		REG_FIELD(SWREG(57), 4, 4),
	.cfg_dec_axiwr_sel =		REG_FIELD(SWREG(57), 5, 5),
	.cfg_dec_pref_sigchan =		REG_FIELD(SWREG(57), 6, 6),
	.cfg_dec_cache_enable =		REG_FIELD(SWREG(57), 7, 7),
	.cfg_dec_ch8pix_base =		REG_FIELD(SWREG(59), 0, 31),
	.cfg_dec_pp_e =			REG_FIELD(SWREG(60), 0, 0),
	.cfg_dec_pp_pipeline_e =	REG_FIELD(SWREG(60), 1, 1),
	.cfg_dec_pp_irq_dis =		REG_FIELD(SWREG(60), 4, 4),
	.cfg_dec_pp_irq =		REG_FIELD(SWREG(60), 8, 8),
	.cfg_dec_pp_rdy_int =		REG_FIELD(SWREG(60), 12, 12),
	.cfg_dec_pp_bus_int =		REG_FIELD(SWREG(60), 13, 13),
	.cfg_dec_pp_max_burst =		REG_FIELD(SWREG(61), 0, 4),
	.cfg_dec_pp_out_swap32_e =	REG_FIELD(SWREG(61), 5, 5),
	.cfg_dec_pp_out_endian =	REG_FIELD(SWREG(61), 6, 6),
	.cfg_dec_pp_in_endian =		REG_FIELD(SWREG(61), 7, 7),
	.cfg_dec_pp_clk_gate_e =	REG_FIELD(SWREG(61), 8, 8),
	.cfg_dec_pp_data_disc_e =	REG_FIELD(SWREG(61), 9, 9),
	.cfg_dec_pp_in_swap32_e =	REG_FIELD(SWREG(61), 10, 10),
	.cfg_dec_pp_in_a1_endian =	REG_FIELD(SWREG(61), 11, 11),
	.cfg_dec_pp_in_a1_swap32 =	REG_FIELD(SWREG(61), 12, 12),
	.cfg_dec_pp_in_a2_endsel =	REG_FIELD(SWREG(61), 13, 13),
	.cfg_dec_pp_scmd_dis =		REG_FIELD(SWREG(61), 14, 14),
	.cfg_dec_pp_ahb_hlock_e =	REG_FIELD(SWREG(61), 15, 15),
	.cfg_dec_pp_axi_wr_id =		REG_FIELD(SWREG(61), 16, 23),
	.cfg_dec_pp_axi_rd_id =		REG_FIELD(SWREG(61), 24, 31),
	.cfg_dec_deint_edge_det =	REG_FIELD(SWREG(62), 0, 14),
	.cfg_dec_deint_blend_e =	REG_FIELD(SWREG(62), 15, 15),
	.cfg_dec_deint_threshold =	REG_FIELD(SWREG(62), 16, 29),
	.cfg_dec_deint_e =		REG_FIELD(SWREG(62), 31, 31),
	.cfg_dec_pp_in_lu_base =	REG_FIELD(SWREG(63), 0, 31),
	.cfg_dec_pp_in_cb_base =	REG_FIELD(SWREG(64), 0, 31),
	.cfg_dec_pp_in_cr_base =	REG_FIELD(SWREG(65), 0, 31),
	.cfg_dec_pp_out_lu_base =	REG_FIELD(SWREG(66), 0, 31),
	.cfg_dec_pp_out_ch_base =	REG_FIELD(SWREG(67), 0, 31),
	.cfg_dec_contrast_off1 =	REG_FIELD(SWREG(68), 0, 9),
	.cfg_dec_contrast_off2 =	REG_FIELD(SWREG(68), 10, 19),
	.cfg_dec_contrast_thr1 =	REG_FIELD(SWREG(68), 24, 31),
	.cfg_dec_contrast_thr2 =	REG_FIELD(SWREG(69), 0, 7),
	.cfg_dec_color_coeffa1 =	REG_FIELD(SWREG(69), 8, 17),
	.cfg_dec_color_coeffa2 =	REG_FIELD(SWREG(69), 18, 27),
	.cfg_dec_pp_out_cr_first =	REG_FIELD(SWREG(69), 28, 28),
	.cfg_dec_pp_out_start_ch =	REG_FIELD(SWREG(69), 29, 29),
	.cfg_dec_pp_in_cr_first =	REG_FIELD(SWREG(69), 30, 30),
	.cfg_dec_pp_in_start_ch =	REG_FIELD(SWREG(69), 31, 31),
	.cfg_dec_color_coeffb =		REG_FIELD(SWREG(70), 0, 9),
	.cfg_dec_color_coeffc =		REG_FIELD(SWREG(70), 10, 19),
	.cfg_dec_color_coeffd =		REG_FIELD(SWREG(70), 20, 29),
	.cfg_dec_color_coeffe =		REG_FIELD(SWREG(71), 0, 9),
	.cfg_dec_color_coefff =		REG_FIELD(SWREG(71), 10, 17),
	.cfg_dec_rotation_mode =	REG_FIELD(SWREG(71), 18, 20),
	.cfg_dec_crop_startx =		REG_FIELD(SWREG(71), 21, 29),
	.cfg_dec_pp_in_width =		REG_FIELD(SWREG(72), 0, 8),
	.cfg_dec_pp_in_height =		REG_FIELD(SWREG(72), 9, 16),
	.cfg_dec_rangemap_coef_y =	REG_FIELD(SWREG(72), 18, 22),
	.cfg_dec_crop_starty =		REG_FIELD(SWREG(72), 24, 31),
	.cfg_dec_pp_bot_yin_base =	REG_FIELD(SWREG(73), 0, 31),
	.cfg_dec_pp_bot_cin_base =	REG_FIELD(SWREG(74), 0, 31),
	.cfg_dec_scale_wratio =		REG_FIELD(SWREG(79), 0, 17),
	.cfg_dec_rgb_g_padd =		REG_FIELD(SWREG(79), 18, 22),
	.cfg_dec_rgb_r_padd =		REG_FIELD(SWREG(79), 23, 27),
	.cfg_dec_rgb_pix_in32 =		REG_FIELD(SWREG(79), 28, 28),
	.cfg_dec_ycbcr_range =		REG_FIELD(SWREG(79), 29, 29),
	.cfg_dec_rangemap_c_e =		REG_FIELD(SWREG(79), 30, 30),
	.cfg_dec_rangemap_y_e =		REG_FIELD(SWREG(79), 31, 31),
	.cfg_dec_scale_hratio =		REG_FIELD(SWREG(80), 0, 17),
	.cfg_dec_rgb_b_padd =		REG_FIELD(SWREG(80), 18, 22),
	.cfg_dec_ver_scale_mode =	REG_FIELD(SWREG(80), 23, 24),
	.cfg_dec_hor_scale_mode =	REG_FIELD(SWREG(80), 25, 26),
	.cfg_dec_pp_in_struct =		REG_FIELD(SWREG(80), 27, 29),
	.cfg_dec_pp_fast_scale_e =	REG_FIELD(SWREG(80), 30, 30),
	.cfg_dec_hscale_invra =		REG_FIELD(SWREG(81), 0, 15),
	.cfg_dec_wscale_invra =		REG_FIELD(SWREG(81), 16, 31),
	.cfg_dec_r_mask =		REG_FIELD(SWREG(82), 0, 31),
	.cfg_dec_g_mask =		REG_FIELD(SWREG(83), 0, 31),
	.cfg_dec_b_mask =		REG_FIELD(SWREG(84), 0, 31),
	.cfg_dec_pp_crop8_d_e =		REG_FIELD(SWREG(85), 0, 0),
	.cfg_dec_pp_crop8_r_e =		REG_FIELD(SWREG(85), 1, 1),
	.cfg_dec_pp_out_swap16_e =	REG_FIELD(SWREG(85), 2, 2),
	.cfg_dec_pp_out_tiled_e =	REG_FIELD(SWREG(85), 3, 3),
	.cfg_dec_pp_out_width =		REG_FIELD(SWREG(85), 4, 14),
	.cfg_dec_pp_out_height =	REG_FIELD(SWREG(85), 15, 25),
	.cfg_dec_pp_out_format =	REG_FIELD(SWREG(85), 26, 28),
	.cfg_dec_pp_in_format =		REG_FIELD(SWREG(85), 29, 31),
	.cfg_dec_mask1_startx =		REG_FIELD(SWREG(86), 0, 10),
	.cfg_dec_mask1_starty =		REG_FIELD(SWREG(86), 11, 21),
	.cfg_dec_mask1_ablend_e =	REG_FIELD(SWREG(86), 22, 22),
	.cfg_dec_rangemap_coef_c =	REG_FIELD(SWREG(86), 23, 27),
	.cfg_dec_pp_in_format_es =	REG_FIELD(SWREG(86), 29, 31),
	.cfg_dec_mask2_startx =		REG_FIELD(SWREG(87), 0, 10),
	.cfg_dec_mask2_starty =		REG_FIELD(SWREG(87), 11, 21),
	.cfg_dec_mask2_ablend_e =	REG_FIELD(SWREG(87), 22, 22),
	.cfg_dec_mask1_endx =		REG_FIELD(SWREG(88), 0, 10),
	.cfg_dec_mask1_endy =		REG_FIELD(SWREG(88), 11, 21),
	.cfg_dec_mask1_e =		REG_FIELD(SWREG(88), 22, 22),
	.cfg_dec_ext_orig_width =	REG_FIELD(SWREG(88), 23, 31),
	.cfg_dec_mask2_endx =		REG_FIELD(SWREG(89), 0, 10),
	.cfg_dec_mask2_endy =		REG_FIELD(SWREG(89), 11, 21),
	.cfg_dec_mask2_e =		REG_FIELD(SWREG(89), 22, 22),
	.cfg_dec_down_cross =		REG_FIELD(SWREG(90), 0, 10),
	.cfg_dec_up_cross =		REG_FIELD(SWREG(90), 15, 25),
	.cfg_dec_down_cross_e =		REG_FIELD(SWREG(90), 26, 26),
	.cfg_dec_up_cross_e =		REG_FIELD(SWREG(90), 27, 27),
	.cfg_dec_left_cross_e =		REG_FIELD(SWREG(90), 28, 28),
	.cfg_dec_right_cross_e =	REG_FIELD(SWREG(90), 29, 29),
	.cfg_dec_left_cross =		REG_FIELD(SWREG(91), 0, 10),
	.cfg_dec_right_cross =		REG_FIELD(SWREG(91), 11, 21),
	.cfg_dec_dither_select_b =	REG_FIELD(SWREG(91), 26, 27),
	.cfg_dec_dither_select_g =	REG_FIELD(SWREG(91), 28, 29),
	.cfg_dec_dither_select_r =	REG_FIELD(SWREG(91), 30, 31),
	.cfg_dec_display_width =	REG_FIELD(SWREG(92), 0, 11),
	.cfg_dec_crop_startx_ext =	REG_FIELD(SWREG(92), 20, 22),
	.cfg_dec_crop_starty_ext =	REG_FIELD(SWREG(92), 23, 25),
	.cfg_dec_pp_in_w_ext =		REG_FIELD(SWREG(92), 26, 28),
	.cfg_dec_pp_in_h_ext =		REG_FIELD(SWREG(92), 29, 31),
	.cfg_dec_ablend1_base =		REG_FIELD(SWREG(93), 0, 31),
	.cfg_dec_ablend2_base =		REG_FIELD(SWREG(94), 0, 31),
	.cfg_dec_ablend1_scanl =	REG_FIELD(SWREG(95), 0, 12),
	.cfg_dec_ablend2_scanl =	REG_FIELD(SWREG(95), 13, 25),
	.cfg_dec_pp_out_w_ext =		REG_FIELD(SWREG(98), 0, 0),
	.cfg_dec_pp_out_h_ext =		REG_FIELD(SWREG(98), 1, 1),
	.cfg_dec_soft_reset =		REG_FIELD(SWREG(101), 0, 0),
};
