#define VDPU_SWREG(nr)	((nr) * 4)

/* SWREG0 */
#define VDPU_REG_PP_AXI_WR_ID(v)	(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_PP_AXI_RD_ID(v)	(((v) << 8) & GENMASK(15, 8))
#define VDPU_REG_PP_SCMD_DIS(v)		((v) ? BIT(5) : 0)
#define VDPU_REG_PP_MAX_BURST(v)	(((v) << 0) & GENMASK(4, 0))

/* SWREG1 */
#define VDPU_REG_COLOR_COEFFB(v)	(((v) << 20) & GENMASK(29, 20))
#define VDPU_REG_COLOR_COEFFA2(v)	(((v) << 10) & GENMASK(19, 10))
#define VDPU_REG_COLOR_COEFFA1(v)	(((v) << 0) & GENMASK(9, 0))

/* SWREG2 */
#define VDPU_REG_COLOR_COEFFE(v)	(((v) << 20) & GENMASK(29, 20))
#define VDPU_REG_COLOR_COEFFD(v)	(((v) << 10) & GENMASK(19, 10))
#define VDPU_REG_COLOR_COEFFC(v)	(((v) << 0) & GENMASK(9, 0))

/* SWREG3 */
#define VDPU_REG_COLOR_COEFFF(v)	(((v) << 0) & GENMASK(7, 0))

/* SWREG4 */
#define VDPU_REG_VER_SCALE_MODE(v)	(((v) << 22) & GENMASK(23, 22))
#define VDPU_REG_HOR_SCALE_MODE(v)	(((v) << 20) & GENMASK(21, 20))
#define VDPU_REG_SCALE_WRATIO(v)	(((v) << 0) & GENMASK(17, 0))

/* SWREG5 */
#define VDPU_REG_SCALE_HRATIO(v)	(((v) << 0) & GENMASK(17, 0))

/* SWREG6 */
#define VDPU_REG_HSCALE_INVRA(v)	(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_WSCALE_INVRA(v)	(((v) << 0) & GENMASK(15, 0))

/* SWREG7 */
#define VDPU_REG_DOWN_CROSS(v)		(((v) << 16) & GENMASK(26, 16))
#define VDPU_REG_UP_CROSS(v)		(((v) << 0) & GENMASK(10, 0))

/* SWREG8 */
#define VDPU_REG_RIGHT_CROSS(v)		(((v) << 16) & GENMASK(26, 16))
#define VDPU_REG_LEFT_CROSS(v)		(((v) << 0) & GENMASK(10, 0))

/* SWREG9 */
#define VDPU_REG_R_MASK			GENMASK(31, 0)

/* SWREG10 */
#define VDPU_REG_G_MASK			GENMASK(31, 0)

/* SWREG11 */
#define VDPU_REG_B_MASK			GENMASK(31, 0)

/* SWREG12 */
#define VDPU_REG_PP_BOT_YIN_BASE	VDPU_SWREG(12)

/* SWREG13 */
#define VDPU_REG_PP_BOT_CIN_BASE	VDPU_SWREG(13)

/* SWREG14 */
#define VDPU_REG_PP_CROP8_R_E(v)	((v) ? BIT(29) : 0)
#define VDPU_REG_PP_CROP8_D_E(v)	((v) ? BIT(28) : 0)
#define VDPU_REG_CROP_STARTX_EXT(v)	(((v) << 24) & GENMASK(26, 24))
#define VDPU_REG_CROP_STARTY(v)		(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_CROP_STARTY_EXT(v)	(((v) << 9) & GENMASK(11, 9))
#define VDPU_REG_CROP_STARTX(v)		(((v) << 0) & GENMASK(8, 0))

/* SWREG15 */
#define VDPU_REG_RANGEMAP_COEF_C(v)	(((v) << 8) & GENMASK(12, 8))
#define VDPU_REG_YCBCR_RANGE(v)		((v) ? BIT(5) : 0)
#define VDPU_REG_RANGEMAP_COEF_Y(v)	(((v) << 0) & GENMASK(4, 0))

/* SWREG16 */
#define VDPU_REG_RGB_B_PADD(v)		(((v) << 16) & GENMASK(20, 16))
#define VDPU_REG_RGB_G_PADD(v)		(((v) << 8) & GENMASK(12, 8))
#define VDPU_REG_RGB_R_PADD(v)		(((v) << 0) & GENMASK(4, 0))

/* SWREG18 */
#define VDPU_REG_PP_IN_LU_BASE		VDPU_SWREG(18)

/* SWREG19 */
#define VDPU_REG_PP_IN_CB_BASE		VDPU_SWREG(19)

/* SWREG20 */
#define VDPU_REG_PP_IN_CR_BASE		VDPU_SWREG(20)

/* SWREG21 */
#define VDPU_REG_PP_OUT_LU_BASE		VDPU_SWREG(21)

/* SWREG22 */
#define VDPU_REG_PP_OUT_CH_BASE		VDPU_SWREG(22)

/* SWREG23 */
#define VDPU_REG_ABLEND1_BASE		VDPU_SWREG(23)

/* SWREG24 */
#define VDPU_REG_ABLEND2_BASE		VDPU_SWREG(24)

/* SWREG25 */
#define VDPU_REG_ABLEND2_SCANL(v)	(((v) << 13) & GENMASK(25, 13))
#define VDPU_REG_ABLEND1_SCANL(v)	(((v) << 0) & GENMASK(12, 0))

/* SWREG26 */
#define VDPU_REG_MASK1_ENDX(v)		(((v) << 12) & GENMASK(22, 12))
#define VDPU_REG_MASK1_STARTX(v)	(((v) << 0) & GENMASK(10, 0))

/* SWREG27 */
#define VDPU_REG_MASK1_ENDY(v)		(((v) << 12) & GENMASK(22, 12))
#define VDPU_REG_MASK1_STARTY(v)	(((v) << 0) & GENMASK(10, 0))

/* SWREG28 */
#define VDPU_REG_MASK2_ENDX(v)		(((v) << 11) & GENMASK(21, 11))
#define VDPU_REG_MASK2_STARTX(v)	(((v) << 0) & GENMASK(10, 0))

/* SWREG29 */
#define VDPU_REG_MASK2_ENDY(v)		(((v) << 11) & GENMASK(21, 11))
#define VDPU_REG_MASK2_STARTY(v)	(((v) << 0) & GENMASK(10, 0))

/* SWREG30 */
#define VDPU_REG_DEINT_EDGE_DET(v)	(((v) << 16) & GENMASK(30, 16))
#define VDPU_REG_DEINT_THRESHOLD(v)	(((v) << 0) & GENMASK(13, 0))

/* SWREG31 */
#define VDPU_REG_CONTRAST_THR2(v)	(((v) << 8) & GENMASK(15, 8))
#define VDPU_REG_CONTRAST_THR1(v)	(((v) << 0) & GENMASK(7, 0))

/* SWREG32 */
#define VDPU_REG_CONTRAST_OFF2(v)	(((v) << 16) & GENMASK(25, 16))
#define VDPU_REG_CONTRAST_OFF1(v)	(((v) << 0) & GENMASK(9, 0))

/* SWREG34 */
#define VDPU_REG_PP_IN_H_EXT(v)		(((v) << 29) & GENMASK(31, 29))
#define VDPU_REG_PP_IN_HEIGHT(v)	(((v) << 21) & GENMASK(28, 21))
#define VDPU_REG_EXT_ORIG_WIDTH(v)	(((v) << 12) & GENMASK(20, 12))
#define VDPU_REG_PP_IN_W_EXT(v)		(((v) << 9) & GENMASK(11, 9))
#define VDPU_REG_PP_IN_WIDTH(v)		(((v) << 0) & GENMASK(8, 0))

/* SWREG35 */
#define VDPU_REG_PP_OUT_HEIGHT(v)	(((v) << 16) & GENMASK(26, 16))
#define VDPU_REG_PP_OUT_WIDTH(v)	(((v) << 0) & GENMASK(10, 0))

/* SWREG36 */
#define VDPU_REG_DITHER_SELECT_B(v)	(((v) << 4) & GENMASK(5, 4))
#define VDPU_REG_DITHER_SELECT_G(v)	(((v) << 2) & GENMASK(3, 2))
#define VDPU_REG_DITHER_SELECT_R(v)	(((v) << 0) & GENMASK(1, 0))

