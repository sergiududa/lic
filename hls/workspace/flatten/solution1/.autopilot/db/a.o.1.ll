; ModuleID = '/home/sergiu/git/lic/hls/workspace/flatten/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@flatten.str = internal unnamed_addr constant [8 x i8] c"flatten\00" ; [#uses=1 type=[8 x i8]*]

; [#uses=5]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @flatten(float* %output, [6 x [16 x float]]* %input) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecTopModule([8 x i8]* @flatten.str) nounwind
  call void @llvm.dbg.value(metadata !{float* %output}, i64 0, metadata !25), !dbg !26 ; [debug line = 3:20] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[6 x [16 x float]]* %input}, i64 0, metadata !27), !dbg !28 ; [debug line = 3:39] [debug variable = input]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %output, i32 576) nounwind, !dbg !29 ; [debug line = 4:2]
  call void (...)* @_ssdm_SpecArrayDimSize([6 x [16 x float]]* %input, i32 6) nounwind, !dbg !31 ; [debug line = 4:37]
  br label %1, !dbg !32                           ; [debug line = 6:7]

; <label>:1                                       ; preds = %4, %0
  %i = phi i32 [ 0, %0 ], [ %i.1, %4 ]            ; [#uses=4 type=i32]
  %exitcond2 = icmp eq i32 %i, 6, !dbg !32        ; [#uses=1 type=i1] [debug line = 6:7]
  br i1 %exitcond2, label %5, label %.preheader3.preheader, !dbg !32 ; [debug line = 6:7]

.preheader3.preheader:                            ; preds = %1
  %tmp = sext i32 %i to i64, !dbg !34             ; [#uses=1 type=i64] [debug line = 9:21]
  %tmp.1 = mul i32 %i, 96, !dbg !34               ; [#uses=1 type=i32] [debug line = 9:21]
  br label %.preheader3, !dbg !37                 ; [debug line = 7:8]

.preheader3:                                      ; preds = %3, %.preheader3.preheader
  %j = phi i32 [ %j.1, %3 ], [ 0, %.preheader3.preheader ] ; [#uses=4 type=i32]
  %exitcond1 = icmp eq i32 %j, 6, !dbg !37        ; [#uses=1 type=i1] [debug line = 7:8]
  br i1 %exitcond1, label %4, label %.preheader.preheader, !dbg !37 ; [debug line = 7:8]

.preheader.preheader:                             ; preds = %.preheader3
  %tmp.3 = sext i32 %j to i64, !dbg !34           ; [#uses=1 type=i64] [debug line = 9:21]
  %tmp.4 = mul i32 %j, 16, !dbg !34               ; [#uses=1 type=i32] [debug line = 9:21]
  br label %.preheader, !dbg !38                  ; [debug line = 8:21]

.preheader:                                       ; preds = %2, %.preheader.preheader
  %k = phi i32 [ %k.1, %2 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i32]
  %exitcond = icmp eq i32 %k, 16, !dbg !38        ; [#uses=1 type=i1] [debug line = 8:21]
  br i1 %exitcond, label %3, label %2, !dbg !38   ; [debug line = 8:21]

; <label>:2                                       ; preds = %.preheader
  %tmp.6 = sext i32 %k to i64, !dbg !34           ; [#uses=1 type=i64] [debug line = 9:21]
  %input.addr = getelementptr inbounds [6 x [16 x float]]* %input, i64 %tmp, i64 %tmp.3, i64 %tmp.6, !dbg !34 ; [#uses=1 type=float*] [debug line = 9:21]
  %input.load = load float* %input.addr, align 4, !dbg !34 ; [#uses=2 type=float] [debug line = 9:21]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %input.load) nounwind
  %tmp.7 = add i32 %tmp.4, %tmp.1, !dbg !34       ; [#uses=1 type=i32] [debug line = 9:21]
  %tmp.8 = add i32 %tmp.7, %k, !dbg !34           ; [#uses=1 type=i32] [debug line = 9:21]
  %tmp.9 = sext i32 %tmp.8 to i64, !dbg !34       ; [#uses=1 type=i64] [debug line = 9:21]
  %output.addr = getelementptr inbounds float* %output, i64 %tmp.9, !dbg !34 ; [#uses=1 type=float*] [debug line = 9:21]
  store float %input.load, float* %output.addr, align 4, !dbg !34 ; [debug line = 9:21]
  %k.1 = add nsw i32 %k, 1, !dbg !39              ; [#uses=1 type=i32] [debug line = 8:35]
  call void @llvm.dbg.value(metadata !{i32 %k.1}, i64 0, metadata !40), !dbg !39 ; [debug line = 8:35] [debug variable = k]
  br label %.preheader, !dbg !39                  ; [debug line = 8:35]

; <label>:3                                       ; preds = %.preheader
  %j.1 = add nsw i32 %j, 1, !dbg !42              ; [#uses=1 type=i32] [debug line = 7:22]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !43), !dbg !42 ; [debug line = 7:22] [debug variable = j]
  br label %.preheader3, !dbg !42                 ; [debug line = 7:22]

; <label>:4                                       ; preds = %.preheader3
  %i.1 = add nsw i32 %i, 1, !dbg !44              ; [#uses=1 type=i32] [debug line = 6:21]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !45), !dbg !44 ; [debug line = 6:21] [debug variable = i]
  br label %1, !dbg !44                           ; [debug line = 6:21]

; <label>:5                                       ; preds = %1
  ret void, !dbg !46                              ; [debug line = 10:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=1]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=2]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!18}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/flatten/solution1/.autopilot/db/flatten.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"flatten", metadata !"flatten", metadata !"", metadata !6, i32 3, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (float*, [6 x [16 x float]]*)* @flatten, null, null, metadata !16, i32 4} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"flatten/solution1/.tcls/flatten.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !11}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!11 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !12} ; [ DW_TAG_pointer_type ]
!12 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3072, i64 32, i32 0, i32 0, metadata !10, metadata !13, i32 0, i32 0} ; [ DW_TAG_array_type ]
!13 = metadata !{metadata !14, metadata !15}
!14 = metadata !{i32 786465, i64 0, i64 5}        ; [ DW_TAG_subrange_type ]
!15 = metadata !{i32 786465, i64 0, i64 15}       ; [ DW_TAG_subrange_type ]
!16 = metadata !{metadata !17}
!17 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!18 = metadata !{void (float*, [6 x [16 x float]]*)* @flatten, metadata !19, metadata !20, metadata !21, metadata !22, metadata !23, metadata !24}
!19 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!20 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!21 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float [6][16]*"}
!22 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!23 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"input"}
!24 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!25 = metadata !{i32 786689, metadata !5, metadata !"output", metadata !6, i32 16777219, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!26 = metadata !{i32 3, i32 20, metadata !5, null}
!27 = metadata !{i32 786689, metadata !5, metadata !"input", metadata !6, i32 33554435, metadata !11, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!28 = metadata !{i32 3, i32 39, metadata !5, null}
!29 = metadata !{i32 4, i32 2, metadata !30, null}
!30 = metadata !{i32 786443, metadata !5, i32 4, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!31 = metadata !{i32 4, i32 37, metadata !30, null}
!32 = metadata !{i32 6, i32 7, metadata !33, null}
!33 = metadata !{i32 786443, metadata !30, i32 6, i32 3, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!34 = metadata !{i32 9, i32 21, metadata !35, null}
!35 = metadata !{i32 786443, metadata !36, i32 8, i32 17, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!36 = metadata !{i32 786443, metadata !33, i32 7, i32 4, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!37 = metadata !{i32 7, i32 8, metadata !36, null}
!38 = metadata !{i32 8, i32 21, metadata !35, null}
!39 = metadata !{i32 8, i32 35, metadata !35, null}
!40 = metadata !{i32 786688, metadata !30, metadata !"k", metadata !6, i32 5, metadata !41, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!41 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!42 = metadata !{i32 7, i32 22, metadata !36, null}
!43 = metadata !{i32 786688, metadata !30, metadata !"j", metadata !6, i32 5, metadata !41, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!44 = metadata !{i32 6, i32 21, metadata !33, null}
!45 = metadata !{i32 786688, metadata !30, metadata !"i", metadata !6, i32 5, metadata !41, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!46 = metadata !{i32 10, i32 1, metadata !30, null}
