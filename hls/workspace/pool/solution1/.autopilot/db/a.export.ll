; ModuleID = '/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@pool_str = internal unnamed_addr constant [5 x i8] c"pool\00"
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@hls_KD_KD_LineBuffe = internal unnamed_addr constant [55 x i8] c"hls::LineBuffer<112, 1, float, 0>::LineBuffer.1.region\00"
@ap_fifo_str = internal unnamed_addr constant [8 x i8] c"ap_fifo\00"
@p_str = internal unnamed_addr constant [1 x i8] zeroinitializer

define void @pool(float* %out_V, float* %in_V) {
  %tmp_1 = alloca float
  %tmp_2 = alloca float
  %tmp_5 = alloca float
  %tmp_13 = alloca float
  %tmp_117 = alloca float
  %tmp_116 = alloca float
  %tmp_115 = alloca float
  %tmp_114 = alloca float
  %tmp_113 = alloca float
  %tmp_112 = alloca float
  %tmp_111 = alloca float
  %tmp_110 = alloca float
  %tmp_109 = alloca float
  %tmp_108 = alloca float
  %tmp_107 = alloca float
  %tmp_106 = alloca float
  %tmp_105 = alloca float
  %tmp_104 = alloca float
  %tmp_103 = alloca float
  %tmp_102 = alloca float
  %tmp_101 = alloca float
  %tmp_100 = alloca float
  %tmp_99 = alloca float
  %tmp_98 = alloca float
  %tmp_97 = alloca float
  %tmp_96 = alloca float
  %tmp_95 = alloca float
  %tmp_94 = alloca float
  %tmp_93 = alloca float
  %tmp_92 = alloca float
  %tmp_91 = alloca float
  %tmp_90 = alloca float
  %tmp_89 = alloca float
  %tmp_88 = alloca float
  %tmp_87 = alloca float
  %tmp_86 = alloca float
  %tmp_85 = alloca float
  %tmp_84 = alloca float
  %tmp_83 = alloca float
  %tmp_82 = alloca float
  %tmp_81 = alloca float
  %tmp_80 = alloca float
  %tmp_79 = alloca float
  %tmp_78 = alloca float
  %tmp_77 = alloca float
  %tmp_76 = alloca float
  %tmp_75 = alloca float
  %tmp_74 = alloca float
  %tmp_73 = alloca float
  %tmp_72 = alloca float
  %tmp_71 = alloca float
  %tmp_70 = alloca float
  %tmp_69 = alloca float
  %tmp_68 = alloca float
  %tmp_67 = alloca float
  %tmp_66 = alloca float
  %tmp_65 = alloca float
  %tmp_64 = alloca float
  %tmp_63 = alloca float
  %tmp_62 = alloca float
  %tmp_61 = alloca float
  %tmp_60 = alloca float
  %tmp_59 = alloca float
  %tmp_58 = alloca float
  %tmp_57 = alloca float
  %tmp_56 = alloca float
  %tmp_55 = alloca float
  %tmp_54 = alloca float
  %tmp_53 = alloca float
  %tmp_52 = alloca float
  %tmp_51 = alloca float
  %tmp_50 = alloca float
  %tmp_49 = alloca float
  %tmp_48 = alloca float
  %tmp_47 = alloca float
  %tmp_46 = alloca float
  %tmp_45 = alloca float
  %tmp_44 = alloca float
  %tmp_43 = alloca float
  %tmp_42 = alloca float
  %tmp_41 = alloca float
  %tmp_40 = alloca float
  %tmp_39 = alloca float
  %tmp_38 = alloca float
  %tmp_37 = alloca float
  %tmp_36 = alloca float
  %tmp_35 = alloca float
  %tmp_34 = alloca float
  %tmp_33 = alloca float
  %tmp_32 = alloca float
  %tmp_31 = alloca float
  %tmp_30 = alloca float
  %tmp_29 = alloca float
  %tmp_28 = alloca float
  %tmp_27 = alloca float
  %tmp_26 = alloca float
  %tmp_25 = alloca float
  %tmp_24 = alloca float
  %tmp_23 = alloca float
  %tmp_22 = alloca float
  %tmp_21 = alloca float
  %tmp_20 = alloca float
  %tmp_19 = alloca float
  %tmp_18 = alloca float
  %tmp_17 = alloca float
  %tmp_16 = alloca float
  %tmp_15 = alloca float
  %tmp_14 = alloca float
  %tmp_12 = alloca float
  %tmp_11 = alloca float
  %tmp_4 = alloca float
  %tmp_8 = alloca float
  %empty = call i32 (...)* @_ssdm_op_SpecInterface(float* %in_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 2, i32 2, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %empty_6 = call i32 (...)* @_ssdm_op_SpecInterface(float* %out_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 2, i32 2, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecBitsMap(float* %out_V), !map !33
  call void (...)* @_ssdm_op_SpecBitsMap(float* %in_V), !map !37
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @pool_str) nounwind
  %rbegin_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([55 x i8]* @hls_KD_KD_LineBuffe) nounwind
  %rend_i = call i32 (...)* @_ssdm_op_SpecRegionEnd([55 x i8]* @hls_KD_KD_LineBuffe, i32 %rbegin_i) nounwind
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader23
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %i = phi i4 [ 0, %0 ], [ %i_1, %.loopexit.loopexit ]
  %exitcond1 = icmp eq i4 %i, -2
  %empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 14, i64 14, i64 14)
  %i_1 = add i4 %i, 1
  br i1 %exitcond1, label %.preheader.preheader, label %.preheader23.preheader

.preheader23.preheader:                           ; preds = %.loopexit
  br label %.preheader23

.preheader.preheader:                             ; preds = %.loopexit
  br label %.preheader

.preheader23.loopexit:                            ; preds = %.preheader18.0
  br label %.preheader23

.preheader23:                                     ; preds = %.preheader23.preheader, %.preheader23.loopexit
  %l = phi i2 [ %l_1, %.preheader23.loopexit ], [ 0, %.preheader23.preheader ]
  %tmp_118 = trunc i2 %l to i1
  %exitcond2 = icmp eq i2 %l, -2
  %empty_8 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %l_1 = add i2 1, %l
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader22.preheader

.preheader22.preheader:                           ; preds = %.preheader23
  %tmp_3 = icmp eq i2 %l, 1
  br label %.preheader22

.preheader22.loopexit:                            ; preds = %.preheader21
  br label %.preheader22

.preheader22:                                     ; preds = %.preheader22.loopexit, %.preheader22.preheader
  %j = phi i4 [ 0, %.preheader22.preheader ], [ %j_1, %.preheader22.loopexit ]
  %exitcond3 = icmp eq i4 %j, -2
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 14, i64 14, i64 14)
  %j_1 = add i4 %j, 1
  br i1 %exitcond3, label %.preheader18.0.preheader, label %.preheader21.preheader