/* SWREG37 */
#define VDPU_REG_PP_IN_STRUCT(v)	(((v) << 24) & GENMASK(26, 24))
#define VDPU_REG_PP_OUT_CR_FIRST(v)	((v) ? BIT(19) : 0)
#define VDPU_REG_PP_IN_CR_FIRST(v)	((v) ? BIT(18) : 0)
#define VDPU_REG_PP_OUT_START_CH(v)	((v) ? BIT(17) : 0)
#define VDPU_REG_PP_IN_START_CH(v)	((v) ? BIT(16) : 0)
#define VDPU_REG_PP_OUT_SWAP32_E(v)	((v) ? BIT(11) : 0)
#define VDPU_REG_PP_OUT_SWAP16_E(v)	((v) ? BIT(10) : 0)
#define VDPU_REG_PP_IN_A1_SWAP32(v)	((v) ? BIT(9) : 0)
#define VDPU_REG_PP_IN_SWAP32_E(v)	((v) ? BIT(8) : 0)
#define VDPU_REG_RGB_PIX_IN32(v)	((v) ? BIT(4) : 0)
#define VDPU_REG_PP_OUT_ENDIAN(v)	((v) ? BIT(3) : 0)
#define VDPU_REG_PP_IN_A2_ENDSEL(v)	((v) ? BIT(2) : 0)
#define VDPU_REG_PP_IN_A1_ENDIAN(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_PP_IN_ENDIAN(v)	((v) ? BIT(0) : 0)

/* SWREG38 */
#define VDPU_REG_PP_IN_FORMAT_ES(v)	(((v) << 16) & GENMASK(18, 16))
#define VDPU_REG_PP_OUT_FORMAT(v)	(((v) << 11) & GENMASK(13, 11))
#define VDPU_REG_PP_IN_FORMAT(v)	(((v) << 8) & GENMASK(10, 8))
#define VDPU_REG_ROTATION_MODE(v)	(((v) << 0) & GENMASK(2, 0))

/* SWREG39 */
#define VDPU_REG_DISPLAY_WIDTH(v)	(((v) << 0) & GENMASK(11, 0))

/* SWREG40 */
#define VDPU_REG_PP_BUS_INT(v)		((v) ? BIT(3) : 0)
#define VDPU_REG_PP_RDY_INT(v)		((v) ? BIT(2) : 0)
#define VDPU_REG_PP_IRQ_DIS(v)		((v) ? BIT(1) : 0)
#define VDPU_REG_PP_IRQ(v)		((v) ? BIT(0) : 0)

/* SWREG41 */
#define VDPU_REG_PP_AHB_HLOCK_E(v)	((v) ? BIT(28) : 0)
#define VDPU_REG_RIGHT_CROSS_E(v)	((v) ? BIT(27) : 0)
#define VDPU_REG_LEFT_CROSS_E(v)	((v) ? BIT(26) : 0)
#define VDPU_REG_DOWN_CROSS_E(v)	((v) ? BIT(25) : 0)
#define VDPU_REG_UP_CROSS_E(v)		((v) ? BIT(24) : 0)
#define VDPU_REG_MASK2_ABLEND_E(v)	((v) ? BIT(23) : 0)
#define VDPU_REG_MASK1_ABLEND_E(v)	((v) ? BIT(22) : 0)
#define VDPU_REG_MASK2_E(v)		((v) ? BIT(21) : 0)
#define VDPU_REG_MASK1_E(v)		((v) ? BIT(20) : 0)
#define VDPU_REG_PP_DATA_DISC_E(v)	((v) ? BIT(16) : 0)
#define VDPU_REG_RANGEMAP_C_E(v)	((v) ? BIT(9) : 0)
#define VDPU_REG_RANGEMAP_Y_E(v)	((v) ? BIT(8) : 0)
#define VDPU_REG_PP_PIPELINE_E(v)	((v) ? BIT(4) : 0)
#define VDPU_REG_PP_CLK_GATE_E(v)	((v) ? BIT(3) : 0)
#define VDPU_REG_DEINT_E(v)		((v) ? BIT(2) : 0)
#define VDPU_REG_DEINT_BLEND_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_PP_E(v)		((v) ? BIT(0) : 0)

/* SWREG50 */
#define VDPU_REG_REFBU2_PICID(v)	(((v) << 25) & GENMASK(29, 25))
#define VDPU_REG_REFBU2_THR(v)		(((v) << 13) & GENMASK(24, 13))
#define VDPU_REG_PRIORITY_MODE(v)	((v) ? BIT(12) : 0)
#define VDPU_REG_DEC_ADV_PRE_DIS(v)	((v) ? BIT(11) : 0)
#define VDPU_REG_DEC_SCMD_DIS(v)	((v) ? BIT(10) : 0)
#define VDPU_REG_SKIP_MODE(v)		((v) ? BIT(9) : 0)
#define VDPU_REG_FILTERING_DIS(v)	((v) ? BIT(8) : 0)
#define VDPU_REG_MVC_E(v)		((v) ? BIT(7) : 0)
#define VDPU_REG_PIC_FIXED_QUANT(v)	((v) ? BIT(7) : 0)
#define VDPU_REG_DEC_LATENCY(v)		(((v) << 1) & GENMASK(6, 1))
#define VDPU_REG_DEC_OUT_TILED_E(v)	((v) ? BIT(0) : 0)

/* SWREG51 */
#define VDPU_REG_INIT_QP(v)		(((v) << 25) & GENMASK(30, 25))
#define VDPU_REG_STREAM_LEN_EXT(v)	((v) ? BIT(24) : 0)
#define VDPU_REG_STREAM_LEN(v)		(((v) << 0) & GENMASK(23, 0))

/* SWREG52 */
#define VDPU_REG_APF_THRESHOLD(v)	(((v) << 17) & GENMASK(30, 17))
#define VDPU_REG_STARTMB_X(v)		(((v) << 8) & GENMASK(16, 8))
#define VDPU_REG_STARTMB_Y(v)		(((v) << 0) & GENMASK(7, 0))

/* SWREG53 */
#define VDPU_REG_DEC_MODE(v)		(((v) << 0) & GENMASK(3, 0))

/* SWREG54 */
#define VDPU_REG_DEC_STRENDIAN_E(v)	((v) ? BIT(5) : 0)
#define VDPU_REG_DEC_STRSWAP32_E(v)	((v) ? BIT(4) : 0)
#define VDPU_REG_DEC_OUTSWAP32_E(v)	((v) ? BIT(3) : 0)
#define VDPU_REG_DEC_INSWAP32_E(v)	((v) ? BIT(2) : 0)
#define VDPU_REG_DEC_OUT_ENDIAN(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_DEC_IN_ENDIAN(v)	((v) ? BIT(0) : 0)

/* SWREG55 */
#define VDPU_REG_DEC_TIMEOUT(v)		((v) ? BIT(13) : 0)
#define VDPU_REG_DEC_ERROR_INT(v)	((v) ? BIT(12) : 0)
#define VDPU_REG_DEC_PIC_INF(v)		((v) ? BIT(10) : 0)
#define VDPU_REG_DEC_SLICE_INT(v)	((v) ? BIT(9) : 0)
#define VDPU_REG_DEC_ASO_INT(v)		((v) ? BIT(8) : 0)
#define VDPU_REG_DEC_BUFFER_INT(v)	((v) ? BIT(6) : 0)
#define VDPU_REG_DEC_BUS_INT(v)		((v) ? BIT(5) : 0)
#define VDPU_REG_DEC_RDY_INT(v)		((v) ? BIT(4) : 0)
#define VDPU_REG_DEC_IRQ_DIS(v)		((v) ? BIT(1) : 0)
#define VDPU_REG_DEC_IRQ(v)		((v) ? BIT(0) : 0)

/* SWREG56 */
#define VDPU_REG_AXIWR_SEL(v)		((v) ? BIT(23) : 0)
#define VDPU_REG_DEC_DATA_DISC_E(v)	((v) ? BIT(22) : 0)
#define VDPU_REG_PARAL_BUS_E(v)		((v) ? BIT(21) : 0)
#define VDPU_REG_DEC_MAX_BURST(v)	(((v) << 16) & GENMASK(20, 16))
#define VDPU_REG_DEC_AXI_WR_ID(v)	(((v) << 8) & GENMASK(15, 8))
#define VDPU_REG_DEC_AXI_RD_ID(v)	(((v) << 0) & GENMASK(7, 0))

