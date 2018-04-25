; ModuleID = '/home/sergiu/git/lic/hls/workspace/conv/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@conv.str = internal unnamed_addr constant [5 x i8] c"conv\00" ; [#uses=1 type=[5 x i8]*]

; [#uses=11]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @conv([29 x [29 x [8 x float]]]* %output, [32 x [32 x [1 x float]]]* %image, [4 x [4 x [1 x [8 x float]]]]* %weight, [8 x float]* %bias) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([29 x [29 x [8 x float]]]* %output) nounwind, !map !54
  call void (...)* @_ssdm_op_SpecBitsMap([32 x [32 x [1 x float]]]* %image) nounwind, !map !61
  call void (...)* @_ssdm_op_SpecBitsMap([4 x [4 x [1 x [8 x float]]]]* %weight) nounwind, !map !68
  call void (...)* @_ssdm_op_SpecBitsMap([8 x float]* %bias) nounwind, !map !74
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @conv.str) nounwind
  call void @llvm.dbg.value(metadata !{[29 x [29 x [8 x float]]]* %output}, i64 0, metadata !79), !dbg !82 ; [debug line = 6:17] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[32 x [32 x [1 x float]]]* %image}, i64 0, metadata !83), !dbg !86 ; [debug line = 6:42] [debug variable = image]
  call void @llvm.dbg.value(metadata !{[4 x [4 x [1 x [8 x float]]]]* %weight}, i64 0, metadata !87), !dbg !90 ; [debug line = 6:66] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[8 x float]* %bias}, i64 0, metadata !91), !dbg !94 ; [debug line = 6:92] [debug variable = bias]
  br label %1, !dbg !95                           ; [debug line = 15:6]