.preheader18.0.preheader:                         ; preds = %.preheader22
  br label %.preheader18.0

.preheader21.preheader:                           ; preds = %.preheader22
  %tmp_s = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %j, i3 0)
  br label %.preheader21

.preheader21.loopexit:                            ; preds = %.preheader20
  br label %.preheader21

.preheader21:                                     ; preds = %.preheader21.loopexit, %.preheader21.preheader
  %m = phi i2 [ 0, %.preheader21.preheader ], [ %m_1, %.preheader21.loopexit ]
  %tmp_119 = trunc i2 %m to i1
  %exitcond5 = icmp eq i2 %m, -2
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  %m_1 = add i2 1, %m
  br i1 %exitcond5, label %.preheader22.loopexit, label %.preheader20.preheader

.preheader20.preheader:                           ; preds = %.preheader21
  %tmp_7 = or i1 %tmp_119, %tmp_118
  %tmp_9 = icmp eq i2 %m, 1
  %or_cond = and i1 %tmp_3, %tmp_9
  br label %.preheader20

.preheader20:                                     ; preds = %._crit_edge24, %.preheader20.preheader
  %k = phi i4 [ %k_1, %._crit_edge24 ], [ 0, %.preheader20.preheader ]
  %exitcond6 = icmp eq i4 %k, -8
  %empty_11 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %k_1 = add i4 %k, 1
  br i1 %exitcond6, label %.preheader21.loopexit, label %_ifconv

