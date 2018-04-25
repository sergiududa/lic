; ModuleID = '/home/sergiu/git/lic/hls/workspace/conv/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@conv.str = internal unnamed_addr constant [5 x i8] c"conv\00" ; [#uses=1 type=[5 x i8]*]

; [#uses=1]
define internal fastcc float @relu(float %a) nounwind uwtable {
  call void @llvm.dbg.value(metadata !{float %a}, i64 0, metadata !54), !dbg !55 ; [debug line = 4:18] [debug variable = a]
  %tmp = fcmp ogt float %a, 0.000000e+00, !dbg !56 ; [#uses=1 type=i1] [debug line = 6:2]
  %a.assign = select i1 %tmp, float %a, float 0.000000e+00, !dbg !56 ; [#uses=1 type=float] [debug line = 6:2]
  call void @llvm.dbg.value(metadata !{float %a.assign}, i64 0, metadata !54), !dbg !56 ; [debug line = 6:2] [debug variable = a]
  ret float %a.assign, !dbg !56                   ; [debug line = 6:2]
}

; [#uses=13]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @conv([29 x [8 x float]]* %output, [32 x [1 x float]]* %image, [4 x [1 x [8 x float]]]* %weight, float* %bias) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @conv.str) nounwind
  call void @llvm.dbg.value(metadata !{[29 x [8 x float]]* %output}, i64 0, metadata !58), !dbg !59 ; [debug line = 6:17] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[32 x [1 x float]]* %image}, i64 0, metadata !60), !dbg !61 ; [debug line = 6:42] [debug variable = image]
  call void @llvm.dbg.value(metadata !{[4 x [1 x [8 x float]]]* %weight}, i64 0, metadata !62), !dbg !63 ; [debug line = 6:66] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{float* %bias}, i64 0, metadata !64), !dbg !65 ; [debug line = 6:92] [debug variable = bias]
  call void (...)* @_ssdm_SpecArrayDimSize([29 x [8 x float]]* %output, i32 29) nounwind, !dbg !66 ; [debug line = 7:2]
  call void (...)* @_ssdm_SpecArrayDimSize([32 x [1 x float]]* %image, i32 32) nounwind, !dbg !68 ; [debug line = 7:36]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %bias, i32 8) nounwind, !dbg !69 ; [debug line = 7:69]
  call void (...)* @_ssdm_SpecArrayDimSize([4 x [1 x [8 x float]]]* %weight, i32 4) nounwind, !dbg !70 ; [debug line = 7:100]
  br label %1, !dbg !71                           ; [debug line = 15:6]

