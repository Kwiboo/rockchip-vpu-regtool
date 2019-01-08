#define VDPU_SWREG(nr)			((nr) * 4)
#define VDPU_REG_RLC_VLC_BASE		VDPU_SWREG(12)
#define VDPU_REG_DEC_OUT_BASE		VDPU_SWREG(13)
#define VDPU_REG_REFER0_BASE		VDPU_SWREG(14)
#define VDPU_REG_REFER1_BASE		VDPU_SWREG(15)
#define VDPU_REG_REFER2_BASE		VDPU_SWREG(16)
#define VDPU_REG_REFER3_BASE		VDPU_SWREG(17)
#define VDPU_REG_QTABLE_BASE		VDPU_SWREG(40)
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

	reg = VDPU_REG_DEC_AXI_RD_ID(0) |
	      VDPU_REG_DEC_TIMEOUT_E(1) |
	      VDPU_REG_DEC_STRSWAP32_E(1) |
	      VDPU_REG_DEC_STRENDIAN_E(1) |
	      VDPU_REG_DEC_INSWAP32_E(1) |
	      VDPU_REG_DEC_OUTSWAP32_E(1) |
	      VDPU_REG_DEC_DATA_DISC_E(0) |
	      VDPU_REG_DEC_LATENCY(0) |
	      VDPU_REG_DEC_CLK_GATE_E(1) |
	      VDPU_REG_DEC_IN_ENDIAN(1) |
	      VDPU_REG_DEC_OUT_ENDIAN(1) |
	      VDPU_REG_DEC_ADV_PRE_DIS(0) |
	      VDPU_REG_DEC_SCMD_DIS(0) |
	      VDPU_REG_DEC_MAX_BURST(16);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(2));

#define VDPU_REG_DEC_MODE(v)		(((v) << 28) & GENMASK(31, 28))
#define VDPU_REG_RLC_MODE_E(v)		((v) ? BIT(27) : 0)
#define VDPU_REG_PIC_INTERLACE_E(v)	((v) ? BIT(23) : 0)
#define VDPU_REG_PIC_FIELDMODE_E(v)	((v) ? BIT(22) : 0)
#define VDPU_REG_PIC_B_E(v)		((v) ? BIT(21) : 0)
#define VDPU_REG_PIC_INTER_E(v)		((v) ? BIT(20) : 0)
#define VDPU_REG_PIC_TOPFIELD_E(v)	((v) ? BIT(19) : 0)
#define VDPU_REG_FWD_INTERLACE_E(v)	((v) ? BIT(18) : 0)
#define VDPU_REG_FILTERING_DIS(v)	((v) ? BIT(14) : 0)
#define VDPU_REG_WRITE_MVS_E(v)		((v) ? BIT(12) : 0)
#define VDPU_REG_DEC_AXI_WR_ID(v)	(((v) << 0) & GENMASK(7, 0))

	reg = VDPU_REG_DEC_MODE(5) |
	      VDPU_REG_RLC_MODE_E(0) |
	      VDPU_REG_PIC_INTERLACE_E(!sequence->progressive_sequence) |
	      VDPU_REG_PIC_FIELDMODE_E(picture->picture_structure != PICT_FRAME) |
	      VDPU_REG_PIC_B_E(picture->picture_coding_type == V4L2_MPEG2_PICTURE_CODING_TYPE_B) |
	      VDPU_REG_PIC_INTER_E(picture->picture_coding_type != V4L2_MPEG2_PICTURE_CODING_TYPE_I) |
	      VDPU_REG_PIC_TOPFIELD_E(picture->picture_structure == PICT_TOP_FIELD) |
	      VDPU_REG_FWD_INTERLACE_E(0) |
	      VDPU_REG_FILTERING_DIS(1) |
	      VDPU_REG_WRITE_MVS_E(0) |
	      VDPU_REG_DEC_AXI_WR_ID(0);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(3));

#define VDPU_REG_PIC_MB_WIDTH(v)	(((v) << 23) & GENMASK(31, 23))
#define VDPU_REG_PIC_MB_HEIGHT_P(v)	(((v) << 11) & GENMASK(18, 11))
#define VDPU_REG_ALT_SCAN_E(v)		((v) ? BIT(6) : 0)
#define VDPU_REG_TOPFIELDFIRST_E(v)	((v) ? BIT(5) : 0)

	reg = VDPU_REG_PIC_MB_WIDTH(DIV_ROUND_UP(sequence->horizontal_size, 16)) |
	      VDPU_REG_PIC_MB_HEIGHT_P(DIV_ROUND_UP(sequence->vertical_size, 16)) |
	      VDPU_REG_ALT_SCAN_E(picture->alternate_scan) |
	      VDPU_REG_TOPFIELDFIRST_E(picture->top_field_first);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(4));