_ifconv:                                          ; preds = %.preheader20
  %tmp_1_load = load float* %tmp_1
  %tmp_2_load = load float* %tmp_2
  %tmp_5_load = load float* %tmp_5
  %tmp_13_load = load float* %tmp_13
  %tmp_117_load = load float* %tmp_117
  %tmp_116_load = load float* %tmp_116
  %tmp_115_load = load float* %tmp_115
  %tmp_114_load = load float* %tmp_114
  %tmp_113_load = load float* %tmp_113
  %tmp_112_load = load float* %tmp_112
  %tmp_111_load = load float* %tmp_111
  %tmp_110_load = load float* %tmp_110
  %tmp_109_load = load float* %tmp_109
  %tmp_108_load = load float* %tmp_108
  %tmp_107_load = load float* %tmp_107
  %tmp_106_load = load float* %tmp_106
  %tmp_105_load = load float* %tmp_105
  %tmp_104_load = load float* %tmp_104
  %tmp_103_load = load float* %tmp_103
  %tmp_102_load = load float* %tmp_102
  %tmp_101_load = load float* %tmp_101
  %tmp_100_load = load float* %tmp_100
  %tmp_99_load = load float* %tmp_99
  %tmp_98_load = load float* %tmp_98
  %tmp_97_load = load float* %tmp_97
  %tmp_96_load = load float* %tmp_96
  %tmp_95_load = load float* %tmp_95
  %tmp_94_load = load float* %tmp_94
  %tmp_93_load = load float* %tmp_93
  %tmp_92_load = load float* %tmp_92
  %tmp_91_load = load float* %tmp_91
  %tmp_90_load = load float* %tmp_90
  %tmp_89_load = load float* %tmp_89
  %tmp_88_load = load float* %tmp_88
  %tmp_87_load = load float* %tmp_87
  %tmp_86_load = load float* %tmp_86
  %tmp_85_load = load float* %tmp_85
  %tmp_84_load = load float* %tmp_84
  %tmp_83_load = load float* %tmp_83
  %tmp_82_load = load float* %tmp_82
  %tmp_81_load = load float* %tmp_81
  %tmp_80_load = load float* %tmp_80
  %tmp_79_load = load float* %tmp_79
  %tmp_78_load = load float* %tmp_78
  %tmp_77_load = load float* %tmp_77
  %tmp_76_load = load float* %tmp_76
  %tmp_75_load = load float* %tmp_75
  %tmp_74_load = load float* %tmp_74
  %tmp_73_load = load float* %tmp_73
  %tmp_72_load = load float* %tmp_72
  %tmp_71_load = load float* %tmp_71
  %tmp_70_load = load float* %tmp_70
  %tmp_69_load = load float* %tmp_69
  %tmp_68_load = load float* %tmp_68
  %tmp_67_load = load float* %tmp_67
  %tmp_66_load = load float* %tmp_66
  %tmp_65_load = load float* %tmp_65
  %tmp_64_load = load float* %tmp_64
  %tmp_63_load = load float* %tmp_63
  %tmp_62_load = load float* %tmp_62
  %tmp_61_load = load float* %tmp_61
  %tmp_60_load = load float* %tmp_60
  %tmp_59_load = load float* %tmp_59
  %tmp_58_load = load float* %tmp_58
  %tmp_57_load = load float* %tmp_57
  %tmp_56_load = load float* %tmp_56
  %tmp_55_load = load float* %tmp_55
  %tmp_54_load = load float* %tmp_54
  %tmp_53_load = load float* %tmp_53
  %tmp_52_load = load float* %tmp_52
  %tmp_51_load = load float* %tmp_51
  %tmp_50_load = load float* %tmp_50
  %tmp_49_load = load float* %tmp_49
  %tmp_48_load = load float* %tmp_48
  %tmp_47_load = load float* %tmp_47
  %tmp_46_load = load float* %tmp_46
  %tmp_45_load = load float* %tmp_45
  %tmp_44_load = load float* %tmp_44
  %tmp_43_load = load float* %tmp_43
  %tmp_42_load = load float* %tmp_42
  %tmp_41_load = load float* %tmp_41
  %tmp_40_load = load float* %tmp_40
  %tmp_39_load = load float* %tmp_39
  %tmp_38_load = load float* %tmp_38
  %tmp_37_load = load float* %tmp_37
  %tmp_36_load = load float* %tmp_36
  %tmp_35_load = load float* %tmp_35
  %tmp_34_load = load float* %tmp_34
  %tmp_33_load = load float* %tmp_33
  %tmp_32_load = load float* %tmp_32
  %tmp_31_load = load float* %tmp_31
  %tmp_30_load = load float* %tmp_30
  %tmp_29_load = load float* %tmp_29
  %tmp_28_load = load float* %tmp_28
  %tmp_27_load = load float* %tmp_27
  %tmp_26_load = load float* %tmp_26
  %tmp_25_load = load float* %tmp_25
  %tmp_24_load = load float* %tmp_24
  %tmp_23_load = load float* %tmp_23
  %tmp_22_load = load float* %tmp_22
  %tmp_21_load = load float* %tmp_21
  %tmp_20_load = load float* %tmp_20
  %tmp_19_load = load float* %tmp_19
  %tmp_18_load = load float* %tmp_18
  %tmp_17_load = load float* %tmp_17
  %tmp_16_load = load float* %tmp_16
  %tmp_15_load = load float* %tmp_15
  %tmp_14_load = load float* %tmp_14
  %tmp_12_load = load float* %tmp_12
  %tmp_11_load = load float* %tmp_11
  %tmp_4_load = load float* %tmp_4
  %tmp_8_load = load float* %tmp_8
  %tmp_130 = call float @_ssdm_op_Read.ap_fifo.volatile.floatP(float* %in_V)
  %tmp_6 = zext i4 %k to i7
  %tmp_t = add i7 %tmp_s, %tmp_6
  %tmp_120 = call float @_ssdm_op_Mux.ap_auto.112float.i7(float %tmp_1_load, float %tmp_2_load, float %tmp_5_load, float %tmp_13_load, float %tmp_117_load, float %tmp_116_load, float %tmp_115_load, float %tmp_114_load, float %tmp_113_load, float %tmp_112_load, float %tmp_111_load, float %tmp_110_load, float %tmp_109_load, float %tmp_108_load, float %tmp_107_load, float %tmp_106_load, float %tmp_105_load, float %tmp_104_load, float %tmp_103_load, float %tmp_102_load, float %tmp_101_load, float %tmp_100_load, float %tmp_99_load, float %tmp_98_load, float %tmp_97_load, float %tmp_96_load, float %tmp_95_load, float %tmp_94_load, float %tmp_93_load, float %tmp_92_load, float %tmp_91_load, float %tmp_90_load, float %tmp_89_load, float %tmp_88_load, float %tmp_87_load, float %tmp_86_load, float %tmp_85_load, float %tmp_84_load, float %tmp_83_load, float %tmp_82_load, float %tmp_81_load, float %tmp_80_load, float %tmp_79_load, float %tmp_78_load, float %tmp_77_load, float %tmp_76_load, float %tmp_75_load, float %tmp_74_load, float %tmp_73_load, float %tmp_72_load, float %tmp_71_load, float %tmp_70_load, float %tmp_69_load, float %tmp_68_load, float %tmp_67_load, float %tmp_66_load, float %tmp_65_load, float %tmp_64_load, float %tmp_63_load, float %tmp_62_load, float %tmp_61_load, float %tmp_60_load, float %tmp_59_load, float %tmp_58_load, float %tmp_57_load, float %tmp_56_load, float %tmp_55_load, float %tmp_54_load, float %tmp_53_load, float %tmp_52_load, float %tmp_51_load, float %tmp_50_load, float %tmp_49_load, float %tmp_48_load, float %tmp_47_load, float %tmp_46_load, float %tmp_45_load, float %tmp_44_load, float %tmp_43_load, float %tmp_42_load, float %tmp_41_load, float %tmp_40_load, float %tmp_39_load, float %tmp_38_load, float %tmp_37_load, float %tmp_36_load, float %tmp_35_load, float %tmp_34_load, float %tmp_33_load, float %tmp_32_load, float %tmp_31_load, float %tmp_30_load, float %tmp_29_load, float %tmp_28_load, float %tmp_27_load, float %tmp_26_load, float %tmp_25_load, float %tmp_24_load, float %tmp_23_load, float %tmp_22_load, float %tmp_21_load, float %tmp_20_load, float %tmp_19_load, float %tmp_18_load, float %tmp_17_load, float %tmp_16_load, float %tmp_15_load, float %tmp_14_load, float %tmp_12_load, float %tmp_11_load, float %tmp_4_load, float %tmp_8_load, i7 %tmp_t)
  %p_to_int = bitcast float %tmp_120 to i32
  %tmp_121 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %p_to_int, i32 23, i32 30)
  %tmp_122 = trunc i32 %p_to_int to i23
  %read_to_int = bitcast float %tmp_130 to i32
  %tmp_123 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %read_to_int, i32 23, i32 30)
  %tmp_124 = trunc i32 %read_to_int to i23
  %notlhs = icmp ne i8 %tmp_121, -1
  %notrhs = icmp eq i23 %tmp_122, 0
  %tmp_125 = or i1 %notrhs, %notlhs
  %notlhs8 = icmp ne i8 %tmp_123, -1
  %notrhs9 = icmp eq i23 %tmp_124, 0
  %tmp_126 = or i1 %notrhs9, %notlhs8
  %tmp_127 = and i1 %tmp_125, %tmp_126
  %tmp_128 = fcmp ogt float %tmp_120, %tmp_130
  %tmp_129 = and i1 %tmp_127, %tmp_128
  %sel_tmp2 = and i1 %tmp_7, %tmp_129
  %tmp_10 = select i1 %sel_tmp2, float %tmp_120, float %tmp_130
  switch i7 %tmp_t, label %branch111 [
    i7 0, label %._crit_edge116.pre
    i7 1, label %branch1
    i7 2, label %branch2
    i7 3, label %branch3
    i7 4, label %branch4
    i7 5, label %branch5
    i7 6, label %branch6
    i7 7, label %branch7
    i7 8, label %branch8
    i7 9, label %branch9
    i7 10, label %branch10
    i7 11, label %branch11
    i7 12, label %branch12
    i7 13, label %branch13
    i7 14, label %branch14
    i7 15, label %branch15
    i7 16, label %branch16
    i7 17, label %branch17
    i7 18, label %branch18
    i7 19, label %branch19
    i7 20, label %branch20
    i7 21, label %branch21
    i7 22, label %branch22
    i7 23, label %branch23
    i7 24, label %branch24
    i7 25, label %branch25
    i7 26, label %branch26
    i7 27, label %branch27
    i7 28, label %branch28
    i7 29, label %branch29
    i7 30, label %branch30
    i7 31, label %branch31
    i7 32, label %branch32
    i7 33, label %branch33
    i7 34, label %branch34
    i7 35, label %branch35
    i7 36, label %branch36
    i7 37, label %branch37
    i7 38, label %branch38
    i7 39, label %branch39
    i7 40, label %branch40
    i7 41, label %branch41
    i7 42, label %branch42
    i7 43, label %branch43
    i7 44, label %branch44
    i7 45, label %branch45
    i7 46, label %branch46
    i7 47, label %branch47
    i7 48, label %branch48
    i7 49, label %branch49
    i7 50, label %branch50
    i7 51, label %branch51
    i7 52, label %branch52
    i7 53, label %branch53
    i7 54, label %branch54
    i7 55, label %branch55
    i7 56, label %branch56
    i7 57, label %branch57
    i7 58, label %branch58
    i7 59, label %branch59
    i7 60, label %branch60
    i7 61, label %branch61
    i7 62, label %branch62
    i7 63, label %branch63
    i7 -64, label %branch64
    i7 -63, label %branch65
    i7 -62, label %branch66
    i7 -61, label %branch67
    i7 -60, label %branch68
    i7 -59, label %branch69
    i7 -58, label %branch70
    i7 -57, label %branch71
    i7 -56, label %branch72
    i7 -55, label %branch73
    i7 -54, label %branch74
    i7 -53, label %branch75
    i7 -52, label %branch76
    i7 -51, label %branch77
    i7 -50, label %branch78
    i7 -49, label %branch79
    i7 -48, label %branch80
    i7 -47, label %branch81
    i7 -46, label %branch82
    i7 -45, label %branch83
    i7 -44, label %branch84
    i7 -43, label %branch85
    i7 -42, label %branch86
    i7 -41, label %branch87
    i7 -40, label %branch88
    i7 -39, label %branch89
    i7 -38, label %branch90
    i7 -37, label %branch91
    i7 -36, label %branch92
    i7 -35, label %branch93
    i7 -34, label %branch94
    i7 -33, label %branch95
    i7 -32, label %branch96
    i7 -31, label %branch97
    i7 -30, label %branch98
    i7 -29, label %branch99
    i7 -28, label %branch100
    i7 -27, label %branch101
    i7 -26, label %branch102
    i7 -25, label %branch103
    i7 -24, label %branch104
    i7 -23, label %branch105
    i7 -22, label %branch106
    i7 -21, label %branch107
    i7 -20, label %branch108
    i7 -19, label %branch109
    i7 -18, label %branch110
  ]