; <label>:1                                       ; preds = %7, %0
  %filter = phi i32 [ 0, %0 ], [ %filter.1, %7 ]  ; [#uses=3 type=i32]
  %exitcond5 = icmp eq i32 %filter, 8, !dbg !71   ; [#uses=1 type=i1] [debug line = 15:6]
  br i1 %exitcond5, label %8, label %.preheader9.preheader, !dbg !71 ; [debug line = 15:6]

.preheader9.preheader:                            ; preds = %1
  %tmp = sext i32 %filter to i64, !dbg !73        ; [#uses=3 type=i64] [debug line = 27:8]
  %bias.addr = getelementptr inbounds float* %bias, i64 %tmp, !dbg !81 ; [#uses=1 type=float*] [debug line = 28:32]
  br label %.preheader9, !dbg !82                 ; [debug line = 18:7]

.preheader9:                                      ; preds = %6, %.preheader9.preheader
  %i = phi i32 [ %i.1, %6 ], [ 0, %.preheader9.preheader ] ; [#uses=4 type=i32]
  %exitcond4 = icmp eq i32 %i, 29, !dbg !82       ; [#uses=1 type=i1] [debug line = 18:7]
  br i1 %exitcond4, label %7, label %.preheader8.preheader, !dbg !82 ; [debug line = 18:7]

.preheader8.preheader:                            ; preds = %.preheader9
  %tmp.3 = sext i32 %i to i64, !dbg !81           ; [#uses=1 type=i64] [debug line = 28:32]
  br label %.preheader8, !dbg !83                 ; [debug line = 19:8]

.preheader8:                                      ; preds = %5, %.preheader8.preheader
  %j = phi i32 [ %j.1, %5 ], [ 0, %.preheader8.preheader ] ; [#uses=4 type=i32]
  %exitcond3 = icmp eq i32 %j, 29, !dbg !83       ; [#uses=1 type=i1] [debug line = 19:8]
  br i1 %exitcond3, label %6, label %.preheader7.preheader, !dbg !83 ; [debug line = 19:8]

.preheader7.preheader:                            ; preds = %.preheader8
  br label %.preheader7, !dbg !84                 ; [debug line = 23:9]

.preheader7:                                      ; preds = %4, %.preheader7.preheader
  %sum = phi float [ %sum.1.lcssa, %4 ], [ 0.000000e+00, %.preheader7.preheader ] ; [#uses=2 type=float]
  %row_offset = phi i32 [ %row_offset.1, %4 ], [ 0, %.preheader7.preheader ] ; [#uses=4 type=i32]
  %exitcond2 = icmp eq i32 %row_offset, 4, !dbg !84 ; [#uses=1 type=i1] [debug line = 23:9]
  br i1 %exitcond2, label %5, label %.preheader6.preheader, !dbg !84 ; [debug line = 23:9]

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp.9 = add nsw i32 %row_offset, %i, !dbg !73  ; [#uses=1 type=i32] [debug line = 27:8]
  %tmp.10 = sext i32 %tmp.9 to i64, !dbg !73      ; [#uses=1 type=i64] [debug line = 27:8]
  %tmp.11 = sext i32 %row_offset to i64, !dbg !73 ; [#uses=1 type=i64] [debug line = 27:8]
  br label %.preheader6, !dbg !85                 ; [debug line = 25:10]

.preheader6:                                      ; preds = %3, %.preheader6.preheader
  %sum.1 = phi float [ %sum.2.lcssa, %3 ], [ %sum, %.preheader6.preheader ] ; [#uses=2 type=float]
  %col_offset = phi i32 [ %col_offset.1, %3 ], [ 0, %.preheader6.preheader ] ; [#uses=4 type=i32]
  %exitcond1 = icmp eq i32 %col_offset, 4, !dbg !85 ; [#uses=1 type=i1] [debug line = 25:10]
  br i1 %exitcond1, label %4, label %.preheader.preheader, !dbg !85 ; [debug line = 25:10]

.preheader.preheader:                             ; preds = %.preheader6
  %tmp.13 = add nsw i32 %col_offset, %j, !dbg !73 ; [#uses=1 type=i32] [debug line = 27:8]
  %tmp.14 = sext i32 %tmp.13 to i64, !dbg !73     ; [#uses=1 type=i64] [debug line = 27:8]
  %tmp.15 = sext i32 %col_offset to i64, !dbg !73 ; [#uses=1 type=i64] [debug line = 27:8]
  br label %.preheader, !dbg !86                  ; [debug line = 26:11]

.preheader:                                       ; preds = %2, %.preheader.preheader
  %sum.2 = phi float [ %sum.3, %2 ], [ %sum.1, %.preheader.preheader ] ; [#uses=2 type=float]
  %channel_offset = phi i32 [ %channel_offset.1, %2 ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i32]
  %exitcond = icmp eq i32 %channel_offset, 1, !dbg !86 ; [#uses=1 type=i1] [debug line = 26:11]
  br i1 %exitcond, label %3, label %2, !dbg !86   ; [debug line = 26:11]

; <label>:2                                       ; preds = %.preheader
  %tmp.17 = sext i32 %channel_offset to i64, !dbg !73 ; [#uses=2 type=i64] [debug line = 27:8]
  %image.addr = getelementptr inbounds [32 x [1 x float]]* %image, i64 %tmp.10, i64 %tmp.14, i64 %tmp.17, !dbg !73 ; [#uses=1 type=float*] [debug line = 27:8]
  %image.load = load float* %image.addr, align 4, !dbg !73 ; [#uses=2 type=float] [debug line = 27:8]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %image.load) nounwind
  %weight.addr = getelementptr inbounds [4 x [1 x [8 x float]]]* %weight, i64 %tmp.11, i64 %tmp.15, i64 %tmp.17, i64 %tmp, !dbg !73 ; [#uses=1 type=float*] [debug line = 27:8]
  %weight.load = load float* %weight.addr, align 4, !dbg !73 ; [#uses=2 type=float] [debug line = 27:8]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %weight.load) nounwind
  %tmp.18 = fmul float %image.load, %weight.load, !dbg !73 ; [#uses=1 type=float] [debug line = 27:8]
  %sum.3 = fadd float %sum.2, %tmp.18, !dbg !73   ; [#uses=1 type=float] [debug line = 27:8]
  call void @llvm.dbg.value(metadata !{float %sum.3}, i64 0, metadata !87), !dbg !73 ; [debug line = 27:8] [debug variable = sum]
  %channel_offset.1 = add nsw i32 %channel_offset, 1, !dbg !88 ; [#uses=1 type=i32] [debug line = 26:51]
  call void @llvm.dbg.value(metadata !{i32 %channel_offset.1}, i64 0, metadata !89), !dbg !88 ; [debug line = 26:51] [debug variable = channel_offset]
  br label %.preheader, !dbg !88                  ; [debug line = 26:51]

; <label>:3                                       ; preds = %.preheader
  %sum.2.lcssa = phi float [ %sum.2, %.preheader ] ; [#uses=1 type=float]
  %col_offset.1 = add nsw i32 %col_offset, 1, !dbg !90 ; [#uses=1 type=i32] [debug line = 25:41]
  call void @llvm.dbg.value(metadata !{i32 %col_offset.1}, i64 0, metadata !91), !dbg !90 ; [debug line = 25:41] [debug variable = col_offset]
  br label %.preheader6, !dbg !90                 ; [debug line = 25:41]

; <label>:4                                       ; preds = %.preheader6
  %sum.1.lcssa = phi float [ %sum.1, %.preheader6 ] ; [#uses=1 type=float]
  %row_offset.1 = add nsw i32 %row_offset, 1, !dbg !92 ; [#uses=1 type=i32] [debug line = 23:40]
  call void @llvm.dbg.value(metadata !{i32 %row_offset.1}, i64 0, metadata !93), !dbg !92 ; [debug line = 23:40] [debug variable = row_offset]
  br label %.preheader7, !dbg !92                 ; [debug line = 23:40]

; <label>:5                                       ; preds = %.preheader7
  %sum.0.lcssa = phi float [ %sum, %.preheader7 ] ; [#uses=1 type=float]
  %bias.load = load float* %bias.addr, align 4, !dbg !81 ; [#uses=2 type=float] [debug line = 28:32]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %bias.load) nounwind
  %tmp.5 = fadd float %sum.0.lcssa, %bias.load, !dbg !81 ; [#uses=1 type=float] [debug line = 28:32]
  %tmp.6 = call fastcc float @relu(float %tmp.5), !dbg !81 ; [#uses=1 type=float] [debug line = 28:32]
  %tmp.7 = sext i32 %j to i64, !dbg !81           ; [#uses=1 type=i64] [debug line = 28:32]
  %output.addr = getelementptr inbounds [29 x [8 x float]]* %output, i64 %tmp.3, i64 %tmp.7, i64 %tmp, !dbg !81 ; [#uses=1 type=float*] [debug line = 28:32]
  store float %tmp.6, float* %output.addr, align 4, !dbg !81 ; [debug line = 28:32]
  %j.1 = add nsw i32 %j, 1, !dbg !94              ; [#uses=1 type=i32] [debug line = 19:33]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !95), !dbg !94 ; [debug line = 19:33] [debug variable = j]
  br label %.preheader8, !dbg !94                 ; [debug line = 19:33]

; <label>:6                                       ; preds = %.preheader8
  %i.1 = add nsw i32 %i, 1, !dbg !96              ; [#uses=1 type=i32] [debug line = 18:32]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !97), !dbg !96 ; [debug line = 18:32] [debug variable = i]
  br label %.preheader9, !dbg !96                 ; [debug line = 18:32]

; <label>:7                                       ; preds = %.preheader9
  %filter.1 = add nsw i32 %filter, 1, !dbg !98    ; [#uses=1 type=i32] [debug line = 15:30]
  call void @llvm.dbg.value(metadata !{i32 %filter.1}, i64 0, metadata !99), !dbg !98 ; [debug line = 15:30] [debug variable = filter]
  br label %1, !dbg !98                           ; [debug line = 15:30]

; <label>:8                                       ; preds = %1
  ret void, !dbg !100                             ; [debug line = 31:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=3]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=4]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!41, !48}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/conv/solution1/.autopilot/db/conv.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !31} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !12}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"relu", metadata !"relu", metadata !"", metadata !6, i32 4, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, float (float)* @relu, null, null, metadata !10, i32 5} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"/home/sergiu/git/lic/hls/workspace/conv/headers/activations.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !9}
!9 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!10 = metadata !{metadata !11}
!11 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!12 = metadata !{i32 786478, i32 0, metadata !13, metadata !"conv", metadata !"conv", metadata !"", metadata !13, i32 6, metadata !14, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ([29 x [8 x float]]*, [32 x [1 x float]]*, [4 x [1 x [8 x float]]]*, float*)* @conv, null, null, metadata !10, i32 7} ; [ DW_TAG_subprogram ]
!13 = metadata !{i32 786473, metadata !"conv/solution1/conv.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!14 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !15, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!15 = metadata !{null, metadata !16, metadata !21, metadata !26, metadata !30}
!16 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !17} ; [ DW_TAG_pointer_type ]
!17 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 7424, i64 32, i32 0, i32 0, metadata !9, metadata !18, i32 0, i32 0} ; [ DW_TAG_array_type ]
!18 = metadata !{metadata !19, metadata !20}
!19 = metadata !{i32 786465, i64 0, i64 28}       ; [ DW_TAG_subrange_type ]
!20 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!21 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !22} ; [ DW_TAG_pointer_type ]
!22 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1024, i64 32, i32 0, i32 0, metadata !9, metadata !23, i32 0, i32 0} ; [ DW_TAG_array_type ]
!23 = metadata !{metadata !24, metadata !25}
!24 = metadata !{i32 786465, i64 0, i64 31}       ; [ DW_TAG_subrange_type ]
!25 = metadata !{i32 786465, i64 0, i64 0}        ; [ DW_TAG_subrange_type ]
!26 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !27} ; [ DW_TAG_pointer_type ]
!27 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1024, i64 32, i32 0, i32 0, metadata !9, metadata !28, i32 0, i32 0} ; [ DW_TAG_array_type ]
!28 = metadata !{metadata !29, metadata !25, metadata !20}
!29 = metadata !{i32 786465, i64 0, i64 3}        ; [ DW_TAG_subrange_type ]
!30 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !9} ; [ DW_TAG_pointer_type ]
!31 = metadata !{metadata !32}
!32 = metadata !{metadata !33, metadata !36, metadata !37, metadata !38}
!33 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdin_", metadata !"_IO_2_1_stdin_", metadata !"", metadata !34, i32 315, metadata !35, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!34 = metadata !{i32 786473, metadata !"/usr/include/libio.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!35 = metadata !{i32 786451, null, metadata !"_IO_FILE_plus", metadata !34, i32 313, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_structure_type ]
!36 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdout_", metadata !"_IO_2_1_stdout_", metadata !"", metadata !34, i32 316, metadata !35, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!37 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stderr_", metadata !"_IO_2_1_stderr_", metadata !"", metadata !34, i32 317, metadata !35, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!38 = metadata !{i32 786484, i32 0, null, metadata !"sys_nerr", metadata !"sys_nerr", metadata !"", metadata !39, i32 26, metadata !40, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!39 = metadata !{i32 786473, metadata !"/usr/include/x86_64-linux-gnu/bits/sys_errlist.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!40 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!41 = metadata !{float (float)* @relu, metadata !42, metadata !43, metadata !44, metadata !45, metadata !46, metadata !47}
!42 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!43 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!44 = metadata !{metadata !"kernel_arg_type", metadata !"float"}
!45 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!46 = metadata !{metadata !"kernel_arg_name", metadata !"a"}
!47 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!48 = metadata !{void ([29 x [8 x float]]*, [32 x [1 x float]]*, [4 x [1 x [8 x float]]]*, float*)* @conv, metadata !49, metadata !50, metadata !51, metadata !52, metadata !53, metadata !47}
!49 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1}
!50 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!51 = metadata !{metadata !"kernel_arg_type", metadata !"float [29][8]*", metadata !"float [32][1]*", metadata !"float [4][1][8]*", metadata !"float*"}
!52 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!53 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"image", metadata !"weight", metadata !"bias"}
!54 = metadata !{i32 786689, metadata !5, metadata !"a", metadata !6, i32 16777220, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!55 = metadata !{i32 4, i32 18, metadata !5, null}
!56 = metadata !{i32 6, i32 2, metadata !57, null}
!57 = metadata !{i32 786443, metadata !5, i32 5, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 786689, metadata !12, metadata !"output", metadata !13, i32 16777222, metadata !16, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!59 = metadata !{i32 6, i32 17, metadata !12, null}
!60 = metadata !{i32 786689, metadata !12, metadata !"image", metadata !13, i32 33554438, metadata !21, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!61 = metadata !{i32 6, i32 42, metadata !12, null}
!62 = metadata !{i32 786689, metadata !12, metadata !"weight", metadata !13, i32 50331654, metadata !26, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!63 = metadata !{i32 6, i32 66, metadata !12, null}
!64 = metadata !{i32 786689, metadata !12, metadata !"bias", metadata !13, i32 67108870, metadata !30, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!65 = metadata !{i32 6, i32 92, metadata !12, null}
!66 = metadata !{i32 7, i32 2, metadata !67, null}
!67 = metadata !{i32 786443, metadata !12, i32 7, i32 1, metadata !13, i32 1} ; [ DW_TAG_lexical_block ]
!68 = metadata !{i32 7, i32 36, metadata !67, null}
!69 = metadata !{i32 7, i32 69, metadata !67, null}
!70 = metadata !{i32 7, i32 100, metadata !67, null}
!71 = metadata !{i32 15, i32 6, metadata !72, null}
!72 = metadata !{i32 786443, metadata !67, i32 15, i32 2, metadata !13, i32 2} ; [ DW_TAG_lexical_block ]
!73 = metadata !{i32 27, i32 8, metadata !74, null}
!74 = metadata !{i32 786443, metadata !75, i32 26, i32 7, metadata !13, i32 9} ; [ DW_TAG_lexical_block ]
!75 = metadata !{i32 786443, metadata !76, i32 25, i32 6, metadata !13, i32 8} ; [ DW_TAG_lexical_block ]
!76 = metadata !{i32 786443, metadata !77, i32 23, i32 5, metadata !13, i32 7} ; [ DW_TAG_lexical_block ]
!77 = metadata !{i32 786443, metadata !78, i32 20, i32 4, metadata !13, i32 6} ; [ DW_TAG_lexical_block ]
!78 = metadata !{i32 786443, metadata !79, i32 19, i32 4, metadata !13, i32 5} ; [ DW_TAG_lexical_block ]
!79 = metadata !{i32 786443, metadata !80, i32 18, i32 3, metadata !13, i32 4} ; [ DW_TAG_lexical_block ]
!80 = metadata !{i32 786443, metadata !72, i32 16, i32 2, metadata !13, i32 3} ; [ DW_TAG_lexical_block ]
!81 = metadata !{i32 28, i32 32, metadata !77, null}
!82 = metadata !{i32 18, i32 7, metadata !79, null}
!83 = metadata !{i32 19, i32 8, metadata !78, null}
!84 = metadata !{i32 23, i32 9, metadata !76, null}
!85 = metadata !{i32 25, i32 10, metadata !75, null}
!86 = metadata !{i32 26, i32 11, metadata !74, null}
!87 = metadata !{i32 786688, metadata !67, metadata !"sum", metadata !13, i32 9, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!88 = metadata !{i32 26, i32 51, metadata !74, null}
!89 = metadata !{i32 786688, metadata !67, metadata !"channel_offset", metadata !13, i32 10, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!90 = metadata !{i32 25, i32 41, metadata !75, null}
!91 = metadata !{i32 786688, metadata !67, metadata !"col_offset", metadata !13, i32 10, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!92 = metadata !{i32 23, i32 40, metadata !76, null}
!93 = metadata !{i32 786688, metadata !67, metadata !"row_offset", metadata !13, i32 10, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!94 = metadata !{i32 19, i32 33, metadata !78, null}
!95 = metadata !{i32 786688, metadata !67, metadata !"j", metadata !13, i32 8, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!96 = metadata !{i32 18, i32 32, metadata !79, null}
!97 = metadata !{i32 786688, metadata !67, metadata !"i", metadata !13, i32 8, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!98 = metadata !{i32 15, i32 30, metadata !72, null}
!99 = metadata !{i32 786688, metadata !67, metadata !"filter", metadata !13, i32 8, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!100 = metadata !{i32 31, i32 1, metadata !67, null}