/* SWREG57 */
#define VDPU_REG_DEC_AHB_HLOCK_E(v)	((v) ? BIT(31) : 0)
#define VDPU_REG_CACHE_ENABLE(v)	((v) ? BIT(29) : 0)
#define VDPU_REG_PREF_SIGCHAN(v)	((v) ? BIT(28) : 0)
#define VDPU_REG_INTRA_DBL3T(v)		((v) ? BIT(27) : 0)
#define VDPU_REG_INTRA_DBLSPEED(v)	((v) ? BIT(26) : 0)
#define VDPU_REG_INTER_DBLSPEED(v)	((v) ? BIT(25) : 0)
#define VDPU_REG_START_CODE_E(v)	((v) ? BIT(22) : 0)
#define VDPU_REG_CH_8PIX_ILEAV_E(v)	((v) ? BIT(21) : 0)
#define VDPU_REG_RLC_MODE_E(v)		((v) ? BIT(20) : 0)
#define VDPU_REG_DIVX3_E(v)		((v) ? BIT(19) : 0)
#define VDPU_REG_PJPEG_E(v)		((v) ? BIT(18) : 0)
#define VDPU_REG_PIC_INTERLACE_E(v)	((v) ? BIT(17) : 0)
#define VDPU_REG_PIC_FIELDMODE_E(v)	((v) ? BIT(16) : 0)
#define VDPU_REG_PIC_B_E(v)		((v) ? BIT(15) : 0)
#define VDPU_REG_PIC_INTER_E(v)		((v) ? BIT(14) : 0)
#define VDPU_REG_PIC_TOPFIELD_E(v)	((v) ? BIT(13) : 0)
#define VDPU_REG_FWD_INTERLACE_E(v)	((v) ? BIT(12) : 0)
#define VDPU_REG_SORENSON_E(v)		((v) ? BIT(11) : 0)
#define VDPU_REG_WRITE_MVS_E(v)		((v) ? BIT(10) : 0)
#define VDPU_REG_REF_TOPFIELD_E(v)	((v) ? BIT(9) : 0)
#define VDPU_REG_REFTOPFIRST_E(v)	((v) ? BIT(8) : 0)
#define VDPU_REG_SEQ_MBAFF_E(v)		((v) ? BIT(7) : 0)
#define VDPU_REG_PICORD_COUNT_E(v)	((v) ? BIT(6) : 0)
#define VDPU_REG_DEC_TIMEOUT_E(v)	((v) ? BIT(5) : 0)
#define VDPU_REG_DEC_CLK_GATE_E(v)	((v) ? BIT(4) : 0)
#define VDPU_REG_DEC_OUT_DIS(v)		((v) ? BIT(2) : 0)
#define VDPU_REG_REFBU2_BUF_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_DEC_E(v)		((v) ? BIT(0) : 0)

/* SWREG58 */
#define VDPU_REG_SOFT_RESET(v)		((v) ? BIT(0) : 0)

/* SWREG59 */
#define VDPU_REG_PRED_BC_TAP_0_0(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_0_1(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_BC_TAP_0_2(v)	(((v) << 2) & GENMASK(11, 2))

/* SWREG60 */
#define VDPU_REG_DEC_CH8PIX_BASE	VDPU_SWREG(60)

/* SWREG61 */
#define VDPU_REG_QTABLE_BASE		VDPU_SWREG(61)

/* SWREG62 */
#define VDPU_REG_DIR_MV_BASE		VDPU_SWREG(62)

/* SWREG63 */
#define VDPU_REG_DEC_OUT_BASE		VDPU_SWREG(63)

/* SWREG64 */
#define VDPU_REG_RLC_VLC_BASE		VDPU_SWREG(64)

/* SWREG65 */
#define VDPU_REG_REFBU_E(v)		((v) ? BIT(31) : 0)
#define VDPU_REG_REFBU_THR(v)		(((v) << 19) & GENMASK(30, 19))
#define VDPU_REG_REFBU_PICID(v)		(((v) << 14) & GENMASK(18, 14))
#define VDPU_REG_REFBU_EVAL_E(v)	((v) ? BIT(13) : 0)
#define VDPU_REG_REFBU_FPARMOD_E(v)	((v) ? BIT(12) : 0)
#define VDPU_REG_REFBU_Y_OFFSET(v)	(((v) << 0) & GENMASK(8, 0))

/* SWREG68 */
#define VDPU_REG_REFBU_TOP_SUM(v)	(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REFBU_BOT_SUM(v)	(((v) << 0) & GENMASK(15, 0))

/* SWREG69 */
#define VDPU_REG_REFBU_HIT_SUM(v)	(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REFBU_INTRA_SUM(v)	(((v) << 0) & GENMASK(15, 0))

/* SWREG70 */
#define VDPU_REG_REFBU_Y_MV_SUM(v)	(((v) << 0) & GENMASK(21, 0))

/* SWREG74 */
#define VDPU_REG_PINIT_RLIST_F9(v)	(((v) << 25) & GENMASK(29, 25))
#define VDPU_REG_PINIT_RLIST_F8(v)	(((v) << 20) & GENMASK(24, 20))
#define VDPU_REG_PINIT_RLIST_F7(v)	(((v) << 15) & GENMASK(19, 15))
#define VDPU_REG_PINIT_RLIST_F6(v)	(((v) << 10) & GENMASK(14, 10))
#define VDPU_REG_PINIT_RLIST_F5(v)	(((v) << 5) & GENMASK(9, 5))
#define VDPU_REG_PINIT_RLIST_F4(v)	(((v) << 0) & GENMASK(4, 0))

/* SWREG75 */
#define VDPU_REG_PINIT_RLIST_F15(v)	(((v) << 25) & GENMASK(29, 25))
#define VDPU_REG_PINIT_RLIST_F14(v)	(((v) << 20) & GENMASK(24, 20))
#define VDPU_REG_PINIT_RLIST_F13(v)	(((v) << 15) & GENMASK(19, 15))
#define VDPU_REG_PINIT_RLIST_F12(v)	(((v) << 10) & GENMASK(14, 10))
#define VDPU_REG_PINIT_RLIST_F11(v)	(((v) << 5) & GENMASK(9, 5))
#define VDPU_REG_PINIT_RLIST_F10(v)	(((v) << 0) & GENMASK(4, 0))

/* SWREG76 */
#define VDPU_REG_REFER1_NBR(v)		(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REFER0_NBR(v)		(((v) << 0) & GENMASK(15, 0))

/* SWREG77 */
#define VDPU_REG_REFER3_NBR(v)		(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REFER2_NBR(v)		(((v) << 0) & GENMASK(15, 0))

/* SWREG78 */
#define VDPU_REG_REFER5_NBR(v)		(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REFER4_NBR(v)		(((v) << 0) & GENMASK(15, 0))

/* SWREG79 */
#define VDPU_REG_REFER7_NBR(v)		(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REFER6_NBR(v)		(((v) << 0) & GENMASK(15, 0))

/* SWREG80 */
#define VDPU_REG_REFER9_NBR(v)		(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REFER8_NBR(v)		(((v) << 0) & GENMASK(15, 0))

/* SWREG81 */
#define VDPU_REG_REFER11_NBR(v)		(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REFER10_NBR(v)		(((v) << 0) & GENMASK(15, 0))

/* SWREG82 */
#define VDPU_REG_REFER13_NBR(v)		(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REFER12_NBR(v)		(((v) << 0) & GENMASK(15, 0))

/* SWREG83 */
#define VDPU_REG_REFER15_NBR(v)		(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REFER14_NBR(v)		(((v) << 0) & GENMASK(15, 0))

