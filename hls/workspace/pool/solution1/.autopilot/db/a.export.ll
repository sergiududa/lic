; ModuleID = '/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@pool_str = internal unnamed_addr constant [5 x i8] c"pool\00"

define void @pool([1568 x float]* %output_r, [6728 x float]* %image_r) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([1568 x float]* %output_r) nounwind, !map !7
  call void (...)* @_ssdm_op_SpecBitsMap([6728 x float]* %image_r) nounwind, !map !14
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @pool_str) nounwind
  br label %.loopexit3

.loopexit3.loopexit:                              ; preds = %.preheader4
  br label %.loopexit3

.loopexit3:                                       ; preds = %.loopexit3.loopexit, %0
  %channel = phi i4 [ 0, %0 ], [ %channel_1, %.loopexit3.loopexit ]
  %exitcond2 = icmp eq i4 %channel, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
  %channel_1 = add i4 %channel, 1
  br i1 %exitcond2, label %4, label %.preheader4.preheader

.preheader4.preheader:                            ; preds = %.loopexit3
  %tmp_cast2 = zext i4 %channel to i14
  %tmp_cast = zext i4 %channel to i12
  br label %.preheader4

.preheader4:                                      ; preds = %3, %.preheader4.preheader
  %i = phi i5 [ %i_1, %3 ], [ 0, %.preheader4.preheader ]
  %tmp_1 = icmp ult i5 %i, -4
  %empty_8 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 14, i64 14, i64 14) nounwind
  br i1 %tmp_1, label %.preheader3.preheader, label %.loopexit3.loopexit

.preheader3.preheader:                            ; preds = %.preheader4
  %tmp_2_cast = zext i5 %i to i10
  %tmp_4 = mul i10 %tmp_2_cast, 29
  %tmp_s = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %i, i32 1, i32 4)
  %tmp_2 = call i8 @_ssdm_op_BitConcatenate.i8.i4.i4(i4 %tmp_s, i4 0)
  %p_shl_cast = zext i8 %tmp_2 to i9
  %tmp_7 = call i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4 %tmp_s, i1 false)
  %p_shl1_cast = zext i5 %tmp_7 to i9
  %tmp_8 = sub i9 %p_shl_cast, %p_shl1_cast
  br label %.preheader3

.preheader3:                                      ; preds = %2, %.preheader3.preheader
  %j = phi i5 [ %j_1, %2 ], [ 0, %.preheader3.preheader ]
  %tmp_6 = icmp ult i5 %j, -4
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 14, i64 14, i64 14) nounwind
  br i1 %tmp_6, label %1, label %3

; <label>:1                                       ; preds = %.preheader3
  %tmp_7_cast = zext i5 %j to i10
  %tmp_9 = add i10 %tmp_4, %tmp_7_cast
  %tmp = call i9 @_ssdm_op_PartSelect.i9.i10.i32.i32(i10 %tmp_9, i32 1, i32 9)
  %tmp_11 = call i13 @_ssdm_op_BitConcatenate.i13.i9.i4(i9 %tmp, i4 %channel)
  %tmp_13 = zext i13 %tmp_11 to i64
  %image_addr = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_13
  %max = load float* %image_addr, align 4
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %1
  %max1 = phi float [ %max, %1 ], [ %max_1, %.loopexit.loopexit ]
  %k = phi i2 [ 0, %1 ], [ %k_1, %.loopexit.loopexit ]
  %k_cast2 = zext i2 %k to i5
  %exitcond1 = icmp eq i2 %k, -2
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %k_1 = add i2 %k, 1
  br i1 %exitcond1, label %2, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.loopexit
  %tmp_5 = add i5 %k_cast2, %i
  %tmp_8_cast = zext i5 %tmp_5 to i10
  %tmp_22 = mul i10 %tmp_8_cast, 29
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %max_1 = phi float [ %max_2, %._crit_edge ], [ %max1, %.preheader.preheader ]
  %l = phi i2 [ %l_1, %._crit_edge ], [ 0, %.preheader.preheader ]
  %l_cast1 = zext i2 %l to i5
  %exitcond = icmp eq i2 %l, -2
  %empty_11 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
  %l_1 = add i2 %l, 1
  br i1 %exitcond, label %.loopexit.loopexit, label %._crit_edge