._crit_edge116.pre:                               ; preds = %_ifconv
  store float %tmp_10, float* %tmp_1
  br label %._crit_edge116

._crit_edge116:                                   ; preds = %._crit_edge116.pre, %branch111, %branch110, %branch109, %branch108, %branch107, %branch106, %branch105, %branch104, %branch103, %branch102, %branch101, %branch100, %branch99, %branch98, %branch97, %branch96, %branch95, %branch94, %branch93, %branch92, %branch91, %branch90, %branch89, %branch88, %branch87, %branch86, %branch85, %branch84, %branch83, %branch82, %branch81, %branch80, %branch79, %branch78, %branch77, %branch76, %branch75, %branch74, %branch73, %branch72, %branch71, %branch70, %branch69, %branch68, %branch67, %branch66, %branch65, %branch64, %branch63, %branch62, %branch61, %branch60, %branch59, %branch58, %branch57, %branch56, %branch55, %branch54, %branch53, %branch52, %branch51, %branch50, %branch49, %branch48, %branch47, %branch46, %branch45, %branch44, %branch43, %branch42, %branch41, %branch40, %branch39, %branch38, %branch37, %branch36, %branch35, %branch34, %branch33, %branch32, %branch31, %branch30, %branch29, %branch28, %branch27, %branch26, %branch25, %branch24, %branch23, %branch22, %branch21, %branch20, %branch19, %branch18, %branch17, %branch16, %branch15, %branch14, %branch13, %branch12, %branch11, %branch10, %branch9, %branch8, %branch7, %branch6, %branch5, %branch4, %branch3, %branch2, %branch1
  br i1 %or_cond, label %1, label %._crit_edge24

; <label>:1                                       ; preds = %._crit_edge116
  call void @_ssdm_op_Write.ap_fifo.volatile.floatP(float* %out_V, float %tmp_10)
  br label %._crit_edge24

._crit_edge24:                                    ; preds = %1, %._crit_edge116
  br label %.preheader20