/* SWREG84 */
#define VDPU_REG_REFER0_BASE		VDPU_SWREG(84)
#define VDPU_REG_REFER0_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER0_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG85 */
#define VDPU_REG_REFER1_BASE		VDPU_SWREG(85)
#define VDPU_REG_REFER1_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER1_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG86 */
#define VDPU_REG_REFER2_BASE		VDPU_SWREG(86)
#define VDPU_REG_REFER2_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER2_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG87 */
#define VDPU_REG_REFER3_BASE		VDPU_SWREG(87)
#define VDPU_REG_REFER3_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER3_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG88 */
#define VDPU_REG_REFER4_BASE		VDPU_SWREG(88)
#define VDPU_REG_REFER4_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER4_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG89 */
#define VDPU_REG_REFER5_BASE		VDPU_SWREG(89)
#define VDPU_REG_REFER5_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER5_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG90 */
#define VDPU_REG_REFER6_BASE		VDPU_SWREG(90)
#define VDPU_REG_REFER6_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER6_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG91 */
#define VDPU_REG_REFER7_BASE		VDPU_SWREG(91)
#define VDPU_REG_REFER7_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER7_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG92 */
#define VDPU_REG_REFER8_BASE		VDPU_SWREG(92)
#define VDPU_REG_REFER8_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER8_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG93 */
#define VDPU_REG_REFER9_BASE		VDPU_SWREG(93)
#define VDPU_REG_REFER9_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER9_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG94 */
#define VDPU_REG_REFER10_BASE		VDPU_SWREG(94)
#define VDPU_REG_REFER10_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER10_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG95 */
#define VDPU_REG_REFER11_BASE		VDPU_SWREG(95)
#define VDPU_REG_REFER11_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER11_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG96 */
#define VDPU_REG_REFER12_BASE		VDPU_SWREG(96)
#define VDPU_REG_REFER12_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER12_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG97 */
#define VDPU_REG_REFER13_BASE		VDPU_SWREG(97)
#define VDPU_REG_REFER13_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER13_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG98 */
#define VDPU_REG_REFER14_BASE		VDPU_SWREG(98)
#define VDPU_REG_REFER14_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER14_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG99 */
#define VDPU_REG_REFER15_BASE		VDPU_SWREG(99)
#define VDPU_REG_REFER15_FIELD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_REFER15_TOPC_E(v)	((v) ? BIT(0) : 0)

/* SWREG100 */
#define VDPU_REG_BINIT_RLIST_F5(v)	(((v) << 25) & GENMASK(29, 25))
#define VDPU_REG_BINIT_RLIST_F4(v)	(((v) << 20) & GENMASK(24, 20))
#define VDPU_REG_BINIT_RLIST_F3(v)	(((v) << 15) & GENMASK(19, 15))
#define VDPU_REG_BINIT_RLIST_F2(v)	(((v) << 10) & GENMASK(14, 10))
#define VDPU_REG_BINIT_RLIST_F1(v)	(((v) << 5) & GENMASK(9, 5))
#define VDPU_REG_BINIT_RLIST_F0(v)	(((v) << 0) & GENMASK(4, 0))

/* SWREG101 */
#define VDPU_REG_BINIT_RLIST_F11(v)	(((v) << 25) & GENMASK(29, 25))
#define VDPU_REG_BINIT_RLIST_F10(v)	(((v) << 20) & GENMASK(24, 20))
#define VDPU_REG_BINIT_RLIST_F9(v)	(((v) << 15) & GENMASK(19, 15))
#define VDPU_REG_BINIT_RLIST_F8(v)	(((v) << 10) & GENMASK(14, 10))
#define VDPU_REG_BINIT_RLIST_F7(v)	(((v) << 5) & GENMASK(9, 5))
#define VDPU_REG_BINIT_RLIST_F6(v)	(((v) << 0) & GENMASK(4, 0))

/* SWREG102 */
#define VDPU_REG_BINIT_RLIST_F15(v)	(((v) << 15) & GENMASK(19, 15))
#define VDPU_REG_BINIT_RLIST_F14(v)	(((v) << 10) & GENMASK(14, 10))
#define VDPU_REG_BINIT_RLIST_F13(v)	(((v) << 5) & GENMASK(9, 5))
#define VDPU_REG_BINIT_RLIST_F12(v)	(((v) << 0) & GENMASK(4, 0))

/* SWREG103 */
#define VDPU_REG_BINIT_RLIST_B5(v)	(((v) << 25) & GENMASK(29, 25))
#define VDPU_REG_BINIT_RLIST_B4(v)	(((v) << 20) & GENMASK(24, 20))
#define VDPU_REG_BINIT_RLIST_B3(v)	(((v) << 15) & GENMASK(19, 15))
#define VDPU_REG_BINIT_RLIST_B2(v)	(((v) << 10) & GENMASK(14, 10))
#define VDPU_REG_BINIT_RLIST_B1(v)	(((v) << 5) & GENMASK(9, 5))
#define VDPU_REG_BINIT_RLIST_B0(v)	(((v) << 0) & GENMASK(4, 0))

/* SWREG104 */
#define VDPU_REG_BINIT_RLIST_B11(v)	(((v) << 25) & GENMASK(29, 25))
#define VDPU_REG_BINIT_RLIST_B10(v)	(((v) << 20) & GENMASK(24, 20))
#define VDPU_REG_BINIT_RLIST_B9(v)	(((v) << 15) & GENMASK(19, 15))
#define VDPU_REG_BINIT_RLIST_B8(v)	(((v) << 10) & GENMASK(14, 10))
#define VDPU_REG_BINIT_RLIST_B7(v)	(((v) << 5) & GENMASK(9, 5))
#define VDPU_REG_BINIT_RLIST_B6(v)	(((v) << 0) & GENMASK(4, 0))

/* SWREG105 */
#define VDPU_REG_BINIT_RLIST_B15(v)	(((v) << 15) & GENMASK(19, 15))
#define VDPU_REG_BINIT_RLIST_B14(v)	(((v) << 10) & GENMASK(14, 10))
#define VDPU_REG_BINIT_RLIST_B13(v)	(((v) << 5) & GENMASK(9, 5))
#define VDPU_REG_BINIT_RLIST_B12(v)	(((v) << 0) & GENMASK(4, 0))

/* SWREG106 */
#define VDPU_REG_PINIT_RLIST_F3(v)	(((v) << 15) & GENMASK(19, 15))
#define VDPU_REG_PINIT_RLIST_F2(v)	(((v) << 10) & GENMASK(14, 10))
#define VDPU_REG_PINIT_RLIST_F1(v)	(((v) << 5) & GENMASK(9, 5))
#define VDPU_REG_PINIT_RLIST_F0(v)	(((v) << 0) & GENMASK(4, 0))

/* SWREG107 */
#define VDPU_REG_REFER_LTERM_E(v)	(((v) << 0) & GENMASK(31, 0))

/* SWREG108 */
#define VDPU_REG_REFER_VALID_E(v)	(((v) << 0) & GENMASK(31, 0))

/* SWREG109 */
#define VDPU_REG_STRM_START_BIT(v)	(((v) << 0) & GENMASK(5, 0))

/* SWREG110 */
#define VDPU_REG_CH_QP_OFFSET2(v)	(((v) << 22) & GENMASK(26, 22))
#define VDPU_REG_CH_QP_OFFSET(v)	(((v) << 17) & GENMASK(21, 17))
#define VDPU_REG_PIC_MB_HEIGHT_P(v)	(((v) << 9) & GENMASK(16, 9))
#define VDPU_REG_PIC_MB_WIDTH(v)	(((v) << 0) & GENMASK(8, 0))

/* SWREG111 */
#define VDPU_REG_WEIGHT_BIPR_IDC(v)	(((v) << 16) & GENMASK(17, 16))
#define VDPU_REG_REF_FRAMES(v)		(((v) << 0) & GENMASK(4, 0))

/* SWREG112 */
#define VDPU_REG_FILT_CTRL_PRES(v)	((v) ? BIT(31) : 0)
#define VDPU_REG_RDPIC_CNT_PRES(v)	((v) ? BIT(30) : 0)
#define VDPU_REG_FRAMENUM_LEN(v)	(((v) << 16) & GENMASK(20, 16))
#define VDPU_REG_FRAMENUM(v)		(((v) << 0) & GENMASK(15, 0))

/* SWREG113 */
#define VDPU_REG_REFPIC_MK_LEN(v)	(((v) << 16) & GENMASK(26, 16))
#define VDPU_REG_IDR_PIC_ID(v)		(((v) << 0) & GENMASK(15, 0))

/* SWREG114 */
#define VDPU_REG_PPS_ID(v)		(((v) << 24) & GENMASK(31, 24))
#define VDPU_REG_REFIDX1_ACTIVE(v)	(((v) << 19) & GENMASK(23, 19))
#define VDPU_REG_REFIDX0_ACTIVE(v)	(((v) << 14) & GENMASK(18, 14))
#define VDPU_REG_POC_LENGTH(v)		(((v) << 0) & GENMASK(7, 0))

/* SWREG115 */
#define VDPU_REG_IDR_PIC_E(v)		((v) ? BIT(8) : 0)
#define VDPU_REG_DIR_8X8_INFER_E(v)	((v) ? BIT(7) : 0)
#define VDPU_REG_BLACKWHITE_E(v)	((v) ? BIT(6) : 0)
#define VDPU_REG_CABAC_E(v)		((v) ? BIT(5) : 0)
#define VDPU_REG_WEIGHT_PRED_E(v)	((v) ? BIT(4) : 0)
#define VDPU_REG_CONST_INTRA_E(v)	((v) ? BIT(3) : 0)
#define VDPU_REG_8X8TRANS_FLAG_E(v)	((v) ? BIT(2) : 0)
#define VDPU_REG_TYPE1_QUANT_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_FIELDPIC_FLAG_E(v)	((v) ? BIT(0) : 0)

