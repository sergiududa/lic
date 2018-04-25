; ModuleID = '/home/sergiu/git/lic/hls/workspace/flatten/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@flatten_str = internal unnamed_addr constant [8 x i8] c"flatten\00"

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define void @flatten([576 x float]* %output_r, [576 x float]* %input_r) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([576 x float]* %output_r) nounwind, !map !7
  call void (...)* @_ssdm_op_SpecBitsMap([576 x float]* %input_r) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecTopModule([8 x i8]* @flatten_str) nounwind
  br label %.loopexit

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %i = phi i3 [ 0, %0 ], [ %i_1, %.loopexit.loopexit ]
  %exitcond2 = icmp eq i3 %i, -2
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6) nounwind
  %i_1 = add i3 %i, 1
  br i1 %exitcond2, label %2, label %.preheader3.preheader

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_BitConcatenate.i6.i3.i3(i3 %i, i3 0)
  %p_shl1_cast = zext i6 %tmp to i7
  %tmp_2 = call i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3 %i, i1 false)
  %p_shl2_cast = zext i4 %tmp_2 to i7
  %tmp_5 = sub i7 %p_shl1_cast, %p_shl2_cast
  %p_shl = call i10 @_ssdm_op_BitConcatenate.i10.i3.i7(i3 %i, i7 0)
  %p_shl_cast = zext i10 %p_shl to i11
  %p_shl5 = call i8 @_ssdm_op_BitConcatenate.i8.i3.i5(i3 %i, i5 0)
  %p_shl5_cast = zext i8 %p_shl5 to i11
  %tmp_1 = sub i11 %p_shl_cast, %p_shl5_cast
  br label %.preheader3

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %j = phi i3 [ 0, %.preheader3.preheader ], [ %j_1, %.preheader3.loopexit ]
  %exitcond1 = icmp eq i3 %j, -2
  %empty_2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6) nounwind
  %j_1 = add i3 %j, 1
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_3_cast = zext i3 %j to i7
  %tmp_7 = add i7 %tmp_3_cast, %tmp_5
  %tmp_11_cast = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_7, i4 0)
  %tmp_4 = call i7 @_ssdm_op_BitConcatenate.i7.i3.i4(i3 %j, i4 0)
  br label %.preheader

.preheader:                                       ; preds = %1, %.preheader.preheader
  %k = phi i5 [ %k_1, %1 ], [ 0, %.preheader.preheader ]
  %k_cast3 = zext i5 %k to i7
  %exitcond = icmp eq i5 %k, -16
  %empty_3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  %k_1 = add i5 %k, 1
  br i1 %exitcond, label %.preheader3.loopexit, label %1

; <label>:1                                       ; preds = %.preheader
  %tmp_6_cast = zext i5 %k to i11
  %tmp_s = add i11 %tmp_11_cast, %tmp_6_cast
  %tmp_12_cast = zext i11 %tmp_s to i64
  %input_addr = getelementptr [576 x float]* %input_r, i64 0, i64 %tmp_12_cast
  %input_load = load float* %input_addr, align 4
  %tmp1 = add i7 %k_cast3, %tmp_4
  %tmp1_cast = zext i7 %tmp1 to i11
  %tmp_8 = add i11 %tmp_1, %tmp1_cast
  %tmp_8_cast = sext i11 %tmp_8 to i32
  %tmp_9 = zext i32 %tmp_8_cast to i64
  %output_addr = getelementptr [576 x float]* %output_r, i64 0, i64 %tmp_9
  store float %input_load, float* %output_addr, align 4
  br label %.preheader

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

define weak i8 @_ssdm_op_BitConcatenate.i8.i3.i5(i3, i5) nounwind readnone {
entry:
  %empty = zext i3 %0 to i8
  %empty_4 = zext i5 %1 to i8
  %empty_5 = shl i8 %empty, 5
  %empty_6 = or i8 %empty_5, %empty_4
  ret i8 %empty_6
}

define weak i7 @_ssdm_op_BitConcatenate.i7.i3.i4(i3, i4) nounwind readnone {
entry:
  %empty = zext i3 %0 to i7
  %empty_7 = zext i4 %1 to i7
  %empty_8 = shl i7 %empty, 4
  %empty_9 = or i7 %empty_8, %empty_7
  ret i7 %empty_9
}

define weak i6 @_ssdm_op_BitConcatenate.i6.i3.i3(i3, i3) nounwind readnone {
entry:
  %empty = zext i3 %0 to i6
  %empty_10 = zext i3 %1 to i6
  %empty_11 = shl i6 %empty, 3
  %empty_12 = or i6 %empty_11, %empty_10
  ret i6 %empty_12
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3, i1) nounwind readnone {
entry:
  %empty = zext i3 %0 to i4
  %empty_13 = zext i1 %1 to i4
  %empty_14 = shl i4 %empty, 1
  %empty_15 = or i4 %empty_14, %empty_13
  ret i4 %empty_15
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7, i4) nounwind readnone {
entry:
  %empty = zext i7 %0 to i11
  %empty_16 = zext i4 %1 to i11
  %empty_17 = shl i11 %empty, 4
  %empty_18 = or i11 %empty_17, %empty_16
  ret i11 %empty_18
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i3.i7(i3, i7) nounwind readnone {
entry:
  %empty = zext i3 %0 to i10
  %empty_19 = zext i7 %1 to i10
  %empty_20 = shl i10 %empty, 7
  %empty_21 = or i10 %empty_20, %empty_19
  ret i10 %empty_21
}

!opencl.kernels = !{!0}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float [6][16]*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"input"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{metadata !8}
!8 = metadata !{i32 0, i32 31, metadata !9}
!9 = metadata !{metadata !10}
!10 = metadata !{metadata !"output", metadata !11, metadata !"float", i32 0, i32 31}
!11 = metadata !{metadata !12}
!12 = metadata !{i32 0, i32 575, i32 1}
!13 = metadata !{metadata !14}
!14 = metadata !{i32 0, i32 31, metadata !15}
!15 = metadata !{metadata !16}
!16 = metadata !{metadata !"input", metadata !17, metadata !"float", i32 0, i32 31}
!17 = metadata !{metadata !18, metadata !18, metadata !19}
!18 = metadata !{i32 0, i32 5, i32 1}
!19 = metadata !{i32 0, i32 15, i32 1}
