struct hantro_field_dec {
	struct reg_field cfg_dec_pp_max_burst;
	struct reg_field cfg_dec_pp_scmd_dis;
	struct reg_field cfg_dec_pp_axi_rd_id;
	struct reg_field cfg_dec_pp_axi_wr_id;
	struct reg_field cfg_dec_color_coeffa1;
	struct reg_field cfg_dec_color_coeffa2;
	struct reg_field cfg_dec_color_coeffb;
	struct reg_field cfg_dec_color_coeffc;
	struct reg_field cfg_dec_color_coeffd;
	struct reg_field cfg_dec_color_coeffe;
	struct reg_field cfg_dec_color_coefff;
	struct reg_field cfg_dec_scale_wratio;
	struct reg_field cfg_dec_hor_scale_mode;
	struct reg_field cfg_dec_ver_scale_mode;
	struct reg_field cfg_dec_scale_hratio;
	struct reg_field cfg_dec_wscale_invra;
	struct reg_field cfg_dec_hscale_invra;
	struct reg_field cfg_dec_up_cross;
	struct reg_field cfg_dec_down_cross;
	struct reg_field cfg_dec_left_cross;
	struct reg_field cfg_dec_right_cross;
	struct reg_field cfg_dec_r_mask;
	struct reg_field cfg_dec_g_mask;
	struct reg_field cfg_dec_b_mask;
	struct reg_field cfg_dec_pp_bot_yin_base;
	struct reg_field cfg_dec_pp_bot_cin_base;
	struct reg_field cfg_dec_crop_startx;
	struct reg_field cfg_dec_crop_starty_ext;
	struct reg_field cfg_dec_crop_starty;
	struct reg_field cfg_dec_crop_startx_ext;
	struct reg_field cfg_dec_pp_crop8_d_e;
	struct reg_field cfg_dec_pp_crop8_r_e;
	struct reg_field cfg_dec_rangemap_coef_y;
	struct reg_field cfg_dec_ycbcr_range;
	struct reg_field cfg_dec_rangemap_coef_c;
	struct reg_field cfg_dec_rgb_r_padd;
	struct reg_field cfg_dec_rgb_g_padd;
	struct reg_field cfg_dec_rgb_b_padd;
	struct reg_field cfg_dec_pp_in_lu_base;
	struct reg_field cfg_dec_pp_in_cb_base;
	struct reg_field cfg_dec_pp_in_cr_base;
	struct reg_field cfg_dec_pp_out_lu_base;
	struct reg_field cfg_dec_pp_out_ch_base;
	struct reg_field cfg_dec_ablend1_base;
	struct reg_field cfg_dec_ablend2_base;
	struct reg_field cfg_dec_ablend1_scanl;
	struct reg_field cfg_dec_ablend2_scanl;
	struct reg_field cfg_dec_mask1_startx;
	struct reg_field cfg_dec_mask1_endx;
	struct reg_field cfg_dec_mask1_starty;
	struct reg_field cfg_dec_mask1_endy;
	struct reg_field cfg_dec_mask2_startx;
	struct reg_field cfg_dec_mask2_endx;
	struct reg_field cfg_dec_mask2_starty;
	struct reg_field cfg_dec_mask2_endy;
	struct reg_field cfg_dec_deint_threshold;
	struct reg_field cfg_dec_deint_edge_det;
	struct reg_field cfg_dec_contrast_thr1;
	struct reg_field cfg_dec_contrast_thr2;
	struct reg_field cfg_dec_contrast_off1;
	struct reg_field cfg_dec_contrast_off2;
	struct reg_field cfg_dec_pp_in_width;
	struct reg_field cfg_dec_pp_in_w_ext;
	struct reg_field cfg_dec_ext_orig_width;
	struct reg_field cfg_dec_pp_in_height;
	struct reg_field cfg_dec_pp_in_h_ext;
	struct reg_field cfg_dec_pp_out_width;
	struct reg_field cfg_dec_pp_out_height;
	struct reg_field cfg_dec_dither_select_r;
	struct reg_field cfg_dec_dither_select_g;
	struct reg_field cfg_dec_dither_select_b;
	struct reg_field cfg_dec_pp_in_endian;
	struct reg_field cfg_dec_pp_in_a1_endian;
	struct reg_field cfg_dec_pp_in_a2_endsel;
	struct reg_field cfg_dec_pp_out_endian;
	struct reg_field cfg_dec_rgb_pix_in32;
	struct reg_field cfg_dec_pp_in_swap32_e;
	struct reg_field cfg_dec_pp_in_a1_swap32;
	struct reg_field cfg_dec_pp_out_swap16_e;
	struct reg_field cfg_dec_pp_out_swap32_e;
	struct reg_field cfg_dec_pp_in_start_ch;
	struct reg_field cfg_dec_pp_out_start_ch;
	struct reg_field cfg_dec_pp_in_cr_first;
	struct reg_field cfg_dec_pp_out_cr_first;
	struct reg_field cfg_dec_pp_in_struct;
	struct reg_field cfg_dec_rotation_mode;
	struct reg_field cfg_dec_pp_in_format;
	struct reg_field cfg_dec_pp_out_format;
	struct reg_field cfg_dec_pp_in_format_es;
	struct reg_field cfg_dec_display_width;
	struct reg_field cfg_dec_pp_irq;
	struct reg_field cfg_dec_pp_irq_dis;
	struct reg_field cfg_dec_pp_rdy_int;
	struct reg_field cfg_dec_pp_bus_int;
	struct reg_field cfg_dec_pp_e;
	struct reg_field cfg_dec_deint_blend_e;
	struct reg_field cfg_dec_deint_e;
	struct reg_field cfg_dec_pp_clk_gate_e;
	struct reg_field cfg_dec_pp_pipeline_e;
	struct reg_field cfg_dec_rangemap_y_e;
	struct reg_field cfg_dec_rangemap_c_e;
	struct reg_field cfg_dec_pp_data_disc_e;
	struct reg_field cfg_dec_mask1_e;
	struct reg_field cfg_dec_mask2_e;
	struct reg_field cfg_dec_mask1_ablend_e;
	struct reg_field cfg_dec_mask2_ablend_e;
	struct reg_field cfg_dec_up_cross_e;
	struct reg_field cfg_dec_down_cross_e;
	struct reg_field cfg_dec_left_cross_e;
	struct reg_field cfg_dec_right_cross_e;
	struct reg_field cfg_dec_pp_ahb_hlock_e;
	struct reg_field cfg_dec_dec_out_tiled_e;
	struct reg_field cfg_dec_dec_latency;
	struct reg_field cfg_dec_mvc_e;
	struct reg_field cfg_dec_pic_fixed_quant;
	struct reg_field cfg_dec_filtering_dis;
	struct reg_field cfg_dec_skip_mode;
	struct reg_field cfg_dec_dec_scmd_dis;
	struct reg_field cfg_dec_dec_adv_pre_dis;
	struct reg_field cfg_dec_priority_mode;
	struct reg_field cfg_dec_refbu2_thr;
	struct reg_field cfg_dec_refbu2_picid;
	struct reg_field cfg_dec_stream_len;
	struct reg_field cfg_dec_stream_len_ext;
	struct reg_field cfg_dec_init_qp;
	struct reg_field cfg_dec_startmb_y;
	struct reg_field cfg_dec_startmb_x;
	struct reg_field cfg_dec_apf_threshold;
	struct reg_field cfg_dec_dec_mode;
	struct reg_field cfg_dec_dec_in_endian;
	struct reg_field cfg_dec_dec_out_endian;
	struct reg_field cfg_dec_dec_inswap32_e;
	struct reg_field cfg_dec_dec_outswap32_e;
	struct reg_field cfg_dec_dec_strswap32_e;
	struct reg_field cfg_dec_dec_strendian_e;
	struct reg_field cfg_dec_dec_irq;
	struct reg_field cfg_dec_dec_irq_dis;
	struct reg_field cfg_dec_dec_rdy_int;
	struct reg_field cfg_dec_dec_bus_int;
	struct reg_field cfg_dec_dec_buffer_int;
	struct reg_field cfg_dec_dec_aso_int;
	struct reg_field cfg_dec_dec_slice_int;
	struct reg_field cfg_dec_dec_pic_inf;
	struct reg_field cfg_dec_dec_error_int;
	struct reg_field cfg_dec_dec_timeout;
	struct reg_field cfg_dec_dec_axi_rd_id;
	struct reg_field cfg_dec_dec_axi_wr_id;
	struct reg_field cfg_dec_dec_max_burst;
	struct reg_field cfg_dec_paral_bus_e;
	struct reg_field cfg_dec_dec_data_disc_e;
	struct reg_field cfg_dec_axiwr_sel;
	struct reg_field cfg_dec_dec_e;
	struct reg_field cfg_dec_refbu2_buf_e;
	struct reg_field cfg_dec_dec_out_dis;
	struct reg_field cfg_dec_dec_clk_gate_e;
	struct reg_field cfg_dec_dec_timeout_e;
	struct reg_field cfg_dec_picord_count_e;
	struct reg_field cfg_dec_seq_mbaff_e;
	struct reg_field cfg_dec_reftopfirst_e;
	struct reg_field cfg_dec_ref_topfield_e;
	struct reg_field cfg_dec_write_mvs_e;
	struct reg_field cfg_dec_sorenson_e;
	struct reg_field cfg_dec_fwd_interlace_e;
	struct reg_field cfg_dec_pic_topfield_e;
	struct reg_field cfg_dec_pic_inter_e;
	struct reg_field cfg_dec_pic_b_e;
	struct reg_field cfg_dec_pic_fieldmode_e;
	struct reg_field cfg_dec_pic_interlace_e;
	struct reg_field cfg_dec_pjpeg_e;
	struct reg_field cfg_dec_divx3_e;
	struct reg_field cfg_dec_rlc_mode_e;
	struct reg_field cfg_dec_ch_8pix_ileav_e;
	struct reg_field cfg_dec_start_code_e;
	struct reg_field cfg_dec_inter_dblspeed;
	struct reg_field cfg_dec_intra_dblspeed;
	struct reg_field cfg_dec_intra_dbl3t;
	struct reg_field cfg_dec_pref_sigchan;
	struct reg_field cfg_dec_cache_enable;
	struct reg_field cfg_dec_dec_ahb_hlock_e;
	struct reg_field cfg_dec_soft_reset;
	struct reg_field cfg_dec_pred_bc_tap_0_2;
	struct reg_field cfg_dec_pred_bc_tap_0_1;
	struct reg_field cfg_dec_pred_bc_tap_0_0;
	struct reg_field cfg_dec_dec_ch8pix_base;
	struct reg_field cfg_dec_qtable_base;
	struct reg_field cfg_dec_dir_mv_base;
	struct reg_field cfg_dec_dec_out_base;
	struct reg_field cfg_dec_rlc_vlc_base;
	struct reg_field cfg_dec_refbu_y_offset;
	struct reg_field cfg_dec_refbu_fparmod_e;
	struct reg_field cfg_dec_refbu_eval_e;
	struct reg_field cfg_dec_refbu_picid;
	struct reg_field cfg_dec_refbu_thr;
	struct reg_field cfg_dec_refbu_e;
	struct reg_field cfg_dec_refbu_bot_sum;
	struct reg_field cfg_dec_refbu_top_sum;
	struct reg_field cfg_dec_refbu_intra_sum;
	struct reg_field cfg_dec_refbu_hit_sum;
	struct reg_field cfg_dec_refbu_y_mv_sum;
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
	struct reg_field cfg_dec_refer0_topc_e;
	struct reg_field cfg_dec_refer0_base;
	struct reg_field cfg_dec_refer0_field_e;
	struct reg_field cfg_dec_refer1_topc_e;
	struct reg_field cfg_dec_refer1_base;
	struct reg_field cfg_dec_refer1_field_e;
	struct reg_field cfg_dec_refer2_topc_e;
	struct reg_field cfg_dec_refer2_base;
	struct reg_field cfg_dec_refer2_field_e;
	struct reg_field cfg_dec_refer3_topc_e;
	struct reg_field cfg_dec_refer3_base;
	struct reg_field cfg_dec_refer3_field_e;
	struct reg_field cfg_dec_refer4_topc_e;
	struct reg_field cfg_dec_refer4_base;
	struct reg_field cfg_dec_refer4_field_e;
	struct reg_field cfg_dec_refer5_topc_e;
	struct reg_field cfg_dec_refer5_base;
	struct reg_field cfg_dec_refer5_field_e;
	struct reg_field cfg_dec_refer6_topc_e;
	struct reg_field cfg_dec_refer6_base;
	struct reg_field cfg_dec_refer6_field_e;
	struct reg_field cfg_dec_refer7_topc_e;
	struct reg_field cfg_dec_refer7_base;
	struct reg_field cfg_dec_refer7_field_e;
	struct reg_field cfg_dec_refer8_topc_e;
	struct reg_field cfg_dec_refer8_base;
	struct reg_field cfg_dec_refer8_field_e;
	struct reg_field cfg_dec_refer9_topc_e;
	struct reg_field cfg_dec_refer9_base;
	struct reg_field cfg_dec_refer9_field_e;
	struct reg_field cfg_dec_refer10_topc_e;
	struct reg_field cfg_dec_refer10_base;
	struct reg_field cfg_dec_refer10_field_e;
	struct reg_field cfg_dec_refer11_topc_e;
	struct reg_field cfg_dec_refer11_base;
	struct reg_field cfg_dec_refer11_field_e;
	struct reg_field cfg_dec_refer12_topc_e;
	struct reg_field cfg_dec_refer12_base;
	struct reg_field cfg_dec_refer12_field_e;
	struct reg_field cfg_dec_refer13_topc_e;
	struct reg_field cfg_dec_refer13_base;
	struct reg_field cfg_dec_refer13_field_e;
	struct reg_field cfg_dec_refer14_topc_e;
	struct reg_field cfg_dec_refer14_base;
	struct reg_field cfg_dec_refer14_field_e;
	struct reg_field cfg_dec_refer15_topc_e;
	struct reg_field cfg_dec_refer15_base;
	struct reg_field cfg_dec_refer15_field_e;
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
	struct reg_field cfg_dec_pjpeg_se;
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
	struct reg_field cfg_dec_ttmbf;
	struct reg_field cfg_dec_dq_edges;
	struct reg_field cfg_dec_pjpeg_ah;
	struct reg_field cfg_dec_dct2_start_bit;
	struct reg_field cfg_dec_pjpeg_hdiv8;
	struct reg_field cfg_dec_alt_pquant;
	struct reg_field cfg_dec_pjpeg_wdiv8;
	struct reg_field cfg_dec_pjpeg_fildown_e;
	struct reg_field cfg_dec_dct1_start_bit;
	struct reg_field cfg_dec_bitplane2_e;
	struct reg_field cfg_dec_blackwhite_e;
	struct reg_field cfg_dec_bitplane1_e;
	struct reg_field cfg_dec_bitplane0_e;
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
	struct reg_field cfg_dec_transacfrm;
	struct reg_field cfg_dec_multistream_e;
	struct reg_field cfg_dec_intradc_vlc_thr;
	struct reg_field cfg_dec_transdctab;
	struct reg_field cfg_dec_huffman_e;
	struct reg_field cfg_dec_strm1_start_bit;
	struct reg_field cfg_dec_fast_uvmc_e;
	struct reg_field cfg_dec_range_red_frm_e;
	struct reg_field cfg_dec_dqbi_level;
	struct reg_field cfg_dec_type1_quant_e;
	struct reg_field cfg_dec_dq_profile;
	struct reg_field cfg_dec_qscale_type;
	struct reg_field cfg_dec_sync_marker_e;
	struct reg_field cfg_dec_strm_start_bit;
	struct reg_field cfg_dec_divx3_slice_size;
	struct reg_field cfg_dec_var_threshold;
	struct reg_field cfg_dec_rv_bwd_scale;
	struct reg_field cfg_dec_pjpeg_rest_freq;
	struct reg_field cfg_dec_init_dc_comp1;
	struct reg_field cfg_dec_divx_idct_e;
	struct reg_field cfg_dec_mv_threshold;
	struct reg_field cfg_dec_variance_test_e;
	struct reg_field cfg_dec_loop_filt_limit;
	struct reg_field cfg_dec_ref_dist_bwd;
	struct reg_field cfg_dec_rv_fwd_scale;
	struct reg_field cfg_dec_init_dc_comp0;
	struct reg_field cfg_dec_ref_dist_fwd;
	struct reg_field cfg_dec_mv_scalefactor;
	struct reg_field cfg_dec_rv_osv_quant;
	struct reg_field cfg_dec_rv_profile;
	struct reg_field cfg_dec_pic_slice_am;
	struct reg_field cfg_dec_ishift0;
	struct reg_field cfg_dec_stream1_len;
	struct reg_field cfg_dec_mb_ctrl_base;
	struct reg_field cfg_dec_iscale0;
	struct reg_field cfg_dec_icomp0_e;
	struct reg_field cfg_dec_coeffs_part_am;
	struct reg_field cfg_dec_pjpeg_dccb_base;
	struct reg_field cfg_dec_pred_bc_tap_5_3;
	struct reg_field cfg_dec_pred_bc_tap_5_2;
	struct reg_field cfg_dec_pred_bc_tap_5_1;
	struct reg_field cfg_dec_pjpeg_dccr_base;
	struct reg_field cfg_dec_pred_bc_tap_6_2;
	struct reg_field cfg_dec_pred_bc_tap_6_1;
	struct reg_field cfg_dec_pred_bc_tap_6_0;
	struct reg_field cfg_dec_pred_bc_tap_7_1;
	struct reg_field cfg_dec_pred_bc_tap_7_0;
	struct reg_field cfg_dec_pred_bc_tap_6_3;
	struct reg_field cfg_dec_pred_tap_6_4;
	struct reg_field cfg_dec_pred_tap_6_m1;
	struct reg_field cfg_dec_pred_tap_4_4;
	struct reg_field cfg_dec_pred_tap_4_m1;
	struct reg_field cfg_dec_pred_tap_2_4;
	struct reg_field cfg_dec_pred_tap_2_m1;
	struct reg_field cfg_dec_pred_bc_tap_7_3;
	struct reg_field cfg_dec_pred_bc_tap_7_2;
	struct reg_field cfg_dec_scan_map_60;
	struct reg_field cfg_dec_filt_level_3;
	struct reg_field cfg_dec_ref_invd_col_0;
	struct reg_field cfg_dec_scan_map_59;
	struct reg_field cfg_dec_filt_level_2;
	struct reg_field cfg_dec_scan_map_58;
	struct reg_field cfg_dec_filt_level_1;
	struct reg_field cfg_dec_ref_invd_col_1;
	struct reg_field cfg_dec_scan_map_57;
	struct reg_field cfg_dec_filt_level_0;
	struct reg_field cfg_dec_scan_map_56;
	struct reg_field cfg_dec_quant_1;
	struct reg_field cfg_dec_ref_invd_col_2;
	struct reg_field cfg_dec_quant_0;
	struct reg_field cfg_dec_scan_map_63;
	struct reg_field cfg_dec_ref_invd_col_3;
	struct reg_field cfg_dec_scan_map_62;
	struct reg_field cfg_dec_quant_delta_1;
	struct reg_field cfg_dec_scan_map_61;
	struct reg_field cfg_dec_quant_delta_0;
	struct reg_field cfg_dec_refer0_base;
	struct reg_field cfg_dec_jpg_ch_out_base;
	struct reg_field cfg_dec_filt_mb_adj_3;
	struct reg_field cfg_dec_ref_dist_cur_0;
	struct reg_field cfg_dec_filt_mb_adj_2;
	struct reg_field cfg_dec_filt_mb_adj_1;
	struct reg_field cfg_dec_ref_dist_cur_1;
	struct reg_field cfg_dec_filt_mb_adj_0;
	struct reg_field cfg_dec_filt_sharpness;
	struct reg_field cfg_dec_filt_type;
	struct reg_field cfg_dec_scan_map_55;
	struct reg_field cfg_dec_filt_ref_adj_3;
	struct reg_field cfg_dec_ref_dist_cur_2;
	struct reg_field cfg_dec_scan_map_54;
	struct reg_field cfg_dec_filt_ref_adj_2;
	struct reg_field cfg_dec_scan_map_53;
	struct reg_field cfg_dec_filt_ref_adj_1;
	struct reg_field cfg_dec_ref_dist_cur_3;
	struct reg_field cfg_dec_scan_map_52;
	struct reg_field cfg_dec_filt_ref_adj_0;
	struct reg_field cfg_dec_scan_map_51;
	struct reg_field cfg_dec_ac1_code1_cnt;
	struct reg_field cfg_dec_refer2_base;
	struct reg_field cfg_dec_ac1_code2_cnt;
	struct reg_field cfg_dec_ac1_code3_cnt;
	struct reg_field cfg_dec_ac1_code4_cnt;
	struct reg_field cfg_dec_ac1_code5_cnt;
	struct reg_field cfg_dec_ac1_code6_cnt;
	struct reg_field cfg_dec_ac1_code7_cnt;
	struct reg_field cfg_dec_refer3_base;
	struct reg_field cfg_dec_ac1_code8_cnt;
	struct reg_field cfg_dec_ac1_code9_cnt;
	struct reg_field cfg_dec_ac1_code10_cnt;
	struct reg_field cfg_dec_prev_anc_type;
	struct reg_field cfg_dec_gref_sign_bias;
	struct reg_field cfg_dec_ac1_code11_cnt;
	struct reg_field cfg_dec_refer4_base;
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
	struct reg_field cfg_dec_aref_sign_bias;
	struct reg_field cfg_dec_scan_map_5;
	struct reg_field cfg_dec_ac1_code15_cnt;
	struct reg_field cfg_dec_ishift3;
	struct reg_field cfg_dec_trb_per_trd_d0;
	struct reg_field cfg_dec_refer5_base;
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
	struct reg_field cfg_dec_ac2_code5_cnt;
	struct reg_field cfg_dec_scan_map_10;
	struct reg_field cfg_dec_ishift4;
	struct reg_field cfg_dec_trb_per_trd_dm1;
	struct reg_field cfg_dec_scan_map_9;
	struct reg_field cfg_dec_ac2_code6_cnt;
	struct reg_field cfg_dec_scan_map_8;
	struct reg_field cfg_dec_iscale4;
	struct reg_field cfg_dec_ac2_code7_cnt;
	struct reg_field cfg_dec_scan_map_7;
	struct reg_field cfg_dec_icomp4_e;
	struct reg_field cfg_dec_scan_map_6;
	struct reg_field cfg_dec_ac2_code8_cnt;
	struct reg_field cfg_dec_scan_map_15;
	struct reg_field cfg_dec_ac2_code9_cnt;
	struct reg_field cfg_dec_trb_per_trd_d1;
	struct reg_field cfg_dec_scan_map_14;
	struct reg_field cfg_dec_ac2_code10_cnt;
	struct reg_field cfg_dec_scan_map_13;
	struct reg_field cfg_dec_ac2_code11_cnt;
	struct reg_field cfg_dec_scan_map_12;
	struct reg_field cfg_dec_scan_map_11;
	struct reg_field cfg_dec_ac2_code12_cnt;
	struct reg_field cfg_dec_scan_map_20;
	struct reg_field cfg_dec_ac2_code13_cnt;
	struct reg_field cfg_dec_dct_strm1_base;
	struct reg_field cfg_dec_scan_map_19;
	struct reg_field cfg_dec_ac2_code14_cnt;
	struct reg_field cfg_dec_scan_map_18;
	struct reg_field cfg_dec_ac2_code15_cnt;
	struct reg_field cfg_dec_scan_map_17;
	struct reg_field cfg_dec_scan_map_16;
	struct reg_field cfg_dec_ac2_code16_cnt;
	struct reg_field cfg_dec_dc1_code1_cnt;
	struct reg_field cfg_dec_scan_map_25;
	struct reg_field cfg_dec_dct_strm2_base;
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
	struct reg_field cfg_dec_dc1_code9_cnt;
	struct reg_field cfg_dec_scan_map_30;
	struct reg_field cfg_dec_dct_strm3_base;
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
	struct reg_field cfg_dec_dc2_code1_cnt;
	struct reg_field cfg_dec_scan_map_35;
	struct reg_field cfg_dec_dct_strm4_base;
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
	struct reg_field cfg_dec_dc2_code9_cnt;
	struct reg_field cfg_dec_scan_map_40;
	struct reg_field cfg_dec_dct_strm5_base;
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
	struct reg_field cfg_dec_dc3_code1_cnt;
	struct reg_field cfg_dec_refer13_base;
	struct reg_field cfg_dec_bitpl_ctrl_base;
	struct reg_field cfg_dec_dc3_code2_cnt;
	struct reg_field cfg_dec_dc3_code3_cnt;
	struct reg_field cfg_dec_dc3_code4_cnt;
	struct reg_field cfg_dec_dc3_code5_cnt;
	struct reg_field cfg_dec_dc3_code6_cnt;
	struct reg_field cfg_dec_dc3_code7_cnt;
	struct reg_field cfg_dec_dc3_code8_cnt;
	struct reg_field cfg_dec_dc3_code9_cnt;
	struct reg_field cfg_dec_scan_map_45;
	struct reg_field cfg_dec_ref_invd_cur_0;
	struct reg_field cfg_dec_refer14_base;
	struct reg_field cfg_dec_dct_strm6_base;
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
	struct reg_field cfg_dec_scan_map_50;
	struct reg_field cfg_dec_ref_invd_cur_2;
	struct reg_field cfg_dec_refer15_base;
	struct reg_field cfg_dec_dct_strm7_base;
	struct reg_field cfg_dec_scan_map_49;
	struct reg_field cfg_dec_scan_map_48;
	struct reg_field cfg_dec_ref_invd_cur_3;
	struct reg_field cfg_dec_scan_map_47;
	struct reg_field cfg_dec_scan_map_46;
	struct reg_field cfg_dec_jpeg_slice_h;
	struct reg_field cfg_dec_refer1_base;
	struct reg_field cfg_dec_segment_e;
	struct reg_field cfg_dec_ishift1;
	struct reg_field cfg_dec_diff_mv_base;
	struct reg_field cfg_dec_segment_base;
	struct reg_field cfg_dec_segment_upd_e;
	struct reg_field cfg_dec_iscale1;
	struct reg_field cfg_dec_icomp1_e;
	struct reg_field cfg_dec_dct7_start_bit;
	struct reg_field cfg_dec_ishift2;
	struct reg_field cfg_dec_i4x4_or_dc_base;
	struct reg_field cfg_dec_dct6_start_bit;
	struct reg_field cfg_dec_dct5_start_bit;
	struct reg_field cfg_dec_iscale2;
	struct reg_field cfg_dec_dct4_start_bit;
	struct reg_field cfg_dec_icomp2_e;
	struct reg_field cfg_dec_dct3_start_bit;
	struct reg_field cfg_dec_quant_3;
	struct reg_field cfg_dec_quant_2;
	struct reg_field cfg_dec_quant_delta_3;
	struct reg_field cfg_dec_quant_delta_2;
	struct reg_field cfg_dec_quant_5;
	struct reg_field cfg_dec_quant_4;
	struct reg_field cfg_dec_quant_delta_4;
	struct reg_field cfg_dec_pred_bc_tap_1_1;
	struct reg_field cfg_dec_pred_bc_tap_1_0;
	struct reg_field cfg_dec_pred_bc_tap_0_3;
	struct reg_field cfg_dec_pred_bc_tap_2_0;
	struct reg_field cfg_dec_pred_bc_tap_1_3;
	struct reg_field cfg_dec_pred_bc_tap_1_2;
	struct reg_field cfg_dec_pred_bc_tap_2_3;
	struct reg_field cfg_dec_pred_bc_tap_2_2;
	struct reg_field cfg_dec_pred_bc_tap_2_1;
	struct reg_field cfg_dec_pred_bc_tap_3_2;
	struct reg_field cfg_dec_pred_bc_tap_3_1;
	struct reg_field cfg_dec_pred_bc_tap_3_0;
	struct reg_field cfg_dec_pred_bc_tap_4_1;
	struct reg_field cfg_dec_pred_bc_tap_4_0;
	struct reg_field cfg_dec_pred_bc_tap_3_3;
	struct reg_field cfg_dec_pred_bc_tap_5_0;
	struct reg_field cfg_dec_pred_bc_tap_4_3;
	struct reg_field cfg_dec_pred_bc_tap_4_2;
};