/* SWREG120 */
#define VDPU_REG_PIC_MB_WIDTH(v)	(((v) << 23) & GENMASK(31, 23))
#define VDPU_REG_MB_WIDTH_OFF(v)	(((v) << 19) & GENMASK(22, 19))
#define VDPU_REG_PIC_MB_HEIGHT_P(v)	(((v) << 11) & GENMASK(18, 11))
#define VDPU_REG_MB_HEIGHT_OFF(v)	(((v) << 7) & GENMASK(10, 7))
#define VDPU_REG_ALT_SCAN_E(v)		((v) ? BIT(6) : 0)
#define VDPU_REG_TOPFIELDFIRST_E(v)	((v) ? BIT(5) : 0)
#define VDPU_REG_PIC_MB_W_EXT(v)	(((v) << 3) & GENMASK(5, 3))
#define VDPU_REG_REF_FRAMES(v)		(((v) << 0) & GENMASK(4, 0))
#define VDPU_REG_PIC_MB_H_EXT(v)	(((v) << 0) & GENMASK(2, 0))
#define VDPU_REG_PIC_REFER_FLAG(v)	((v) ? BIT(0) : 0)

/* SWREG121 */
#define VDPU_REG_BLACKWHITE_E(v)	((v) ? BIT(30) : 0)
#define VDPU_REG_BITPLANE0_E(v)		((v) ? BIT(31) : 0)
#define VDPU_REG_BITPLANE1_E(v)		((v) ? BIT(30) : 0)
#define VDPU_REG_BITPLANE2_E(v)		((v) ? BIT(29) : 0)
#define VDPU_REG_ALT_PQUANT(v)		(((v) << 24) & GENMASK(28, 24))
#define VDPU_REG_DQ_EDGES(v)		(((v) << 20) & GENMASK(23, 20))
#define VDPU_REG_TTMBF(v)		((v) ? BIT(19) : 0)
#define VDPU_REG_PQINDEX(v)		(((v) << 14) & GENMASK(18, 14))
#define VDPU_REG_BILIN_MC_E(v)		((v) ? BIT(12) : 0)
#define VDPU_REG_UNIQP_E(v)		((v) ? BIT(11) : 0)
#define VDPU_REG_HALFQP_E(v)		((v) ? BIT(10) : 0)
#define VDPU_REG_TTFRM(v)		(((v) << 8) & GENMASK(9, 8))
#define VDPU_REG_2ND_BYTE_EMUL_E(v)	((v) ? BIT(7) : 0)
#define VDPU_REG_DQUANT_E(v)		((v) ? BIT(6) : 0)
#define VDPU_REG_VC1_ADV_E(v)		((v) ? BIT(5) : 0)
#define VDPU_REG_PJPEG_FILDOWN_E(v)	((v) ? BIT(26) : 0)
#define VDPU_REG_PJPEG_WDIV8(v)		((v) ? BIT(25) : 0)
#define VDPU_REG_PJPEG_HDIV8(v)		((v) ? BIT(24) : 0)
#define VDPU_REG_PJPEG_AH(v)		(((v) << 20) & GENMASK(23, 20))
#define VDPU_REG_PJPEG_AL(v)		(((v) << 16) & GENMASK(19, 16))
#define VDPU_REG_PJPEG_SS(v)		(((v) << 8) & GENMASK(15, 8))
#define VDPU_REG_PJPEG_SE(v)		(((v) << 0) & GENMASK(7, 0))
#define VDPU_REG_DCT1_START_BIT(v)	(((v) << 26) & GENMASK(31, 26))
#define VDPU_REG_DCT2_START_BIT(v)	(((v) << 20) & GENMASK(25, 20))
#define VDPU_REG_CH_MV_RES(v)		((v) ? BIT(13) : 0)
#define VDPU_REG_INIT_DC_MATCH0(v)	(((v) << 9) & GENMASK(11, 9))
#define VDPU_REG_INIT_DC_MATCH1(v)	(((v) << 6) & GENMASK(8, 6))
#define VDPU_REG_VP7_VERSION(v)		((v) ? BIT(5) : 0)

/* SWREG122 */
#define VDPU_REG_STRM_START_BIT(v)	(((v) << 26) & GENMASK(31, 26))
#define VDPU_REG_SYNC_MARKER_E(v)	((v) ? BIT(25) : 0)
#define VDPU_REG_TYPE1_QUANT_E(v)	((v) ? BIT(24) : 0)
#define VDPU_REG_FIELDPIC_FLAG_E(v)	((v) ? BIT(0) : 0)
#define VDPU_REG_INTRADC_VLC_THR(v)	(((v) << 16) & GENMASK(18, 16))
#define VDPU_REG_VOP_TIME_INCR(v)	(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_DQ_PROFILE(v)		((v) ? BIT(24) : 0)
#define VDPU_REG_DQBI_LEVEL(v)		((v) ? BIT(23) : 0)
#define VDPU_REG_RANGE_RED_FRM_E(v)	((v) ? BIT(22) : 0)
#define VDPU_REG_FAST_UVMC_E(v)		((v) ? BIT(20) : 0)
#define VDPU_REG_TRANSDCTAB(v)		((v) ? BIT(17) : 0)
#define VDPU_REG_TRANSACFRM(v)		(((v) << 15) & GENMASK(16, 15))
#define VDPU_REG_TRANSACFRM2(v)		(((v) << 13) & GENMASK(14, 13))
#define VDPU_REG_MB_MODE_TAB(v)		(((v) << 10) & GENMASK(12, 10))
#define VDPU_REG_MVTAB(v)		(((v) << 7) & GENMASK(9, 7))
#define VDPU_REG_CBPTAB(v)		(((v) << 4) & GENMASK(6, 4))
#define VDPU_REG_2MV_BLK_PAT_TAB(v)	(((v) << 2) & GENMASK(3, 2))
#define VDPU_REG_4MV_BLK_PAT_TAB(v)	(((v) << 0) & GENMASK(1, 0))
#define VDPU_REG_QSCALE_TYPE(v)		((v) ? BIT(24) : 0)
#define VDPU_REG_CON_MV_E(v)		((v) ? BIT(4) : 0)
#define VDPU_REG_INTRA_DC_PREC(v)	(((v) << 2) & GENMASK(3, 2))
#define VDPU_REG_INTRA_VLC_TAB(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_FRAME_PRED_DCT(v)	((v) ? BIT(0) : 0)
#define VDPU_REG_JPEG_QTABLES(v)	(((v) << 11) & GENMASK(12, 11))
#define VDPU_REG_JPEG_MODE(v)		(((v) << 8) & GENMASK(10, 8))
#define VDPU_REG_JPEG_FILRIGHT_E(v)	((v) ? BIT(7) : 0)
#define VDPU_REG_JPEG_STREAM_ALL(v)	((v) ? BIT(6) : 0)
#define VDPU_REG_CR_AC_VLCTABLE(v)	((v) ? BIT(5) : 0)
#define VDPU_REG_CB_AC_VLCTABLE(v)	((v) ? BIT(4) : 0)
#define VDPU_REG_CR_DC_VLCTABLE(v)	((v) ? BIT(3) : 0)
#define VDPU_REG_CB_DC_VLCTABLE(v)	((v) ? BIT(2) : 0)
#define VDPU_REG_CR_DC_VLCTABLE3(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_CB_DC_VLCTABLE3(v)	((v) ? BIT(0) : 0)
#define VDPU_REG_STRM1_START_BIT(v)	(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_HUFFMAN_E(v)		((v) ? BIT(17) : 0)
#define VDPU_REG_MULTISTREAM_E(v)	((v) ? BIT(16) : 0)
#define VDPU_REG_BOOLEAN_VALUE(v)	(((v) << 8) & GENMASK(15, 8))
#define VDPU_REG_BOOLEAN_RANGE(v)	(((v) << 0) & GENMASK(7, 0))
#define VDPU_REG_ALPHA_OFFSET(v)	(((v) << 5) & GENMASK(9, 5))
#define VDPU_REG_BETA_OFFSET(v)		(((v) << 0) & GENMASK(4, 0))

