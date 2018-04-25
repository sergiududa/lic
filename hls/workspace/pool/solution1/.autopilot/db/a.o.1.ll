; ModuleID = '/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@pool.str = internal unnamed_addr constant [5 x i8] c"pool\00" ; [#uses=1 type=[5 x i8]*]

; [#uses=0]
define void @pool([14 x [8 x float]]* %output, [29 x [8 x float]]* %image) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @pool.str) nounwind
  call void @llvm.dbg.value(metadata !{[14 x [8 x float]]* %output}, i64 0, metadata !28), !dbg !29 ; [debug line = 3:17] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[29 x [8 x float]]* %image}, i64 0, metadata !30), !dbg !31 ; [debug line = 3:42] [debug variable = image]
  call void (...)* @_ssdm_SpecArrayDimSize([14 x [8 x float]]* %output, i32 14) nounwind, !dbg !32 ; [debug line = 4:2]
  call void (...)* @_ssdm_SpecArrayDimSize([29 x [8 x float]]* %image, i32 29) nounwind, !dbg !34 ; [debug line = 4:36]
  br label %1, !dbg !35                           ; [debug line = 7:21]

; <label>:1                                       ; preds = %9, %0
  %channel = phi i32 [ 0, %0 ], [ %channel.1, %9 ] ; [#uses=3 type=i32]
  %exitcond2 = icmp eq i32 %channel, 8, !dbg !35  ; [#uses=1 type=i1] [debug line = 7:21]
  br i1 %exitcond2, label %10, label %.preheader4.preheader, !dbg !35 ; [debug line = 7:21]

.preheader4.preheader:                            ; preds = %1
  %tmp = sext i32 %channel to i64, !dbg !37       ; [#uses=3 type=i64] [debug line = 11:5]
  br label %.preheader4, !dbg !41                 ; [debug line = 8:16]

.preheader4:                                      ; preds = %8, %.preheader4.preheader
  %i = phi i32 [ %i.1, %8 ], [ 0, %.preheader4.preheader ] ; [#uses=5 type=i32]
  %tmp.1 = icmp slt i32 %i, 28, !dbg !41          ; [#uses=1 type=i1] [debug line = 8:16]
  br i1 %tmp.1, label %.preheader3.preheader, label %9, !dbg !41 ; [debug line = 8:16]

.preheader3.preheader:                            ; preds = %.preheader4
  %tmp.2 = sext i32 %i to i64, !dbg !37           ; [#uses=1 type=i64] [debug line = 11:5]
  %tmp.3 = sdiv i32 %i, 2, !dbg !42               ; [#uses=1 type=i32] [debug line = 15:5]
  %tmp.4 = sext i32 %tmp.3 to i64, !dbg !42       ; [#uses=1 type=i64] [debug line = 15:5]
  br label %.preheader3, !dbg !43                 ; [debug line = 9:17]

.preheader3:                                      ; preds = %7, %.preheader3.preheader
  %j = phi i32 [ %j.1, %7 ], [ 0, %.preheader3.preheader ] ; [#uses=5 type=i32]
  %tmp.6 = icmp slt i32 %j, 28, !dbg !43          ; [#uses=1 type=i1] [debug line = 9:17]
  br i1 %tmp.6, label %2, label %8, !dbg !43      ; [debug line = 9:17]

; <label>:2                                       ; preds = %.preheader3
  %tmp.7 = sext i32 %j to i64, !dbg !37           ; [#uses=1 type=i64] [debug line = 11:5]
  %image.addr = getelementptr inbounds [29 x [8 x float]]* %image, i64 %tmp.2, i64 %tmp.7, i64 %tmp, !dbg !37 ; [#uses=1 type=float*] [debug line = 11:5]
  %max = load float* %image.addr, align 4, !dbg !37 ; [#uses=2 type=float] [debug line = 11:5]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %max) nounwind
  call void @llvm.dbg.value(metadata !{float %max}, i64 0, metadata !44), !dbg !37 ; [debug line = 11:5] [debug variable = max]
  br label %3, !dbg !45                           ; [debug line = 12:18]

; <label>:3                                       ; preds = %6, %2
  %max1 = phi float [ %max, %2 ], [ %max.1.lcssa, %6 ] ; [#uses=2 type=float]
  %k = phi i32 [ 0, %2 ], [ %k.1, %6 ]            ; [#uses=3 type=i32]
  %exitcond1 = icmp eq i32 %k, 2, !dbg !45        ; [#uses=1 type=i1] [debug line = 12:18]
  br i1 %exitcond1, label %7, label %.preheader.preheader, !dbg !45 ; [debug line = 12:18]

.preheader.preheader:                             ; preds = %3
  %tmp.12 = add nsw i32 %k, %i, !dbg !47          ; [#uses=1 type=i32] [debug line = 14:7]
  %tmp.13 = sext i32 %tmp.12 to i64, !dbg !47     ; [#uses=1 type=i64] [debug line = 14:7]
  br label %.preheader, !dbg !49                  ; [debug line = 13:19]

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %max.1 = phi float [ %max.2, %._crit_edge ], [ %max1, %.preheader.preheader ] ; [#uses=3 type=float]
  %l = phi i32 [ %l.1, %._crit_edge ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i32]
  %exitcond = icmp eq i32 %l, 2, !dbg !49         ; [#uses=1 type=i1] [debug line = 13:19]
  br i1 %exitcond, label %6, label %4, !dbg !49   ; [debug line = 13:19]

; <label>:4                                       ; preds = %.preheader
  %tmp.15 = add nsw i32 %l, %j, !dbg !47          ; [#uses=1 type=i32] [debug line = 14:7]
  %tmp.16 = sext i32 %tmp.15 to i64, !dbg !47     ; [#uses=1 type=i64] [debug line = 14:7]
  %image.addr.1 = getelementptr inbounds [29 x [8 x float]]* %image, i64 %tmp.13, i64 %tmp.16, i64 %tmp, !dbg !47 ; [#uses=1 type=float*] [debug line = 14:7]
  %image.load = load float* %image.addr.1, align 4, !dbg !47 ; [#uses=4 type=float] [debug line = 14:7]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %image.load) nounwind
  %tmp.17 = fcmp ogt float %image.load, %max.1, !dbg !47 ; [#uses=1 type=i1] [debug line = 14:7]
  br i1 %tmp.17, label %5, label %._crit_edge, !dbg !47 ; [debug line = 14:7]

; <label>:5                                       ; preds = %4
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %image.load) nounwind
  br label %._crit_edge, !dbg !47                 ; [debug line = 14:7]

._crit_edge:                                      ; preds = %5, %4
  %max.2 = phi float [ %image.load, %5 ], [ %max.1, %4 ], !dbg !47 ; [#uses=1 type=float] [debug line = 14:7]
  call void @llvm.dbg.value(metadata !{float %max.2}, i64 0, metadata !44), !dbg !47 ; [debug line = 14:7] [debug variable = max]
  %l.1 = add nsw i32 %l, 1, !dbg !50              ; [#uses=1 type=i32] [debug line = 13:28]
  call void @llvm.dbg.value(metadata !{i32 %l.1}, i64 0, metadata !51), !dbg !50 ; [debug line = 13:28] [debug variable = l]
  br label %.preheader, !dbg !50                  ; [debug line = 13:28]

; <label>:6                                       ; preds = %.preheader
  %max.1.lcssa = phi float [ %max.1, %.preheader ] ; [#uses=1 type=float]
  %k.1 = add nsw i32 %k, 1, !dbg !53              ; [#uses=1 type=i32] [debug line = 12:27]
  call void @llvm.dbg.value(metadata !{i32 %k.1}, i64 0, metadata !54), !dbg !53 ; [debug line = 12:27] [debug variable = k]
  br label %3, !dbg !53                           ; [debug line = 12:27]

; <label>:7                                       ; preds = %3
  %max.0.lcssa = phi float [ %max1, %3 ]          ; [#uses=1 type=float]
  %tmp.9 = sdiv i32 %j, 2, !dbg !42               ; [#uses=1 type=i32] [debug line = 15:5]
  %tmp.10 = sext i32 %tmp.9 to i64, !dbg !42      ; [#uses=1 type=i64] [debug line = 15:5]
  %output.addr = getelementptr inbounds [14 x [8 x float]]* %output, i64 %tmp.4, i64 %tmp.10, i64 %tmp, !dbg !42 ; [#uses=1 type=float*] [debug line = 15:5]
  store float %max.0.lcssa, float* %output.addr, align 4, !dbg !42 ; [debug line = 15:5]
  %j.1 = add nsw i32 %j, 2, !dbg !55              ; [#uses=1 type=i32] [debug line = 9:35]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !56), !dbg !55 ; [debug line = 9:35] [debug variable = j]
  br label %.preheader3, !dbg !55                 ; [debug line = 9:35]

; <label>:8                                       ; preds = %.preheader3
  %i.1 = add nsw i32 %i, 2, !dbg !57              ; [#uses=1 type=i32] [debug line = 8:33]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !58), !dbg !57 ; [debug line = 8:33] [debug variable = i]
  br label %.preheader4, !dbg !57                 ; [debug line = 8:33]

; <label>:9                                       ; preds = %.preheader4
  %channel.1 = add nsw i32 %channel, 1, !dbg !59  ; [#uses=1 type=i32] [debug line = 7:36]
  call void @llvm.dbg.value(metadata !{i32 %channel.1}, i64 0, metadata !60), !dbg !59 ; [debug line = 7:36] [debug variable = channel]
  br label %1, !dbg !59                           ; [debug line = 7:36]

; <label>:10                                      ; preds = %1
  ret void, !dbg !61                              ; [debug line = 18:1]
}

; [#uses=9]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=3]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=2]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!21}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/pool.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"pool", metadata !"pool", metadata !"", metadata !6, i32 3, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ([14 x [8 x float]]*, [29 x [8 x float]]*)* @pool, null, null, metadata !19, i32 4} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"pool/solution1/pool.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !15}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3584, i64 32, i32 0, i32 0, metadata !11, metadata !12, i32 0, i32 0} ; [ DW_TAG_array_type ]
!11 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!12 = metadata !{metadata !13, metadata !14}
!13 = metadata !{i32 786465, i64 0, i64 13}       ; [ DW_TAG_subrange_type ]
!14 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!15 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !16} ; [ DW_TAG_pointer_type ]
!16 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 7424, i64 32, i32 0, i32 0, metadata !11, metadata !17, i32 0, i32 0} ; [ DW_TAG_array_type ]
!17 = metadata !{metadata !18, metadata !14}
!18 = metadata !{i32 786465, i64 0, i64 28}       ; [ DW_TAG_subrange_type ]
!19 = metadata !{metadata !20}
!20 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!21 = metadata !{void ([14 x [8 x float]]*, [29 x [8 x float]]*)* @pool, metadata !22, metadata !23, metadata !24, metadata !25, metadata !26, metadata !27}
!22 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!23 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!24 = metadata !{metadata !"kernel_arg_type", metadata !"float [14][8]*", metadata !"float [29][8]*"}
!25 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!26 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"image"}
!27 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!28 = metadata !{i32 786689, metadata !5, metadata !"output", metadata !6, i32 16777219, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!29 = metadata !{i32 3, i32 17, metadata !5, null}
!30 = metadata !{i32 786689, metadata !5, metadata !"image", metadata !6, i32 33554435, metadata !15, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!31 = metadata !{i32 3, i32 42, metadata !5, null}
!32 = metadata !{i32 4, i32 2, metadata !33, null}
!33 = metadata !{i32 786443, metadata !5, i32 4, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!34 = metadata !{i32 4, i32 36, metadata !33, null}
!35 = metadata !{i32 7, i32 21, metadata !36, null}
!36 = metadata !{i32 786443, metadata !33, i32 7, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!37 = metadata !{i32 11, i32 5, metadata !38, null}
!38 = metadata !{i32 786443, metadata !39, i32 10, i32 4, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!39 = metadata !{i32 786443, metadata !40, i32 9, i32 4, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!40 = metadata !{i32 786443, metadata !36, i32 8, i32 3, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!41 = metadata !{i32 8, i32 16, metadata !40, null}
!42 = metadata !{i32 15, i32 5, metadata !38, null}
!43 = metadata !{i32 9, i32 17, metadata !39, null}
!44 = metadata !{i32 786688, metadata !33, metadata !"max", metadata !6, i32 6, metadata !11, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!45 = metadata !{i32 12, i32 18, metadata !46, null}
!46 = metadata !{i32 786443, metadata !38, i32 12, i32 5, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!47 = metadata !{i32 14, i32 7, metadata !48, null}
!48 = metadata !{i32 786443, metadata !46, i32 13, i32 6, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!49 = metadata !{i32 13, i32 19, metadata !48, null}
!50 = metadata !{i32 13, i32 28, metadata !48, null}
!51 = metadata !{i32 786688, metadata !48, metadata !"l", metadata !6, i32 13, metadata !52, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!52 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!53 = metadata !{i32 12, i32 27, metadata !46, null}
!54 = metadata !{i32 786688, metadata !46, metadata !"k", metadata !6, i32 12, metadata !52, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!55 = metadata !{i32 9, i32 35, metadata !39, null}
!56 = metadata !{i32 786688, metadata !39, metadata !"j", metadata !6, i32 9, metadata !52, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!57 = metadata !{i32 8, i32 33, metadata !40, null}
!58 = metadata !{i32 786688, metadata !40, metadata !"i", metadata !6, i32 8, metadata !52, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!59 = metadata !{i32 7, i32 36, metadata !36, null}
!60 = metadata !{i32 786688, metadata !36, metadata !"channel", metadata !6, i32 7, metadata !52, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!61 = metadata !{i32 18, i32 1, metadata !33, null}