._crit_edge:                                      ; preds = %.preheader
  %tmp_3 = add i5 %j, %l_cast1
  %tmp_9_cast = zext i5 %tmp_3 to i10
  %tmp_23 = add i10 %tmp_9_cast, %tmp_22
  %tmp_24 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_23, i3 0)
  %tmp_37_cast = zext i13 %tmp_24 to i14
  %tmp_25 = add i14 %tmp_cast2, %tmp_37_cast
  %tmp_38_cast = zext i14 %tmp_25 to i64
  %image_addr_1 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_38_cast
  %image_load = load float* %image_addr_1, align 4
  %image_load_to_int = bitcast float %image_load to i32
  %tmp_10 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_to_int, i32 23, i32 30)
  %tmp_26 = trunc i32 %image_load_to_int to i23
  %max_1_to_int = bitcast float %max_1 to i32
  %tmp_12 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_to_int, i32 23, i32 30)
  %tmp_27 = trunc i32 %max_1_to_int to i23
  %notlhs = icmp ne i8 %tmp_10, -1
  %notrhs = icmp eq i23 %tmp_26, 0
  %tmp_14 = or i1 %notrhs, %notlhs
  %notlhs6 = icmp ne i8 %tmp_12, -1
  %notrhs7 = icmp eq i23 %tmp_27, 0
  %tmp_15 = or i1 %notrhs7, %notlhs6
  %tmp_16 = and i1 %tmp_14, %tmp_15
  %tmp_17 = fcmp ogt float %image_load, %max_1
  %tmp_18 = and i1 %tmp_16, %tmp_17
  %max_2 = select i1 %tmp_18, float %image_load, float %max_1
  br label %.preheader

; <label>:2                                       ; preds = %.loopexit
  %tmp_19 = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %j, i32 1, i32 4)
  %tmp_cast_12 = zext i4 %tmp_19 to i9
  %tmp_20 = add i9 %tmp_8, %tmp_cast_12
  %tmp_32_cast = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_20, i3 0)
  %tmp_21 = add i12 %tmp_32_cast, %tmp_cast
  %tmp_33_cast = zext i12 %tmp_21 to i64
  %output_addr = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_33_cast
  store float %max1, float* %output_addr, align 4
  %j_1 = add i5 %j, 2
  br label %.preheader3

; <label>:3                                       ; preds = %.preheader3
  %i_1 = add i5 %i, 2
  br label %.preheader4

; <label>:4                                       ; preds = %.loopexit3
  ret void
}

declare i5 @llvm.part.select.i5(i5, i32, i32) nounwind readnone

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare i10 @llvm.part.select.i10(i10, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

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

define weak i9 @_ssdm_op_PartSelect.i9.i10.i32.i32(i10, i32, i32) nounwind readnone {
entry:
  %empty = call i10 @llvm.part.select.i10(i10 %0, i32 %1, i32 %2)
  %empty_13 = trunc i10 %empty to i9
  ret i9 %empty_13
}

define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_14 = trunc i32 %empty to i8
  ret i8 %empty_14
}

define weak i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_15 = trunc i5 %empty to i4
  ret i4 %empty_15
}

declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i8 @_ssdm_op_BitConcatenate.i8.i4.i4(i4, i4) nounwind readnone {
entry:
  %empty = zext i4 %0 to i8
  %empty_16 = zext i4 %1 to i8
  %empty_17 = shl i8 %empty, 4
  %empty_18 = or i8 %empty_17, %empty_16
  ret i8 %empty_18
}

define weak i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4, i1) nounwind readnone {
entry:
  %empty = zext i4 %0 to i5
  %empty_19 = zext i1 %1 to i5
  %empty_20 = shl i5 %empty, 1
  %empty_21 = or i5 %empty_20, %empty_19
  ret i5 %empty_21
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1, i3) nounwind readnone {
entry:
  %empty = zext i1 %0 to i4
  %empty_22 = zext i3 %1 to i4
  %empty_23 = shl i4 %empty, 3
  %empty_24 = or i4 %empty_23, %empty_22
  ret i4 %empty_24
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i9.i4(i9, i4) nounwind readnone {
entry:
  %empty = zext i9 %0 to i13
  %empty_25 = zext i4 %1 to i13
  %empty_26 = shl i13 %empty, 4
  %empty_27 = or i13 %empty_26, %empty_25
  ret i13 %empty_27
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13
  %empty_28 = zext i3 %1 to i13
  %empty_29 = shl i13 %empty, 3
  %empty_30 = or i13 %empty_29, %empty_28
  ret i13 %empty_30
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9, i3) nounwind readnone {
entry:
  %empty = zext i9 %0 to i12
  %empty_31 = zext i3 %1 to i12
  %empty_32 = shl i12 %empty, 3
  %empty_33 = or i12 %empty_32, %empty_31
  ret i12 %empty_33
}

!opencl.kernels = !{!0}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"float [14][8]*", metadata !"float [29][8]*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"image"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{metadata !8}
!8 = metadata !{i32 0, i32 31, metadata !9}
!9 = metadata !{metadata !10}
!10 = metadata !{metadata !"output", metadata !11, metadata !"float", i32 0, i32 31}
!11 = metadata !{metadata !12, metadata !12, metadata !13}
!12 = metadata !{i32 0, i32 13, i32 1}
!13 = metadata !{i32 0, i32 7, i32 1}
!14 = metadata !{metadata !15}
!15 = metadata !{i32 0, i32 31, metadata !16}
!16 = metadata !{metadata !17}
!17 = metadata !{metadata !"image", metadata !18, metadata !"float", i32 0, i32 31}
!18 = metadata !{metadata !19, metadata !19, metadata !13}
!19 = metadata !{i32 0, i32 28, i32 1}