/* SWREG123 */
#define VDPU_REG_MV_SCALEFACTOR(v)	(((v) << 24) & GENMASK(31, 24))
#define VDPU_REG_REF_DIST_FWD(v)	(((v) << 19) & GENMASK(23, 19))
#define VDPU_REG_REF_DIST_BWD(v)	(((v) << 14) & GENMASK(18, 14))
#define VDPU_REG_LOOP_FILT_LIMIT(v)	(((v) << 14) & GENMASK(17, 14))
#define VDPU_REG_VARIANCE_TEST_E(v)	((v) ? BIT(13) : 0)
#define VDPU_REG_MV_THRESHOLD(v)	(((v) << 10) & GENMASK(12, 10))
#define VDPU_REG_VAR_THRESHOLD(v)	(((v) << 0) & GENMASK(9, 0))
#define VDPU_REG_DIVX_IDCT_E(v)		((v) ? BIT(8) : 0)
#define VDPU_REG_DIVX3_SLICE_SIZE(v)	(((v) << 0) & GENMASK(7, 0))
#define VDPU_REG_PJPEG_REST_FREQ(v)	(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_RV_PROFILE(v)		(((v) << 30) & GENMASK(31, 30))
#define VDPU_REG_RV_OSV_QUANT(v)	(((v) << 28) & GENMASK(29, 28))
#define VDPU_REG_RV_FWD_SCALE(v)	(((v) << 14) & GENMASK(27, 14))
#define VDPU_REG_RV_BWD_SCALE(v)	(((v) << 0) & GENMASK(13, 0))
#define VDPU_REG_INIT_DC_COMP0(v)	(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_INIT_DC_COMP1(v)	(((v) << 0) & GENMASK(15, 0))

/* SWREG124 */
#define VDPU_REG_MB_CTRL_BASE		VDPU_SWREG(124)
#define VDPU_REG_ICOMP0_E(v)		((v) ? BIT(24) : 0)
#define VDPU_REG_ISCALE0(v)		(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_ISHIFT0(v)		(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_STREAM1_LEN(v)		(((v) << 0) & GENMASK(23, 0))
#define VDPU_REG_PIC_SLICE_AM(v)	(((v) << 0) & GENMASK(12, 0))
#define VDPU_REG_COEFFS_PART_AM(v)	(((v) << 24) & GENMASK(27, 24))

/* SWREG125 */
#define VDPU_REG_PJPEG_DCCB_BASE	VDPU_SWREG(125)
#define VDPU_REG_PRED_BC_TAP_5_1(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_5_2(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_BC_TAP_5_3(v)	(((v) << 2) & GENMASK(11, 2))

/* SWREG126 */
#define VDPU_REG_PJPEG_DCCR_BASE	VDPU_SWREG(126)
#define VDPU_REG_PRED_BC_TAP_6_0(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_6_1(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_BC_TAP_6_2(v)	(((v) << 2) & GENMASK(11, 2))

/* SWREG127 */
#define VDPU_REG_PRED_BC_TAP_6_3(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_7_0(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_BC_TAP_7_1(v)	(((v) << 2) & GENMASK(11, 2))

/* SWREG128 */
#define VDPU_REG_PRED_BC_TAP_7_2(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_7_3(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_TAP_2_M1(v)	(((v) << 10) & GENMASK(11, 10))
#define VDPU_REG_PRED_TAP_2_4(v)	(((v) << 8) & GENMASK(9, 8))
#define VDPU_REG_PRED_TAP_4_M1(v)	(((v) << 6) & GENMASK(7, 6))
#define VDPU_REG_PRED_TAP_4_4(v)	(((v) << 4) & GENMASK(5, 4))
#define VDPU_REG_PRED_TAP_6_M1(v)	(((v) << 2) & GENMASK(3, 2))
#define VDPU_REG_PRED_TAP_6_4(v)	(((v) << 0) & GENMASK(1, 0))

/* SWREG129 */
#define VDPU_REG_SCAN_MAP_56(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_57(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_58(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_59(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_60(v)		(((v) << 0) & GENMASK(5, 0))
#define VDPU_REG_REF_INVD_COL_1(v)	(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REF_INVD_COL_0(v)	(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_FILT_LEVEL_0(v)	(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_FILT_LEVEL_1(v)	(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_FILT_LEVEL_2(v)	(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_FILT_LEVEL_3(v)	(((v) << 0) & GENMASK(5, 0))

/* SWREG130 */
#define VDPU_REG_SCAN_MAP_61(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_62(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_63(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_REF_INVD_COL_3(v)	(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REF_INVD_COL_2(v)	(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_QUANT_DELTA_0(v)	(((v) << 27) & GENMASK(31, 27))
#define VDPU_REG_QUANT_DELTA_1(v)	(((v) << 22) & GENMASK(26, 22))
#define VDPU_REG_QUANT_0(v)		(((v) << 11) & GENMASK(21, 11))
#define VDPU_REG_QUANT_1(v)		(((v) << 0) & GENMASK(10, 0))

/* SWREG131 */
#define VDPU_REG_REFER0_BASE		VDPU_SWREG(131)
#define VDPU_REG_JPG_CH_OUT_BASE	VDPU_SWREG(131)

/* SWREG132 */
#define VDPU_REG_REF_DIST_CUR_1(v)	(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REF_DIST_CUR_0(v)	(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_FILT_TYPE(v)		((v) ? BIT(31) : 0)
#define VDPU_REG_FILT_SHARPNESS(v)	(((v) << 28) & GENMASK(30, 28))
#define VDPU_REG_FILT_MB_ADJ_0(v)	(((v) << 21) & GENMASK(27, 21))
#define VDPU_REG_FILT_MB_ADJ_1(v)	(((v) << 14) & GENMASK(20, 14))
#define VDPU_REG_FILT_MB_ADJ_2(v)	(((v) << 7) & GENMASK(13, 7))
#define VDPU_REG_FILT_MB_ADJ_3(v)	(((v) << 0) & GENMASK(6, 0))

/* SWREG133 */
#define VDPU_REG_SCAN_MAP_51(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_52(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_53(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_54(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_55(v)		(((v) << 0) & GENMASK(5, 0))
#define VDPU_REG_REF_DIST_CUR_3(v)	(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REF_DIST_CUR_2(v)	(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_FILT_REF_ADJ_0(v)	(((v) << 21) & GENMASK(27, 21))
#define VDPU_REG_FILT_REF_ADJ_1(v)	(((v) << 14) & GENMASK(20, 14))
#define VDPU_REG_FILT_REF_ADJ_2(v)	(((v) << 7) & GENMASK(13, 7))
#define VDPU_REG_FILT_REF_ADJ_3(v)	(((v) << 0) & GENMASK(6, 0))

/* SWREG134 */
#define VDPU_REG_REFER2_BASE		VDPU_SWREG(134)
#define VDPU_REG_AC1_CODE6_CNT(v)	(((v) << 24) & GENMASK(30, 24))
#define VDPU_REG_AC1_CODE5_CNT(v)	(((v) << 16) & GENMASK(21, 16))
#define VDPU_REG_AC1_CODE4_CNT(v)	(((v) << 11) & GENMASK(15, 11))
#define VDPU_REG_AC1_CODE3_CNT(v)	(((v) << 7) & GENMASK(10, 7))
#define VDPU_REG_AC1_CODE2_CNT(v)	(((v) << 3) & GENMASK(5, 3))
#define VDPU_REG_AC1_CODE1_CNT(v)	(((v) << 0) & GENMASK(1, 0))

/* SWREG135 */
#define VDPU_REG_REFER3_BASE		VDPU_SWREG(135)
#define VDPU_REG_AC1_CODE10_CNT(v)	(((v) << 24) & GENMASK(31, 24))
#define VDPU_REG_AC1_CODE9_CNT(v)	(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_AC1_CODE8_CNT(v)	(((v) << 8) & GENMASK(15, 8))
#define VDPU_REG_AC1_CODE7_CNT(v)	(((v) << 0) & GENMASK(7, 0))

