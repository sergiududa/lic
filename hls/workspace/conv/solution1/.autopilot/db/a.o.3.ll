; ModuleID = '/home/sergiu/git/lic/hls/workspace/conv/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@conv_str = internal unnamed_addr constant [5 x i8] c"conv\00" ; [#uses=1 type=[5 x i8]*]

; [#uses=1]
declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

; [#uses=11]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @conv([6728 x float]* %output, [1024 x float]* %image, [128 x float]* %weight, [8 x float]* %bias) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([6728 x float]* %output) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecBitsMap([1024 x float]* %image) nounwind, !map !20
  call void (...)* @_ssdm_op_SpecBitsMap([128 x float]* %weight) nounwind, !map !27
  call void (...)* @_ssdm_op_SpecBitsMap([8 x float]* %bias) nounwind, !map !33
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @conv_str) nounwind
  call void @llvm.dbg.value(metadata !{[6728 x float]* %output}, i64 0, metadata !38), !dbg !63 ; [debug line = 6:17] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[1024 x float]* %image}, i64 0, metadata !64), !dbg !67 ; [debug line = 6:42] [debug variable = image]
  call void @llvm.dbg.value(metadata !{[128 x float]* %weight}, i64 0, metadata !68), !dbg !71 ; [debug line = 6:66] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[8 x float]* %bias}, i64 0, metadata !72), !dbg !75 ; [debug line = 6:92] [debug variable = bias]
  br label %.loopexit, !dbg !76                   ; [debug line = 15:6]