#define VDPU_REG_STRM_START_BIT(v)	(((v) << 26) & GENMASK(31, 26))
#define VDPU_REG_QSCALE_TYPE(v)		((v) ? BIT(24) : 0)
#define VDPU_REG_CON_MV_E(v)		((v) ? BIT(4) : 0)
#define VDPU_REG_INTRA_DC_PREC(v)	(((v) << 2) & GENMASK(3, 2))
#define VDPU_REG_INTRA_VLC_TAB(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_FRAME_PRED_DCT(v)	((v) ? BIT(0) : 0)

	reg = VDPU_REG_STRM_START_BIT(slice_params->data_bit_offset) |
	      VDPU_REG_QSCALE_TYPE(picture->q_scale_type) |
	      VDPU_REG_CON_MV_E(picture->concealment_motion_vectors) |
	      VDPU_REG_INTRA_DC_PREC(picture->intra_dc_precision) |
	      VDPU_REG_INTRA_VLC_TAB(picture->intra_vlc_format) |
	      VDPU_REG_FRAME_PRED_DCT(picture->frame_pred_frame_dct);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(5));

#define VDPU_REG_INIT_QP(v)		(((v) << 25) & GENMASK(30, 25))
#define VDPU_REG_STREAM_LEN(v)		(((v) << 0) & GENMASK(23, 0))

	reg = VDPU_REG_INIT_QP(1) |
	      VDPU_REG_STREAM_LEN(slice_params->bit_size >> 3);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(6));

#define VDPU_REG_ALT_SCAN_FLAG_E(v)	((v) ? BIT(19) : 0)
#define VDPU_REG_FCODE_FWD_HOR(v)	(((v) << 15) & GENMASK(18, 15))
#define VDPU_REG_FCODE_FWD_VER(v)	(((v) << 11) & GENMASK(14, 11))
#define VDPU_REG_FCODE_BWD_HOR(v)	(((v) << 7) & GENMASK(10, 7))
#define VDPU_REG_FCODE_BWD_VER(v)	(((v) << 3) & GENMASK(6, 3))
#define VDPU_REG_MV_ACCURACY_FWD(v)	((v) ? BIT(2) : 0)
#define VDPU_REG_MV_ACCURACY_BWD(v)	((v) ? BIT(1) : 0)

	reg = VDPU_REG_ALT_SCAN_FLAG_E(picture->alternate_scan) |
	      VDPU_REG_FCODE_FWD_HOR(picture->f_code[0][0]) |
	      VDPU_REG_FCODE_FWD_VER(picture->f_code[0][1]) |
	      VDPU_REG_FCODE_BWD_HOR(picture->f_code[1][0]) |
	      VDPU_REG_FCODE_BWD_VER(picture->f_code[1][1]) |
	      VDPU_REG_MV_ACCURACY_FWD(1) |
	      VDPU_REG_MV_ACCURACY_BWD(1);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(18));

#define VDPU_REG_STARTMB_X(v)		(((v) << 23) & GENMASK(31, 23))
#define VDPU_REG_STARTMB_Y(v)		(((v) << 15) & GENMASK(22, 15))

	reg = VDPU_REG_STARTMB_X(0) |
	      VDPU_REG_STARTMB_Y(0);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(48));

#define VDPU_REG_APF_THRESHOLD(v)	(((v) << 0) & GENMASK(13, 0))

	reg = VDPU_REG_APF_THRESHOLD(8);
	vdpu_write_relaxed(vpu, reg, VDPU_SWREG(55));

	vdpu_write_relaxed(vpu, ctx->qtable_dma_addr, VDPU_REG_QTABLE_BASE);

	/* Source bitstream buffer */
	addr = vb2_dma_contig_plane_dma_addr(&src_buf->vb2_buf, 0);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_RLC_VLC_BASE);

	/* Destination frame buffer */
	addr = vb2_dma_contig_plane_dma_addr(&dst_buf->vb2_buf, 0);
	vdpu_write_relaxed(vpu, addr, VDPU_REG_DEC_OUT_BASE);

	vdpu_write_relaxed(vpu, forward_addr, VDPU_REG_REFER0_BASE);
	vdpu_write_relaxed(vpu, forward_addr, VDPU_REG_REFER1_BASE);
	vdpu_write_relaxed(vpu, backward_addr, VDPU_REG_REFER2_BASE);
	vdpu_write_relaxed(vpu, backward_addr, VDPU_REG_REFER3_BASE);