/* SWREG136 */
#define VDPU_REG_REFER4_BASE		VDPU_SWREG(136)
#define VDPU_REG_PIC_HEADER_LEN(v)	(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_PIC_4MV_E(v)		((v) ? BIT(13) : 0)
#define VDPU_REG_RANGE_RED_REF_E(v)	((v) ? BIT(11) : 0)
#define VDPU_REG_VC1_DIFMV_RANGE(v)	(((v) << 9) & GENMASK(10, 9))
#define VDPU_REG_MV_RANGE(v)		(((v) << 6) & GENMASK(7, 6))
#define VDPU_REG_OVERLAP_E(v)		((v) ? BIT(5) : 0)
#define VDPU_REG_OVERLAP_METHOD(v)	(((v) << 3) & GENMASK(4, 3))
#define VDPU_REG_ALT_SCAN_FLAG_E(v)	((v) ? BIT(19) : 0)
#define VDPU_REG_FCODE_FWD_HOR(v)	(((v) << 15) & GENMASK(18, 15))
#define VDPU_REG_FCODE_FWD_VER(v)	(((v) << 11) & GENMASK(14, 11))
#define VDPU_REG_FCODE_BWD_HOR(v)	(((v) << 7) & GENMASK(10, 7))
#define VDPU_REG_FCODE_BWD_VER(v)	(((v) << 3) & GENMASK(6, 3))
#define VDPU_REG_MV_ACCURACY_FWD(v)	((v) ? BIT(2) : 0)
#define VDPU_REG_MV_ACCURACY_BWD(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_MPEG4_VC1_RC(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_PREV_ANC_TYPE(v)	((v) ? BIT(0) : 0)
#define VDPU_REG_AC1_CODE14_CNT(v)	(((v) << 24) & GENMASK(31, 24))
#define VDPU_REG_AC1_CODE13_CNT(v)	(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_AC1_CODE12_CNT(v)	(((v) << 8) & GENMASK(15, 8))
#define VDPU_REG_AC1_CODE11_CNT(v)	(((v) << 0) & GENMASK(7, 0))
#define VDPU_REG_GREF_SIGN_BIAS(v)	((v) ? BIT(0) : 0)

/* SWREG137 */
#define VDPU_REG_REFER5_BASE		VDPU_SWREG(137)
#define VDPU_REG_TRB_PER_TRD_D0(v)	(((v) << 0) & GENMASK(26, 0))
#define VDPU_REG_ICOMP3_E(v)		((v) ? BIT(24) : 0)
#define VDPU_REG_ISCALE3(v)		(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_ISHIFT3(v)		(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_AC2_CODE4_CNT(v)	(((v) << 27) & GENMASK(31, 27))
#define VDPU_REG_AC2_CODE3_CNT(v)	(((v) << 23) & GENMASK(26, 23))
#define VDPU_REG_AC2_CODE2_CNT(v)	(((v) << 19) & GENMASK(21, 19))
#define VDPU_REG_AC2_CODE1_CNT(v)	(((v) << 16) & GENMASK(17, 16))
#define VDPU_REG_AC1_CODE16_CNT(v)	(((v) << 8) & GENMASK(15, 8))
#define VDPU_REG_AC1_CODE15_CNT(v)	(((v) << 0) & GENMASK(7, 0))
#define VDPU_REG_SCAN_MAP_1(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_2(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_3(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_4(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_5(v)		(((v) << 0) & GENMASK(5, 0))
#define VDPU_REG_AREF_SIGN_BIAS(v)	((v) ? BIT(0) : 0)

/* SWREG138 */
#define VDPU_REG_TRB_PER_TRD_DM1(v)	(((v) << 0) & GENMASK(26, 0))
#define VDPU_REG_ICOMP4_E(v)		((v) ? BIT(24) : 0)
#define VDPU_REG_ISCALE4(v)		(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_ISHIFT4(v)		(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_AC2_CODE8_CNT(v)	(((v) << 24) & GENMASK(31, 24))
#define VDPU_REG_AC2_CODE7_CNT(v)	(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_AC2_CODE6_CNT(v)	(((v) << 8) & GENMASK(14, 8))
#define VDPU_REG_AC2_CODE5_CNT(v)	(((v) << 0) & GENMASK(5, 0))
#define VDPU_REG_SCAN_MAP_6(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_7(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_8(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_9(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_10(v)		(((v) << 0) & GENMASK(5, 0))

/* SWREG139 */
#define VDPU_REG_TRB_PER_TRD_D1(v)	(((v) << 0) & GENMASK(26, 0))
#define VDPU_REG_AC2_CODE12_CNT(v)	(((v) << 24) & GENMASK(31, 24))
#define VDPU_REG_AC2_CODE11_CNT(v)	(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_AC2_CODE10_CNT(v)	(((v) << 8) & GENMASK(15, 8))
#define VDPU_REG_AC2_CODE9_CNT(v)	(((v) << 0) & GENMASK(7, 0))
#define VDPU_REG_SCAN_MAP_11(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_12(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_13(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_14(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_15(v)		(((v) << 0) & GENMASK(5, 0))

/* SWREG140 */
#define VDPU_REG_DCT_STRM1_BASE		VDPU_SWREG(140)
#define VDPU_REG_AC2_CODE16_CNT(v)	(((v) << 24) & GENMASK(31, 24))
#define VDPU_REG_AC2_CODE15_CNT(v)	(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_AC2_CODE14_CNT(v)	(((v) << 8) & GENMASK(15, 8))
#define VDPU_REG_AC2_CODE13_CNT(v)	(((v) << 0) & GENMASK(7, 0))
#define VDPU_REG_SCAN_MAP_16(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_17(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_18(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_19(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_20(v)		(((v) << 0) & GENMASK(5, 0))

/* SWREG141 */
#define VDPU_REG_DCT_STRM2_BASE		VDPU_SWREG(141)
#define VDPU_REG_DC1_CODE8_CNT(v)	(((v) << 28) & GENMASK(31, 28))
#define VDPU_REG_DC1_CODE7_CNT(v)	(((v) << 24) & GENMASK(27, 24))
#define VDPU_REG_DC1_CODE6_CNT(v)	(((v) << 20) & GENMASK(23, 20))
#define VDPU_REG_DC1_CODE5_CNT(v)	(((v) << 16) & GENMASK(19, 16))
#define VDPU_REG_DC1_CODE4_CNT(v)	(((v) << 12) & GENMASK(15, 12))
#define VDPU_REG_DC1_CODE3_CNT(v)	(((v) << 8) & GENMASK(11, 8))
#define VDPU_REG_DC1_CODE2_CNT(v)	(((v) << 4) & GENMASK(6, 4))
#define VDPU_REG_DC1_CODE1_CNT(v)	(((v) << 0) & GENMASK(1, 0))
#define VDPU_REG_SCAN_MAP_21(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_22(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_23(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_24(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_25(v)		(((v) << 0) & GENMASK(5, 0))

/* SWREG142 */
#define VDPU_REG_DCT_STRM3_BASE		VDPU_SWREG(142)
#define VDPU_REG_DC1_CODE16_CNT(v)	(((v) << 28) & GENMASK(31, 28))
#define VDPU_REG_DC1_CODE15_CNT(v)	(((v) << 24) & GENMASK(27, 24))
#define VDPU_REG_DC1_CODE14_CNT(v)	(((v) << 20) & GENMASK(23, 20))
#define VDPU_REG_DC1_CODE13_CNT(v)	(((v) << 16) & GENMASK(19, 16))
#define VDPU_REG_DC1_CODE12_CNT(v)	(((v) << 12) & GENMASK(15, 12))
#define VDPU_REG_DC1_CODE11_CNT(v)	(((v) << 8) & GENMASK(11, 8))
#define VDPU_REG_DC1_CODE10_CNT(v)	(((v) << 4) & GENMASK(7, 4))
#define VDPU_REG_DC1_CODE9_CNT(v)	(((v) << 0) & GENMASK(3, 0))
#define VDPU_REG_SCAN_MAP_26(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_27(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_28(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_29(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_30(v)		(((v) << 0) & GENMASK(5, 0))

/* SWREG143 */
#define VDPU_REG_DCT_STRM4_BASE		VDPU_SWREG(143)
#define VDPU_REG_DC2_CODE8_CNT(v)	(((v) << 28) & GENMASK(31, 28))
#define VDPU_REG_DC2_CODE7_CNT(v)	(((v) << 24) & GENMASK(27, 24))
#define VDPU_REG_DC2_CODE6_CNT(v)	(((v) << 20) & GENMASK(23, 20))
#define VDPU_REG_DC2_CODE5_CNT(v)	(((v) << 16) & GENMASK(19, 16))
#define VDPU_REG_DC2_CODE4_CNT(v)	(((v) << 12) & GENMASK(15, 12))
#define VDPU_REG_DC2_CODE3_CNT(v)	(((v) << 8) & GENMASK(11, 8))
#define VDPU_REG_DC2_CODE2_CNT(v)	(((v) << 4) & GENMASK(6, 4))
#define VDPU_REG_DC2_CODE1_CNT(v)	(((v) << 0) & GENMASK(1, 0))
#define VDPU_REG_SCAN_MAP_31(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_32(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_33(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_34(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_35(v)		(((v) << 0) & GENMASK(5, 0))

