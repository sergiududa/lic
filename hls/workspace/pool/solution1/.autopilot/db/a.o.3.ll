; ModuleID = '/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@pool_str = internal unnamed_addr constant [5 x i8] c"pool\00" ; [#uses=1 type=[5 x i8]*]
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a] ; [#uses=0 type=[1 x void ()*]*]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535] ; [#uses=0 type=[1 x i32]*]
@hls_KD_KD_LineBuffe = internal unnamed_addr constant [55 x i8] c"hls::LineBuffer<112, 1, float, 0>::LineBuffer.1.region\00" ; [#uses=2 type=[55 x i8]*]
@ap_fifo_str = internal unnamed_addr constant [8 x i8] c"ap_fifo\00" ; [#uses=2 type=[8 x i8]*]
@p_str = internal unnamed_addr constant [1 x i8] zeroinitializer ; [#uses=12 type=[1 x i8]*]

; [#uses=0]
define void @pool(float* %out_V, float* %in_V) {
  %tmp_1 = alloca float                           ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_1}, metadata !33) ; [debug variable = tmp]
  %tmp_2 = alloca float                           ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_2}, metadata !33) ; [debug variable = tmp]
  %tmp_5 = alloca float                           ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_5}, metadata !33) ; [debug variable = tmp]
  %tmp_13 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_13}, metadata !33) ; [debug variable = tmp]
  %tmp_117 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_117}, metadata !33) ; [debug variable = tmp]
  %tmp_116 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_116}, metadata !33) ; [debug variable = tmp]
  %tmp_115 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_115}, metadata !33) ; [debug variable = tmp]
  %tmp_114 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_114}, metadata !33) ; [debug variable = tmp]
  %tmp_113 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_113}, metadata !33) ; [debug variable = tmp]
  %tmp_112 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_112}, metadata !33) ; [debug variable = tmp]
  %tmp_111 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_111}, metadata !33) ; [debug variable = tmp]
  %tmp_110 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_110}, metadata !33) ; [debug variable = tmp]
  %tmp_109 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_109}, metadata !33) ; [debug variable = tmp]
  %tmp_108 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_108}, metadata !33) ; [debug variable = tmp]
  %tmp_107 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_107}, metadata !33) ; [debug variable = tmp]
  %tmp_106 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_106}, metadata !33) ; [debug variable = tmp]
  %tmp_105 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_105}, metadata !33) ; [debug variable = tmp]
  %tmp_104 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_104}, metadata !33) ; [debug variable = tmp]
  %tmp_103 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_103}, metadata !33) ; [debug variable = tmp]
  %tmp_102 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_102}, metadata !33) ; [debug variable = tmp]
  %tmp_101 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_101}, metadata !33) ; [debug variable = tmp]
  %tmp_100 = alloca float                         ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_100}, metadata !33) ; [debug variable = tmp]
  %tmp_99 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_99}, metadata !33) ; [debug variable = tmp]
  %tmp_98 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_98}, metadata !33) ; [debug variable = tmp]
  %tmp_97 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_97}, metadata !33) ; [debug variable = tmp]
  %tmp_96 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_96}, metadata !33) ; [debug variable = tmp]
  %tmp_95 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_95}, metadata !33) ; [debug variable = tmp]
  %tmp_94 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_94}, metadata !33) ; [debug variable = tmp]
  %tmp_93 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_93}, metadata !33) ; [debug variable = tmp]
  %tmp_92 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_92}, metadata !33) ; [debug variable = tmp]
  %tmp_91 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_91}, metadata !33) ; [debug variable = tmp]
  %tmp_90 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_90}, metadata !33) ; [debug variable = tmp]
  %tmp_89 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_89}, metadata !33) ; [debug variable = tmp]
  %tmp_88 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_88}, metadata !33) ; [debug variable = tmp]
  %tmp_87 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_87}, metadata !33) ; [debug variable = tmp]
  %tmp_86 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_86}, metadata !33) ; [debug variable = tmp]
  %tmp_85 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_85}, metadata !33) ; [debug variable = tmp]
  %tmp_84 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_84}, metadata !33) ; [debug variable = tmp]
  %tmp_83 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_83}, metadata !33) ; [debug variable = tmp]
  %tmp_82 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_82}, metadata !33) ; [debug variable = tmp]
  %tmp_81 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_81}, metadata !33) ; [debug variable = tmp]
  %tmp_80 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_80}, metadata !33) ; [debug variable = tmp]
  %tmp_79 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_79}, metadata !33) ; [debug variable = tmp]
  %tmp_78 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_78}, metadata !33) ; [debug variable = tmp]
  %tmp_77 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_77}, metadata !33) ; [debug variable = tmp]
  %tmp_76 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_76}, metadata !33) ; [debug variable = tmp]
  %tmp_75 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_75}, metadata !33) ; [debug variable = tmp]
  %tmp_74 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_74}, metadata !33) ; [debug variable = tmp]
  %tmp_73 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_73}, metadata !33) ; [debug variable = tmp]
  %tmp_72 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_72}, metadata !33) ; [debug variable = tmp]
  %tmp_71 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_71}, metadata !33) ; [debug variable = tmp]
  %tmp_70 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_70}, metadata !33) ; [debug variable = tmp]
  %tmp_69 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_69}, metadata !33) ; [debug variable = tmp]
  %tmp_68 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_68}, metadata !33) ; [debug variable = tmp]
  %tmp_67 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_67}, metadata !33) ; [debug variable = tmp]
  %tmp_66 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_66}, metadata !33) ; [debug variable = tmp]
  %tmp_65 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_65}, metadata !33) ; [debug variable = tmp]
  %tmp_64 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_64}, metadata !33) ; [debug variable = tmp]
  %tmp_63 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_63}, metadata !33) ; [debug variable = tmp]
  %tmp_62 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_62}, metadata !33) ; [debug variable = tmp]
  %tmp_61 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_61}, metadata !33) ; [debug variable = tmp]
  %tmp_60 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_60}, metadata !33) ; [debug variable = tmp]
  %tmp_59 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_59}, metadata !33) ; [debug variable = tmp]
  %tmp_58 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_58}, metadata !33) ; [debug variable = tmp]
  %tmp_57 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_57}, metadata !33) ; [debug variable = tmp]
  %tmp_56 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_56}, metadata !33) ; [debug variable = tmp]
  %tmp_55 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_55}, metadata !33) ; [debug variable = tmp]
  %tmp_54 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_54}, metadata !33) ; [debug variable = tmp]
  %tmp_53 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_53}, metadata !33) ; [debug variable = tmp]
  %tmp_52 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_52}, metadata !33) ; [debug variable = tmp]
  %tmp_51 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_51}, metadata !33) ; [debug variable = tmp]
  %tmp_50 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_50}, metadata !33) ; [debug variable = tmp]
  %tmp_49 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_49}, metadata !33) ; [debug variable = tmp]
  %tmp_48 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_48}, metadata !33) ; [debug variable = tmp]
  %tmp_47 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_47}, metadata !33) ; [debug variable = tmp]
  %tmp_46 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_46}, metadata !33) ; [debug variable = tmp]
  %tmp_45 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_45}, metadata !33) ; [debug variable = tmp]
  %tmp_44 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_44}, metadata !33) ; [debug variable = tmp]
  %tmp_43 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_43}, metadata !33) ; [debug variable = tmp]
  %tmp_42 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_42}, metadata !33) ; [debug variable = tmp]
  %tmp_41 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_41}, metadata !33) ; [debug variable = tmp]
  %tmp_40 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_40}, metadata !33) ; [debug variable = tmp]
  %tmp_39 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_39}, metadata !33) ; [debug variable = tmp]
  %tmp_38 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_38}, metadata !33) ; [debug variable = tmp]
  %tmp_37 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_37}, metadata !33) ; [debug variable = tmp]
  %tmp_36 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_36}, metadata !33) ; [debug variable = tmp]
  %tmp_35 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_35}, metadata !33) ; [debug variable = tmp]
  %tmp_34 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_34}, metadata !33) ; [debug variable = tmp]
  %tmp_33 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_33}, metadata !33) ; [debug variable = tmp]
  %tmp_32 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_32}, metadata !33) ; [debug variable = tmp]
  %tmp_31 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_31}, metadata !33) ; [debug variable = tmp]
  %tmp_30 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_30}, metadata !33) ; [debug variable = tmp]
  %tmp_29 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_29}, metadata !33) ; [debug variable = tmp]
  %tmp_28 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_28}, metadata !33) ; [debug variable = tmp]
  %tmp_27 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_27}, metadata !33) ; [debug variable = tmp]
  %tmp_26 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_26}, metadata !33) ; [debug variable = tmp]
  %tmp_25 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_25}, metadata !33) ; [debug variable = tmp]
  %tmp_24 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_24}, metadata !33) ; [debug variable = tmp]
  %tmp_23 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_23}, metadata !33) ; [debug variable = tmp]
  %tmp_22 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_22}, metadata !33) ; [debug variable = tmp]
  %tmp_21 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_21}, metadata !33) ; [debug variable = tmp]
  %tmp_20 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_20}, metadata !33) ; [debug variable = tmp]
  %tmp_19 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_19}, metadata !33) ; [debug variable = tmp]
  %tmp_18 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_18}, metadata !33) ; [debug variable = tmp]
  %tmp_17 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_17}, metadata !33) ; [debug variable = tmp]
  %tmp_16 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_16}, metadata !33) ; [debug variable = tmp]
  %tmp_15 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_15}, metadata !33) ; [debug variable = tmp]
  %tmp_14 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_14}, metadata !33) ; [debug variable = tmp]
  %tmp_12 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_12}, metadata !33) ; [debug variable = tmp]
  %tmp_11 = alloca float                          ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_11}, metadata !33) ; [debug variable = tmp]
  %tmp_4 = alloca float                           ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_4}, metadata !33) ; [debug variable = tmp]
  %tmp_8 = alloca float                           ; [#uses=2 type=float*]
  call void @llvm.dbg.declare(metadata !{float* %tmp_8}, metadata !33) ; [debug variable = tmp]
  %empty = call i32 (...)* @_ssdm_op_SpecInterface(float* %in_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 2, i32 2, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str) ; [#uses=0 type=i32]
  %empty_6 = call i32 (...)* @_ssdm_op_SpecInterface(float* %out_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 2, i32 2, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str) ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecBitsMap(float* %out_V), !map !95
  call void (...)* @_ssdm_op_SpecBitsMap(float* %in_V), !map !99
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @pool_str) nounwind
  call void @llvm.dbg.value(metadata !{float* %out_V}, i64 0, metadata !103), !dbg !112 ; [debug line = 62:31] [debug variable = out.V]
  call void @llvm.dbg.value(metadata !{float* %in_V}, i64 0, metadata !113), !dbg !115 ; [debug line = 62:56] [debug variable = in.V]
  %rbegin_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([55 x i8]* @hls_KD_KD_LineBuffe) nounwind ; [#uses=1 type=i32]
  %rend_i = call i32 (...)* @_ssdm_op_SpecRegionEnd([55 x i8]* @hls_KD_KD_LineBuffe, i32 %rbegin_i) nounwind ; [#uses=0 type=i32]
  br label %.loopexit, !dbg !116                  ; [debug line = 69:6]

.loopexit.loopexit:                               ; preds = %.preheader23
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %i = phi i4 [ 0, %0 ], [ %i_1, %.loopexit.loopexit ] ; [#uses=2 type=i4]
  %exitcond1 = icmp eq i4 %i, -2, !dbg !116       ; [#uses=1 type=i1] [debug line = 69:6]
  %empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 14, i64 14, i64 14) ; [#uses=0 type=i32]
  %i_1 = add i4 %i, 1, !dbg !119                  ; [#uses=1 type=i4] [debug line = 69:22]
  call void @llvm.dbg.value(metadata !{i4 %i_1}, i64 0, metadata !120), !dbg !119 ; [debug line = 69:22] [debug variable = i]
  br i1 %exitcond1, label %.preheader.preheader, label %.preheader23.preheader, !dbg !116 ; [debug line = 69:6]

.preheader23.preheader:                           ; preds = %.loopexit
  br label %.preheader23, !dbg !122               ; [debug line = 70:7]

.preheader.preheader:                             ; preds = %.loopexit
  br label %.preheader, !dbg !124                 ; [debug line = 112:48@90:9]

.preheader23.loopexit:                            ; preds = %.preheader18.0
  br label %.preheader23

.preheader23:                                     ; preds = %.preheader23.loopexit, %.preheader23.preheader
  %l = phi i2 [ %l_1, %.preheader23.loopexit ], [ 0, %.preheader23.preheader ] ; [#uses=4 type=i2]
  %tmp_118 = trunc i2 %l to i1, !dbg !122         ; [#uses=1 type=i1] [debug line = 70:7]
  %exitcond2 = icmp eq i2 %l, -2, !dbg !122       ; [#uses=1 type=i1] [debug line = 70:7]
  %empty_8 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) ; [#uses=0 type=i32]
  %l_1 = add i2 1, %l, !dbg !127                  ; [#uses=1 type=i2] [debug line = 70:21]
  call void @llvm.dbg.value(metadata !{i2 %l_1}, i64 0, metadata !128), !dbg !127 ; [debug line = 70:21] [debug variable = l]
  br i1 %exitcond2, label %.loopexit.loopexit, label %.preheader22.preheader, !dbg !122 ; [debug line = 70:7]

.preheader22.preheader:                           ; preds = %.preheader23
  %tmp_3 = icmp eq i2 %l, 1, !dbg !129            ; [#uses=1 type=i1] [debug line = 83:7]
  br label %.preheader22, !dbg !135               ; [debug line = 71:9]

.preheader22.loopexit:                            ; preds = %.preheader21
  br label %.preheader22

.preheader22:                                     ; preds = %.preheader22.loopexit, %.preheader22.preheader
  %j = phi i4 [ 0, %.preheader22.preheader ], [ %j_1, %.preheader22.loopexit ] ; [#uses=3 type=i4]
  %exitcond3 = icmp eq i4 %j, -2, !dbg !135       ; [#uses=1 type=i1] [debug line = 71:9]
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 14, i64 14, i64 14) ; [#uses=0 type=i32]
  %j_1 = add i4 %j, 1, !dbg !136                  ; [#uses=1 type=i4] [debug line = 71:25]
  call void @llvm.dbg.value(metadata !{i4 %j_1}, i64 0, metadata !137), !dbg !136 ; [debug line = 71:25] [debug variable = j]
  br i1 %exitcond3, label %.preheader18.0.preheader, label %.preheader21.preheader, !dbg !135 ; [debug line = 71:9]

.preheader18.0.preheader:                         ; preds = %.preheader22
  br label %.preheader18.0, !dbg !138             ; [debug line = 87:23]

.preheader21.preheader:                           ; preds = %.preheader22
  %tmp_s = call i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4 %j, i3 0), !dbg !141 ; [#uses=1 type=i7] [debug line = 77:8]
  br label %.preheader21, !dbg !142               ; [debug line = 72:9]

.preheader21.loopexit:                            ; preds = %.preheader20
  br label %.preheader21

.preheader21:                                     ; preds = %.preheader21.loopexit, %.preheader21.preheader
  %m = phi i2 [ 0, %.preheader21.preheader ], [ %m_1, %.preheader21.loopexit ] ; [#uses=4 type=i2]
  %tmp_119 = trunc i2 %m to i1, !dbg !142         ; [#uses=1 type=i1] [debug line = 72:9]
  %exitcond5 = icmp eq i2 %m, -2, !dbg !142       ; [#uses=1 type=i1] [debug line = 72:9]
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) ; [#uses=0 type=i32]
  %m_1 = add i2 1, %m, !dbg !143                  ; [#uses=1 type=i2] [debug line = 72:23]
  call void @llvm.dbg.value(metadata !{i2 %m_1}, i64 0, metadata !144), !dbg !143 ; [debug line = 72:23] [debug variable = m]
  br i1 %exitcond5, label %.preheader22.loopexit, label %.preheader20.preheader, !dbg !142 ; [debug line = 72:9]

.preheader20.preheader:                           ; preds = %.preheader21
  %tmp_7 = or i1 %tmp_119, %tmp_118, !dbg !145    ; [#uses=1 type=i1] [debug line = 76:7]
  %tmp_9 = icmp eq i2 %m, 1, !dbg !129            ; [#uses=1 type=i1] [debug line = 83:7]
  %or_cond = and i1 %tmp_3, %tmp_9, !dbg !129     ; [#uses=1 type=i1] [debug line = 83:7]
  br label %.preheader20, !dbg !146               ; [debug line = 73:10]

.preheader20:                                     ; preds = %._crit_edge24, %.preheader20.preheader
  %k = phi i4 [ %k_1, %._crit_edge24 ], [ 0, %.preheader20.preheader ] ; [#uses=3 type=i4]
  %exitcond6 = icmp eq i4 %k, -8, !dbg !146       ; [#uses=1 type=i1] [debug line = 73:10]
  %empty_11 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %k_1 = add i4 %k, 1, !dbg !147                  ; [#uses=1 type=i4] [debug line = 73:25]
  br i1 %exitcond6, label %.preheader21.loopexit, label %_ifconv, !dbg !146 ; [debug line = 73:10]

_ifconv:                                          ; preds = %.preheader20
  %tmp_1_load = load float* %tmp_1                ; [#uses=1 type=float]
  %tmp_2_load = load float* %tmp_2                ; [#uses=1 type=float]
  %tmp_5_load = load float* %tmp_5                ; [#uses=1 type=float]
  %tmp_13_load = load float* %tmp_13              ; [#uses=1 type=float]
  %tmp_117_load = load float* %tmp_117            ; [#uses=1 type=float]
  %tmp_116_load = load float* %tmp_116            ; [#uses=1 type=float]
  %tmp_115_load = load float* %tmp_115            ; [#uses=1 type=float]
  %tmp_114_load = load float* %tmp_114            ; [#uses=1 type=float]
  %tmp_113_load = load float* %tmp_113            ; [#uses=1 type=float]
  %tmp_112_load = load float* %tmp_112            ; [#uses=1 type=float]
  %tmp_111_load = load float* %tmp_111            ; [#uses=1 type=float]
  %tmp_110_load = load float* %tmp_110            ; [#uses=1 type=float]
  %tmp_109_load = load float* %tmp_109            ; [#uses=1 type=float]
  %tmp_108_load = load float* %tmp_108            ; [#uses=1 type=float]
  %tmp_107_load = load float* %tmp_107            ; [#uses=1 type=float]
  %tmp_106_load = load float* %tmp_106            ; [#uses=1 type=float]
  %tmp_105_load = load float* %tmp_105            ; [#uses=1 type=float]
  %tmp_104_load = load float* %tmp_104            ; [#uses=1 type=float]
  %tmp_103_load = load float* %tmp_103            ; [#uses=1 type=float]
  %tmp_102_load = load float* %tmp_102            ; [#uses=1 type=float]
  %tmp_101_load = load float* %tmp_101            ; [#uses=1 type=float]
  %tmp_100_load = load float* %tmp_100            ; [#uses=1 type=float]
  %tmp_99_load = load float* %tmp_99              ; [#uses=1 type=float]
  %tmp_98_load = load float* %tmp_98              ; [#uses=1 type=float]
  %tmp_97_load = load float* %tmp_97              ; [#uses=1 type=float]
  %tmp_96_load = load float* %tmp_96              ; [#uses=1 type=float]
  %tmp_95_load = load float* %tmp_95              ; [#uses=1 type=float]
  %tmp_94_load = load float* %tmp_94              ; [#uses=1 type=float]
  %tmp_93_load = load float* %tmp_93              ; [#uses=1 type=float]
  %tmp_92_load = load float* %tmp_92              ; [#uses=1 type=float]
  %tmp_91_load = load float* %tmp_91              ; [#uses=1 type=float]
  %tmp_90_load = load float* %tmp_90              ; [#uses=1 type=float]
  %tmp_89_load = load float* %tmp_89              ; [#uses=1 type=float]
  %tmp_88_load = load float* %tmp_88              ; [#uses=1 type=float]
  %tmp_87_load = load float* %tmp_87              ; [#uses=1 type=float]
  %tmp_86_load = load float* %tmp_86              ; [#uses=1 type=float]
  %tmp_85_load = load float* %tmp_85              ; [#uses=1 type=float]
  %tmp_84_load = load float* %tmp_84              ; [#uses=1 type=float]
  %tmp_83_load = load float* %tmp_83              ; [#uses=1 type=float]
  %tmp_82_load = load float* %tmp_82              ; [#uses=1 type=float]
  %tmp_81_load = load float* %tmp_81              ; [#uses=1 type=float]
  %tmp_80_load = load float* %tmp_80              ; [#uses=1 type=float]
  %tmp_79_load = load float* %tmp_79              ; [#uses=1 type=float]
  %tmp_78_load = load float* %tmp_78              ; [#uses=1 type=float]
  %tmp_77_load = load float* %tmp_77              ; [#uses=1 type=float]
  %tmp_76_load = load float* %tmp_76              ; [#uses=1 type=float]
  %tmp_75_load = load float* %tmp_75              ; [#uses=1 type=float]
  %tmp_74_load = load float* %tmp_74              ; [#uses=1 type=float]
  %tmp_73_load = load float* %tmp_73              ; [#uses=1 type=float]
  %tmp_72_load = load float* %tmp_72              ; [#uses=1 type=float]
  %tmp_71_load = load float* %tmp_71              ; [#uses=1 type=float]
  %tmp_70_load = load float* %tmp_70              ; [#uses=1 type=float]
  %tmp_69_load = load float* %tmp_69              ; [#uses=1 type=float]
  %tmp_68_load = load float* %tmp_68              ; [#uses=1 type=float]
  %tmp_67_load = load float* %tmp_67              ; [#uses=1 type=float]
  %tmp_66_load = load float* %tmp_66              ; [#uses=1 type=float]
  %tmp_65_load = load float* %tmp_65              ; [#uses=1 type=float]
  %tmp_64_load = load float* %tmp_64              ; [#uses=1 type=float]
  %tmp_63_load = load float* %tmp_63              ; [#uses=1 type=float]
  %tmp_62_load = load float* %tmp_62              ; [#uses=1 type=float]
  %tmp_61_load = load float* %tmp_61              ; [#uses=1 type=float]
  %tmp_60_load = load float* %tmp_60              ; [#uses=1 type=float]
  %tmp_59_load = load float* %tmp_59              ; [#uses=1 type=float]
  %tmp_58_load = load float* %tmp_58              ; [#uses=1 type=float]
  %tmp_57_load = load float* %tmp_57              ; [#uses=1 type=float]
  %tmp_56_load = load float* %tmp_56              ; [#uses=1 type=float]
  %tmp_55_load = load float* %tmp_55              ; [#uses=1 type=float]
  %tmp_54_load = load float* %tmp_54              ; [#uses=1 type=float]
  %tmp_53_load = load float* %tmp_53              ; [#uses=1 type=float]
  %tmp_52_load = load float* %tmp_52              ; [#uses=1 type=float]
  %tmp_51_load = load float* %tmp_51              ; [#uses=1 type=float]
  %tmp_50_load = load float* %tmp_50              ; [#uses=1 type=float]
  %tmp_49_load = load float* %tmp_49              ; [#uses=1 type=float]
  %tmp_48_load = load float* %tmp_48              ; [#uses=1 type=float]
  %tmp_47_load = load float* %tmp_47              ; [#uses=1 type=float]
  %tmp_46_load = load float* %tmp_46              ; [#uses=1 type=float]
  %tmp_45_load = load float* %tmp_45              ; [#uses=1 type=float]
  %tmp_44_load = load float* %tmp_44              ; [#uses=1 type=float]
  %tmp_43_load = load float* %tmp_43              ; [#uses=1 type=float]
  %tmp_42_load = load float* %tmp_42              ; [#uses=1 type=float]
  %tmp_41_load = load float* %tmp_41              ; [#uses=1 type=float]
  %tmp_40_load = load float* %tmp_40              ; [#uses=1 type=float]
  %tmp_39_load = load float* %tmp_39              ; [#uses=1 type=float]
  %tmp_38_load = load float* %tmp_38              ; [#uses=1 type=float]
  %tmp_37_load = load float* %tmp_37              ; [#uses=1 type=float]
  %tmp_36_load = load float* %tmp_36              ; [#uses=1 type=float]
  %tmp_35_load = load float* %tmp_35              ; [#uses=1 type=float]
  %tmp_34_load = load float* %tmp_34              ; [#uses=1 type=float]
  %tmp_33_load = load float* %tmp_33              ; [#uses=1 type=float]
  %tmp_32_load = load float* %tmp_32              ; [#uses=1 type=float]
  %tmp_31_load = load float* %tmp_31              ; [#uses=1 type=float]
  %tmp_30_load = load float* %tmp_30              ; [#uses=1 type=float]
  %tmp_29_load = load float* %tmp_29              ; [#uses=1 type=float]
  %tmp_28_load = load float* %tmp_28              ; [#uses=1 type=float]
  %tmp_27_load = load float* %tmp_27              ; [#uses=1 type=float]
  %tmp_26_load = load float* %tmp_26              ; [#uses=1 type=float]
  %tmp_25_load = load float* %tmp_25              ; [#uses=1 type=float]
  %tmp_24_load = load float* %tmp_24              ; [#uses=1 type=float]
  %tmp_23_load = load float* %tmp_23              ; [#uses=1 type=float]
  %tmp_22_load = load float* %tmp_22              ; [#uses=1 type=float]
  %tmp_21_load = load float* %tmp_21              ; [#uses=1 type=float]
  %tmp_20_load = load float* %tmp_20              ; [#uses=1 type=float]
  %tmp_19_load = load float* %tmp_19              ; [#uses=1 type=float]
  %tmp_18_load = load float* %tmp_18              ; [#uses=1 type=float]
  %tmp_17_load = load float* %tmp_17              ; [#uses=1 type=float]
  %tmp_16_load = load float* %tmp_16              ; [#uses=1 type=float]
  %tmp_15_load = load float* %tmp_15              ; [#uses=1 type=float]
  %tmp_14_load = load float* %tmp_14              ; [#uses=1 type=float]
  %tmp_12_load = load float* %tmp_12              ; [#uses=1 type=float]
  %tmp_11_load = load float* %tmp_11              ; [#uses=1 type=float]
  %tmp_4_load = load float* %tmp_4                ; [#uses=1 type=float]
  %tmp_8_load = load float* %tmp_8                ; [#uses=1 type=float]
  call void @llvm.dbg.value(metadata !{float* %in_V}, i64 0, metadata !148), !dbg !153 ; [debug line = 101:48@75:7] [debug variable = stream<float>.V]
  call void @llvm.dbg.value(metadata !{float* %in_V}, i64 0, metadata !155), !dbg !158 ; [debug line = 123:48@102:9@75:7] [debug variable = stream<float>.V]
  %tmp_130 = call float @_ssdm_op_Read.ap_fifo.volatile.floatP(float* %in_V), !dbg !161 ; [#uses=3 type=float] [debug line = 125:9@102:9@75:7]
  call void @llvm.dbg.value(metadata !{float %tmp_130}, i64 0, metadata !163), !dbg !161 ; [debug line = 125:9@102:9@75:7] [debug variable = tmp]
  call void @llvm.dbg.value(metadata !{float %tmp_130}, i64 0, metadata !164), !dbg !165 ; [debug line = 126:9@102:9@75:7] [debug variable = read]
  %tmp_6 = zext i4 %k to i7                       ; [#uses=1 type=i7]
  %tmp_t = add i7 %tmp_s, %tmp_6                  ; [#uses=2 type=i7]
  %tmp_120 = call float @_ssdm_op_Mux.ap_auto.112float.i7(float %tmp_1_load, float %tmp_2_load, float %tmp_5_load, float %tmp_13_load, float %tmp_117_load, float %tmp_116_load, float %tmp_115_load, float %tmp_114_load, float %tmp_113_load, float %tmp_112_load, float %tmp_111_load, float %tmp_110_load, float %tmp_109_load, float %tmp_108_load, float %tmp_107_load, float %tmp_106_load, float %tmp_105_load, float %tmp_104_load, float %tmp_103_load, float %tmp_102_load, float %tmp_101_load, float %tmp_100_load, float %tmp_99_load, float %tmp_98_load, float %tmp_97_load, float %tmp_96_load, float %tmp_95_load, float %tmp_94_load, float %tmp_93_load, float %tmp_92_load, float %tmp_91_load, float %tmp_90_load, float %tmp_89_load, float %tmp_88_load, float %tmp_87_load, float %tmp_86_load, float %tmp_85_load, float %tmp_84_load, float %tmp_83_load, float %tmp_82_load, float %tmp_81_load, float %tmp_80_load, float %tmp_79_load, float %tmp_78_load, float %tmp_77_load, float %tmp_76_load, float %tmp_75_load, float %tmp_74_load, float %tmp_73_load, float %tmp_72_load, float %tmp_71_load, float %tmp_70_load, float %tmp_69_load, float %tmp_68_load, float %tmp_67_load, float %tmp_66_load, float %tmp_65_load, float %tmp_64_load, float %tmp_63_load, float %tmp_62_load, float %tmp_61_load, float %tmp_60_load, float %tmp_59_load, float %tmp_58_load, float %tmp_57_load, float %tmp_56_load, float %tmp_55_load, float %tmp_54_load, float %tmp_53_load, float %tmp_52_load, float %tmp_51_load, float %tmp_50_load, float %tmp_49_load, float %tmp_48_load, float %tmp_47_load, float %tmp_46_load, float %tmp_45_load, float %tmp_44_load, float %tmp_43_load, float %tmp_42_load, float %tmp_41_load, float %tmp_40_load, float %tmp_39_load, float %tmp_38_load, float %tmp_37_load, float %tmp_36_load, float %tmp_35_load, float %tmp_34_load, float %tmp_33_load, float %tmp_32_load, float %tmp_31_load, float %tmp_30_load, float %tmp_29_load, float %tmp_28_load, float %tmp_27_load, float %tmp_26_load, float %tmp_25_load, float %tmp_24_load, float %tmp_23_load, float %tmp_22_load, float %tmp_21_load, float %tmp_20_load, float %tmp_19_load, float %tmp_18_load, float %tmp_17_load, float %tmp_16_load, float %tmp_15_load, float %tmp_14_load, float %tmp_12_load, float %tmp_11_load, float %tmp_4_load, float %tmp_8_load, i7 %tmp_t) ; [#uses=3 type=float]
  %p_to_int = bitcast float %tmp_120 to i32       ; [#uses=2 type=i32]
  %tmp_121 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %p_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_122 = trunc i32 %p_to_int to i23           ; [#uses=1 type=i23]
  %read_to_int = bitcast float %tmp_130 to i32    ; [#uses=2 type=i32]
  %tmp_123 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %read_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_124 = trunc i32 %read_to_int to i23        ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp_121, -1               ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp_122, 0               ; [#uses=1 type=i1]
  %tmp_125 = or i1 %notrhs, %notlhs               ; [#uses=1 type=i1]
  %notlhs8 = icmp ne i8 %tmp_123, -1              ; [#uses=1 type=i1]
  %notrhs9 = icmp eq i23 %tmp_124, 0              ; [#uses=1 type=i1]
  %tmp_126 = or i1 %notrhs9, %notlhs8             ; [#uses=1 type=i1]
  %tmp_127 = and i1 %tmp_125, %tmp_126            ; [#uses=1 type=i1]
  %tmp_128 = fcmp ogt float %tmp_120, %tmp_130, !dbg !166 ; [#uses=1 type=i1] [debug line = 80:8]
  %tmp_129 = and i1 %tmp_127, %tmp_128, !dbg !166 ; [#uses=1 type=i1] [debug line = 80:8]
  %sel_tmp2 = and i1 %tmp_7, %tmp_129             ; [#uses=1 type=i1]
  %tmp_10 = select i1 %sel_tmp2, float %tmp_120, float %tmp_130, !dbg !167 ; [#uses=113 type=float] [debug line = 145:31@106:9@84:8]
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
  ], !dbg !141                                    ; [debug line = 77:8]

._crit_edge116.pre:                               ; preds = %_ifconv
  store float %tmp_10, float* %tmp_1, !dbg !167   ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116

._crit_edge116:                                   ; preds = %branch111, %branch110, %branch109, %branch108, %branch107, %branch106, %branch105, %branch104, %branch103, %branch102, %branch101, %branch100, %branch99, %branch98, %branch97, %branch96, %branch95, %branch94, %branch93, %branch92, %branch91, %branch90, %branch89, %branch88, %branch87, %branch86, %branch85, %branch84, %branch83, %branch82, %branch81, %branch80, %branch79, %branch78, %branch77, %branch76, %branch75, %branch74, %branch73, %branch72, %branch71, %branch70, %branch69, %branch68, %branch67, %branch66, %branch65, %branch64, %branch63, %branch62, %branch61, %branch60, %branch59, %branch58, %branch57, %branch56, %branch55, %branch54, %branch53, %branch52, %branch51, %branch50, %branch49, %branch48, %branch47, %branch46, %branch45, %branch44, %branch43, %branch42, %branch41, %branch40, %branch39, %branch38, %branch37, %branch36, %branch35, %branch34, %branch33, %branch32, %branch31, %branch30, %branch29, %branch28, %branch27, %branch26, %branch25, %branch24, %branch23, %branch22, %branch21, %branch20, %branch19, %branch18, %branch17, %branch16, %branch15, %branch14, %branch13, %branch12, %branch11, %branch10, %branch9, %branch8, %branch7, %branch6, %branch5, %branch4, %branch3, %branch2, %branch1, %._crit_edge116.pre
  br i1 %or_cond, label %1, label %._crit_edge24, !dbg !129 ; [debug line = 83:7]

; <label>:1                                       ; preds = %._crit_edge116
  call void @llvm.dbg.value(metadata !{float* %out_V}, i64 0, metadata !172), !dbg !174 ; [debug line = 105:48@84:8] [debug variable = stream<float>.V]
  call void @llvm.dbg.value(metadata !{float* %out_V}, i64 0, metadata !175), !dbg !177 ; [debug line = 144:48@106:9@84:8] [debug variable = stream<float>.V]
  call void @llvm.dbg.value(metadata !{float %tmp_10}, i64 0, metadata !33), !dbg !167 ; [debug line = 145:31@106:9@84:8] [debug variable = tmp]
  call void @_ssdm_op_Write.ap_fifo.volatile.floatP(float* %out_V, float %tmp_10), !dbg !178 ; [debug line = 146:9@106:9@84:8]
  br label %._crit_edge24, !dbg !171              ; [debug line = 84:8]

._crit_edge24:                                    ; preds = %1, %._crit_edge116
  call void @llvm.dbg.value(metadata !{i4 %k_1}, i64 0, metadata !179), !dbg !147 ; [debug line = 73:25] [debug variable = k]
  br label %.preheader20, !dbg !147               ; [debug line = 73:25]

.preheader18.0:                                   ; preds = %2, %.preheader18.0.preheader
  %channel = phi i4 [ %channel_1, %2 ], [ 0, %.preheader18.0.preheader ] ; [#uses=2 type=i4]
  %exitcond = icmp eq i4 %channel, -8, !dbg !138  ; [#uses=1 type=i1] [debug line = 87:23]
  %empty_12 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) ; [#uses=0 type=i32]
  %channel_1 = add i4 %channel, 1, !dbg !180      ; [#uses=1 type=i4] [debug line = 87:38]
  br i1 %exitcond, label %.preheader23.loopexit, label %2, !dbg !138 ; [debug line = 87:23]

; <label>:2                                       ; preds = %.preheader18.0
  call void @llvm.dbg.value(metadata !{float* %in_V}, i64 0, metadata !148), !dbg !181 ; [debug line = 101:48@88:6] [debug variable = stream<float>.V]
  call void @llvm.dbg.value(metadata !{float* %in_V}, i64 0, metadata !155), !dbg !183 ; [debug line = 123:48@102:9@88:6] [debug variable = stream<float>.V]
  %tmp_2_0 = call float @_ssdm_op_Read.ap_fifo.volatile.floatP(float* %in_V), !dbg !185 ; [#uses=0 type=float] [debug line = 125:9@102:9@88:6]
  call void @llvm.dbg.value(metadata !{float %tmp_2_0}, i64 0, metadata !163), !dbg !185 ; [debug line = 125:9@102:9@88:6] [debug variable = tmp]
  br label %.preheader18.0, !dbg !180             ; [debug line = 87:38]

.preheader:                                       ; preds = %3, %.preheader.preheader
  call void @llvm.dbg.value(metadata !{float* %in_V}, i64 0, metadata !186), !dbg !124 ; [debug line = 112:48@90:9] [debug variable = stream<float>.V]
  %tmp = call i1 @_ssdm_op_NbReadReq.ap_fifo.floatP(float* %in_V, i32 1), !dbg !189 ; [#uses=1 type=i1] [debug line = 113:20@90:9]
  call void @llvm.dbg.value(metadata !{i1 %tmp}, i64 0, metadata !191), !dbg !189 ; [debug line = 113:20@90:9] [debug variable = tmp]
  br i1 %tmp, label %3, label %4, !dbg !126       ; [debug line = 90:9]

; <label>:3                                       ; preds = %.preheader
  call void @llvm.dbg.value(metadata !{float* %in_V}, i64 0, metadata !148), !dbg !192 ; [debug line = 101:48@91:3] [debug variable = stream<float>.V]
  call void @llvm.dbg.value(metadata !{float* %in_V}, i64 0, metadata !155), !dbg !194 ; [debug line = 123:48@102:9@91:3] [debug variable = stream<float>.V]
  %tmp_1_0 = call float @_ssdm_op_Read.ap_fifo.volatile.floatP(float* %in_V), !dbg !196 ; [#uses=0 type=float] [debug line = 125:9@102:9@91:3]
  call void @llvm.dbg.value(metadata !{float %tmp_1_0}, i64 0, metadata !163), !dbg !196 ; [debug line = 125:9@102:9@91:3] [debug variable = tmp]
  br label %.preheader, !dbg !193                 ; [debug line = 91:3]

; <label>:4                                       ; preds = %.preheader
  ret void, !dbg !197                             ; [debug line = 93:1]

branch1:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_2, !dbg !167   ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch2:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_5, !dbg !167   ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch3:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_13, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch4:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_117, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch5:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_116, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch6:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_115, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch7:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_114, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch8:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_113, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch9:                                          ; preds = %_ifconv
  store float %tmp_10, float* %tmp_112, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch10:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_111, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch11:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_110, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch12:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_109, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch13:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_108, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch14:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_107, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch15:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_106, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch16:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_105, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch17:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_104, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch18:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_103, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch19:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_102, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch20:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_101, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch21:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_100, !dbg !167 ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch22:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_99, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch23:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_98, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch24:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_97, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch25:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_96, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch26:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_95, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch27:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_94, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch28:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_93, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch29:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_92, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch30:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_91, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch31:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_90, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch32:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_89, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch33:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_88, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch34:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_87, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch35:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_86, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch36:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_85, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch37:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_84, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch38:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_83, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch39:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_82, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch40:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_81, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch41:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_80, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch42:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_79, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch43:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_78, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch44:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_77, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch45:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_76, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch46:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_75, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch47:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_74, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch48:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_73, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch49:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_72, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch50:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_71, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch51:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_70, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch52:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_69, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch53:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_68, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch54:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_67, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch55:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_66, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch56:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_65, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch57:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_64, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch58:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_63, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch59:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_62, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch60:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_61, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch61:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_60, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch62:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_59, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch63:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_58, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch64:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_57, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch65:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_56, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch66:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_55, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch67:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_54, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch68:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_53, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch69:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_52, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch70:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_51, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch71:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_50, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch72:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_49, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch73:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_48, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch74:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_47, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch75:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_46, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch76:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_45, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch77:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_44, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch78:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_43, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch79:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_42, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch80:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_41, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch81:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_40, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch82:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_39, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch83:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_38, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch84:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_37, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch85:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_36, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch86:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_35, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch87:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_34, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch88:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_33, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch89:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_32, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch90:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_31, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch91:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_30, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch92:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_29, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch93:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_28, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch94:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_27, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch95:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_26, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch96:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_25, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch97:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_24, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch98:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_23, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch99:                                         ; preds = %_ifconv
  store float %tmp_10, float* %tmp_22, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch100:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_21, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch101:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_20, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch102:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_19, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch103:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_18, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch104:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_17, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch105:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_16, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch106:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_15, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch107:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_14, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch108:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_12, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch109:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_11, !dbg !167  ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch110:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_4, !dbg !167   ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]

branch111:                                        ; preds = %_ifconv
  store float %tmp_10, float* %tmp_8, !dbg !167   ; [debug line = 145:31@106:9@84:8]
  br label %._crit_edge116, !dbg !141             ; [debug line = 77:8]
}

; [#uses=1]
declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

; [#uses=22]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=112]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=1]
define weak void @_ssdm_op_Write.ap_fifo.volatile.floatP(float*, float) {
entry:
  %empty = call float @_autotb_FifoWrite_float(float* %0, float %1) ; [#uses=0 type=float]
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=6]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=2]
define weak i32 @_ssdm_op_SpecInterface(...) {
entry:
  ret i32 0
}

; [#uses=2]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=3]
define weak float @_ssdm_op_Read.ap_fifo.volatile.floatP(float*) {
entry:
  %empty = call float @_autotb_FifoRead_float(float* %0) ; [#uses=1 type=float]
  ret float %empty
}

; [#uses=2]
define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_13 = trunc i32 %empty to i8              ; [#uses=1 type=i8]
  ret i8 %empty_13
}

; [#uses=0]
declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i1 @_ssdm_op_PartSelect.i1.i2.i32.i32(i2, i32, i32) nounwind readnone

; [#uses=1]
define weak i1 @_ssdm_op_NbReadReq.ap_fifo.floatP(float*, i32) {
entry:
  %empty = call i1 @_autotb_FifoCanRead_float(float* %0) ; [#uses=1 type=i1]
  ret i1 %empty
}

; [#uses=1]
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
  %merge = phi float [ %0, %entry ], [ %1, %case1 ], [ %2, %case2 ], [ %3, %case3 ], [ %4, %case4 ], [ %5, %case5 ], [ %6, %case6 ], [ %7, %case7 ], [ %8, %case8 ], [ %9, %case9 ], [ %10, %case10 ], [ %11, %case11 ], [ %12, %case12 ], [ %13, %case13 ], [ %14, %case14 ], [ %15, %case15 ], [ %16, %case16 ], [ %17, %case17 ], [ %18, %case18 ], [ %19, %case19 ], [ %20, %case20 ], [ %21, %case21 ], [ %22, %case22 ], [ %23, %case23 ], [ %24, %case24 ], [ %25, %case25 ], [ %26, %case26 ], [ %27, %case27 ], [ %28, %case28 ], [ %29, %case29 ], [ %30, %case30 ], [ %31, %case31 ], [ %32, %case32 ], [ %33, %case33 ], [ %34, %case34 ], [ %35, %case35 ], [ %36, %case36 ], [ %37, %case37 ], [ %38, %case38 ], [ %39, %case39 ], [ %40, %case40 ], [ %41, %case41 ], [ %42, %case42 ], [ %43, %case43 ], [ %44, %case44 ], [ %45, %case45 ], [ %46, %case46 ], [ %47, %case47 ], [ %48, %case48 ], [ %49, %case49 ], [ %50, %case50 ], [ %51, %case51 ], [ %52, %case52 ], [ %53, %case53 ], [ %54, %case54 ], [ %55, %case55 ], [ %56, %case56 ], [ %57, %case57 ], [ %58, %case58 ], [ %59, %case59 ], [ %60, %case60 ], [ %61, %case61 ], [ %62, %case62 ], [ %63, %case63 ], [ %64, %case64 ], [ %65, %case65 ], [ %66, %case66 ], [ %67, %case67 ], [ %68, %case68 ], [ %69, %case69 ], [ %70, %case70 ], [ %71, %case71 ], [ %72, %case72 ], [ %73, %case73 ], [ %74, %case74 ], [ %75, %case75 ], [ %76, %case76 ], [ %77, %case77 ], [ %78, %case78 ], [ %79, %case79 ], [ %80, %case80 ], [ %81, %case81 ], [ %82, %case82 ], [ %83, %case83 ], [ %84, %case84 ], [ %85, %case85 ], [ %86, %case86 ], [ %87, %case87 ], [ %88, %case88 ], [ %89, %case89 ], [ %90, %case90 ], [ %91, %case91 ], [ %92, %case92 ], [ %93, %case93 ], [ %94, %case94 ], [ %95, %case95 ], [ %96, %case96 ], [ %97, %case97 ], [ %98, %case98 ], [ %99, %case99 ], [ %100, %case100 ], [ %101, %case101 ], [ %102, %case102 ], [ %103, %case103 ], [ %104, %case104 ], [ %105, %case105 ], [ %106, %case106 ], [ %107, %case107 ], [ %108, %case108 ], [ %109, %case109 ], [ %110, %case110 ], [ %111, %case111 ] ; [#uses=1 type=float]
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

; [#uses=1]
define weak i7 @_ssdm_op_BitConcatenate.i7.i4.i3(i4, i3) nounwind readnone {
entry:
  %empty = zext i4 %0 to i7                       ; [#uses=1 type=i7]
  %empty_14 = zext i3 %1 to i7                    ; [#uses=1 type=i7]
  %empty_15 = shl i7 %empty, 3                    ; [#uses=1 type=i7]
  %empty_16 = or i7 %empty_15, %empty_14          ; [#uses=1 type=i7]
  ret i7 %empty_16
}

; [#uses=0]
declare void @_ssdm_SpecDependence(...) nounwind

; [#uses=1]
declare float @_autotb_FifoWrite_float(float*, float)

; [#uses=1]
declare float @_autotb_FifoRead_float(float*)

; [#uses=1]
declare i1 @_autotb_FifoCanRead_float(float*)

; [#uses=1]
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
!33 = metadata !{i32 786688, metadata !34, metadata !"tmp", metadata !37, i32 145, metadata !44, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!34 = metadata !{i32 786443, metadata !35, i32 144, i32 79, metadata !37, i32 12} ; [ DW_TAG_lexical_block ]
!35 = metadata !{i32 786478, i32 0, metadata !36, metadata !"write", metadata !"write", metadata !"_ZN3hls6streamIfE5writeERKf", metadata !37, i32 144, metadata !38, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !83, metadata !48, i32 144} ; [ DW_TAG_subprogram ]
!36 = metadata !{i32 786489, null, metadata !"hls", metadata !37, i32 69} ; [ DW_TAG_namespace ]
!37 = metadata !{i32 786473, metadata !"/opt/Xilinx/Vivado/2017.4/common/technology/autopilot/hls_stream.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!38 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !39, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!39 = metadata !{null, metadata !40, metadata !87}
!40 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !41} ; [ DW_TAG_pointer_type ]
!41 = metadata !{i32 786434, metadata !36, metadata !"stream<float>", metadata !37, i32 79, i64 32, i64 32, i32 0, i32 0, null, metadata !42, i32 0, null, metadata !93} ; [ DW_TAG_class_type ]
!42 = metadata !{metadata !43, metadata !45, metadata !50, metadata !56, metadata !61, metadata !65, metadata !69, metadata !70, metadata !75, metadata !76, metadata !77, metadata !80, metadata !83, metadata !84, metadata !89}
!43 = metadata !{i32 786445, metadata !41, metadata !"V", metadata !37, i32 163, i64 32, i64 32, i64 0, i32 0, metadata !44} ; [ DW_TAG_member ]
!44 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!45 = metadata !{i32 786478, i32 0, metadata !41, metadata !"stream", metadata !"stream", metadata !"", metadata !37, i32 83, metadata !46, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 83} ; [ DW_TAG_subprogram ]
!46 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !47, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!47 = metadata !{null, metadata !40}
!48 = metadata !{metadata !49}
!49 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!50 = metadata !{i32 786478, i32 0, metadata !41, metadata !"stream", metadata !"stream", metadata !"", metadata !37, i32 86, metadata !51, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 86} ; [ DW_TAG_subprogram ]
!51 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !52, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!52 = metadata !{null, metadata !40, metadata !53}
!53 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !54} ; [ DW_TAG_pointer_type ]
!54 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !55} ; [ DW_TAG_const_type ]
!55 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!56 = metadata !{i32 786478, i32 0, metadata !41, metadata !"stream", metadata !"stream", metadata !"", metadata !37, i32 91, metadata !57, i1 false, i1 false, i32 0, i32 0, null, i32 257, i1 false, null, null, i32 0, metadata !48, i32 91} ; [ DW_TAG_subprogram ]
!57 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !58, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!58 = metadata !{null, metadata !40, metadata !59}
!59 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !60} ; [ DW_TAG_reference_type ]
!60 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !41} ; [ DW_TAG_const_type ]
!61 = metadata !{i32 786478, i32 0, metadata !41, metadata !"operator=", metadata !"operator=", metadata !"_ZN3hls6streamIfEaSERKS1_", metadata !37, i32 94, metadata !62, i1 false, i1 false, i32 0, i32 0, null, i32 257, i1 false, null, null, i32 0, metadata !48, i32 94} ; [ DW_TAG_subprogram ]
!62 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !63, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!63 = metadata !{metadata !64, metadata !40, metadata !59}
!64 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !41} ; [ DW_TAG_reference_type ]
!65 = metadata !{i32 786478, i32 0, metadata !41, metadata !"operator>>", metadata !"operator>>", metadata !"_ZN3hls6streamIfErsERf", metadata !37, i32 101, metadata !66, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 101} ; [ DW_TAG_subprogram ]
!66 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !67, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!67 = metadata !{null, metadata !40, metadata !68}
!68 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !44} ; [ DW_TAG_reference_type ]
!69 = metadata !{i32 786478, i32 0, metadata !41, metadata !"operator<<", metadata !"operator<<", metadata !"_ZN3hls6streamIfElsERKf", metadata !37, i32 105, metadata !38, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 105} ; [ DW_TAG_subprogram ]
!70 = metadata !{i32 786478, i32 0, metadata !41, metadata !"empty", metadata !"empty", metadata !"_ZNK3hls6streamIfE5emptyEv", metadata !37, i32 112, metadata !71, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 112} ; [ DW_TAG_subprogram ]
!71 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !72, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!72 = metadata !{metadata !73, metadata !74}
!73 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!74 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !60} ; [ DW_TAG_pointer_type ]
!75 = metadata !{i32 786478, i32 0, metadata !41, metadata !"full", metadata !"full", metadata !"_ZNK3hls6streamIfE4fullEv", metadata !37, i32 117, metadata !71, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 117} ; [ DW_TAG_subprogram ]
!76 = metadata !{i32 786478, i32 0, metadata !41, metadata !"read", metadata !"read", metadata !"_ZN3hls6streamIfE4readERf", metadata !37, i32 123, metadata !66, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 123} ; [ DW_TAG_subprogram ]
!77 = metadata !{i32 786478, i32 0, metadata !41, metadata !"read", metadata !"read", metadata !"_ZN3hls6streamIfE4readEv", metadata !37, i32 129, metadata !78, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 129} ; [ DW_TAG_subprogram ]
!78 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !79, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!79 = metadata !{metadata !44, metadata !40}
!80 = metadata !{i32 786478, i32 0, metadata !41, metadata !"read_nb", metadata !"read_nb", metadata !"_ZN3hls6streamIfE7read_nbERf", metadata !37, i32 136, metadata !81, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 136} ; [ DW_TAG_subprogram ]
!81 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !82, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!82 = metadata !{metadata !73, metadata !40, metadata !68}
!83 = metadata !{i32 786478, i32 0, metadata !41, metadata !"write", metadata !"write", metadata !"_ZN3hls6streamIfE5writeERKf", metadata !37, i32 144, metadata !38, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 144} ; [ DW_TAG_subprogram ]
!84 = metadata !{i32 786478, i32 0, metadata !41, metadata !"write_nb", metadata !"write_nb", metadata !"_ZN3hls6streamIfE8write_nbERKf", metadata !37, i32 150, metadata !85, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 150} ; [ DW_TAG_subprogram ]
!85 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !86, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!86 = metadata !{metadata !73, metadata !40, metadata !87}
!87 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !88} ; [ DW_TAG_reference_type ]
!88 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !44} ; [ DW_TAG_const_type ]
!89 = metadata !{i32 786478, i32 0, metadata !41, metadata !"size", metadata !"size", metadata !"_ZN3hls6streamIfE4sizeEv", metadata !37, i32 157, metadata !90, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !48, i32 157} ; [ DW_TAG_subprogram ]
!90 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !91, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!91 = metadata !{metadata !92, metadata !40}
!92 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!93 = metadata !{metadata !94}
!94 = metadata !{i32 786479, null, metadata !"__STREAM_T__", metadata !44, null, i32 0, i32 0} ; [ DW_TAG_template_type_parameter ]
!95 = metadata !{metadata !96}
!96 = metadata !{i32 0, i32 31, metadata !97}
!97 = metadata !{metadata !98}
!98 = metadata !{metadata !"out.V", metadata !31, metadata !"float", i32 0, i32 31}
!99 = metadata !{metadata !100}
!100 = metadata !{i32 0, i32 31, metadata !101}
!101 = metadata !{metadata !102}
!102 = metadata !{metadata !"in.V", metadata !31, metadata !"float", i32 0, i32 31}
!103 = metadata !{i32 790531, metadata !104, metadata !"out.V", null, i32 62, metadata !109, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!104 = metadata !{i32 786689, metadata !105, metadata !"out", metadata !106, i32 16777278, metadata !64, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!105 = metadata !{i32 786478, i32 0, metadata !106, metadata !"pool", metadata !"pool", metadata !"_Z4poolRN3hls6streamIfEES2_", metadata !106, i32 62, metadata !107, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !48, i32 63} ; [ DW_TAG_subprogram ]
!106 = metadata !{i32 786473, metadata !"pool/solution1/pool.cpp", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!107 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !108, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!108 = metadata !{null, metadata !64, metadata !64}
!109 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !110} ; [ DW_TAG_pointer_type ]
!110 = metadata !{i32 786438, metadata !36, metadata !"stream<float>", metadata !37, i32 79, i64 32, i64 32, i32 0, i32 0, null, metadata !111, i32 0, null, metadata !93} ; [ DW_TAG_class_field_type ]
!111 = metadata !{metadata !43}
!112 = metadata !{i32 62, i32 31, metadata !105, null}
!113 = metadata !{i32 790531, metadata !114, metadata !"in.V", null, i32 62, metadata !109, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!114 = metadata !{i32 786689, metadata !105, metadata !"in", metadata !106, i32 33554494, metadata !64, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!115 = metadata !{i32 62, i32 56, metadata !105, null}
!116 = metadata !{i32 69, i32 6, metadata !117, null}
!117 = metadata !{i32 786443, metadata !118, i32 69, i32 2, metadata !106, i32 1} ; [ DW_TAG_lexical_block ]
!118 = metadata !{i32 786443, metadata !105, i32 63, i32 1, metadata !106, i32 0} ; [ DW_TAG_lexical_block ]
!119 = metadata !{i32 69, i32 22, metadata !117, null}
!120 = metadata !{i32 786688, metadata !118, metadata !"i", metadata !106, i32 65, metadata !121, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!121 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!122 = metadata !{i32 70, i32 7, metadata !123, null}
!123 = metadata !{i32 786443, metadata !117, i32 70, i32 3, metadata !106, i32 2} ; [ DW_TAG_lexical_block ]
!124 = metadata !{i32 112, i32 48, metadata !125, metadata !126}
!125 = metadata !{i32 786478, i32 0, metadata !36, metadata !"empty", metadata !"empty", metadata !"_ZNK3hls6streamIfE5emptyEv", metadata !37, i32 112, metadata !71, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !70, metadata !48, i32 112} ; [ DW_TAG_subprogram ]
!126 = metadata !{i32 90, i32 9, metadata !118, null}
!127 = metadata !{i32 70, i32 21, metadata !123, null}
!128 = metadata !{i32 786688, metadata !118, metadata !"l", metadata !106, i32 65, metadata !121, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!129 = metadata !{i32 83, i32 7, metadata !130, null}
!130 = metadata !{i32 786443, metadata !131, i32 74, i32 6, metadata !106, i32 7} ; [ DW_TAG_lexical_block ]
!131 = metadata !{i32 786443, metadata !132, i32 73, i32 6, metadata !106, i32 6} ; [ DW_TAG_lexical_block ]
!132 = metadata !{i32 786443, metadata !133, i32 72, i32 5, metadata !106, i32 5} ; [ DW_TAG_lexical_block ]
!133 = metadata !{i32 786443, metadata !134, i32 71, i32 5, metadata !106, i32 4} ; [ DW_TAG_lexical_block ]
!134 = metadata !{i32 786443, metadata !123, i32 71, i32 3, metadata !106, i32 3} ; [ DW_TAG_lexical_block ]
!135 = metadata !{i32 71, i32 9, metadata !133, null}
!136 = metadata !{i32 71, i32 25, metadata !133, null}
!137 = metadata !{i32 786688, metadata !118, metadata !"j", metadata !106, i32 65, metadata !121, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!138 = metadata !{i32 87, i32 23, metadata !139, null}
!139 = metadata !{i32 786443, metadata !140, i32 87, i32 4, metadata !106, i32 9} ; [ DW_TAG_lexical_block ]
!140 = metadata !{i32 786443, metadata !134, i32 86, i32 3, metadata !106, i32 8} ; [ DW_TAG_lexical_block ]
!141 = metadata !{i32 77, i32 8, metadata !130, null}
!142 = metadata !{i32 72, i32 9, metadata !132, null}
!143 = metadata !{i32 72, i32 23, metadata !132, null}
!144 = metadata !{i32 786688, metadata !118, metadata !"m", metadata !106, i32 65, metadata !121, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!145 = metadata !{i32 76, i32 7, metadata !130, null}
!146 = metadata !{i32 73, i32 10, metadata !131, null}
!147 = metadata !{i32 73, i32 25, metadata !131, null}
!148 = metadata !{i32 790531, metadata !149, metadata !"stream<float>.V", null, i32 101, metadata !152, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!149 = metadata !{i32 786689, metadata !150, metadata !"this", metadata !37, i32 16777317, metadata !151, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!150 = metadata !{i32 786478, i32 0, metadata !36, metadata !"operator>>", metadata !"operator>>", metadata !"_ZN3hls6streamIfErsERf", metadata !37, i32 101, metadata !66, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !65, metadata !48, i32 101} ; [ DW_TAG_subprogram ]
!151 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !41} ; [ DW_TAG_pointer_type ]
!152 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !110} ; [ DW_TAG_pointer_type ]
!153 = metadata !{i32 101, i32 48, metadata !150, metadata !154}
!154 = metadata !{i32 75, i32 7, metadata !130, null}
!155 = metadata !{i32 790531, metadata !156, metadata !"stream<float>.V", null, i32 123, metadata !152, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!156 = metadata !{i32 786689, metadata !157, metadata !"this", metadata !37, i32 16777339, metadata !151, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!157 = metadata !{i32 786478, i32 0, metadata !36, metadata !"read", metadata !"read", metadata !"_ZN3hls6streamIfE4readERf", metadata !37, i32 123, metadata !66, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !76, metadata !48, i32 123} ; [ DW_TAG_subprogram ]
!158 = metadata !{i32 123, i32 48, metadata !157, metadata !159}
!159 = metadata !{i32 102, i32 9, metadata !160, metadata !154}
!160 = metadata !{i32 786443, metadata !150, i32 101, i32 82, metadata !37, i32 13} ; [ DW_TAG_lexical_block ]
!161 = metadata !{i32 125, i32 9, metadata !162, metadata !159}
!162 = metadata !{i32 786443, metadata !157, i32 123, i32 73, metadata !37, i32 14} ; [ DW_TAG_lexical_block ]
!163 = metadata !{i32 786688, metadata !162, metadata !"tmp", metadata !37, i32 124, metadata !44, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!164 = metadata !{i32 786688, metadata !118, metadata !"read", metadata !106, i32 66, metadata !44, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!165 = metadata !{i32 126, i32 9, metadata !162, metadata !159}
!166 = metadata !{i32 80, i32 8, metadata !130, null}
!167 = metadata !{i32 145, i32 31, metadata !34, metadata !168}
!168 = metadata !{i32 106, i32 9, metadata !169, metadata !171}
!169 = metadata !{i32 786443, metadata !170, i32 105, i32 88, metadata !37, i32 11} ; [ DW_TAG_lexical_block ]
!170 = metadata !{i32 786478, i32 0, metadata !36, metadata !"operator<<", metadata !"operator<<", metadata !"_ZN3hls6streamIfElsERKf", metadata !37, i32 105, metadata !38, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !69, metadata !48, i32 105} ; [ DW_TAG_subprogram ]
!171 = metadata !{i32 84, i32 8, metadata !130, null}
!172 = metadata !{i32 790531, metadata !173, metadata !"stream<float>.V", null, i32 105, metadata !152, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!173 = metadata !{i32 786689, metadata !170, metadata !"this", metadata !37, i32 16777321, metadata !151, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!174 = metadata !{i32 105, i32 48, metadata !170, metadata !171}
!175 = metadata !{i32 790531, metadata !176, metadata !"stream<float>.V", null, i32 144, metadata !152, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!176 = metadata !{i32 786689, metadata !35, metadata !"this", metadata !37, i32 16777360, metadata !151, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!177 = metadata !{i32 144, i32 48, metadata !35, metadata !168}
!178 = metadata !{i32 146, i32 9, metadata !34, metadata !168}
!179 = metadata !{i32 786688, metadata !118, metadata !"k", metadata !106, i32 65, metadata !121, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!180 = metadata !{i32 87, i32 38, metadata !139, null}
!181 = metadata !{i32 101, i32 48, metadata !150, metadata !182}
!182 = metadata !{i32 88, i32 6, metadata !139, null}
!183 = metadata !{i32 123, i32 48, metadata !157, metadata !184}
!184 = metadata !{i32 102, i32 9, metadata !160, metadata !182}
!185 = metadata !{i32 125, i32 9, metadata !162, metadata !184}
!186 = metadata !{i32 790531, metadata !187, metadata !"stream<float>.V", null, i32 112, metadata !152, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!187 = metadata !{i32 786689, metadata !125, metadata !"this", metadata !37, i32 16777328, metadata !188, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!188 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !60} ; [ DW_TAG_pointer_type ]
!189 = metadata !{i32 113, i32 20, metadata !190, metadata !126}
!190 = metadata !{i32 786443, metadata !125, i32 112, i32 62, metadata !37, i32 10} ; [ DW_TAG_lexical_block ]
!191 = metadata !{i32 786688, metadata !190, metadata !"tmp", metadata !37, i32 113, metadata !73, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!192 = metadata !{i32 101, i32 48, metadata !150, metadata !193}
!193 = metadata !{i32 91, i32 3, metadata !118, null}
!194 = metadata !{i32 123, i32 48, metadata !157, metadata !195}
!195 = metadata !{i32 102, i32 9, metadata !160, metadata !193}
!196 = metadata !{i32 125, i32 9, metadata !162, metadata !195}
!197 = metadata !{i32 93, i32 1, metadata !118, null}