.preheader18.0:                                   ; preds = %.preheader18.0.preheader, %2
  %channel = phi i4 [ %channel_1, %2 ], [ 0, %.preheader18.0.preheader ]
  %exitcond = icmp eq i4 %channel, -8
  %empty_12 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8)
  %channel_1 = add i4 %channel, 1
  br i1 %exitcond, label %.preheader23.loopexit, label %2

; <label>:2                                       ; preds = %.preheader18.0
  %tmp_2_0 = call float @_ssdm_op_Read.ap_fifo.volatile.floatP(float* %in_V)
  br label %.preheader18.0

.preheader:                                       ; preds = %.preheader.preheader, %3
  %tmp = call i1 @_ssdm_op_NbReadReq.ap_fifo.floatP(float* %in_V, i32 1)
  br i1 %tmp, label %3, label %4

; <label>:3                                       ; preds = %.preheader
  %tmp_1_0 = call float @_ssdm_op_Read.ap_fifo.volatile.floatP(float* %in_V)
  br label %.preheader

; <label>:4                                       ; preds = %.preheader
  ret void

branch1:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_2
  br label %._crit_edge116

branch2:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_5
  br label %._crit_edge116

branch3:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_13
  br label %._crit_edge116

branch4:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_117
  br label %._crit_edge116

branch5:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_116
  br label %._crit_edge116

branch6:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_115
  br label %._crit_edge116

branch7:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_114
  br label %._crit_edge116

branch8:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_113
  br label %._crit_edge116

branch9:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_112
  br label %._crit_edge116

branch10:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_111
  br label %._crit_edge116

branch11:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_110
  br label %._crit_edge116

branch12:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_109
  br label %._crit_edge116

branch13:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_108
  br label %._crit_edge116

branch14:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_107
  br label %._crit_edge116

branch15:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_106
  br label %._crit_edge116

branch16:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_105
  br label %._crit_edge116

branch17:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_104
  br label %._crit_edge116

branch18:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_103
  br label %._crit_edge116

branch19:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_102
  br label %._crit_edge116

branch20:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_101
  br label %._crit_edge116

branch21:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_100
  br label %._crit_edge116

branch22:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_99
  br label %._crit_edge116

branch23:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_98
  br label %._crit_edge116

branch24:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_97
  br label %._crit_edge116

branch25:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_96
  br label %._crit_edge116

branch26:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_95
  br label %._crit_edge116

branch27:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_94
  br label %._crit_edge116

branch28:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_93
  br label %._crit_edge116

branch29:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_92
  br label %._crit_edge116

branch30:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_91
  br label %._crit_edge116

branch31:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_90
  br label %._crit_edge116

branch32:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_89
  br label %._crit_edge116

branch33:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_88
  br label %._crit_edge116

branch34:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_87
  br label %._crit_edge116

branch35:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_86
  br label %._crit_edge116

branch36:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_85
  br label %._crit_edge116

branch37:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_84
  br label %._crit_edge116

branch38:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_83
  br label %._crit_edge116

branch39:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_82
  br label %._crit_edge116

branch40:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_81
  br label %._crit_edge116

branch41:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_80
  br label %._crit_edge116

branch42:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_79
  br label %._crit_edge116

branch43:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_78
  br label %._crit_edge116

branch44:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_77
  br label %._crit_edge116

branch45:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_76
  br label %._crit_edge116

branch46:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_75
  br label %._crit_edge116

branch47:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_74
  br label %._crit_edge116

branch48:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_73
  br label %._crit_edge116

branch49:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_72
  br label %._crit_edge116

branch50:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_71
  br label %._crit_edge116

branch51:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_70
  br label %._crit_edge116

branch52:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_69
  br label %._crit_edge116

branch53:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_68
  br label %._crit_edge116

branch54:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_67
  br label %._crit_edge116

branch55:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_66
  br label %._crit_edge116

branch56:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_65
  br label %._crit_edge116

branch57:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_64
  br label %._crit_edge116

branch58:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_63
  br label %._crit_edge116

branch59:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_62
  br label %._crit_edge116

branch60:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_61
  br label %._crit_edge116

branch61:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_60
  br label %._crit_edge116

branch62:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_59
  br label %._crit_edge116

branch63:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_58
  br label %._crit_edge116

branch64:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_57
  br label %._crit_edge116

branch65:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_56
  br label %._crit_edge116

branch66:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_55
  br label %._crit_edge116

branch67:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_54
  br label %._crit_edge116

branch68:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_53
  br label %._crit_edge116

branch69:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_52
  br label %._crit_edge116

branch70:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_51
  br label %._crit_edge116

branch71:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_50
  br label %._crit_edge116

branch72:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_49
  br label %._crit_edge116

branch73:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_48
  br label %._crit_edge116

branch74:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_47
  br label %._crit_edge116

branch75:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_46
  br label %._crit_edge116

branch76:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_45
  br label %._crit_edge116

branch77:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_44
  br label %._crit_edge116

branch78:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_43
  br label %._crit_edge116

branch79:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_42
  br label %._crit_edge116

branch80:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_41
  br label %._crit_edge116

branch81:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_40
  br label %._crit_edge116

branch82:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_39
  br label %._crit_edge116

branch83:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_38
  br label %._crit_edge116

branch84:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_37
  br label %._crit_edge116

branch85:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_36
  br label %._crit_edge116

branch86:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_35
  br label %._crit_edge116

branch87:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_34
  br label %._crit_edge116

branch88:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_33
  br label %._crit_edge116

branch89:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_32
  br label %._crit_edge116

branch90:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_31
  br label %._crit_edge116

branch91:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_30
  br label %._crit_edge116

branch92:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_29
  br label %._crit_edge116

branch93:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_28
  br label %._crit_edge116

branch94:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_27
  br label %._crit_edge116

branch95:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_26
  br label %._crit_edge116

branch96:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_25
  br label %._crit_edge116

branch97:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_24
  br label %._crit_edge116

branch98:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_23
  br label %._crit_edge116

branch99:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_22
  br label %._crit_edge116

branch100:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_21
  br label %._crit_edge116