static const struct hantro_field_dec rk3399_field {
	.cfg_dec_pp_max_burst =		REG_FIELD(SWREG(0), 0, 4),
	.cfg_dec_pp_scmd_dis =		REG_FIELD(SWREG(0), 5, 5),
	.cfg_dec_pp_axi_rd_id =		REG_FIELD(SWREG(0), 8, 15),
	.cfg_dec_pp_axi_wr_id =		REG_FIELD(SWREG(0), 16, 23),
	.cfg_dec_color_coeffa1 =	REG_FIELD(SWREG(1), 0, 9),
	.cfg_dec_color_coeffa2 =	REG_FIELD(SWREG(1), 10, 19),
	.cfg_dec_color_coeffb =		REG_FIELD(SWREG(1), 20, 29),
	.cfg_dec_color_coeffc =		REG_FIELD(SWREG(2), 0, 9),
	.cfg_dec_color_coeffd =		REG_FIELD(SWREG(2), 10, 19),
	.cfg_dec_color_coeffe =		REG_FIELD(SWREG(2), 20, 29),
	.cfg_dec_color_coefff =		REG_FIELD(SWREG(3), 0, 7),
	.cfg_dec_scale_wratio =		REG_FIELD(SWREG(4), 0, 17),
	.cfg_dec_hor_scale_mode =	REG_FIELD(SWREG(4), 20, 21),
	.cfg_dec_ver_scale_mode =	REG_FIELD(SWREG(4), 22, 23),
	.cfg_dec_scale_hratio =		REG_FIELD(SWREG(5), 0, 17),
	.cfg_dec_wscale_invra =		REG_FIELD(SWREG(6), 0, 15),
	.cfg_dec_hscale_invra =		REG_FIELD(SWREG(6), 16, 31),
	.cfg_dec_up_cross =		REG_FIELD(SWREG(7), 0, 10),
	.cfg_dec_down_cross =		REG_FIELD(SWREG(7), 16, 26),
	.cfg_dec_left_cross =		REG_FIELD(SWREG(8), 0, 10),
	.cfg_dec_right_cross =		REG_FIELD(SWREG(8), 16, 26),
	.cfg_dec_r_mask =		REG_FIELD(SWREG(9), 0, 31),
	.cfg_dec_g_mask =		REG_FIELD(SWREG(10), 0, 31),
	.cfg_dec_b_mask =		REG_FIELD(SWREG(11), 0, 31),
	.cfg_dec_pp_bot_yin_base =	REG_FIELD(SWREG(12), 0, 31),
	.cfg_dec_pp_bot_cin_base =	REG_FIELD(SWREG(13), 0, 31),
	.cfg_dec_crop_startx =		REG_FIELD(SWREG(14), 0, 8),
	.cfg_dec_crop_starty_ext =	REG_FIELD(SWREG(14), 9, 11),
	.cfg_dec_crop_starty =		REG_FIELD(SWREG(14), 16, 23),
	.cfg_dec_crop_startx_ext =	REG_FIELD(SWREG(14), 24, 26),
	.cfg_dec_pp_crop8_d_e =		REG_FIELD(SWREG(14), 28, 28),
	.cfg_dec_pp_crop8_r_e =		REG_FIELD(SWREG(14), 29, 29),
	.cfg_dec_rangemap_coef_y =	REG_FIELD(SWREG(15), 0, 4),
	.cfg_dec_ycbcr_range =		REG_FIELD(SWREG(15), 5, 5),
	.cfg_dec_rangemap_coef_c =	REG_FIELD(SWREG(15), 8, 12),
	.cfg_dec_rgb_r_padd =		REG_FIELD(SWREG(16), 0, 4),
	.cfg_dec_rgb_g_padd =		REG_FIELD(SWREG(16), 8, 12),
	.cfg_dec_rgb_b_padd =		REG_FIELD(SWREG(16), 16, 20),
	.cfg_dec_pp_in_lu_base =	REG_FIELD(SWREG(18), 0, 31),
	.cfg_dec_pp_in_cb_base =	REG_FIELD(SWREG(19), 0, 31),
	.cfg_dec_pp_in_cr_base =	REG_FIELD(SWREG(20), 0, 31),
	.cfg_dec_pp_out_lu_base =	REG_FIELD(SWREG(21), 0, 31),
	.cfg_dec_pp_out_ch_base =	REG_FIELD(SWREG(22), 0, 31),
	.cfg_dec_ablend1_base =		REG_FIELD(SWREG(23), 0, 31),
	.cfg_dec_ablend2_base =		REG_FIELD(SWREG(24), 0, 31),
	.cfg_dec_ablend1_scanl =	REG_FIELD(SWREG(25), 0, 12),
	.cfg_dec_ablend2_scanl =	REG_FIELD(SWREG(25), 13, 25),
	.cfg_dec_mask1_startx =		REG_FIELD(SWREG(26), 0, 10),
	.cfg_dec_mask1_endx =		REG_FIELD(SWREG(26), 12, 22),
	.cfg_dec_mask1_starty =		REG_FIELD(SWREG(27), 0, 10),
	.cfg_dec_mask1_endy =		REG_FIELD(SWREG(27), 12, 22),
	.cfg_dec_mask2_startx =		REG_FIELD(SWREG(28), 0, 10),
	.cfg_dec_mask2_endx =		REG_FIELD(SWREG(28), 11, 21),
	.cfg_dec_mask2_starty =		REG_FIELD(SWREG(29), 0, 10),
	.cfg_dec_mask2_endy =		REG_FIELD(SWREG(29), 11, 21),
	.cfg_dec_deint_threshold =	REG_FIELD(SWREG(30), 0, 13),
	.cfg_dec_deint_edge_det =	REG_FIELD(SWREG(30), 16, 30),
	.cfg_dec_contrast_thr1 =	REG_FIELD(SWREG(31), 0, 7),
	.cfg_dec_contrast_thr2 =	REG_FIELD(SWREG(31), 8, 15),
	.cfg_dec_contrast_off1 =	REG_FIELD(SWREG(32), 0, 9),
	.cfg_dec_contrast_off2 =	REG_FIELD(SWREG(32), 16, 25),
	.cfg_dec_pp_in_width =		REG_FIELD(SWREG(34), 0, 8),
	.cfg_dec_pp_in_w_ext =		REG_FIELD(SWREG(34), 9, 11),
	.cfg_dec_ext_orig_width =	REG_FIELD(SWREG(34), 12, 20),
	.cfg_dec_pp_in_height =		REG_FIELD(SWREG(34), 21, 28),
	.cfg_dec_pp_in_h_ext =		REG_FIELD(SWREG(34), 29, 31),
	.cfg_dec_pp_out_width =		REG_FIELD(SWREG(35), 0, 10),
	.cfg_dec_pp_out_height =	REG_FIELD(SWREG(35), 16, 26),
	.cfg_dec_dither_select_r =	REG_FIELD(SWREG(36), 0, 1),
	.cfg_dec_dither_select_g =	REG_FIELD(SWREG(36), 2, 3),
	.cfg_dec_dither_select_b =	REG_FIELD(SWREG(36), 4, 5),
	.cfg_dec_pp_in_endian =		REG_FIELD(SWREG(37), 0, 0),
	.cfg_dec_pp_in_a1_endian =	REG_FIELD(SWREG(37), 1, 1),
	.cfg_dec_pp_in_a2_endsel =	REG_FIELD(SWREG(37), 2, 2),
	.cfg_dec_pp_out_endian =	REG_FIELD(SWREG(37), 3, 3),
	.cfg_dec_rgb_pix_in32 =		REG_FIELD(SWREG(37), 4, 4),
	.cfg_dec_pp_in_swap32_e =	REG_FIELD(SWREG(37), 8, 8),
	.cfg_dec_pp_in_a1_swap32 =	REG_FIELD(SWREG(37), 9, 9),
	.cfg_dec_pp_out_swap16_e =	REG_FIELD(SWREG(37), 10, 10),
	.cfg_dec_pp_out_swap32_e =	REG_FIELD(SWREG(37), 11, 11),
	.cfg_dec_pp_in_start_ch =	REG_FIELD(SWREG(37), 16, 16),
	.cfg_dec_pp_out_start_ch =	REG_FIELD(SWREG(37), 17, 17),
	.cfg_dec_pp_in_cr_first =	REG_FIELD(SWREG(37), 18, 18),
	.cfg_dec_pp_out_cr_first =	REG_FIELD(SWREG(37), 19, 19),
	.cfg_dec_pp_in_struct =		REG_FIELD(SWREG(37), 24, 26),
	.cfg_dec_rotation_mode =	REG_FIELD(SWREG(38), 0, 2),
	.cfg_dec_pp_in_format =		REG_FIELD(SWREG(38), 8, 10),
	.cfg_dec_pp_out_format =	REG_FIELD(SWREG(38), 11, 13),
	.cfg_dec_pp_in_format_es =	REG_FIELD(SWREG(38), 16, 18),
	.cfg_dec_display_width =	REG_FIELD(SWREG(39), 0, 11),
	.cfg_dec_pp_irq =		REG_FIELD(SWREG(40), 0, 0),
	.cfg_dec_pp_irq_dis =		REG_FIELD(SWREG(40), 1, 1),
	.cfg_dec_pp_rdy_int =		REG_FIELD(SWREG(40), 2, 2),
	.cfg_dec_pp_bus_int =		REG_FIELD(SWREG(40), 3, 3),
	.cfg_dec_pp_e =			REG_FIELD(SWREG(41), 0, 0),
	.cfg_dec_deint_blend_e =	REG_FIELD(SWREG(41), 1, 1),
	.cfg_dec_deint_e =		REG_FIELD(SWREG(41), 2, 2),
	.cfg_dec_pp_clk_gate_e =	REG_FIELD(SWREG(41), 3, 3),
	.cfg_dec_pp_pipeline_e =	REG_FIELD(SWREG(41), 4, 4),
	.cfg_dec_rangemap_y_e =		REG_FIELD(SWREG(41), 8, 8),
	.cfg_dec_rangemap_c_e =		REG_FIELD(SWREG(41), 9, 9),
	.cfg_dec_pp_data_disc_e =	REG_FIELD(SWREG(41), 16, 16),
	.cfg_dec_mask1_e =		REG_FIELD(SWREG(41), 20, 20),
	.cfg_dec_mask2_e =		REG_FIELD(SWREG(41), 21, 21),
	.cfg_dec_mask1_ablend_e =	REG_FIELD(SWREG(41), 22, 22),
	.cfg_dec_mask2_ablend_e =	REG_FIELD(SWREG(41), 23, 23),
	.cfg_dec_up_cross_e =		REG_FIELD(SWREG(41), 24, 24),
	.cfg_dec_down_cross_e =		REG_FIELD(SWREG(41), 25, 25),
	.cfg_dec_left_cross_e =		REG_FIELD(SWREG(41), 26, 26),
	.cfg_dec_right_cross_e =	REG_FIELD(SWREG(41), 27, 27),
	.cfg_dec_pp_ahb_hlock_e =	REG_FIELD(SWREG(41), 28, 28),
	.cfg_dec_out_tiled_e =		REG_FIELD(SWREG(50), 0, 0),
	.cfg_dec_latency =		REG_FIELD(SWREG(50), 1, 6),
	.cfg_dec_mvc_e =		REG_FIELD(SWREG(50), 7, 7),
	.cfg_dec_pic_fixed_quant =	REG_FIELD(SWREG(50), 7, 7),
	.cfg_dec_filtering_dis =	REG_FIELD(SWREG(50), 8, 8),
	.cfg_dec_skip_mode =		REG_FIELD(SWREG(50), 9, 9),
	.cfg_dec_scmd_dis =		REG_FIELD(SWREG(50), 10, 10),
	.cfg_dec_adv_pre_dis =		REG_FIELD(SWREG(50), 11, 11),
	.cfg_dec_priority_mode =	REG_FIELD(SWREG(50), 12, 12),
	.cfg_dec_refbu2_thr =		REG_FIELD(SWREG(50), 13, 24),
	.cfg_dec_refbu2_picid =		REG_FIELD(SWREG(50), 25, 29),
	.cfg_dec_stream_len =		REG_FIELD(SWREG(51), 0, 23),
	.cfg_dec_stream_len_ext =	REG_FIELD(SWREG(51), 24, 24),
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
	.cfg_dec_irq =			REG_FIELD(SWREG(55), 0, 0),
	.cfg_dec_irq_dis =		REG_FIELD(SWREG(55), 1, 1),
	.cfg_dec_rdy_int =		REG_FIELD(SWREG(55), 4, 4),
	.cfg_dec_bus_int =		REG_FIELD(SWREG(55), 5, 5),
	.cfg_dec_buffer_int =		REG_FIELD(SWREG(55), 6, 6),
	.cfg_dec_aso_int =		REG_FIELD(SWREG(55), 8, 8),
	.cfg_dec_slice_int =		REG_FIELD(SWREG(55), 9, 9),
	.cfg_dec_pic_inf =		REG_FIELD(SWREG(55), 10, 10),
	.cfg_dec_error_int =		REG_FIELD(SWREG(55), 12, 12),
	.cfg_dec_timeout =		REG_FIELD(SWREG(55), 13, 13),
	.cfg_dec_axi_rd_id =		REG_FIELD(SWREG(56), 0, 7),
	.cfg_dec_axi_wr_id =		REG_FIELD(SWREG(56), 8, 15),
	.cfg_dec_max_burst =		REG_FIELD(SWREG(56), 16, 20),
	.cfg_dec_paral_bus_e =		REG_FIELD(SWREG(56), 21, 21),
	.cfg_dec_data_disc_e =		REG_FIELD(SWREG(56), 22, 22),
	.cfg_dec_axiwr_sel =		REG_FIELD(SWREG(56), 23, 23),
	.cfg_dec_e =			REG_FIELD(SWREG(57), 0, 0),
	.cfg_dec_refbu2_buf_e =		REG_FIELD(SWREG(57), 1, 1),
	.cfg_dec_out_dis =		REG_FIELD(SWREG(57), 2, 2),
	.cfg_dec_clk_gate_e =		REG_FIELD(SWREG(57), 4, 4),
	.cfg_dec_timeout_e =		REG_FIELD(SWREG(57), 5, 5),
	.cfg_dec_picord_count_e =	REG_FIELD(SWREG(57), 6, 6),
	.cfg_dec_seq_mbaff_e =		REG_FIELD(SWREG(57), 7, 7),
	.cfg_dec_reftopfirst_e =	REG_FIELD(SWREG(57), 8, 8),
	.cfg_dec_ref_topfield_e =	REG_FIELD(SWREG(57), 9, 9),
	.cfg_dec_write_mvs_e =		REG_FIELD(SWREG(57), 10, 10),
	.cfg_dec_sorenson_e =		REG_FIELD(SWREG(57), 11, 11),
	.cfg_dec_fwd_interlace_e =	REG_FIELD(SWREG(57), 12, 12),
	.cfg_dec_pic_topfield_e =	REG_FIELD(SWREG(57), 13, 13),
	.cfg_dec_pic_inter_e =		REG_FIELD(SWREG(57), 14, 14),
	.cfg_dec_pic_b_e =		REG_FIELD(SWREG(57), 15, 15),
	.cfg_dec_pic_fieldmode_e =	REG_FIELD(SWREG(57), 16, 16),
	.cfg_dec_pic_interlace_e =	REG_FIELD(SWREG(57), 17, 17),
	.cfg_dec_pjpeg_e =		REG_FIELD(SWREG(57), 18, 18),
	.cfg_dec_divx3_e =		REG_FIELD(SWREG(57), 19, 19),
	.cfg_dec_rlc_mode_e =		REG_FIELD(SWREG(57), 20, 20),
	.cfg_dec_ch_8pix_ileav_e =	REG_FIELD(SWREG(57), 21, 21),
	.cfg_dec_start_code_e =		REG_FIELD(SWREG(57), 22, 22),
	.cfg_dec_inter_dblspeed =	REG_FIELD(SWREG(57), 25, 25),
	.cfg_dec_intra_dblspeed =	REG_FIELD(SWREG(57), 26, 26),
	.cfg_dec_intra_dbl3t =		REG_FIELD(SWREG(57), 27, 27),
	.cfg_dec_pref_sigchan =		REG_FIELD(SWREG(57), 28, 28),
	.cfg_dec_cache_enable =		REG_FIELD(SWREG(57), 29, 29),
	.cfg_dec_ahb_hlock_e =		REG_FIELD(SWREG(57), 31, 31),
	.cfg_dec_soft_reset =		REG_FIELD(SWREG(58), 0, 0),
	.cfg_dec_pred_bc_tap_0_2 =	REG_FIELD(SWREG(59), 2, 11),
	.cfg_dec_pred_bc_tap_0_1 =	REG_FIELD(SWREG(59), 12, 21),
	.cfg_dec_pred_bc_tap_0_0 =	REG_FIELD(SWREG(59), 22, 31),
	.cfg_dec_ch8pix_base =		REG_FIELD(SWREG(60), 0, 31),
	.cfg_dec_qtable_base =		REG_FIELD(SWREG(61), 0, 31),
	.cfg_dec_dir_mv_base =		REG_FIELD(SWREG(62), 0, 31),
	.cfg_dec_out_base =		REG_FIELD(SWREG(63), 0, 31),
	.cfg_dec_rlc_vlc_base =		REG_FIELD(SWREG(64), 0, 31),
	.cfg_dec_refbu_y_offset =	REG_FIELD(SWREG(65), 0, 8),
	.cfg_dec_refbu_fparmod_e =	REG_FIELD(SWREG(65), 12, 12),
	.cfg_dec_refbu_eval_e =		REG_FIELD(SWREG(65), 13, 13),
	.cfg_dec_refbu_picid =		REG_FIELD(SWREG(65), 14, 18),
	.cfg_dec_refbu_thr =		REG_FIELD(SWREG(65), 19, 30),
	.cfg_dec_refbu_e =		REG_FIELD(SWREG(65), 31, 31),
	.cfg_dec_refbu_bot_sum =	REG_FIELD(SWREG(68), 0, 15),
	.cfg_dec_refbu_top_sum =	REG_FIELD(SWREG(68), 16, 31),
	.cfg_dec_refbu_intra_sum =	REG_FIELD(SWREG(69), 0, 15),
	.cfg_dec_refbu_hit_sum =	REG_FIELD(SWREG(69), 16, 31),
	.cfg_dec_refbu_y_mv_sum =	REG_FIELD(SWREG(70), 0, 21),
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
	.cfg_dec_refer0_topc_e =	REG_FIELD(SWREG(84), 0, 0),
	.cfg_dec_refer0_base =		REG_FIELD(SWREG(84), 0, 31),
	.cfg_dec_refer0_field_e =	REG_FIELD(SWREG(84), 1, 1),
	.cfg_dec_refer1_topc_e =	REG_FIELD(SWREG(85), 0, 0),
	.cfg_dec_refer1_base =		REG_FIELD(SWREG(85), 0, 31),
	.cfg_dec_refer1_field_e =	REG_FIELD(SWREG(85), 1, 1),
	.cfg_dec_refer2_topc_e =	REG_FIELD(SWREG(86), 0, 0),
	.cfg_dec_refer2_base =		REG_FIELD(SWREG(86), 0, 31),
	.cfg_dec_refer2_field_e =	REG_FIELD(SWREG(86), 1, 1),
	.cfg_dec_refer3_topc_e =	REG_FIELD(SWREG(87), 0, 0),
	.cfg_dec_refer3_base =		REG_FIELD(SWREG(87), 0, 31),
	.cfg_dec_refer3_field_e =	REG_FIELD(SWREG(87), 1, 1),
	.cfg_dec_refer4_topc_e =	REG_FIELD(SWREG(88), 0, 0),
	.cfg_dec_refer4_base =		REG_FIELD(SWREG(88), 0, 31),
	.cfg_dec_refer4_field_e =	REG_FIELD(SWREG(88), 1, 1),
	.cfg_dec_refer5_topc_e =	REG_FIELD(SWREG(89), 0, 0),
	.cfg_dec_refer5_base =		REG_FIELD(SWREG(89), 0, 31),
	.cfg_dec_refer5_field_e =	REG_FIELD(SWREG(89), 1, 1),
	.cfg_dec_refer6_topc_e =	REG_FIELD(SWREG(90), 0, 0),
	.cfg_dec_refer6_base =		REG_FIELD(SWREG(90), 0, 31),
	.cfg_dec_refer6_field_e =	REG_FIELD(SWREG(90), 1, 1),
	.cfg_dec_refer7_topc_e =	REG_FIELD(SWREG(91), 0, 0),
	.cfg_dec_refer7_base =		REG_FIELD(SWREG(91), 0, 31),
	.cfg_dec_refer7_field_e =	REG_FIELD(SWREG(91), 1, 1),
	.cfg_dec_refer8_topc_e =	REG_FIELD(SWREG(92), 0, 0),
	.cfg_dec_refer8_base =		REG_FIELD(SWREG(92), 0, 31),
	.cfg_dec_refer8_field_e =	REG_FIELD(SWREG(92), 1, 1),
	.cfg_dec_refer9_topc_e =	REG_FIELD(SWREG(93), 0, 0),
	.cfg_dec_refer9_base =		REG_FIELD(SWREG(93), 0, 31),
	.cfg_dec_refer9_field_e =	REG_FIELD(SWREG(93), 1, 1),
	.cfg_dec_refer10_topc_e =	REG_FIELD(SWREG(94), 0, 0),
	.cfg_dec_refer10_base =		REG_FIELD(SWREG(94), 0, 31),
	.cfg_dec_refer10_field_e =	REG_FIELD(SWREG(94), 1, 1),
	.cfg_dec_refer11_topc_e =	REG_FIELD(SWREG(95), 0, 0),
	.cfg_dec_refer11_base =		REG_FIELD(SWREG(95), 0, 31),
	.cfg_dec_refer11_field_e =	REG_FIELD(SWREG(95), 1, 1),
	.cfg_dec_refer12_topc_e =	REG_FIELD(SWREG(96), 0, 0),
	.cfg_dec_refer12_base =		REG_FIELD(SWREG(96), 0, 31),
	.cfg_dec_refer12_field_e =	REG_FIELD(SWREG(96), 1, 1),
	.cfg_dec_refer13_topc_e =	REG_FIELD(SWREG(97), 0, 0),
	.cfg_dec_refer13_base =		REG_FIELD(SWREG(97), 0, 31),
	.cfg_dec_refer13_field_e =	REG_FIELD(SWREG(97), 1, 1),
	.cfg_dec_refer14_topc_e =	REG_FIELD(SWREG(98), 0, 0),
	.cfg_dec_refer14_base =		REG_FIELD(SWREG(98), 0, 31),
	.cfg_dec_refer14_field_e =	REG_FIELD(SWREG(98), 1, 1),
	.cfg_dec_refer15_topc_e =	REG_FIELD(SWREG(99), 0, 0),
	.cfg_dec_refer15_base =		REG_FIELD(SWREG(99), 0, 31),
	.cfg_dec_refer15_field_e =	REG_FIELD(SWREG(99), 1, 1),
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
	.cfg_dec_pic_refer_flag =	REG_FIELD(SWREG(120), 0, 0),
	.cfg_dec_pic_mb_h_ext =		REG_FIELD(SWREG(120), 0, 2),
	.cfg_dec_ref_frames =		REG_FIELD(SWREG(120), 0, 4),
	.cfg_dec_pic_mb_w_ext =		REG_FIELD(SWREG(120), 3, 5),
	.cfg_dec_topfieldfirst_e =	REG_FIELD(SWREG(120), 5, 5),
	.cfg_dec_alt_scan_e =		REG_FIELD(SWREG(120), 6, 6),
	.cfg_dec_mb_height_off =	REG_FIELD(SWREG(120), 7, 10),
	.cfg_dec_pic_mb_height_p =	REG_FIELD(SWREG(120), 11, 18),
	.cfg_dec_mb_width_off =		REG_FIELD(SWREG(120), 19, 22),
	.cfg_dec_pic_mb_width =		REG_FIELD(SWREG(120), 23, 31),
	.cfg_dec_pjpeg_se =		REG_FIELD(SWREG(121), 0, 7),
	.cfg_dec_vc1_adv_e =		REG_FIELD(SWREG(121), 5, 5),
	.cfg_dec_vp7_version =		REG_FIELD(SWREG(121), 5, 5),
	.cfg_dec_dquant_e =		REG_FIELD(SWREG(121), 6, 6),
	.cfg_dec_init_dc_match1 =	REG_FIELD(SWREG(121), 6, 8),
	.cfg_dec_2nd_byte_emul_e =	REG_FIELD(SWREG(121), 7, 7),
	.cfg_dec_ttfrm =		REG_FIELD(SWREG(121), 8, 9),
	.cfg_dec_pjpeg_ss =		REG_FIELD(SWREG(121), 8, 15),
	.cfg_dec_init_dc_match0 =	REG_FIELD(SWREG(121), 9, 11),
	.cfg_dec_halfqp_e =		REG_FIELD(SWREG(121), 10, 10),
	.cfg_dec_uniqp_e =		REG_FIELD(SWREG(121), 11, 11),
	.cfg_dec_bilin_mc_e =		REG_FIELD(SWREG(121), 12, 12),
	.cfg_dec_ch_mv_res =		REG_FIELD(SWREG(121), 13, 13),
	.cfg_dec_pqindex =		REG_FIELD(SWREG(121), 14, 18),
	.cfg_dec_pjpeg_al =		REG_FIELD(SWREG(121), 16, 19),
	.cfg_dec_ttmbf =		REG_FIELD(SWREG(121), 19, 19),
	.cfg_dec_dq_edges =		REG_FIELD(SWREG(121), 20, 23),
	.cfg_dec_pjpeg_ah =		REG_FIELD(SWREG(121), 20, 23),
	.cfg_dec_dct2_start_bit =	REG_FIELD(SWREG(121), 20, 25),
	.cfg_dec_pjpeg_hdiv8 =		REG_FIELD(SWREG(121), 24, 24),
	.cfg_dec_alt_pquant =		REG_FIELD(SWREG(121), 24, 28),
	.cfg_dec_pjpeg_wdiv8 =		REG_FIELD(SWREG(121), 25, 25),
	.cfg_dec_pjpeg_fildown_e =	REG_FIELD(SWREG(121), 26, 26),
	.cfg_dec_dct1_start_bit =	REG_FIELD(SWREG(121), 26, 31),
	.cfg_dec_bitplane2_e =		REG_FIELD(SWREG(121), 29, 29),
	.cfg_dec_blackwhite_e =		REG_FIELD(SWREG(121), 30, 30),
	.cfg_dec_bitplane1_e =		REG_FIELD(SWREG(121), 30, 30),
	.cfg_dec_bitplane0_e =		REG_FIELD(SWREG(121), 31, 31),
	.cfg_dec_fieldpic_flag_e =	REG_FIELD(SWREG(122), 0, 0),
	.cfg_dec_frame_pred_dct =	REG_FIELD(SWREG(122), 0, 0),
	.cfg_dec_cb_dc_vlctable3 =	REG_FIELD(SWREG(122), 0, 0),
	.cfg_dec_4mv_blk_pat_tab =	REG_FIELD(SWREG(122), 0, 1),
	.cfg_dec_beta_offset =		REG_FIELD(SWREG(122), 0, 4),
	.cfg_dec_boolean_range =	REG_FIELD(SWREG(122), 0, 7),
	.cfg_dec_vop_time_incr =	REG_FIELD(SWREG(122), 0, 15),
	.cfg_dec_intra_vlc_tab =	REG_FIELD(SWREG(122), 1, 1),
	.cfg_dec_cr_dc_vlctable3 =	REG_FIELD(SWREG(122), 1, 1),
	.cfg_dec_cb_dc_vlctable =	REG_FIELD(SWREG(122), 2, 2),
	.cfg_dec_2mv_blk_pat_tab =	REG_FIELD(SWREG(122), 2, 3),
	.cfg_dec_intra_dc_prec =	REG_FIELD(SWREG(122), 2, 3),
	.cfg_dec_cr_dc_vlctable =	REG_FIELD(SWREG(122), 3, 3),
	.cfg_dec_con_mv_e =		REG_FIELD(SWREG(122), 4, 4),
	.cfg_dec_cb_ac_vlctable =	REG_FIELD(SWREG(122), 4, 4),
	.cfg_dec_cbptab =		REG_FIELD(SWREG(122), 4, 6),
	.cfg_dec_cr_ac_vlctable =	REG_FIELD(SWREG(122), 5, 5),
	.cfg_dec_alpha_offset =		REG_FIELD(SWREG(122), 5, 9),
	.cfg_dec_jpeg_stream_all =	REG_FIELD(SWREG(122), 6, 6),
	.cfg_dec_jpeg_filright_e =	REG_FIELD(SWREG(122), 7, 7),
	.cfg_dec_mvtab =		REG_FIELD(SWREG(122), 7, 9),
	.cfg_dec_jpeg_mode =		REG_FIELD(SWREG(122), 8, 10),
	.cfg_dec_boolean_value =	REG_FIELD(SWREG(122), 8, 15),
	.cfg_dec_mb_mode_tab =		REG_FIELD(SWREG(122), 10, 12),
	.cfg_dec_jpeg_qtables =		REG_FIELD(SWREG(122), 11, 12),
	.cfg_dec_transacfrm2 =		REG_FIELD(SWREG(122), 13, 14),
	.cfg_dec_transacfrm =		REG_FIELD(SWREG(122), 15, 16),
	.cfg_dec_multistream_e =	REG_FIELD(SWREG(122), 16, 16),
	.cfg_dec_intradc_vlc_thr =	REG_FIELD(SWREG(122), 16, 18),
	.cfg_dec_transdctab =		REG_FIELD(SWREG(122), 17, 17),
	.cfg_dec_huffman_e =		REG_FIELD(SWREG(122), 17, 17),
	.cfg_dec_strm1_start_bit =	REG_FIELD(SWREG(122), 18, 23),
	.cfg_dec_fast_uvmc_e =		REG_FIELD(SWREG(122), 20, 20),
	.cfg_dec_range_red_frm_e =	REG_FIELD(SWREG(122), 22, 22),
	.cfg_dec_dqbi_level =		REG_FIELD(SWREG(122), 23, 23),
	.cfg_dec_type1_quant_e =	REG_FIELD(SWREG(122), 24, 24),
	.cfg_dec_dq_profile =		REG_FIELD(SWREG(122), 24, 24),
	.cfg_dec_qscale_type =		REG_FIELD(SWREG(122), 24, 24),
	.cfg_dec_sync_marker_e =	REG_FIELD(SWREG(122), 25, 25),
	.cfg_dec_strm_start_bit =	REG_FIELD(SWREG(122), 26, 31),
	.cfg_dec_divx3_slice_size =	REG_FIELD(SWREG(123), 0, 7),
	.cfg_dec_var_threshold =	REG_FIELD(SWREG(123), 0, 9),
	.cfg_dec_rv_bwd_scale =		REG_FIELD(SWREG(123), 0, 13),
	.cfg_dec_pjpeg_rest_freq =	REG_FIELD(SWREG(123), 0, 15),
	.cfg_dec_init_dc_comp1 =	REG_FIELD(SWREG(123), 0, 15),
	.cfg_dec_divx_idct_e =		REG_FIELD(SWREG(123), 8, 8),
	.cfg_dec_mv_threshold =		REG_FIELD(SWREG(123), 10, 12),
	.cfg_dec_variance_test_e =	REG_FIELD(SWREG(123), 13, 13),
	.cfg_dec_loop_filt_limit =	REG_FIELD(SWREG(123), 14, 17),
	.cfg_dec_ref_dist_bwd =		REG_FIELD(SWREG(123), 14, 18),
	.cfg_dec_rv_fwd_scale =		REG_FIELD(SWREG(123), 14, 27),
	.cfg_dec_init_dc_comp0 =	REG_FIELD(SWREG(123), 16, 31),
	.cfg_dec_ref_dist_fwd =		REG_FIELD(SWREG(123), 19, 23),
	.cfg_dec_mv_scalefactor =	REG_FIELD(SWREG(123), 24, 31),
	.cfg_dec_rv_osv_quant =		REG_FIELD(SWREG(123), 28, 29),
	.cfg_dec_rv_profile =		REG_FIELD(SWREG(123), 30, 31),
	.cfg_dec_pic_slice_am =		REG_FIELD(SWREG(124), 0, 12),
	.cfg_dec_ishift0 =		REG_FIELD(SWREG(124), 0, 15),
	.cfg_dec_stream1_len =		REG_FIELD(SWREG(124), 0, 23),
	.cfg_dec_mb_ctrl_base =		REG_FIELD(SWREG(124), 0, 31),
	.cfg_dec_iscale0 =		REG_FIELD(SWREG(124), 16, 23),
	.cfg_dec_icomp0_e =		REG_FIELD(SWREG(124), 24, 24),
	.cfg_dec_coeffs_part_am =	REG_FIELD(SWREG(124), 24, 27),
	.cfg_dec_pjpeg_dccb_base =	REG_FIELD(SWREG(125), 0, 31),
	.cfg_dec_pred_bc_tap_5_3 =	REG_FIELD(SWREG(125), 2, 11),
	.cfg_dec_pred_bc_tap_5_2 =	REG_FIELD(SWREG(125), 12, 21),
	.cfg_dec_pred_bc_tap_5_1 =	REG_FIELD(SWREG(125), 22, 31),
	.cfg_dec_pjpeg_dccr_base =	REG_FIELD(SWREG(126), 0, 31),
	.cfg_dec_pred_bc_tap_6_2 =	REG_FIELD(SWREG(126), 2, 11),
	.cfg_dec_pred_bc_tap_6_1 =	REG_FIELD(SWREG(126), 12, 21),
	.cfg_dec_pred_bc_tap_6_0 =	REG_FIELD(SWREG(126), 22, 31),
	.cfg_dec_pred_bc_tap_7_1 =	REG_FIELD(SWREG(127), 2, 11),
	.cfg_dec_pred_bc_tap_7_0 =	REG_FIELD(SWREG(127), 12, 21),
	.cfg_dec_pred_bc_tap_6_3 =	REG_FIELD(SWREG(127), 22, 31),
	.cfg_dec_pred_tap_6_4 =		REG_FIELD(SWREG(128), 0, 1),
	.cfg_dec_pred_tap_6_m1 =	REG_FIELD(SWREG(128), 2, 3),
	.cfg_dec_pred_tap_4_4 =		REG_FIELD(SWREG(128), 4, 5),
	.cfg_dec_pred_tap_4_m1 =	REG_FIELD(SWREG(128), 6, 7),
	.cfg_dec_pred_tap_2_4 =		REG_FIELD(SWREG(128), 8, 9),
	.cfg_dec_pred_tap_2_m1 =	REG_FIELD(SWREG(128), 10, 11),
	.cfg_dec_pred_bc_tap_7_3 =	REG_FIELD(SWREG(128), 12, 21),
	.cfg_dec_pred_bc_tap_7_2 =	REG_FIELD(SWREG(128), 22, 31),
	.cfg_dec_scan_map_60 =		REG_FIELD(SWREG(129), 0, 5),
	.cfg_dec_filt_level_3 =		REG_FIELD(SWREG(129), 0, 5),
	.cfg_dec_ref_invd_col_0 =	REG_FIELD(SWREG(129), 0, 15),
	.cfg_dec_scan_map_59 =		REG_FIELD(SWREG(129), 6, 11),
	.cfg_dec_filt_level_2 =		REG_FIELD(SWREG(129), 6, 11),
	.cfg_dec_scan_map_58 =		REG_FIELD(SWREG(129), 12, 17),
	.cfg_dec_filt_level_1 =		REG_FIELD(SWREG(129), 12, 17),
	.cfg_dec_ref_invd_col_1 =	REG_FIELD(SWREG(129), 16, 31),
	.cfg_dec_scan_map_57 =		REG_FIELD(SWREG(129), 18, 23),
	.cfg_dec_filt_level_0 =		REG_FIELD(SWREG(129), 18, 23),
	.cfg_dec_scan_map_56 =		REG_FIELD(SWREG(129), 24, 29),
	.cfg_dec_quant_1 =		REG_FIELD(SWREG(130), 0, 10),
	.cfg_dec_ref_invd_col_2 =	REG_FIELD(SWREG(130), 0, 15),
	.cfg_dec_quant_0 =		REG_FIELD(SWREG(130), 11, 21),
	.cfg_dec_scan_map_63 =		REG_FIELD(SWREG(130), 12, 17),
	.cfg_dec_ref_invd_col_3 =	REG_FIELD(SWREG(130), 16, 31),
	.cfg_dec_scan_map_62 =		REG_FIELD(SWREG(130), 18, 23),
	.cfg_dec_quant_delta_1 =	REG_FIELD(SWREG(130), 22, 26),
	.cfg_dec_scan_map_61 =		REG_FIELD(SWREG(130), 24, 29),
	.cfg_dec_quant_delta_0 =	REG_FIELD(SWREG(130), 27, 31),
	.cfg_dec_refer0_base =		REG_FIELD(SWREG(131), 0, 31),
	.cfg_dec_jpg_ch_out_base =	REG_FIELD(SWREG(131), 0, 31),
	.cfg_dec_filt_mb_adj_3 =	REG_FIELD(SWREG(132), 0, 6),
	.cfg_dec_ref_dist_cur_0 =	REG_FIELD(SWREG(132), 0, 15),
	.cfg_dec_filt_mb_adj_2 =	REG_FIELD(SWREG(132), 7, 13),
	.cfg_dec_filt_mb_adj_1 =	REG_FIELD(SWREG(132), 14, 20),
	.cfg_dec_ref_dist_cur_1 =	REG_FIELD(SWREG(132), 16, 31),
	.cfg_dec_filt_mb_adj_0 =	REG_FIELD(SWREG(132), 21, 27),
	.cfg_dec_filt_sharpness =	REG_FIELD(SWREG(132), 28, 30),
	.cfg_dec_filt_type =		REG_FIELD(SWREG(132), 31, 31),
	.cfg_dec_scan_map_55 =		REG_FIELD(SWREG(133), 0, 5),
	.cfg_dec_filt_ref_adj_3 =	REG_FIELD(SWREG(133), 0, 6),
	.cfg_dec_ref_dist_cur_2 =	REG_FIELD(SWREG(133), 0, 15),
	.cfg_dec_scan_map_54 =		REG_FIELD(SWREG(133), 6, 11),
	.cfg_dec_filt_ref_adj_2 =	REG_FIELD(SWREG(133), 7, 13),
	.cfg_dec_scan_map_53 =		REG_FIELD(SWREG(133), 12, 17),
	.cfg_dec_filt_ref_adj_1 =	REG_FIELD(SWREG(133), 14, 20),
	.cfg_dec_ref_dist_cur_3 =	REG_FIELD(SWREG(133), 16, 31),
	.cfg_dec_scan_map_52 =		REG_FIELD(SWREG(133), 18, 23),
	.cfg_dec_filt_ref_adj_0 =	REG_FIELD(SWREG(133), 21, 27),
	.cfg_dec_scan_map_51 =		REG_FIELD(SWREG(133), 24, 29),
	.cfg_dec_ac1_code1_cnt =	REG_FIELD(SWREG(134), 0, 1),
	.cfg_dec_refer2_base =		REG_FIELD(SWREG(134), 0, 31),
	.cfg_dec_ac1_code2_cnt =	REG_FIELD(SWREG(134), 3, 5),
	.cfg_dec_ac1_code3_cnt =	REG_FIELD(SWREG(134), 7, 10),
	.cfg_dec_ac1_code4_cnt =	REG_FIELD(SWREG(134), 11, 15),
	.cfg_dec_ac1_code5_cnt =	REG_FIELD(SWREG(134), 16, 21),
	.cfg_dec_ac1_code6_cnt =	REG_FIELD(SWREG(134), 24, 30),
	.cfg_dec_ac1_code7_cnt =	REG_FIELD(SWREG(135), 0, 7),
	.cfg_dec_refer3_base =		REG_FIELD(SWREG(135), 0, 31),
	.cfg_dec_ac1_code8_cnt =	REG_FIELD(SWREG(135), 8, 15),
	.cfg_dec_ac1_code9_cnt =	REG_FIELD(SWREG(135), 16, 23),
	.cfg_dec_ac1_code10_cnt =	REG_FIELD(SWREG(135), 24, 31),
	.cfg_dec_prev_anc_type =	REG_FIELD(SWREG(136), 0, 0),
	.cfg_dec_gref_sign_bias =	REG_FIELD(SWREG(136), 0, 0),
	.cfg_dec_ac1_code11_cnt =	REG_FIELD(SWREG(136), 0, 7),
	.cfg_dec_refer4_base =		REG_FIELD(SWREG(136), 0, 31),
	.cfg_dec_mv_accuracy_bwd =	REG_FIELD(SWREG(136), 1, 1),
	.cfg_dec_mpeg4_vc1_rc =		REG_FIELD(SWREG(136), 1, 1),
	.cfg_dec_mv_accuracy_fwd =	REG_FIELD(SWREG(136), 2, 2),
	.cfg_dec_overlap_method =	REG_FIELD(SWREG(136), 3, 4),
	.cfg_dec_fcode_bwd_ver =	REG_FIELD(SWREG(136), 3, 6),
	.cfg_dec_overlap_e =		REG_FIELD(SWREG(136), 5, 5),
	.cfg_dec_mv_range =		REG_FIELD(SWREG(136), 6, 7),
	.cfg_dec_fcode_bwd_hor =	REG_FIELD(SWREG(136), 7, 10),
	.cfg_dec_ac1_code12_cnt =	REG_FIELD(SWREG(136), 8, 15),
	.cfg_dec_vc1_difmv_range =	REG_FIELD(SWREG(136), 9, 10),
	.cfg_dec_range_red_ref_e =	REG_FIELD(SWREG(136), 11, 11),
	.cfg_dec_fcode_fwd_ver =	REG_FIELD(SWREG(136), 11, 14),
	.cfg_dec_pic_4mv_e =		REG_FIELD(SWREG(136), 13, 13),
	.cfg_dec_fcode_fwd_hor =	REG_FIELD(SWREG(136), 15, 18),
	.cfg_dec_ac1_code13_cnt =	REG_FIELD(SWREG(136), 16, 23),
	.cfg_dec_pic_header_len =	REG_FIELD(SWREG(136), 16, 31),
	.cfg_dec_alt_scan_flag_e =	REG_FIELD(SWREG(136), 19, 19),
	.cfg_dec_ac1_code14_cnt =	REG_FIELD(SWREG(136), 24, 31),
	.cfg_dec_aref_sign_bias =	REG_FIELD(SWREG(137), 0, 0),
	.cfg_dec_scan_map_5 =		REG_FIELD(SWREG(137), 0, 5),
	.cfg_dec_ac1_code15_cnt =	REG_FIELD(SWREG(137), 0, 7),
	.cfg_dec_ishift3 =		REG_FIELD(SWREG(137), 0, 15),
	.cfg_dec_trb_per_trd_d0 =	REG_FIELD(SWREG(137), 0, 26),
	.cfg_dec_refer5_base =		REG_FIELD(SWREG(137), 0, 31),
	.cfg_dec_scan_map_4 =		REG_FIELD(SWREG(137), 6, 11),
	.cfg_dec_ac1_code16_cnt =	REG_FIELD(SWREG(137), 8, 15),
	.cfg_dec_scan_map_3 =		REG_FIELD(SWREG(137), 12, 17),
	.cfg_dec_ac2_code1_cnt =	REG_FIELD(SWREG(137), 16, 17),
	.cfg_dec_iscale3 =		REG_FIELD(SWREG(137), 16, 23),
	.cfg_dec_scan_map_2 =		REG_FIELD(SWREG(137), 18, 23),
	.cfg_dec_ac2_code2_cnt =	REG_FIELD(SWREG(137), 19, 21),
	.cfg_dec_ac2_code3_cnt =	REG_FIELD(SWREG(137), 23, 26),
	.cfg_dec_icomp3_e =		REG_FIELD(SWREG(137), 24, 24),
	.cfg_dec_scan_map_1 =		REG_FIELD(SWREG(137), 24, 29),
	.cfg_dec_ac2_code4_cnt =	REG_FIELD(SWREG(137), 27, 31),
	.cfg_dec_ac2_code5_cnt =	REG_FIELD(SWREG(138), 0, 5),
	.cfg_dec_scan_map_10 =		REG_FIELD(SWREG(138), 0, 5),
	.cfg_dec_ishift4 =		REG_FIELD(SWREG(138), 0, 15),
	.cfg_dec_trb_per_trd_dm1 =	REG_FIELD(SWREG(138), 0, 26),
	.cfg_dec_scan_map_9 =		REG_FIELD(SWREG(138), 6, 11),
	.cfg_dec_ac2_code6_cnt =	REG_FIELD(SWREG(138), 8, 14),
	.cfg_dec_scan_map_8 =		REG_FIELD(SWREG(138), 12, 17),
	.cfg_dec_iscale4 =		REG_FIELD(SWREG(138), 16, 23),
	.cfg_dec_ac2_code7_cnt =	REG_FIELD(SWREG(138), 16, 23),
	.cfg_dec_scan_map_7 =		REG_FIELD(SWREG(138), 18, 23),
	.cfg_dec_icomp4_e =		REG_FIELD(SWREG(138), 24, 24),
	.cfg_dec_scan_map_6 =		REG_FIELD(SWREG(138), 24, 29),
	.cfg_dec_ac2_code8_cnt =	REG_FIELD(SWREG(138), 24, 31),
	.cfg_dec_scan_map_15 =		REG_FIELD(SWREG(139), 0, 5),
	.cfg_dec_ac2_code9_cnt =	REG_FIELD(SWREG(139), 0, 7),
	.cfg_dec_trb_per_trd_d1 =	REG_FIELD(SWREG(139), 0, 26),
	.cfg_dec_scan_map_14 =		REG_FIELD(SWREG(139), 6, 11),
	.cfg_dec_ac2_code10_cnt =	REG_FIELD(SWREG(139), 8, 15),
	.cfg_dec_scan_map_13 =		REG_FIELD(SWREG(139), 12, 17),
	.cfg_dec_ac2_code11_cnt =	REG_FIELD(SWREG(139), 16, 23),
	.cfg_dec_scan_map_12 =		REG_FIELD(SWREG(139), 18, 23),
	.cfg_dec_scan_map_11 =		REG_FIELD(SWREG(139), 24, 29),
	.cfg_dec_ac2_code12_cnt =	REG_FIELD(SWREG(139), 24, 31),
	.cfg_dec_scan_map_20 =		REG_FIELD(SWREG(140), 0, 5),
	.cfg_dec_ac2_code13_cnt =	REG_FIELD(SWREG(140), 0, 7),
	.cfg_dec_dct_strm1_base =	REG_FIELD(SWREG(140), 0, 31),
	.cfg_dec_scan_map_19 =		REG_FIELD(SWREG(140), 6, 11),
	.cfg_dec_ac2_code14_cnt =	REG_FIELD(SWREG(140), 8, 15),
	.cfg_dec_scan_map_18 =		REG_FIELD(SWREG(140), 12, 17),
	.cfg_dec_ac2_code15_cnt =	REG_FIELD(SWREG(140), 16, 23),
	.cfg_dec_scan_map_17 =		REG_FIELD(SWREG(140), 18, 23),
	.cfg_dec_scan_map_16 =		REG_FIELD(SWREG(140), 24, 29),
	.cfg_dec_ac2_code16_cnt =	REG_FIELD(SWREG(140), 24, 31),
	.cfg_dec_dc1_code1_cnt =	REG_FIELD(SWREG(141), 0, 1),
	.cfg_dec_scan_map_25 =		REG_FIELD(SWREG(141), 0, 5),
	.cfg_dec_dct_strm2_base =	REG_FIELD(SWREG(141), 0, 31),
	.cfg_dec_dc1_code2_cnt =	REG_FIELD(SWREG(141), 4, 6),
	.cfg_dec_scan_map_24 =		REG_FIELD(SWREG(141), 6, 11),
	.cfg_dec_dc1_code3_cnt =	REG_FIELD(SWREG(141), 8, 11),
	.cfg_dec_dc1_code4_cnt =	REG_FIELD(SWREG(141), 12, 15),
	.cfg_dec_scan_map_23 =		REG_FIELD(SWREG(141), 12, 17),
	.cfg_dec_dc1_code5_cnt =	REG_FIELD(SWREG(141), 16, 19),
	.cfg_dec_scan_map_22 =		REG_FIELD(SWREG(141), 18, 23),
	.cfg_dec_dc1_code6_cnt =	REG_FIELD(SWREG(141), 20, 23),
	.cfg_dec_dc1_code7_cnt =	REG_FIELD(SWREG(141), 24, 27),
	.cfg_dec_scan_map_21 =		REG_FIELD(SWREG(141), 24, 29),
	.cfg_dec_dc1_code8_cnt =	REG_FIELD(SWREG(141), 28, 31),
	.cfg_dec_dc1_code9_cnt =	REG_FIELD(SWREG(142), 0, 3),
	.cfg_dec_scan_map_30 =		REG_FIELD(SWREG(142), 0, 5),
	.cfg_dec_dct_strm3_base =	REG_FIELD(SWREG(142), 0, 31),
	.cfg_dec_dc1_code10_cnt =	REG_FIELD(SWREG(142), 4, 7),
	.cfg_dec_scan_map_29 =		REG_FIELD(SWREG(142), 6, 11),
	.cfg_dec_dc1_code11_cnt =	REG_FIELD(SWREG(142), 8, 11),
	.cfg_dec_dc1_code12_cnt =	REG_FIELD(SWREG(142), 12, 15),
	.cfg_dec_scan_map_28 =		REG_FIELD(SWREG(142), 12, 17),
	.cfg_dec_dc1_code13_cnt =	REG_FIELD(SWREG(142), 16, 19),
	.cfg_dec_scan_map_27 =		REG_FIELD(SWREG(142), 18, 23),
	.cfg_dec_dc1_code14_cnt =	REG_FIELD(SWREG(142), 20, 23),
	.cfg_dec_dc1_code15_cnt =	REG_FIELD(SWREG(142), 24, 27),
	.cfg_dec_scan_map_26 =		REG_FIELD(SWREG(142), 24, 29),
	.cfg_dec_dc1_code16_cnt =	REG_FIELD(SWREG(142), 28, 31),
	.cfg_dec_dc2_code1_cnt =	REG_FIELD(SWREG(143), 0, 1),
	.cfg_dec_scan_map_35 =		REG_FIELD(SWREG(143), 0, 5),
	.cfg_dec_dct_strm4_base =	REG_FIELD(SWREG(143), 0, 31),
	.cfg_dec_dc2_code2_cnt =	REG_FIELD(SWREG(143), 4, 6),
	.cfg_dec_scan_map_34 =		REG_FIELD(SWREG(143), 6, 11),
	.cfg_dec_dc2_code3_cnt =	REG_FIELD(SWREG(143), 8, 11),
	.cfg_dec_dc2_code4_cnt =	REG_FIELD(SWREG(143), 12, 15),
	.cfg_dec_scan_map_33 =		REG_FIELD(SWREG(143), 12, 17),
	.cfg_dec_dc2_code5_cnt =	REG_FIELD(SWREG(143), 16, 19),
	.cfg_dec_scan_map_32 =		REG_FIELD(SWREG(143), 18, 23),
	.cfg_dec_dc2_code6_cnt =	REG_FIELD(SWREG(143), 20, 23),
	.cfg_dec_dc2_code7_cnt =	REG_FIELD(SWREG(143), 24, 27),
	.cfg_dec_scan_map_31 =		REG_FIELD(SWREG(143), 24, 29),
	.cfg_dec_dc2_code8_cnt =	REG_FIELD(SWREG(143), 28, 31),
	.cfg_dec_dc2_code9_cnt =	REG_FIELD(SWREG(144), 0, 3),
	.cfg_dec_scan_map_40 =		REG_FIELD(SWREG(144), 0, 5),
	.cfg_dec_dct_strm5_base =	REG_FIELD(SWREG(144), 0, 31),
	.cfg_dec_dc2_code10_cnt =	REG_FIELD(SWREG(144), 4, 7),
	.cfg_dec_scan_map_39 =		REG_FIELD(SWREG(144), 6, 11),
	.cfg_dec_dc2_code11_cnt =	REG_FIELD(SWREG(144), 8, 11),
	.cfg_dec_dc2_code12_cnt =	REG_FIELD(SWREG(144), 12, 15),
	.cfg_dec_scan_map_38 =		REG_FIELD(SWREG(144), 12, 17),
	.cfg_dec_dc2_code13_cnt =	REG_FIELD(SWREG(144), 16, 19),
	.cfg_dec_scan_map_37 =		REG_FIELD(SWREG(144), 18, 23),
	.cfg_dec_dc2_code14_cnt =	REG_FIELD(SWREG(144), 20, 23),
	.cfg_dec_dc2_code15_cnt =	REG_FIELD(SWREG(144), 24, 27),
	.cfg_dec_scan_map_36 =		REG_FIELD(SWREG(144), 24, 29),
	.cfg_dec_dc2_code16_cnt =	REG_FIELD(SWREG(144), 28, 31),
	.cfg_dec_dc3_code1_cnt =	REG_FIELD(SWREG(145), 0, 1),
	.cfg_dec_refer13_base =		REG_FIELD(SWREG(145), 0, 31),
	.cfg_dec_bitpl_ctrl_base =	REG_FIELD(SWREG(145), 0, 31),
	.cfg_dec_dc3_code2_cnt =	REG_FIELD(SWREG(145), 4, 6),
	.cfg_dec_dc3_code3_cnt =	REG_FIELD(SWREG(145), 8, 11),
	.cfg_dec_dc3_code4_cnt =	REG_FIELD(SWREG(145), 12, 15),
	.cfg_dec_dc3_code5_cnt =	REG_FIELD(SWREG(145), 16, 19),
	.cfg_dec_dc3_code6_cnt =	REG_FIELD(SWREG(145), 20, 23),
	.cfg_dec_dc3_code7_cnt =	REG_FIELD(SWREG(145), 24, 27),
	.cfg_dec_dc3_code8_cnt =	REG_FIELD(SWREG(145), 28, 31),
	.cfg_dec_dc3_code9_cnt =	REG_FIELD(SWREG(146), 0, 3),
	.cfg_dec_scan_map_45 =		REG_FIELD(SWREG(146), 0, 5),
	.cfg_dec_ref_invd_cur_0 =	REG_FIELD(SWREG(146), 0, 15),
	.cfg_dec_refer14_base =		REG_FIELD(SWREG(146), 0, 31),
	.cfg_dec_dct_strm6_base =	REG_FIELD(SWREG(146), 0, 31),
	.cfg_dec_dc3_code10_cnt =	REG_FIELD(SWREG(146), 4, 7),
	.cfg_dec_scan_map_44 =		REG_FIELD(SWREG(146), 6, 11),
	.cfg_dec_dc3_code11_cnt =	REG_FIELD(SWREG(146), 8, 11),
	.cfg_dec_dc3_code12_cnt =	REG_FIELD(SWREG(146), 12, 15),
	.cfg_dec_scan_map_43 =		REG_FIELD(SWREG(146), 12, 17),
	.cfg_dec_dc3_code13_cnt =	REG_FIELD(SWREG(146), 16, 19),
	.cfg_dec_ref_invd_cur_1 =	REG_FIELD(SWREG(146), 16, 31),
	.cfg_dec_scan_map_42 =		REG_FIELD(SWREG(146), 18, 23),
	.cfg_dec_dc3_code14_cnt =	REG_FIELD(SWREG(146), 20, 23),
	.cfg_dec_dc3_code15_cnt =	REG_FIELD(SWREG(146), 24, 27),
	.cfg_dec_scan_map_41 =		REG_FIELD(SWREG(146), 24, 29),
	.cfg_dec_dc3_code16_cnt =	REG_FIELD(SWREG(146), 28, 31),
	.cfg_dec_scan_map_50 =		REG_FIELD(SWREG(147), 0, 5),
	.cfg_dec_ref_invd_cur_2 =	REG_FIELD(SWREG(147), 0, 15),
	.cfg_dec_refer15_base =		REG_FIELD(SWREG(147), 0, 31),
	.cfg_dec_dct_strm7_base =	REG_FIELD(SWREG(147), 0, 31),
	.cfg_dec_scan_map_49 =		REG_FIELD(SWREG(147), 6, 11),
	.cfg_dec_scan_map_48 =		REG_FIELD(SWREG(147), 12, 17),
	.cfg_dec_ref_invd_cur_3 =	REG_FIELD(SWREG(147), 16, 31),
	.cfg_dec_scan_map_47 =		REG_FIELD(SWREG(147), 18, 23),
	.cfg_dec_scan_map_46 =		REG_FIELD(SWREG(147), 24, 29),
	.cfg_dec_jpeg_slice_h =		REG_FIELD(SWREG(148), 0, 7),
	.cfg_dec_refer1_base =		REG_FIELD(SWREG(148), 0, 31),
	.cfg_dec_segment_e =		REG_FIELD(SWREG(149), 0, 0),
	.cfg_dec_ishift1 =		REG_FIELD(SWREG(149), 0, 15),
	.cfg_dec_diff_mv_base =		REG_FIELD(SWREG(149), 0, 31),
	.cfg_dec_segment_base =		REG_FIELD(SWREG(149), 0, 31),
	.cfg_dec_segment_upd_e =	REG_FIELD(SWREG(149), 1, 1),
	.cfg_dec_iscale1 =		REG_FIELD(SWREG(149), 16, 23),
	.cfg_dec_icomp1_e =		REG_FIELD(SWREG(149), 24, 24),
	.cfg_dec_dct7_start_bit =	REG_FIELD(SWREG(150), 0, 5),
	.cfg_dec_ishift2 =		REG_FIELD(SWREG(150), 0, 15),
	.cfg_dec_i4x4_or_dc_base =	REG_FIELD(SWREG(150), 0, 31),
	.cfg_dec_dct6_start_bit =	REG_FIELD(SWREG(150), 6, 11),
	.cfg_dec_dct5_start_bit =	REG_FIELD(SWREG(150), 12, 17),
	.cfg_dec_iscale2 =		REG_FIELD(SWREG(150), 16, 23),
	.cfg_dec_dct4_start_bit =	REG_FIELD(SWREG(150), 18, 23),
	.cfg_dec_icomp2_e =		REG_FIELD(SWREG(150), 24, 24),
	.cfg_dec_dct3_start_bit =	REG_FIELD(SWREG(150), 24, 29),
	.cfg_dec_quant_3 =		REG_FIELD(SWREG(151), 0, 10),
	.cfg_dec_quant_2 =		REG_FIELD(SWREG(151), 11, 21),
	.cfg_dec_quant_delta_3 =	REG_FIELD(SWREG(151), 22, 26),
	.cfg_dec_quant_delta_2 =	REG_FIELD(SWREG(151), 27, 31),
	.cfg_dec_quant_5 =		REG_FIELD(SWREG(152), 0, 10),
	.cfg_dec_quant_4 =		REG_FIELD(SWREG(152), 11, 21),
	.cfg_dec_quant_delta_4 =	REG_FIELD(SWREG(152), 27, 31),
	.cfg_dec_pred_bc_tap_1_1 =	REG_FIELD(SWREG(153), 2, 11),
	.cfg_dec_pred_bc_tap_1_0 =	REG_FIELD(SWREG(153), 12, 21),
	.cfg_dec_pred_bc_tap_0_3 =	REG_FIELD(SWREG(153), 22, 31),
	.cfg_dec_pred_bc_tap_2_0 =	REG_FIELD(SWREG(154), 2, 11),
	.cfg_dec_pred_bc_tap_1_3 =	REG_FIELD(SWREG(154), 12, 21),
	.cfg_dec_pred_bc_tap_1_2 =	REG_FIELD(SWREG(154), 22, 31),
	.cfg_dec_pred_bc_tap_2_3 =	REG_FIELD(SWREG(155), 2, 11),
	.cfg_dec_pred_bc_tap_2_2 =	REG_FIELD(SWREG(155), 12, 21),
	.cfg_dec_pred_bc_tap_2_1 =	REG_FIELD(SWREG(155), 22, 31),
	.cfg_dec_pred_bc_tap_3_2 =	REG_FIELD(SWREG(156), 2, 11),
	.cfg_dec_pred_bc_tap_3_1 =	REG_FIELD(SWREG(156), 12, 21),
	.cfg_dec_pred_bc_tap_3_0 =	REG_FIELD(SWREG(156), 22, 31),
	.cfg_dec_pred_bc_tap_4_1 =	REG_FIELD(SWREG(157), 2, 11),
	.cfg_dec_pred_bc_tap_4_0 =	REG_FIELD(SWREG(157), 12, 21),
	.cfg_dec_pred_bc_tap_3_3 =	REG_FIELD(SWREG(157), 22, 31),
	.cfg_dec_pred_bc_tap_5_0 =	REG_FIELD(SWREG(158), 2, 11),
	.cfg_dec_pred_bc_tap_4_3 =	REG_FIELD(SWREG(158), 12, 21),
	.cfg_dec_pred_bc_tap_4_2 =	REG_FIELD(SWREG(158), 22, 31),
};
