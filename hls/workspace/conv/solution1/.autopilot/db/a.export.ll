; ModuleID = '/home/sergiu/git/lic/hls/workspace/conv/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@conv_str = internal unnamed_addr constant [5 x i8] c"conv\00"

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define void @conv([6728 x float]* %output_r, [1024 x float]* %image_r, [128 x float]* %weight, [8 x float]* %bias) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([6728 x float]* %output_r) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecBitsMap([1024 x float]* %image_r) nounwind, !map !20
  call void (...)* @_ssdm_op_SpecBitsMap([128 x float]* %weight) nounwind, !map !27
  call void (...)* @_ssdm_op_SpecBitsMap([8 x float]* %bias) nounwind, !map !33
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @conv_str) nounwind
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader9
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %filter = phi i4 [ 0, %0 ], [ %filter_1, %.loopexit.loopexit ]
  %exitcond5 = icmp eq i4 %filter, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %filter_1 = add i4 %filter, 1
  br i1 %exitcond5, label %2, label %.preheader9.preheader

.preheader9.preheader:                            ; preds = %.loopexit
  %tmp = zext i4 %filter to i64
  %tmp_cast1 = zext i4 %filter to i9
  %tmp_cast = zext i4 %filter to i14
  %bias_addr = getelementptr [8 x float]* %bias, i64 0, i64 %tmp
  br label %.preheader9

.preheader9.loopexit:                             ; preds = %.preheader8
  br label %.preheader9

.preheader9:                                      ; preds = %.preheader9.loopexit, %.preheader9.preheader
  %i = phi i5 [ 0, %.preheader9.preheader ], [ %i_1, %.preheader9.loopexit ]
  %phi_mul = phi i10 [ 0, %.preheader9.preheader ], [ %next_mul, %.preheader9.loopexit ]
  %next_mul = add i10 %phi_mul, 29
  %exitcond4 = icmp eq i5 %i, -3
  %empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 29, i64 29, i64 29) nounwind
  %i_1 = add i5 %i, 1
  br i1 %exitcond4, label %.loopexit.loopexit, label %.preheader8.preheader

.preheader8.preheader:                            ; preds = %.preheader9
  br label %.preheader8

.preheader8:                                      ; preds = %.preheader8.preheader, %1
  %j = phi i5 [ %j_1, %1 ], [ 0, %.preheader8.preheader ]
  %exitcond3 = icmp eq i5 %j, -3
  %empty_5 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 29, i64 29, i64 29) nounwind
  %j_1 = add i5 %j, 1
  br i1 %exitcond3, label %.preheader9.loopexit, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.preheader8
  br label %.preheader7

.preheader7.loopexit:                             ; preds = %.preheader6
  br label %.preheader7

.preheader7:                                      ; preds = %.preheader7.preheader, %.preheader7.loopexit
  %sum = phi float [ %sum_1, %.preheader7.loopexit ], [ 0.000000e+00, %.preheader7.preheader ]
  %row_offset = phi i3 [ %row_offset_1, %.preheader7.loopexit ], [ 0, %.preheader7.preheader ]
  %row_offset_cast4 = zext i3 %row_offset to i5
  %exitcond2 = icmp eq i3 %row_offset, -4
  %empty_6 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %row_offset_1 = add i3 %row_offset, 1
  br i1 %exitcond2, label %1, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %.preheader7
  %tmp_9 = add i5 %i, %row_offset_cast4
  %tmp_11 = call i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3 %row_offset, i2 0)
  %tmp_17_cast = zext i5 %tmp_11 to i6
  br label %.preheader6