branch101:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_20
  br label %._crit_edge116

branch102:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_19
  br label %._crit_edge116

branch103:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_18
  br label %._crit_edge116

branch104:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_17
  br label %._crit_edge116

branch105:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_16
  br label %._crit_edge116

branch106:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_15
  br label %._crit_edge116

branch107:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_14
  br label %._crit_edge116

branch108:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_12
  br label %._crit_edge116

branch109:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_11
  br label %._crit_edge116

branch110:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_4
  br label %._crit_edge116

branch111:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_8
  br label %._crit_edge116
}

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define weak void @_ssdm_op_Write.ap_fifo.volatile.floatP(float*, float) {
entry:
  %empty = call float @_autotb_FifoWrite_float(float* %0, float %1)
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecInterface(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak float @_ssdm_op_Read.ap_fifo.volatile.floatP(float*) {
entry:
  %empty = call float @_autotb_FifoRead_float(float* %0)
  ret float %empty
}

define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_13 = trunc i32 %empty to i8
  ret i8 %empty_13
}

declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

declare i1 @_ssdm_op_PartSelect.i1.i2.i32.i32(i2, i32, i32) nounwind readnone

define weak i1 @_ssdm_op_NbReadReq.ap_fifo.floatP(float*, i32) {
entry:
  %empty = call i1 @_autotb_FifoCanRead_float(float* %0)
  ret i1 %empty
}

define weak float @_ssdm_op_Mux.ap_auto.112float.i7(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, i7) {
entry:
  switch i7 %112, label %case111 [
    i7 0, label %case0
    i7 1, label %case1
    i7 2, label %case2
    i7 3, label %case3
    i7 4, label %case4
    i7 5, label %case5
    i7 6, label %case6
    i7 7, label %case7
    i7 8, label %case8
    i7 9, label %case9
    i7 10, label %case10
    i7 11, label %case11
    i7 12, label %case12
    i7 13, label %case13
    i7 14, label %case14
    i7 15, label %case15
    i7 16, label %case16
    i7 17, label %case17
    i7 18, label %case18
    i7 19, label %case19
    i7 20, label %case20
    i7 21, label %case21
    i7 22, label %case22
    i7 23, label %case23
    i7 24, label %case24
    i7 25, label %case25
    i7 26, label %case26
    i7 27, label %case27
    i7 28, label %case28
    i7 29, label %case29
    i7 30, label %case30
    i7 31, label %case31
    i7 32, label %case32
    i7 33, label %case33
    i7 34, label %case34
    i7 35, label %case35
    i7 36, label %case36
    i7 37, label %case37
    i7 38, label %case38
    i7 39, label %case39
    i7 40, label %case40
    i7 41, label %case41
    i7 42, label %case42
    i7 43, label %case43
    i7 44, label %case44
    i7 45, label %case45
    i7 46, label %case46
    i7 47, label %case47
    i7 48, label %case48
    i7 49, label %case49
    i7 50, label %case50
    i7 51, label %case51
    i7 52, label %case52
    i7 53, label %case53
    i7 54, label %case54
    i7 55, label %case55
    i7 56, label %case56
    i7 57, label %case57
    i7 58, label %case58
    i7 59, label %case59
    i7 60, label %case60
    i7 61, label %case61
    i7 62, label %case62
    i7 63, label %case63
    i7 -64, label %case64
    i7 -63, label %case65
    i7 -62, label %case66
    i7 -61, label %case67
    i7 -60, label %case68
    i7 -59, label %case69
    i7 -58, label %case70
    i7 -57, label %case71
    i7 -56, label %case72
    i7 -55, label %case73
    i7 -54, label %case74
    i7 -53, label %case75
    i7 -52, label %case76
    i7 -51, label %case77
    i7 -50, label %case78
    i7 -49, label %case79
    i7 -48, label %case80
    i7 -47, label %case81
    i7 -46, label %case82
    i7 -45, label %case83
    i7 -44, label %case84
    i7 -43, label %case85
    i7 -42, label %case86
    i7 -41, label %case87
    i7 -40, label %case88
    i7 -39, label %case89
    i7 -38, label %case90
    i7 -37, label %case91
    i7 -36, label %case92
    i7 -35, label %case93
    i7 -34, label %case94
    i7 -33, label %case95
    i7 -32, label %case96
    i7 -31, label %case97
    i7 -30, label %case98
    i7 -29, label %case99
    i7 -28, label %case100
    i7 -27, label %case101
    i7 -26, label %case102
    i7 -25, label %case103
    i7 -24, label %case104
    i7 -23, label %case105
    i7 -22, label %case106
    i7 -21, label %case107
    i7 -20, label %case108
    i7 -19, label %case109
    i7 -18, label %case110
  ]

case0:                                            ; preds = %case111, %case110, %case109, %case108, %case107, %case106, %case105, %case104, %case103, %case102, %case101, %case100, %case99, %case98, %case97, %case96, %case95, %case94, %case93, %case92, %case91, %case90, %case89, %case88, %case87, %case86, %case85, %case84, %case83, %case82, %case81, %case80, %case79, %case78, %case77, %case76, %case75, %case74, %case73, %case72, %case71, %case70, %case69, %case68, %case67, %case66, %case65, %case64, %case63, %case62, %case61, %case60, %case59, %case58, %case57, %case56, %case55, %case54, %case53, %case52, %case51, %case50, %case49, %case48, %case47, %case46, %case45, %case44, %case43, %case42, %case41, %case40, %case39, %case38, %case37, %case36, %case35, %case34, %case33, %case32, %case31, %case30, %case29, %case28, %case27, %case26, %case25, %case24, %case23, %case22, %case21, %case20, %case19, %case18, %case17, %case16, %case15, %case14, %case13, %case12, %case11, %case10, %case9, %case8, %case7, %case6, %case5, %case4, %case3, %case2, %case1, %entry
  %merge = phi float [ %0, %entry ], [ %1, %case1 ], [ %2, %case2 ], [ %3, %case3 ], [ %4, %case4 ], [ %5, %case5 ], [ %6, %case6 ], [ %7, %case7 ], [ %8, %case8 ], [ %9, %case9 ], [ %10, %case10 ], [ %11, %case11 ], [ %12, %case12 ], [ %13, %case13 ], [ %14, %case14 ], [ %15, %case15 ], [ %16, %case16 ], [ %17, %case17 ], [ %18, %case18 ], [ %19, %case19 ], [ %20, %case20 ], [ %21, %case21 ], [ %22, %case22 ], [ %23, %case23 ], [ %24, %case24 ], [ %25, %case25 ], [ %26, %case26 ], [ %27, %case27 ], [ %28, %case28 ], [ %29, %case29 ], [ %30, %case30 ], [ %31, %case31 ], [ %32, %case32 ], [ %33, %case33 ], [ %34, %case34 ], [ %35, %case35 ], [ %36, %case36 ], [ %37, %case37 ], [ %38, %case38 ], [ %39, %case39 ], [ %40, %case40 ], [ %41, %case41 ], [ %42, %case42 ], [ %43, %case43 ], [ %44, %case44 ], [ %45, %case45 ], [ %46, %case46 ], [ %47, %case47 ], [ %48, %case48 ], [ %49, %case49 ], [ %50, %case50 ], [ %51, %case51 ], [ %52, %case52 ], [ %53, %case53 ], [ %54, %case54 ], [ %55, %case55 ], [ %56, %case56 ], [ %57, %case57 ], [ %58, %case58 ], [ %59, %case59 ], [ %60, %case60 ], [ %61, %case61 ], [ %62, %case62 ], [ %63, %case63 ], [ %64, %case64 ], [ %65, %case65 ], [ %66, %case66 ], [ %67, %case67 ], [ %68, %case68 ], [ %69, %case69 ], [ %70, %case70 ], [ %71, %case71 ], [ %72, %case72 ], [ %73, %case73 ], [ %74, %case74 ], [ %75, %case75 ], [ %76, %case76 ], [ %77, %case77 ], [ %78, %case78 ], [ %79, %case79 ], [ %80, %case80 ], [ %81, %case81 ], [ %82, %case82 ], [ %83, %case83 ], [ %84, %case84 ], [ %85, %case85 ], [ %86, %case86 ], [ %87, %case87 ], [ %88, %case88 ], [ %89, %case89 ], [ %90, %case90 ], [ %91, %case91 ], [ %92, %case92 ], [ %93, %case93 ], [ %94, %case94 ], [ %95, %case95 ], [ %96, %case96 ], [ %97, %case97 ], [ %98, %case98 ], [ %99, %case99 ], [ %100, %case100 ], [ %101, %case101 ], [ %102, %case102 ], [ %103, %case103 ], [ %104, %case104 ], [ %105, %case105 ], [ %106, %case106 ], [ %107, %case107 ], [ %108, %case108 ], [ %109, %case109 ], [ %110, %case110 ], [ %111, %case111 ]
  ret float %merge

case1:                                            ; preds = %entry
  br label %case0

case2:                                            ; preds = %entry
  br label %case0

case3:                                            ; preds = %entry
  br label %case0

case4:                                            ; preds = %entry
  br label %case0

case5:                                            ; preds = %entry
  br label %case0

case6:                                            ; preds = %entry
  br label %case0

case7:                                            ; preds = %entry
  br label %case0

case8:                                            ; preds = %entry
  br label %case0

case9:                                            ; preds = %entry
  br label %case0

case10:                                           ; preds = %entry
  br label %case0

case11:                                           ; preds = %entry
  br label %case0

case12:                                           ; preds = %entry
  br label %case0

case13:                                           ; preds = %entry
  br label %case0

case14:                                           ; preds = %entry
  br label %case0

case15:                                           ; preds = %entry
  br label %case0

case16:                                           ; preds = %entry
  br label %case0

case17:                                           ; preds = %entry
  br label %case0

case18:                                           ; preds = %entry
  br label %case0

case19:                                           ; preds = %entry
  br label %case0

case20:                                           ; preds = %entry
  br label %case0

case21:                                           ; preds = %entry
  br label %case0

case22:                                           ; preds = %entry
  br label %case0

case23:                                           ; preds = %entry
  br label %case0

case24:                                           ; preds = %entry
  br label %case0

case25:                                           ; preds = %entry
  br label %case0

case26:                                           ; preds = %entry
  br label %case0

case27:                                           ; preds = %entry
  br label %case0

case28:                                           ; preds = %entry
  br label %case0

case29:                                           ; preds = %entry
  br label %case0

case30:                                           ; preds = %entry
  br label %case0

case31:                                           ; preds = %entry
  br label %case0

case32:                                           ; preds = %entry
  br label %case0

case33:                                           ; preds = %entry
  br label %case0

case34:                                           ; preds = %entry
  br label %case0

case35:                                           ; preds = %entry
  br label %case0

case36:                                           ; preds = %entry
  br label %case0

case37:                                           ; preds = %entry
  br label %case0

case38:                                           ; preds = %entry
  br label %case0

case39:                                           ; preds = %entry
  br label %case0

case40:                                           ; preds = %entry
  br label %case0

case41:                                           ; preds = %entry
  br label %case0

case42:                                           ; preds = %entry
  br label %case0

case43:                                           ; preds = %entry
  br label %case0

case44:                                           ; preds = %entry
  br label %case0

case45:                                           ; preds = %entry
  br label %case0

case46:                                           ; preds = %entry
  br label %case0

case47:                                           ; preds = %entry
  br label %case0

case48:                                           ; preds = %entry
  br label %case0

case49:                                           ; preds = %entry
  br label %case0

case50:                                           ; preds = %entry
  br label %case0

case51:                                           ; preds = %entry
  br label %case0

case52:                                           ; preds = %entry
  br label %case0

case53:                                           ; preds = %entry
  br label %case0

case54:                                           ; preds = %entry
  br label %case0

case55:                                           ; preds = %entry
  br label %case0

case56:                                           ; preds = %entry
  br label %case0

case57:                                           ; preds = %entry
  br label %case0

case58:                                           ; preds = %entry
  br label %case0

case59:                                           ; preds = %entry
  br label %case0

case60:                                           ; preds = %entry
  br label %case0

case61:                                           ; preds = %entry
  br label %case0

case62:                                           ; preds = %entry
  br label %case0

case63:                                           ; preds = %entry
  br label %case0

case64:                                           ; preds = %entry
  br label %case0

case65:                                           ; preds = %entry
  br label %case0

case66:                                           ; preds = %entry
  br label %case0

case67:                                           ; preds = %entry
  br label %case0

case68:                                           ; preds = %entry
  br label %case0

case69:                                           ; preds = %entry
  br label %case0

case70:                                           ; preds = %entry
  br label %case0

case71:                                           ; preds = %entry
  br label %case0

case72:                                           ; preds = %entry
  br label %case0

case73:                                           ; preds = %entry
  br label %case0

case74:                                           ; preds = %entry
  br label %case0

case75:                                           ; preds = %entry
  br label %case0

case76:                                           ; preds = %entry
  br label %case0

case77:                                           ; preds = %entry
  br label %case0

case78:                                           ; preds = %entry
  br label %case0

case79:                                           ; preds = %entry
  br label %case0

case80:                                           ; preds = %entry
  br label %case0

case81:                                           ; preds = %entry
  br label %case0

case82:                                           ; preds = %entry
  br label %case0

case83:                                           ; preds = %entry
  br label %case0

case84:                                           ; preds = %entry
  br label %case0

case85:                                           ; preds = %entry
  br label %case0

case86:                                           ; preds = %entry
  br label %case0

case87:                                           ; preds = %entry
  br label %case0

case88:                                           ; preds = %entry
  br label %case0

case89:                                           ; preds = %entry
  br label %case0

case90:                                           ; preds = %entry
  br label %case0

case91:                                           ; preds = %entry
  br label %case0

case92:                                           ; preds = %entry
  br label %case0

case93:                                           ; preds = %entry
  br label %case0

case94:                                           ; preds = %entry
  br label %case0

case95:                                           ; preds = %entry
  br label %case0

case96:                                           ; preds = %entry
  br label %case0

case97:                                           ; preds = %entry
  br label %case0

case98:                                           ; preds = %entry
  br label %case0

case99:                                           ; preds = %entry
  br label %case0

case100:                                          ; preds = %entry
  br label %case0

case101:                                          ; preds = %entry
  br label %case0

case102:                                          ; preds = %entry
  br label %case0

case103:                                          ; preds = %entry
  br label %case0

case104:                                          ; preds = %entry
  br label %case0

case105:                                          ; preds = %entry
  br label %case0

case106:                                          ; preds = %entry
  br label %case0

case107:                                          ; preds = %entry
  br label %case0

case108:                                          ; preds = %entry
  br label %case0

case109:                                          ; preds = %entry
  br label %case0

case110:                                          ; preds = %entry
  br label %case0

case111:                                          ; preds = %entry
  br label %case0
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4, i3) nounwind readnone {
entry:
  %empty = zext i4 %0 to i7
  %empty_14 = zext i3 %1 to i7
  %empty_15 = shl i7 %empty, 3
  %empty_16 = or i7 %empty_15, %empty_14
  ret i7 %empty_16
}

declare void @_ssdm_SpecDependence(...) nounwind

declare float @_autotb_FifoWrite_float(float*, float)

declare float @_autotb_FifoRead_float(float*)

declare i1 @_autotb_FifoCanRead_float(float*)

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

!opencl.kernels = !{!0, !7, !13, !19, !21, !24, !7, !7, !7, !7, !7, !7, !7, !7}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!26}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"hls::stream<float> &", metadata !"hls::stream<float> &"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"out", metadata !"in"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space"}
!9 = metadata !{metadata !"kernel_arg_access_qual"}
!10 = metadata !{metadata !"kernel_arg_type"}
!11 = metadata !{metadata !"kernel_arg_type_qual"}
!12 = metadata !{metadata !"kernel_arg_name"}
!13 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !18, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!15 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!16 = metadata !{metadata !"kernel_arg_type", metadata !"const float &"}
!17 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!18 = metadata !{metadata !"kernel_arg_name", metadata !"wdata"}
!19 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !20, metadata !6}
!20 = metadata !{metadata !"kernel_arg_name", metadata !"din"}
!21 = metadata !{null, metadata !14, metadata !15, metadata !22, metadata !17, metadata !23, metadata !6}
!22 = metadata !{metadata !"kernel_arg_type", metadata !"float &"}
!23 = metadata !{metadata !"kernel_arg_name", metadata !"rdata"}
!24 = metadata !{null, metadata !14, metadata !15, metadata !22, metadata !17, metadata !25, metadata !6}
!25 = metadata !{metadata !"kernel_arg_name", metadata !"dout"}
!26 = metadata !{metadata !27, [1 x i32]* @llvm_global_ctors_0}
!27 = metadata !{metadata !28}
!28 = metadata !{i32 0, i32 31, metadata !29}
!29 = metadata !{metadata !30}
!30 = metadata !{metadata !"llvm.global_ctors.0", metadata !31, metadata !"", i32 0, i32 31}
!31 = metadata !{metadata !32}
!32 = metadata !{i32 0, i32 0, i32 1}
!33 = metadata !{metadata !34}
!34 = metadata !{i32 0, i32 31, metadata !35}
!35 = metadata !{metadata !36}
!36 = metadata !{metadata !"out.V", metadata !31, metadata !"float", i32 0, i32 31}
!37 = metadata !{metadata !38}
!38 = metadata !{i32 0, i32 31, metadata !39}
!39 = metadata !{metadata !40}
!40 = metadata !{metadata !"in.V", metadata !31, metadata !"float", i32 0, i32 31}
