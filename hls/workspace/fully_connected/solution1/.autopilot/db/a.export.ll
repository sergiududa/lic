; ModuleID = '/home/sergiu/git/lic/hls/workspace/fully_connected/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@fc_str = internal unnamed_addr constant [3 x i8] c"fc\00"

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define void @fc([120 x float]* %output_r, [576 x float]* %input_r, [69120 x float]* %weight, [120 x float]* %bias) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([120 x float]* %output_r) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecBitsMap([576 x float]* %input_r) nounwind, !map !19
  call void (...)* @_ssdm_op_SpecBitsMap([69120 x float]* %weight) nounwind, !map !25
  call void (...)* @_ssdm_op_SpecBitsMap([120 x float]* %bias) nounwind, !map !30
  call void (...)* @_ssdm_op_SpecTopModule([3 x i8]* @fc_str) nounwind
  br label %1

; <label>:1                                       ; preds = %5, %0
  %i = phi i7 [ 0, %0 ], [ %i_1, %5 ]
  %exitcond1 = icmp eq i7 %i, -8
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 120, i64 120, i64 120) nounwind
  %i_1 = add i7 %i, 1
  br i1 %exitcond1, label %6, label %2

; <label>:2                                       ; preds = %1
  %tmp = zext i7 %i to i64
  %tmp_cast = zext i7 %i to i18
  %output_addr = getelementptr [120 x float]* %output_r, i64 0, i64 %tmp
  br label %3

; <label>:3                                       ; preds = %4, %2
  %tmp_2 = phi float [ 0.000000e+00, %2 ], [ %tmp_8, %4 ]
  %j = phi i10 [ 0, %2 ], [ %j_1, %4 ]
  %exitcond = icmp eq i10 %j, -448
  %empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 576, i64 576, i64 576) nounwind
  %j_1 = add i10 %j, 1
  br i1 %exitcond, label %5, label %4

; <label>:4                                       ; preds = %3
  %tmp_6 = zext i10 %j to i64
  %tmp_s = call i17 @_ssdm_op_BitConcatenate.i17.i10.i7(i10 %j, i7 0)
  %p_shl_cast = zext i17 %tmp_s to i18
  %tmp_10 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %j, i3 0)
  %p_shl1_cast = zext i13 %tmp_10 to i18
  %tmp_11 = sub i18 %p_shl_cast, %p_shl1_cast
  %tmp_12 = add i18 %tmp_11, %tmp_cast
  %tmp_13_cast = sext i18 %tmp_12 to i64
  %weight_addr = getelementptr [69120 x float]* %weight, i64 0, i64 %tmp_13_cast
  %weight_load = load float* %weight_addr, align 4
  %input_addr = getelementptr [576 x float]* %input_r, i64 0, i64 %tmp_6
  %input_load = load float* %input_addr, align 4
  %tmp_7 = fmul float %weight_load, %input_load
  %tmp_8 = fadd float %tmp_2, %tmp_7
  br label %3

; <label>:5                                       ; preds = %3
  %bias_addr = getelementptr [120 x float]* %bias, i64 0, i64 %tmp
  %bias_load = load float* %bias_addr, align 4
  %a_assign = fadd float %tmp_2, %bias_load
  %a_assign_to_int = bitcast float %a_assign to i32
  %tmp_1 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %a_assign_to_int, i32 23, i32 30)
  %tmp_3 = trunc i32 %a_assign_to_int to i23
  %notlhs = icmp ne i8 %tmp_1, -1
  %notrhs = icmp eq i23 %tmp_3, 0
  %tmp_4 = or i1 %notrhs, %notlhs
  %tmp_5 = fcmp ogt float %a_assign, 0.000000e+00
  %tmp_9 = and i1 %tmp_4, %tmp_5
  %a_assign_1 = select i1 %tmp_9, float %a_assign, float 0.000000e+00
  store float %a_assign_1, float* %output_addr, align 4
  br label %1

; <label>:6                                       ; preds = %1
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
  %empty_5 = trunc i32 %empty to i8
  ret i8 %empty_5
}

declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i17 @_ssdm_op_BitConcatenate.i17.i10.i7(i10, i7) nounwind readnone {
entry:
  %empty = zext i10 %0 to i17
  %empty_6 = zext i7 %1 to i17
  %empty_7 = shl i17 %empty, 7
  %empty_8 = or i17 %empty_7, %empty_6
  ret i17 %empty_8
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13
  %empty_9 = zext i3 %1 to i13
  %empty_10 = shl i13 %empty, 3
  %empty_11 = or i13 %empty_10, %empty_9
  ret i13 %empty_11
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
!10 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float*", metadata !"float [120]*", metadata !"float*"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"input", metadata !"weight", metadata !"bias"}
!13 = metadata !{metadata !14}
!14 = metadata !{i32 0, i32 31, metadata !15}
!15 = metadata !{metadata !16}
!16 = metadata !{metadata !"output", metadata !17, metadata !"float", i32 0, i32 31}
!17 = metadata !{metadata !18}
!18 = metadata !{i32 0, i32 119, i32 1}
!19 = metadata !{metadata !20}
!20 = metadata !{i32 0, i32 31, metadata !21}
!21 = metadata !{metadata !22}
!22 = metadata !{metadata !"input", metadata !23, metadata !"float", i32 0, i32 31}
!23 = metadata !{metadata !24}
!24 = metadata !{i32 0, i32 575, i32 1}
!25 = metadata !{metadata !26}
!26 = metadata !{i32 0, i32 31, metadata !27}
!27 = metadata !{metadata !28}
!28 = metadata !{metadata !"weight", metadata !29, metadata !"float", i32 0, i32 31}
!29 = metadata !{metadata !24, metadata !18}
!30 = metadata !{metadata !31}
!31 = metadata !{i32 0, i32 31, metadata !32}
!32 = metadata !{metadata !33}
!33 = metadata !{metadata !"bias", metadata !17, metadata !"float", i32 0, i32 31}