.preheader6:                                      ; preds = %.preheader.preheader, %.preheader6.preheader
  %sum_1 = phi float [ %sum_3, %.preheader.preheader ], [ %sum, %.preheader6.preheader ]
  %col_offset = phi i3 [ %col_offset_1, %.preheader.preheader ], [ 0, %.preheader6.preheader ]
  %col_offset_cast2 = zext i3 %col_offset to i5
  %exitcond1 = icmp eq i3 %col_offset, -4
  %empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4) nounwind
  %col_offset_1 = add i3 %col_offset, 1
  br i1 %exitcond1, label %.preheader7.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader6
  %tmp_2 = add i5 %col_offset_cast2, %j
  %tmp_12 = call i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5 %tmp_9, i5 %tmp_2)
  %tmp_13 = zext i10 %tmp_12 to i64
  %image_addr = getelementptr [1024 x float]* %image_r, i64 0, i64 %tmp_13
  %tmp_8_cast = zext i3 %col_offset to i6
  %tmp_14 = add i6 %tmp_17_cast, %tmp_8_cast
  %tmp_22_cast = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_14, i3 0)
  %tmp_15 = add i9 %tmp_22_cast, %tmp_cast1
  %tmp_23_cast = zext i9 %tmp_15 to i64
  %weight_addr = getelementptr [128 x float]* %weight, i64 0, i64 %tmp_23_cast
  %image_load = load float* %image_addr, align 4
  %weight_load = load float* %weight_addr, align 4
  %tmp_5 = fmul float %image_load, %weight_load
  %sum_3 = fadd float %sum_1, %tmp_5
  br label %.preheader6

; <label>:1                                       ; preds = %.preheader7
  %bias_load = load float* %bias_addr, align 4
  %a_assign = fadd float %sum, %bias_load
  %a_assign_to_int = bitcast float %a_assign to i32
  %tmp_6 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %a_assign_to_int, i32 23, i32 30)
  %tmp_1 = trunc i32 %a_assign_to_int to i23
  %notlhs = icmp ne i8 %tmp_6, -1
  %notrhs = icmp eq i23 %tmp_1, 0
  %tmp_4 = or i1 %notrhs, %notlhs
  %tmp_s = fcmp ogt float %a_assign, 0.000000e+00
  %tmp_3 = and i1 %tmp_4, %tmp_s
  %a_assign_1 = select i1 %tmp_3, float %a_assign, float 0.000000e+00
  %tmp_7_cast = zext i5 %j to i10
  %tmp_7 = add i10 %tmp_7_cast, %phi_mul
  %tmp_8 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_7, i3 0)
  %tmp_14_cast = zext i13 %tmp_8 to i14
  %tmp_10 = add i14 %tmp_cast, %tmp_14_cast
  %tmp_15_cast = zext i14 %tmp_10 to i64
  %output_addr = getelementptr [6728 x float]* %output_r, i64 0, i64 %tmp_15_cast
  store float %a_assign_1, float* %output_addr, align 4
  br label %.preheader8

; <label>:2                                       ; preds = %.loopexit
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_8 = trunc i32 %empty to i8
  ret i8 %empty_8
}

declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6, i3) nounwind readnone {
entry:
  %empty = zext i6 %0 to i9
  %empty_9 = zext i3 %1 to i9
  %empty_10 = shl i9 %empty, 3
  %empty_11 = or i9 %empty_10, %empty_9
  ret i9 %empty_11
}

define weak i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3, i2) nounwind readnone {
entry:
  %empty = zext i3 %0 to i5
  %empty_12 = zext i2 %1 to i5
  %empty_13 = shl i5 %empty, 2
  %empty_14 = or i5 %empty_13, %empty_12
  ret i5 %empty_14
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13
  %empty_15 = zext i3 %1 to i13
  %empty_16 = shl i13 %empty, 3
  %empty_17 = or i13 %empty_16, %empty_15
  ret i13 %empty_17
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i5.i5(i5, i5) nounwind readnone {
entry:
  %empty = zext i5 %0 to i10
  %empty_18 = zext i5 %1 to i10
  %empty_19 = shl i10 %empty, 5
  %empty_20 = or i10 %empty_19, %empty_18
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