/* SWREG144 */
#define VDPU_REG_DCT_STRM5_BASE		VDPU_SWREG(144)
#define VDPU_REG_DC2_CODE16_CNT(v)	(((v) << 28) & GENMASK(31, 28))
#define VDPU_REG_DC2_CODE15_CNT(v)	(((v) << 24) & GENMASK(27, 24))
#define VDPU_REG_DC2_CODE14_CNT(v)	(((v) << 20) & GENMASK(23, 20))
#define VDPU_REG_DC2_CODE13_CNT(v)	(((v) << 16) & GENMASK(19, 16))
#define VDPU_REG_DC2_CODE12_CNT(v)	(((v) << 12) & GENMASK(15, 12))
#define VDPU_REG_DC2_CODE11_CNT(v)	(((v) << 8) & GENMASK(11, 8))
#define VDPU_REG_DC2_CODE10_CNT(v)	(((v) << 4) & GENMASK(7, 4))
#define VDPU_REG_DC2_CODE9_CNT(v)	(((v) << 0) & GENMASK(3, 0))
#define VDPU_REG_SCAN_MAP_36(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_37(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_38(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_39(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_40(v)		(((v) << 0) & GENMASK(5, 0))

/* SWREG145 */
#define VDPU_REG_REFER13_BASE		VDPU_SWREG(145)
#define VDPU_REG_BITPL_CTRL_BASE	VDPU_SWREG(145)
#define VDPU_REG_DC3_CODE8_CNT(v)	(((v) << 28) & GENMASK(31, 28))
#define VDPU_REG_DC3_CODE7_CNT(v)	(((v) << 24) & GENMASK(27, 24))
#define VDPU_REG_DC3_CODE6_CNT(v)	(((v) << 20) & GENMASK(23, 20))
#define VDPU_REG_DC3_CODE5_CNT(v)	(((v) << 16) & GENMASK(19, 16))
#define VDPU_REG_DC3_CODE4_CNT(v)	(((v) << 12) & GENMASK(15, 12))
#define VDPU_REG_DC3_CODE3_CNT(v)	(((v) << 8) & GENMASK(11, 8))
#define VDPU_REG_DC3_CODE2_CNT(v)	(((v) << 4) & GENMASK(6, 4))
#define VDPU_REG_DC3_CODE1_CNT(v)	(((v) << 0) & GENMASK(1, 0))

/* SWREG146 */
#define VDPU_REG_REFER14_BASE		VDPU_SWREG(146)
#define VDPU_REG_DCT_STRM6_BASE		VDPU_SWREG(146)
#define VDPU_REG_REF_INVD_CUR_1(v)	(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REF_INVD_CUR_0(v)	(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_DC3_CODE16_CNT(v)	(((v) << 28) & GENMASK(31, 28))
#define VDPU_REG_DC3_CODE15_CNT(v)	(((v) << 24) & GENMASK(27, 24))
#define VDPU_REG_DC3_CODE14_CNT(v)	(((v) << 20) & GENMASK(23, 20))
#define VDPU_REG_DC3_CODE13_CNT(v)	(((v) << 16) & GENMASK(19, 16))
#define VDPU_REG_DC3_CODE12_CNT(v)	(((v) << 12) & GENMASK(15, 12))
#define VDPU_REG_DC3_CODE11_CNT(v)	(((v) << 8) & GENMASK(11, 8))
#define VDPU_REG_DC3_CODE10_CNT(v)	(((v) << 4) & GENMASK(7, 4))
#define VDPU_REG_DC3_CODE9_CNT(v)	(((v) << 0) & GENMASK(3, 0))
#define VDPU_REG_SCAN_MAP_41(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_42(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_43(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_44(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_45(v)		(((v) << 0) & GENMASK(5, 0))

/* SWREG147 */
#define VDPU_REG_REFER15_BASE		VDPU_SWREG(147)
#define VDPU_REG_DCT_STRM7_BASE		VDPU_SWREG(147)
#define VDPU_REG_REF_INVD_CUR_3(v)	(((v) << 16) & GENMASK(31, 16))
#define VDPU_REG_REF_INVD_CUR_2(v)	(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_SCAN_MAP_46(v)		(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_SCAN_MAP_47(v)		(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_SCAN_MAP_48(v)		(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_SCAN_MAP_49(v)		(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_SCAN_MAP_50(v)		(((v) << 0) & GENMASK(5, 0))

/* SWREG148 */
#define VDPU_REG_REFER1_BASE		VDPU_SWREG(148)
#define VDPU_REG_JPEG_SLICE_H(v)	(((v) << 0) & GENMASK(7, 0))

/* SWREG149 */
#define VDPU_REG_DIFF_MV_BASE		VDPU_SWREG(149)
#define VDPU_REG_SEGMENT_BASE		VDPU_SWREG(149)
#define VDPU_REG_ICOMP1_E(v)		((v) ? BIT(24) : 0)
#define VDPU_REG_ISCALE1(v)		(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_ISHIFT1(v)		(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_SEGMENT_UPD_E(v)	((v) ? BIT(1) : 0)
#define VDPU_REG_SEGMENT_E(v)		((v) ? BIT(0) : 0)

/* SWREG150 */
#define VDPU_REG_I4X4_OR_DC_BASE	VDPU_SWREG(150)
#define VDPU_REG_ICOMP2_E(v)		((v) ? BIT(24) : 0)
#define VDPU_REG_ISCALE2(v)		(((v) << 16) & GENMASK(23, 16))
#define VDPU_REG_ISHIFT2(v)		(((v) << 0) & GENMASK(15, 0))
#define VDPU_REG_DCT3_START_BIT(v)	(((v) << 24) & GENMASK(29, 24))
#define VDPU_REG_DCT4_START_BIT(v)	(((v) << 18) & GENMASK(23, 18))
#define VDPU_REG_DCT5_START_BIT(v)	(((v) << 12) & GENMASK(17, 12))
#define VDPU_REG_DCT6_START_BIT(v)	(((v) << 6) & GENMASK(11, 6))
#define VDPU_REG_DCT7_START_BIT(v)	(((v) << 0) & GENMASK(5, 0))

/* SWREG151 */
#define VDPU_REG_QUANT_DELTA_2(v)	(((v) << 27) & GENMASK(31, 27))
#define VDPU_REG_QUANT_DELTA_3(v)	(((v) << 22) & GENMASK(26, 22))
#define VDPU_REG_QUANT_2(v)		(((v) << 11) & GENMASK(21, 11))
#define VDPU_REG_QUANT_3(v)		(((v) << 0) & GENMASK(10, 0))

/* SWREG152 */
#define VDPU_REG_QUANT_DELTA_4(v)	(((v) << 27) & GENMASK(31, 27))
#define VDPU_REG_QUANT_4(v)		(((v) << 11) & GENMASK(21, 11))
#define VDPU_REG_QUANT_5(v)		(((v) << 0) & GENMASK(10, 0))

/* SWREG153 */
#define VDPU_REG_PRED_BC_TAP_0_3(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_1_0(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_BC_TAP_1_1(v)	(((v) << 2) & GENMASK(11, 2))

/* SWREG154 */
#define VDPU_REG_PRED_BC_TAP_1_2(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_1_3(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_BC_TAP_2_0(v)	(((v) << 2) & GENMASK(11, 2))

/* SWREG155 */
#define VDPU_REG_PRED_BC_TAP_2_1(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_2_2(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_BC_TAP_2_3(v)	(((v) << 2) & GENMASK(11, 2))

/* SWREG156 */
#define VDPU_REG_PRED_BC_TAP_3_0(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_3_1(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_BC_TAP_3_2(v)	(((v) << 2) & GENMASK(11, 2))

/* SWREG157 */
#define VDPU_REG_PRED_BC_TAP_3_3(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_4_0(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_BC_TAP_4_1(v)	(((v) << 2) & GENMASK(11, 2))

/* SWREG158 */
#define VDPU_REG_PRED_BC_TAP_4_2(v)	(((v) << 22) & GENMASK(31, 22))
#define VDPU_REG_PRED_BC_TAP_4_3(v)	(((v) << 12) & GENMASK(21, 12))
#define VDPU_REG_PRED_BC_TAP_5_0(v)	(((v) << 2) & GENMASK(11, 2))