.loopexit.loopexit:                               ; preds = %.preheader9
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %filter = phi i4 [ 0, %0 ], [ %filter_1, %.loopexit.loopexit ] ; [#uses=5 type=i4]
  %exitcond5 = icmp eq i4 %filter, -8, !dbg !76   ; [#uses=1 type=i1] [debug line = 15:6]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind ; [#uses=0 type=i32]
  %filter_1 = add i4 %filter, 1, !dbg !79         ; [#uses=1 type=i4] [debug line = 15:30]
  call void @llvm.dbg.value(metadata !{i4 %filter_1}, i64 0, metadata !80), !dbg !79 ; [debug line = 15:30] [debug variable = filter]
  br i1 %exitcond5, label %2, label %.preheader9.preheader, !dbg !76 ; [debug line = 15:6]

.preheader9.preheader:                            ; preds = %.loopexit
  %tmp = zext i4 %filter to i64, !dbg !82         ; [#uses=1 type=i64] [debug line = 27:8]
  %tmp_cast1 = zext i4 %filter to i9, !dbg !90    ; [#uses=1 type=i9] [debug line = 28:32]
  %tmp_cast = zext i4 %filter to i14, !dbg !90    ; [#uses=1 type=i14] [debug line = 28:32]
  %bias_addr = getelementptr [8 x float]* %bias, i64 0, i64 %tmp, !dbg !90 ; [#uses=1 type=float*] [debug line = 28:32]
  br label %.preheader9, !dbg !91                 ; [debug line = 18:7]

.preheader9.loopexit:                             ; preds = %.preheader8
  br label %.preheader9

.preheader9:                                      ; preds = %.preheader9.loopexit, %.preheader9.preheader
  %i = phi i5 [ 0, %.preheader9.preheader ], [ %i_1, %.preheader9.loopexit ] ; [#uses=3 type=i5]
  %phi_mul = phi i10 [ 0, %.preheader9.preheader ], [ %next_mul, %.preheader9.loopexit ] ; [#uses=2 type=i10]
  %next_mul = add i10 %phi_mul, 29                ; [#uses=1 type=i10]
  %exitcond4 = icmp eq i5 %i, -3, !dbg !91        ; [#uses=1 type=i1] [debug line = 18:7]
  %empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 29, i64 29, i64 29) nounwind ; [#uses=0 type=i32]
  %i_1 = add i5 %i, 1, !dbg !92                   ; [#uses=1 type=i5] [debug line = 18:32]
  call void @llvm.dbg.value(metadata !{i5 %i_1}, i64 0, metadata !93), !dbg !92 ; [debug line = 18:32] [debug variable = i]
  br i1 %exitcond4, label %.loopexit.loopexit, label %.preheader8.preheader, !dbg !91 ; [debug line = 18:7]

.preheader8.preheader:                            ; preds = %.preheader9
  br label %.preheader8, !dbg !94                 ; [debug line = 19:8]

.preheader8:                                      ; preds = %1, %.preheader8.preheader
  %j = phi i5 [ %j_1, %1 ], [ 0, %.preheader8.preheader ] ; [#uses=4 type=i5]
  %exitcond3 = icmp eq i5 %j, -3, !dbg !94        ; [#uses=1 type=i1] [debug line = 19:8]
  %empty_5 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 29, i64 29, i64 29) nounwind ; [#uses=0 type=i32]
  %j_1 = add i5 %j, 1, !dbg !95                   ; [#uses=1 type=i5] [debug line = 19:33]
  br i1 %exitcond3, label %.preheader9.loopexit, label %.preheader7.preheader, !dbg !94 ; [debug line = 19:8]

.preheader7.preheader:                            ; preds = %.preheader8
  br label %.preheader7, !dbg !96                 ; [debug line = 23:9]

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.loopexit, %.preheader7.preheader
  %sum = phi float [ %sum_1, %.preheader7.loopexit ], [ 0.000000e+00, %.preheader7.preheader ] ; [#uses=2 type=float]
  %row_offset = phi i3 [ %row_offset_1, %.preheader7.loopexit ], [ 0, %.preheader7.preheader ] ; [#uses=4 type=i3]
  %row_offset_cast4 = zext i3 %row_offset to i5, !dbg !96 ; [#uses=1 type=i5] [debug line = 23:9]
  %exitcond2 = icmp eq i3 %row_offset, -4, !dbg !96 ; [#uses=1 type=i1] [debug line = 23:9]
  %empty_6 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind ; [#uses=0 type=i32]
  %row_offset_1 = add i3 %row_offset, 1, !dbg !97 ; [#uses=1 type=i3] [debug line = 23:40]
  call void @llvm.dbg.value(metadata !{i3 %row_offset_1}, i64 0, metadata !98), !dbg !97 ; [debug line = 23:40] [debug variable = row_offset]
  br i1 %exitcond2, label %1, label %.preheader6.preheader, !dbg !96 ; [debug line = 23:9]

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_9 = add i5 %i, %row_offset_cast4, !dbg !82 ; [#uses=1 type=i5] [debug line = 27:8]
  %tmp_11 = call i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3 %row_offset, i2 0) ; [#uses=1 type=i5]
  %tmp_17_cast = zext i5 %tmp_11 to i6, !dbg !99  ; [#uses=1 type=i6] [debug line = 25:10]
  br label %.preheader6, !dbg !99                 ; [debug line = 25:10]

.preheader6:                                      ; preds = %.preheader.preheader, %.preheader6.preheader
  %sum_1 = phi float [ %sum_3, %.preheader.preheader ], [ %sum, %.preheader6.preheader ] ; [#uses=2 type=float]
  %col_offset = phi i3 [ %col_offset_1, %.preheader.preheader ], [ 0, %.preheader6.preheader ] ; [#uses=4 type=i3]
  %col_offset_cast2 = zext i3 %col_offset to i5, !dbg !99 ; [#uses=1 type=i5] [debug line = 25:10]
  %exitcond1 = icmp eq i3 %col_offset, -4, !dbg !99 ; [#uses=1 type=i1] [debug line = 25:10]
  %empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind ; [#uses=0 type=i32]
  %col_offset_1 = add i3 %col_offset, 1, !dbg !100 ; [#uses=1 type=i3] [debug line = 25:41]
  br i1 %exitcond1, label %.preheader7.loopexit, label %.preheader.preheader, !dbg !99 ; [debug line = 25:10]

.preheader.preheader:                             ; preds = %.preheader6
  %tmp_2 = add i5 %col_offset_cast2, %j, !dbg !82 ; [#uses=1 type=i5] [debug line = 27:8]
  %tmp_12 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %tmp_9, i5 %tmp_2) ; [#uses=1 type=i10]
  %tmp_13 = zext i10 %tmp_12 to i64, !dbg !82     ; [#uses=1 type=i64] [debug line = 27:8]
  %image_addr = getelementptr [1024 x float]* %image, i64 0, i64 %tmp_13, !dbg !82 ; [#uses=1 type=float*] [debug line = 27:8]
  %tmp_8_cast = zext i3 %col_offset to i6, !dbg !82 ; [#uses=1 type=i6] [debug line = 27:8]
  %tmp_14 = add i6 %tmp_17_cast, %tmp_8_cast, !dbg !82 ; [#uses=1 type=i6] [debug line = 27:8]
  %tmp_22_cast = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_14, i3 0), !dbg !82 ; [#uses=1 type=i9] [debug line = 27:8]
  %tmp_15 = add i9 %tmp_22_cast, %tmp_cast1, !dbg !82 ; [#uses=1 type=i9] [debug line = 27:8]
  %tmp_23_cast = zext i9 %tmp_15 to i64, !dbg !82 ; [#uses=1 type=i64] [debug line = 27:8]
  %weight_addr = getelementptr [128 x float]* %weight, i64 0, i64 %tmp_23_cast, !dbg !82 ; [#uses=1 type=float*] [debug line = 27:8]
  %image_load = load float* %image_addr, align 4, !dbg !82 ; [#uses=1 type=float] [debug line = 27:8]
  %weight_load = load float* %weight_addr, align 4, !dbg !82 ; [#uses=1 type=float] [debug line = 27:8]
  %tmp_5 = fmul float %image_load, %weight_load, !dbg !82 ; [#uses=1 type=float] [debug line = 27:8]
  %sum_3 = fadd float %sum_1, %tmp_5, !dbg !82    ; [#uses=1 type=float] [debug line = 27:8]
  call void @llvm.dbg.value(metadata !{i3 %col_offset_1}, i64 0, metadata !101), !dbg !100 ; [debug line = 25:41] [debug variable = col_offset]
  br label %.preheader6, !dbg !100                ; [debug line = 25:41]

; <label>:1                                       ; preds = %.preheader7
  %bias_load = load float* %bias_addr, align 4, !dbg !90 ; [#uses=1 type=float] [debug line = 28:32]
  %a_assign = fadd float %sum, %bias_load, !dbg !90 ; [#uses=3 type=float] [debug line = 28:32]
  call void @llvm.dbg.value(metadata !{float %a_assign}, i64 0, metadata !102), !dbg !107 ; [debug line = 4:18@28:32] [debug variable = a]
  %a_assign_to_int = bitcast float %a_assign to i32 ; [#uses=2 type=i32]
  %tmp_6 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %a_assign_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_1 = trunc i32 %a_assign_to_int to i23      ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp_6, -1                 ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp_1, 0                 ; [#uses=1 type=i1]
  %tmp_4 = or i1 %notrhs, %notlhs                 ; [#uses=1 type=i1]
  %tmp_s = fcmp ogt float %a_assign, 0.000000e+00, !dbg !108 ; [#uses=1 type=i1] [debug line = 6:2@28:32]
  %tmp_3 = and i1 %tmp_4, %tmp_s, !dbg !108       ; [#uses=1 type=i1] [debug line = 6:2@28:32]
  %a_assign_1 = select i1 %tmp_3, float %a_assign, float 0.000000e+00, !dbg !108 ; [#uses=1 type=float] [debug line = 6:2@28:32]
  call void @llvm.dbg.value(metadata !{float %a_assign_1}, i64 0, metadata !102), !dbg !108 ; [debug line = 6:2@28:32] [debug variable = a]
  %tmp_7_cast = zext i5 %j to i10, !dbg !90       ; [#uses=1 type=i10] [debug line = 28:32]
  %tmp_7 = add i10 %tmp_7_cast, %phi_mul, !dbg !90 ; [#uses=1 type=i10] [debug line = 28:32]
  %tmp_8 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_7, i3 0) ; [#uses=1 type=i13]
  %tmp_14_cast = zext i13 %tmp_8 to i14, !dbg !90 ; [#uses=1 type=i14] [debug line = 28:32]
  %tmp_10 = add i14 %tmp_cast, %tmp_14_cast, !dbg !90 ; [#uses=1 type=i14] [debug line = 28:32]
  %tmp_15_cast = zext i14 %tmp_10 to i64, !dbg !90 ; [#uses=1 type=i64] [debug line = 28:32]
  %output_addr = getelementptr [6728 x float]* %output, i64 0, i64 %tmp_15_cast, !dbg !90 ; [#uses=1 type=float*] [debug line = 28:32]
  store float %a_assign_1, float* %output_addr, align 4, !dbg !90 ; [debug line = 28:32]
  call void @llvm.dbg.value(metadata !{i5 %j_1}, i64 0, metadata !110), !dbg !95 ; [debug line = 19:33] [debug variable = j]
  br label %.preheader8, !dbg !95                 ; [debug line = 19:33]

; <label>:2                                       ; preds = %.loopexit
  ret void, !dbg !111                             ; [debug line = 31:1]
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=5]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=4]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=1]
define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_8 = trunc i32 %empty to i8               ; [#uses=1 type=i8]
  ret i8 %empty_8
}

; [#uses=0]
declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
define weak i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6, i3) nounwind readnone {
entry:
  %empty = zext i6 %0 to i9                       ; [#uses=1 type=i9]
  %empty_9 = zext i3 %1 to i9                     ; [#uses=1 type=i9]
  %empty_10 = shl i9 %empty, 3                    ; [#uses=1 type=i9]
  %empty_11 = or i9 %empty_10, %empty_9           ; [#uses=1 type=i9]
  ret i9 %empty_11
}

; [#uses=1]
define weak i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3, i2) nounwind readnone {
entry:
  %empty = zext i3 %0 to i5                       ; [#uses=1 type=i5]
  %empty_12 = zext i2 %1 to i5                    ; [#uses=1 type=i5]
  %empty_13 = shl i5 %empty, 2                    ; [#uses=1 type=i5]
  %empty_14 = or i5 %empty_13, %empty_12          ; [#uses=1 type=i5]
  ret i5 %empty_14
}

; [#uses=1]
define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13                     ; [#uses=1 type=i13]
  %empty_15 = zext i3 %1 to i13                   ; [#uses=1 type=i13]
  %empty_16 = shl i13 %empty, 3                   ; [#uses=1 type=i13]
  %empty_17 = or i13 %empty_16, %empty_15         ; [#uses=1 type=i13]
  ret i13 %empty_17
}

; [#uses=1]
define weak i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %0 to i10                      ; [#uses=1 type=i10]
  %empty_18 = zext i5 %1 to i10                   ; [#uses=1 type=i10]
  %empty_19 = shl i10 %empty, 5                   ; [#uses=1 type=i10]
  %empty_20 = or i10 %empty_19, %empty_18         ; [#uses=1 type=i10]
  ret i10 %empty_20
}

!opencl.kernels = !{!0, !7}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"float"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"a"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"float [29][8]*", metadata !"float [32][1]*", metadata !"float [4][1][8]*", metadata !"float*"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"image", metadata !"weight", metadata !"bias"}
!13 = metadata !{metadata !14}
!14 = metadata !{i32 0, i32 31, metadata !15}
!15 = metadata !{metadata !16}
!16 = metadata !{metadata !"output", metadata !17, metadata !"float", i32 0, i32 31}
!17 = metadata !{metadata !18, metadata !18, metadata !19}
!18 = metadata !{i32 0, i32 28, i32 1}
!19 = metadata !{i32 0, i32 7, i32 1}
!20 = metadata !{metadata !21}
!21 = metadata !{i32 0, i32 31, metadata !22}
!22 = metadata !{metadata !23}
!23 = metadata !{metadata !"image", metadata !24, metadata !"float", i32 0, i32 31}
!24 = metadata !{metadata !25, metadata !25, metadata !26}
!25 = metadata !{i32 0, i32 31, i32 1}
!26 = metadata !{i32 0, i32 0, i32 1}
!27 = metadata !{metadata !28}
!28 = metadata !{i32 0, i32 31, metadata !29}
!29 = metadata !{metadata !30}
!30 = metadata !{metadata !"weight", metadata !31, metadata !"float", i32 0, i32 31}
!31 = metadata !{metadata !32, metadata !32, metadata !26, metadata !19}
!32 = metadata !{i32 0, i32 3, i32 1}
!33 = metadata !{metadata !34}
!34 = metadata !{i32 0, i32 31, metadata !35}
!35 = metadata !{metadata !36}
!36 = metadata !{metadata !"bias", metadata !37, metadata !"float", i32 0, i32 31}
!37 = metadata !{metadata !19}
!38 = metadata !{i32 786689, metadata !39, metadata !"output", null, i32 6, metadata !61, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!39 = metadata !{i32 786478, i32 0, metadata !40, metadata !"conv", metadata !"conv", metadata !"", metadata !40, i32 6, metadata !41, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !59, i32 7} ; [ DW_TAG_subprogram ]
!40 = metadata !{i32 786473, metadata !"conv/solution1/conv.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!41 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !42, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!42 = metadata !{null, metadata !43, metadata !49, metadata !54, metadata !58}
!43 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !44} ; [ DW_TAG_pointer_type ]
!44 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 7424, i64 32, i32 0, i32 0, metadata !45, metadata !46, i32 0, i32 0} ; [ DW_TAG_array_type ]
!45 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!46 = metadata !{metadata !47, metadata !48}
!47 = metadata !{i32 786465, i64 0, i64 28}       ; [ DW_TAG_subrange_type ]
!48 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!49 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !50} ; [ DW_TAG_pointer_type ]
!50 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1024, i64 32, i32 0, i32 0, metadata !45, metadata !51, i32 0, i32 0} ; [ DW_TAG_array_type ]
!51 = metadata !{metadata !52, metadata !53}
!52 = metadata !{i32 786465, i64 0, i64 31}       ; [ DW_TAG_subrange_type ]
!53 = metadata !{i32 786465, i64 0, i64 0}        ; [ DW_TAG_subrange_type ]
!54 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !55} ; [ DW_TAG_pointer_type ]
!55 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1024, i64 32, i32 0, i32 0, metadata !45, metadata !56, i32 0, i32 0} ; [ DW_TAG_array_type ]
!56 = metadata !{metadata !57, metadata !53, metadata !48}
!57 = metadata !{i32 786465, i64 0, i64 3}        ; [ DW_TAG_subrange_type ]
!58 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !45} ; [ DW_TAG_pointer_type ]
!59 = metadata !{metadata !60}
!60 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!61 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 215296, i64 32, i32 0, i32 0, metadata !45, metadata !62, i32 0, i32 0} ; [ DW_TAG_array_type ]
!62 = metadata !{metadata !47, metadata !47, metadata !48}
!63 = metadata !{i32 6, i32 17, metadata !39, null}
!64 = metadata !{i32 786689, metadata !39, metadata !"image", null, i32 6, metadata !65, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!65 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32768, i64 32, i32 0, i32 0, metadata !45, metadata !66, i32 0, i32 0} ; [ DW_TAG_array_type ]
!66 = metadata !{metadata !52, metadata !52, metadata !53}
!67 = metadata !{i32 6, i32 42, metadata !39, null}
!68 = metadata !{i32 786689, metadata !39, metadata !"weight", null, i32 6, metadata !69, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!69 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 4096, i64 32, i32 0, i32 0, metadata !45, metadata !70, i32 0, i32 0} ; [ DW_TAG_array_type ]
!70 = metadata !{metadata !57, metadata !57, metadata !53, metadata !48}
!71 = metadata !{i32 6, i32 66, metadata !39, null}
!72 = metadata !{i32 786689, metadata !39, metadata !"bias", null, i32 6, metadata !73, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!73 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 256, i64 32, i32 0, i32 0, metadata !45, metadata !74, i32 0, i32 0} ; [ DW_TAG_array_type ]
!74 = metadata !{metadata !48}
!75 = metadata !{i32 6, i32 92, metadata !39, null}
!76 = metadata !{i32 15, i32 6, metadata !77, null}
!77 = metadata !{i32 786443, metadata !78, i32 15, i32 2, metadata !40, i32 2} ; [ DW_TAG_lexical_block ]
!78 = metadata !{i32 786443, metadata !39, i32 7, i32 1, metadata !40, i32 1} ; [ DW_TAG_lexical_block ]
!79 = metadata !{i32 15, i32 30, metadata !77, null}
!80 = metadata !{i32 786688, metadata !78, metadata !"filter", metadata !40, i32 8, metadata !81, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!81 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!82 = metadata !{i32 27, i32 8, metadata !83, null}
!83 = metadata !{i32 786443, metadata !84, i32 26, i32 7, metadata !40, i32 9} ; [ DW_TAG_lexical_block ]
!84 = metadata !{i32 786443, metadata !85, i32 25, i32 6, metadata !40, i32 8} ; [ DW_TAG_lexical_block ]
!85 = metadata !{i32 786443, metadata !86, i32 23, i32 5, metadata !40, i32 7} ; [ DW_TAG_lexical_block ]
!86 = metadata !{i32 786443, metadata !87, i32 20, i32 4, metadata !40, i32 6} ; [ DW_TAG_lexical_block ]
!87 = metadata !{i32 786443, metadata !88, i32 19, i32 4, metadata !40, i32 5} ; [ DW_TAG_lexical_block ]
!88 = metadata !{i32 786443, metadata !89, i32 18, i32 3, metadata !40, i32 4} ; [ DW_TAG_lexical_block ]
!89 = metadata !{i32 786443, metadata !77, i32 16, i32 2, metadata !40, i32 3} ; [ DW_TAG_lexical_block ]
!90 = metadata !{i32 28, i32 32, metadata !86, null}
!91 = metadata !{i32 18, i32 7, metadata !88, null}
!92 = metadata !{i32 18, i32 32, metadata !88, null}
!93 = metadata !{i32 786688, metadata !78, metadata !"i", metadata !40, i32 8, metadata !81, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!94 = metadata !{i32 19, i32 8, metadata !87, null}
!95 = metadata !{i32 19, i32 33, metadata !87, null}
!96 = metadata !{i32 23, i32 9, metadata !85, null}
!97 = metadata !{i32 23, i32 40, metadata !85, null}
!98 = metadata !{i32 786688, metadata !78, metadata !"row_offset", metadata !40, i32 10, metadata !81, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!99 = metadata !{i32 25, i32 10, metadata !84, null}
!100 = metadata !{i32 25, i32 41, metadata !84, null}
!101 = metadata !{i32 786688, metadata !78, metadata !"col_offset", metadata !40, i32 10, metadata !81, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!102 = metadata !{i32 786689, metadata !103, metadata !"a", metadata !104, i32 16777220, metadata !45, i32 0, metadata !90} ; [ DW_TAG_arg_variable ]
!103 = metadata !{i32 786478, i32 0, metadata !104, metadata !"relu", metadata !"relu", metadata !"", metadata !104, i32 4, metadata !105, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !59, i32 5} ; [ DW_TAG_subprogram ]
!104 = metadata !{i32 786473, metadata !"/home/sergiu/git/lic/hls/workspace/conv/headers/activations.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!105 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !106, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!106 = metadata !{metadata !45, metadata !45}
!107 = metadata !{i32 4, i32 18, metadata !103, metadata !90}
!108 = metadata !{i32 6, i32 2, metadata !109, metadata !90}
!109 = metadata !{i32 786443, metadata !103, i32 5, i32 1, metadata !104, i32 0} ; [ DW_TAG_lexical_block ]
!110 = metadata !{i32 786688, metadata !78, metadata !"j", metadata !40, i32 8, metadata !81, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!111 = metadata !{i32 31, i32 1, metadata !78, null}