; <label>:1                                       ; preds = %10, %0
  %filter = phi i4 [ 0, %0 ], [ %filter.1, %10 ]  ; [#uses=3 type=i4]
  %exitcond5 = icmp eq i4 %filter, -8, !dbg !95   ; [#uses=1 type=i1] [debug line = 15:6]
  %2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond5, label %11, label %.preheader9.preheader, !dbg !95 ; [debug line = 15:6]

.preheader9.preheader:                            ; preds = %1
  %tmp = zext i4 %filter to i64, !dbg !98         ; [#uses=3 type=i64] [debug line = 27:8]
  %bias.addr = getelementptr [8 x float]* %bias, i64 0, i64 %tmp, !dbg !106 ; [#uses=1 type=float*] [debug line = 28:32]
  br label %.preheader9, !dbg !107                ; [debug line = 18:7]

.preheader9:                                      ; preds = %9, %.preheader9.preheader
  %i = phi i5 [ %i.1, %9 ], [ 0, %.preheader9.preheader ] ; [#uses=4 type=i5]
  %exitcond4 = icmp eq i5 %i, -3, !dbg !107       ; [#uses=1 type=i1] [debug line = 18:7]
  %3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 29, i64 29, i64 29) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond4, label %10, label %.preheader8.preheader, !dbg !107 ; [debug line = 18:7]

.preheader8.preheader:                            ; preds = %.preheader9
  %tmp.3 = zext i5 %i to i64, !dbg !106           ; [#uses=1 type=i64] [debug line = 28:32]
  br label %.preheader8, !dbg !108                ; [debug line = 19:8]

.preheader8:                                      ; preds = %8, %.preheader8.preheader
  %j = phi i5 [ %j.1, %8 ], [ 0, %.preheader8.preheader ] ; [#uses=4 type=i5]
  %exitcond3 = icmp eq i5 %j, -3, !dbg !108       ; [#uses=1 type=i1] [debug line = 19:8]
  %4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 29, i64 29, i64 29) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond3, label %9, label %.preheader7.preheader, !dbg !108 ; [debug line = 19:8]

.preheader7.preheader:                            ; preds = %.preheader8
  br label %.preheader7, !dbg !109                ; [debug line = 23:9]

.preheader7:                                      ; preds = %7, %.preheader7.preheader
  %sum = phi float [ %sum.1.lcssa, %7 ], [ 0.000000e+00, %.preheader7.preheader ] ; [#uses=2 type=float]
  %row_offset = phi i3 [ %row_offset.1, %7 ], [ 0, %.preheader7.preheader ] ; [#uses=4 type=i3]
  %row_offset.cast4 = zext i3 %row_offset to i5, !dbg !109 ; [#uses=1 type=i5] [debug line = 23:9]
  %exitcond2 = icmp eq i3 %row_offset, -4, !dbg !109 ; [#uses=1 type=i1] [debug line = 23:9]
  %5 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond2, label %8, label %.preheader6.preheader, !dbg !109 ; [debug line = 23:9]

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp.9 = add i5 %row_offset.cast4, %i, !dbg !98 ; [#uses=1 type=i5] [debug line = 27:8]
  %tmp. = zext i5 %tmp.9 to i64, !dbg !98         ; [#uses=1 type=i64] [debug line = 27:8]
  %tmp.1 = zext i3 %row_offset to i64, !dbg !98   ; [#uses=1 type=i64] [debug line = 27:8]
  br label %.preheader6, !dbg !110                ; [debug line = 25:10]

.preheader6:                                      ; preds = %.preheader.preheader, %.preheader6.preheader
  %sum.1 = phi float [ %sum.3, %.preheader.preheader ], [ %sum, %.preheader6.preheader ] ; [#uses=2 type=float]
  %col_offset = phi i3 [ %col_offset.1, %.preheader.preheader ], [ 0, %.preheader6.preheader ] ; [#uses=4 type=i3]
  %col_offset.cast2 = zext i3 %col_offset to i5, !dbg !110 ; [#uses=1 type=i5] [debug line = 25:10]
  %exitcond1 = icmp eq i3 %col_offset, -4, !dbg !110 ; [#uses=1 type=i1] [debug line = 25:10]
  %6 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond1, label %7, label %.preheader.preheader, !dbg !110 ; [debug line = 25:10]

.preheader.preheader:                             ; preds = %.preheader6
  %tmp.2 = add i5 %col_offset.cast2, %j, !dbg !98 ; [#uses=1 type=i5] [debug line = 27:8]
  %tmp.4 = zext i5 %tmp.2 to i64, !dbg !98        ; [#uses=1 type=i64] [debug line = 27:8]
  %tmp.8 = zext i3 %col_offset to i64, !dbg !98   ; [#uses=1 type=i64] [debug line = 27:8]
  %image.addr = getelementptr [32 x [32 x [1 x float]]]* %image, i64 0, i64 %tmp., i64 %tmp.4, i64 0, !dbg !98 ; [#uses=1 type=float*] [debug line = 27:8]
  %image.load = load float* %image.addr, align 4, !dbg !98 ; [#uses=1 type=float] [debug line = 27:8]
  %weight.addr = getelementptr [4 x [4 x [1 x [8 x float]]]]* %weight, i64 0, i64 %tmp.1, i64 %tmp.8, i64 0, i64 %tmp, !dbg !98 ; [#uses=1 type=float*] [debug line = 27:8]
  %weight.load = load float* %weight.addr, align 4, !dbg !98 ; [#uses=1 type=float] [debug line = 27:8]
  %tmp.5 = fmul float %image.load, %weight.load, !dbg !98 ; [#uses=1 type=float] [debug line = 27:8]
  %sum.3 = fadd float %sum.1, %tmp.5, !dbg !98    ; [#uses=1 type=float] [debug line = 27:8]
  %col_offset.1 = add i3 %col_offset, 1, !dbg !111 ; [#uses=1 type=i3] [debug line = 25:41]
  call void @llvm.dbg.value(metadata !{i3 %col_offset.1}, i64 0, metadata !112), !dbg !111 ; [debug line = 25:41] [debug variable = col_offset]
  br label %.preheader6, !dbg !111                ; [debug line = 25:41]

; <label>:7                                       ; preds = %.preheader6
  %sum.1.lcssa = phi float [ %sum.1, %.preheader6 ] ; [#uses=1 type=float]
  %row_offset.1 = add i3 %row_offset, 1, !dbg !113 ; [#uses=1 type=i3] [debug line = 23:40]
  call void @llvm.dbg.value(metadata !{i3 %row_offset.1}, i64 0, metadata !114), !dbg !113 ; [debug line = 23:40] [debug variable = row_offset]
  br label %.preheader7, !dbg !113                ; [debug line = 23:40]

; <label>:8                                       ; preds = %.preheader7
  %sum.lcssa = phi float [ %sum, %.preheader7 ]   ; [#uses=1 type=float]
  %bias.load = load float* %bias.addr, align 4, !dbg !106 ; [#uses=1 type=float] [debug line = 28:32]
  %a.assign = fadd float %sum.lcssa, %bias.load, !dbg !106 ; [#uses=3 type=float] [debug line = 28:32]
  call void @llvm.dbg.value(metadata !{float %a.assign}, i64 0, metadata !115), !dbg !116 ; [debug line = 4:18@28:32] [debug variable = a]
  %a.assign_to_int = bitcast float %a.assign to i32 ; [#uses=2 type=i32]
  %tmp.6 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %a.assign_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp.10 = trunc i32 %a.assign_to_int to i23     ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp.6, -1                 ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp.10, 0                ; [#uses=1 type=i1]
  %tmp.11 = or i1 %notrhs, %notlhs                ; [#uses=1 type=i1]
  %tmp.12 = fcmp ogt float %a.assign, 0.000000e+00, !dbg !117 ; [#uses=1 type=i1] [debug line = 6:2@28:32]
  %tmp.13 = and i1 %tmp.11, %tmp.12, !dbg !117    ; [#uses=1 type=i1] [debug line = 6:2@28:32]
  %a.assign.1 = select i1 %tmp.13, float %a.assign, float 0.000000e+00, !dbg !117 ; [#uses=1 type=float] [debug line = 6:2@28:32]
  call void @llvm.dbg.value(metadata !{float %a.assign.1}, i64 0, metadata !115), !dbg !117 ; [debug line = 6:2@28:32] [debug variable = a]
  %tmp.7 = zext i5 %j to i64, !dbg !106           ; [#uses=1 type=i64] [debug line = 28:32]
  %output.addr = getelementptr [29 x [29 x [8 x float]]]* %output, i64 0, i64 %tmp.3, i64 %tmp.7, i64 %tmp, !dbg !106 ; [#uses=1 type=float*] [debug line = 28:32]
  store float %a.assign.1, float* %output.addr, align 4, !dbg !106 ; [debug line = 28:32]
  %j.1 = add i5 %j, 1, !dbg !119                  ; [#uses=1 type=i5] [debug line = 19:33]
  call void @llvm.dbg.value(metadata !{i5 %j.1}, i64 0, metadata !120), !dbg !119 ; [debug line = 19:33] [debug variable = j]
  br label %.preheader8, !dbg !119                ; [debug line = 19:33]

; <label>:9                                       ; preds = %.preheader8
  %i.1 = add i5 %i, 1, !dbg !121                  ; [#uses=1 type=i5] [debug line = 18:32]
  call void @llvm.dbg.value(metadata !{i5 %i.1}, i64 0, metadata !122), !dbg !121 ; [debug line = 18:32] [debug variable = i]
  br label %.preheader9, !dbg !121                ; [debug line = 18:32]

; <label>:10                                      ; preds = %.preheader9
  %filter.1 = add i4 %filter, 1, !dbg !123        ; [#uses=1 type=i4] [debug line = 15:30]
  call void @llvm.dbg.value(metadata !{i4 %filter.1}, i64 0, metadata !124), !dbg !123 ; [debug line = 15:30] [debug variable = filter]
  br label %1, !dbg !123                          ; [debug line = 15:30]

; <label>:11                                      ; preds = %1
  ret void, !dbg !125                             ; [debug line = 31:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=5]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

; [#uses=4]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=1]
declare i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!41, !48}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/conv/solution1/.autopilot/db/conv.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !31} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !12}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"relu", metadata !"relu", metadata !"", metadata !6, i32 4, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !10, i32 5} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"/home/sergiu/git/lic/hls/workspace/conv/headers/activations.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !9}
!9 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!10 = metadata !{metadata !11}
!11 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!12 = metadata !{i32 786478, i32 0, metadata !13, metadata !"conv", metadata !"conv", metadata !"", metadata !13, i32 6, metadata !14, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !10, i32 7} ; [ DW_TAG_subprogram ]
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
!41 = metadata !{null, metadata !42, metadata !43, metadata !44, metadata !45, metadata !46, metadata !47}
!42 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!43 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!44 = metadata !{metadata !"kernel_arg_type", metadata !"float"}
!45 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!46 = metadata !{metadata !"kernel_arg_name", metadata !"a"}
!47 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!48 = metadata !{null, metadata !49, metadata !50, metadata !51, metadata !52, metadata !53, metadata !47}
!49 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1}
!50 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!51 = metadata !{metadata !"kernel_arg_type", metadata !"float [29][8]*", metadata !"float [32][1]*", metadata !"float [4][1][8]*", metadata !"float*"}
!52 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!53 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"image", metadata !"weight", metadata !"bias"}
!54 = metadata !{metadata !55}
!55 = metadata !{i32 0, i32 31, metadata !56}
!56 = metadata !{metadata !57}
!57 = metadata !{metadata !"output", metadata !58, metadata !"float", i32 0, i32 31}
!58 = metadata !{metadata !59, metadata !59, metadata !60}
!59 = metadata !{i32 0, i32 28, i32 1}
!60 = metadata !{i32 0, i32 7, i32 1}
!61 = metadata !{metadata !62}
!62 = metadata !{i32 0, i32 31, metadata !63}
!63 = metadata !{metadata !64}
!64 = metadata !{metadata !"image", metadata !65, metadata !"float", i32 0, i32 31}
!65 = metadata !{metadata !66, metadata !66, metadata !67}
!66 = metadata !{i32 0, i32 31, i32 1}
!67 = metadata !{i32 0, i32 0, i32 1}
!68 = metadata !{metadata !69}
!69 = metadata !{i32 0, i32 31, metadata !70}
!70 = metadata !{metadata !71}
!71 = metadata !{metadata !"weight", metadata !72, metadata !"float", i32 0, i32 31}
!72 = metadata !{metadata !73, metadata !73, metadata !67, metadata !60}
!73 = metadata !{i32 0, i32 3, i32 1}
!74 = metadata !{metadata !75}
!75 = metadata !{i32 0, i32 31, metadata !76}
!76 = metadata !{metadata !77}
!77 = metadata !{metadata !"bias", metadata !78, metadata !"float", i32 0, i32 31}
!78 = metadata !{metadata !60}
!79 = metadata !{i32 786689, metadata !12, metadata !"output", null, i32 6, metadata !80, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!80 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 215296, i64 32, i32 0, i32 0, metadata !9, metadata !81, i32 0, i32 0} ; [ DW_TAG_array_type ]
!81 = metadata !{metadata !19, metadata !19, metadata !20}
!82 = metadata !{i32 6, i32 17, metadata !12, null}
!83 = metadata !{i32 786689, metadata !12, metadata !"image", null, i32 6, metadata !84, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!84 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32768, i64 32, i32 0, i32 0, metadata !9, metadata !85, i32 0, i32 0} ; [ DW_TAG_array_type ]
!85 = metadata !{metadata !24, metadata !24, metadata !25}
!86 = metadata !{i32 6, i32 42, metadata !12, null}
!87 = metadata !{i32 786689, metadata !12, metadata !"weight", null, i32 6, metadata !88, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!88 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 4096, i64 32, i32 0, i32 0, metadata !9, metadata !89, i32 0, i32 0} ; [ DW_TAG_array_type ]
!89 = metadata !{metadata !29, metadata !29, metadata !25, metadata !20}
!90 = metadata !{i32 6, i32 66, metadata !12, null}
!91 = metadata !{i32 786689, metadata !12, metadata !"bias", null, i32 6, metadata !92, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!92 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 256, i64 32, i32 0, i32 0, metadata !9, metadata !93, i32 0, i32 0} ; [ DW_TAG_array_type ]
!93 = metadata !{metadata !20}
!94 = metadata !{i32 6, i32 92, metadata !12, null}
!95 = metadata !{i32 15, i32 6, metadata !96, null}
!96 = metadata !{i32 786443, metadata !97, i32 15, i32 2, metadata !13, i32 2} ; [ DW_TAG_lexical_block ]
!97 = metadata !{i32 786443, metadata !12, i32 7, i32 1, metadata !13, i32 1} ; [ DW_TAG_lexical_block ]
!98 = metadata !{i32 27, i32 8, metadata !99, null}
!99 = metadata !{i32 786443, metadata !100, i32 26, i32 7, metadata !13, i32 9} ; [ DW_TAG_lexical_block ]
!100 = metadata !{i32 786443, metadata !101, i32 25, i32 6, metadata !13, i32 8} ; [ DW_TAG_lexical_block ]
!101 = metadata !{i32 786443, metadata !102, i32 23, i32 5, metadata !13, i32 7} ; [ DW_TAG_lexical_block ]
!102 = metadata !{i32 786443, metadata !103, i32 20, i32 4, metadata !13, i32 6} ; [ DW_TAG_lexical_block ]
!103 = metadata !{i32 786443, metadata !104, i32 19, i32 4, metadata !13, i32 5} ; [ DW_TAG_lexical_block ]
!104 = metadata !{i32 786443, metadata !105, i32 18, i32 3, metadata !13, i32 4} ; [ DW_TAG_lexical_block ]
!105 = metadata !{i32 786443, metadata !96, i32 16, i32 2, metadata !13, i32 3} ; [ DW_TAG_lexical_block ]
!106 = metadata !{i32 28, i32 32, metadata !102, null}
!107 = metadata !{i32 18, i32 7, metadata !104, null}
!108 = metadata !{i32 19, i32 8, metadata !103, null}
!109 = metadata !{i32 23, i32 9, metadata !101, null}
!110 = metadata !{i32 25, i32 10, metadata !100, null}
!111 = metadata !{i32 25, i32 41, metadata !100, null}
!112 = metadata !{i32 786688, metadata !97, metadata !"col_offset", metadata !13, i32 10, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!113 = metadata !{i32 23, i32 40, metadata !101, null}
!114 = metadata !{i32 786688, metadata !97, metadata !"row_offset", metadata !13, i32 10, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!115 = metadata !{i32 786689, metadata !5, metadata !"a", metadata !6, i32 16777220, metadata !9, i32 0, metadata !106} ; [ DW_TAG_arg_variable ]
!116 = metadata !{i32 4, i32 18, metadata !5, metadata !106}
!117 = metadata !{i32 6, i32 2, metadata !118, metadata !106}
!118 = metadata !{i32 786443, metadata !5, i32 5, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!119 = metadata !{i32 19, i32 33, metadata !103, null}
!120 = metadata !{i32 786688, metadata !97, metadata !"j", metadata !13, i32 8, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!121 = metadata !{i32 18, i32 32, metadata !104, null}
!122 = metadata !{i32 786688, metadata !97, metadata !"i", metadata !13, i32 8, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!123 = metadata !{i32 15, i32 30, metadata !96, null}
!124 = metadata !{i32 786688, metadata !97, metadata !"filter", metadata !13, i32 8, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!125 = metadata !{i32 31, i32 1, metadata !97, null}
