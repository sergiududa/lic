; ModuleID = '/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@pool_str = internal unnamed_addr constant [5 x i8] c"pool\00" ; [#uses=1 type=[5 x i8]*]

; [#uses=0]
define void @pool([1568 x float]* %output, [6728 x float]* %image) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([1568 x float]* %output) nounwind, !map !7
  call void (...)* @_ssdm_op_SpecBitsMap([6728 x float]* %image) nounwind, !map !14
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @pool_str) nounwind
  call void @llvm.dbg.value(metadata !{[1568 x float]* %output}, i64 0, metadata !20), !dbg !39 ; [debug line = 3:17] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[6728 x float]* %image}, i64 0, metadata !40), !dbg !43 ; [debug line = 3:42] [debug variable = image]
  br label %.loopexit3, !dbg !44                  ; [debug line = 7:21]

.loopexit3.loopexit:                              ; preds = %.preheader4
  br label %.loopexit3

.loopexit3:                                       ; preds = %.loopexit3.loopexit, %0
  %channel = phi i4 [ 0, %0 ], [ %channel_1, %.loopexit3.loopexit ] ; [#uses=5 type=i4]
  %exitcond2 = icmp eq i4 %channel, -8, !dbg !44  ; [#uses=1 type=i1] [debug line = 7:21]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind ; [#uses=0 type=i32]
  %channel_1 = add i4 %channel, 1, !dbg !47       ; [#uses=1 type=i4] [debug line = 7:36]
  call void @llvm.dbg.value(metadata !{i4 %channel_1}, i64 0, metadata !48), !dbg !47 ; [debug line = 7:36] [debug variable = channel]
  br i1 %exitcond2, label %4, label %.preheader4.preheader, !dbg !44 ; [debug line = 7:21]

.preheader4.preheader:                            ; preds = %.loopexit3
  %tmp_cast2 = zext i4 %channel to i14, !dbg !50  ; [#uses=1 type=i14] [debug line = 8:16]
  %tmp_cast = zext i4 %channel to i12, !dbg !50   ; [#uses=1 type=i12] [debug line = 8:16]
  br label %.preheader4, !dbg !50                 ; [debug line = 8:16]

.preheader4:                                      ; preds = %3, %.preheader4.preheader
  %i = phi i5 [ %i_1, %3 ], [ 0, %.preheader4.preheader ] ; [#uses=5 type=i5]
  %tmp_1 = icmp ult i5 %i, -4, !dbg !50           ; [#uses=1 type=i1] [debug line = 8:16]
  %empty_8 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 14, i64 14, i64 14) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_1, label %.preheader3.preheader, label %.loopexit3.loopexit, !dbg !50 ; [debug line = 8:16]

.preheader3.preheader:                            ; preds = %.preheader4
  %tmp_2_cast = zext i5 %i to i10, !dbg !52       ; [#uses=1 type=i10] [debug line = 11:5]
  %tmp_4 = mul i10 %tmp_2_cast, 29, !dbg !52      ; [#uses=1 type=i10] [debug line = 11:5]
  %tmp_s = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %i, i32 1, i32 4) ; [#uses=2 type=i4]
  %tmp_2 = call i8 @_ssdm_op_BitConcatenate.i8.i4.i4(i4 %tmp_s, i4 0) ; [#uses=1 type=i8]
  %p_shl_cast = zext i8 %tmp_2 to i9              ; [#uses=1 type=i9]
  %tmp_7 = call i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4 %tmp_s, i1 false) ; [#uses=1 type=i5]
  %p_shl1_cast = zext i5 %tmp_7 to i9, !dbg !55   ; [#uses=1 type=i9] [debug line = 15:5]
  %tmp_8 = sub i9 %p_shl_cast, %p_shl1_cast, !dbg !55 ; [#uses=1 type=i9] [debug line = 15:5]
  br label %.preheader3, !dbg !56                 ; [debug line = 9:17]

.preheader3:                                      ; preds = %2, %.preheader3.preheader
  %j = phi i5 [ %j_1, %2 ], [ 0, %.preheader3.preheader ] ; [#uses=5 type=i5]
  %tmp_6 = icmp ult i5 %j, -4, !dbg !56           ; [#uses=1 type=i1] [debug line = 9:17]
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 14, i64 14, i64 14) nounwind ; [#uses=0 type=i32]
  br i1 %tmp_6, label %1, label %3, !dbg !56      ; [debug line = 9:17]

; <label>:1                                       ; preds = %.preheader3
  %tmp_7_cast = zext i5 %j to i10, !dbg !52       ; [#uses=1 type=i10] [debug line = 11:5]
  %tmp_9 = add i10 %tmp_4, %tmp_7_cast, !dbg !52  ; [#uses=1 type=i10] [debug line = 11:5]
  %tmp = call i9 @_ssdm_op_PartSelect.i9.i10.i32.i32(i10 %tmp_9, i32 1, i32 9) ; [#uses=1 type=i9]
  %tmp_11 = call i13 @_ssdm_op_BitConcatenate.i13.i9.i4(i9 %tmp, i4 %channel) ; [#uses=1 type=i13]
  %tmp_13 = zext i13 %tmp_11 to i64, !dbg !52     ; [#uses=1 type=i64] [debug line = 11:5]
  %image_addr = getelementptr [6728 x float]* %image, i64 0, i64 %tmp_13, !dbg !52 ; [#uses=1 type=float*] [debug line = 11:5]
  %max = load float* %image_addr, align 4, !dbg !52 ; [#uses=1 type=float] [debug line = 11:5]
  call void @llvm.dbg.value(metadata !{float %max}, i64 0, metadata !57), !dbg !52 ; [debug line = 11:5] [debug variable = max]
  br label %.loopexit, !dbg !58                   ; [debug line = 12:18]

.loopexit.loopexit:                               ; preds = %.preheader
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %1
  %max1 = phi float [ %max, %1 ], [ %max_1, %.loopexit.loopexit ] ; [#uses=2 type=float]
  %k = phi i2 [ 0, %1 ], [ %k_1, %.loopexit.loopexit ] ; [#uses=3 type=i2]
  %k_cast2 = zext i2 %k to i5, !dbg !58           ; [#uses=1 type=i5] [debug line = 12:18]
  %exitcond1 = icmp eq i2 %k, -2, !dbg !58        ; [#uses=1 type=i1] [debug line = 12:18]
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind ; [#uses=0 type=i32]
  %k_1 = add i2 %k, 1, !dbg !60                   ; [#uses=1 type=i2] [debug line = 12:27]
  call void @llvm.dbg.value(metadata !{i2 %k_1}, i64 0, metadata !61), !dbg !60 ; [debug line = 12:27] [debug variable = k]
  br i1 %exitcond1, label %2, label %.preheader.preheader, !dbg !58 ; [debug line = 12:18]

.preheader.preheader:                             ; preds = %.loopexit
  %tmp_5 = add i5 %k_cast2, %i, !dbg !62          ; [#uses=1 type=i5] [debug line = 14:7]
  %tmp_8_cast = zext i5 %tmp_5 to i10, !dbg !62   ; [#uses=1 type=i10] [debug line = 14:7]
  %tmp_22 = mul i10 %tmp_8_cast, 29, !dbg !62     ; [#uses=1 type=i10] [debug line = 14:7]
  br label %.preheader, !dbg !64                  ; [debug line = 13:19]

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %max_1 = phi float [ %max_2, %._crit_edge ], [ %max1, %.preheader.preheader ] ; [#uses=4 type=float]
  %l = phi i2 [ %l_1, %._crit_edge ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i2]
  %l_cast1 = zext i2 %l to i5, !dbg !64           ; [#uses=1 type=i5] [debug line = 13:19]
  %exitcond = icmp eq i2 %l, -2, !dbg !64         ; [#uses=1 type=i1] [debug line = 13:19]
  %empty_11 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind ; [#uses=0 type=i32]
  %l_1 = add i2 %l, 1, !dbg !65                   ; [#uses=1 type=i2] [debug line = 13:28]
  br i1 %exitcond, label %.loopexit.loopexit, label %._crit_edge, !dbg !64 ; [debug line = 13:19]

._crit_edge:                                      ; preds = %.preheader
  %tmp_3 = add i5 %j, %l_cast1, !dbg !62          ; [#uses=1 type=i5] [debug line = 14:7]
  %tmp_9_cast = zext i5 %tmp_3 to i10, !dbg !62   ; [#uses=1 type=i10] [debug line = 14:7]
  %tmp_23 = add i10 %tmp_9_cast, %tmp_22, !dbg !62 ; [#uses=1 type=i10] [debug line = 14:7]
  %tmp_24 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %tmp_23, i3 0) ; [#uses=1 type=i13]
  %tmp_37_cast = zext i13 %tmp_24 to i14, !dbg !62 ; [#uses=1 type=i14] [debug line = 14:7]
  %tmp_25 = add i14 %tmp_cast2, %tmp_37_cast, !dbg !62 ; [#uses=1 type=i14] [debug line = 14:7]
  %tmp_38_cast = zext i14 %tmp_25 to i64, !dbg !62 ; [#uses=1 type=i64] [debug line = 14:7]
  %image_addr_1 = getelementptr [6728 x float]* %image, i64 0, i64 %tmp_38_cast, !dbg !62 ; [#uses=1 type=float*] [debug line = 14:7]
  %image_load = load float* %image_addr_1, align 4, !dbg !62 ; [#uses=3 type=float] [debug line = 14:7]
  %image_load_to_int = bitcast float %image_load to i32 ; [#uses=2 type=i32]
  %tmp_10 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_26 = trunc i32 %image_load_to_int to i23   ; [#uses=1 type=i23]
  %max_1_to_int = bitcast float %max_1 to i32     ; [#uses=2 type=i32]
  %tmp_12 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_27 = trunc i32 %max_1_to_int to i23        ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp_10, -1                ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp_26, 0                ; [#uses=1 type=i1]
  %tmp_14 = or i1 %notrhs, %notlhs                ; [#uses=1 type=i1]
  %notlhs6 = icmp ne i8 %tmp_12, -1               ; [#uses=1 type=i1]
  %notrhs7 = icmp eq i23 %tmp_27, 0               ; [#uses=1 type=i1]
  %tmp_15 = or i1 %notrhs7, %notlhs6              ; [#uses=1 type=i1]
  %tmp_16 = and i1 %tmp_14, %tmp_15               ; [#uses=1 type=i1]
  %tmp_17 = fcmp ogt float %image_load, %max_1, !dbg !62 ; [#uses=1 type=i1] [debug line = 14:7]
  %tmp_18 = and i1 %tmp_16, %tmp_17, !dbg !62     ; [#uses=1 type=i1] [debug line = 14:7]
  %max_2 = select i1 %tmp_18, float %image_load, float %max_1, !dbg !62 ; [#uses=1 type=float] [debug line = 14:7]
  call void @llvm.dbg.value(metadata !{float %max_2}, i64 0, metadata !57), !dbg !62 ; [debug line = 14:7] [debug variable = max]
  call void @llvm.dbg.value(metadata !{i2 %l_1}, i64 0, metadata !66), !dbg !65 ; [debug line = 13:28] [debug variable = l]
  br label %.preheader, !dbg !65                  ; [debug line = 13:28]

; <label>:2                                       ; preds = %.loopexit
  %tmp_19 = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %j, i32 1, i32 4), !dbg !55 ; [#uses=1 type=i4] [debug line = 15:5]
  %tmp_cast_12 = zext i4 %tmp_19 to i9            ; [#uses=1 type=i9]
  %tmp_20 = add i9 %tmp_8, %tmp_cast_12           ; [#uses=1 type=i9]
  %tmp_32_cast = call i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9 %tmp_20, i3 0), !dbg !55 ; [#uses=1 type=i12] [debug line = 15:5]
  %tmp_21 = add i12 %tmp_32_cast, %tmp_cast, !dbg !55 ; [#uses=1 type=i12] [debug line = 15:5]
  %tmp_33_cast = zext i12 %tmp_21 to i64, !dbg !55 ; [#uses=1 type=i64] [debug line = 15:5]
  %output_addr = getelementptr [1568 x float]* %output, i64 0, i64 %tmp_33_cast, !dbg !55 ; [#uses=1 type=float*] [debug line = 15:5]
  store float %max1, float* %output_addr, align 4, !dbg !55 ; [debug line = 15:5]
  %j_1 = add i5 %j, 2, !dbg !67                   ; [#uses=1 type=i5] [debug line = 9:35]
  call void @llvm.dbg.value(metadata !{i5 %j_1}, i64 0, metadata !68), !dbg !67 ; [debug line = 9:35] [debug variable = j]
  br label %.preheader3, !dbg !67                 ; [debug line = 9:35]

; <label>:3                                       ; preds = %.preheader3
  %i_1 = add i5 %i, 2, !dbg !69                   ; [#uses=1 type=i5] [debug line = 8:33]
  call void @llvm.dbg.value(metadata !{i5 %i_1}, i64 0, metadata !70), !dbg !69 ; [debug line = 8:33] [debug variable = i]
  br label %.preheader4, !dbg !69                 ; [debug line = 8:33]

; <label>:4                                       ; preds = %.loopexit3
  ret void, !dbg !71                              ; [debug line = 18:1]
}

; [#uses=1]
declare i5 @llvm.part.select.i5(i5, i32, i32) nounwind readnone

; [#uses=1]
declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
declare i10 @llvm.part.select.i10(i10, i32, i32) nounwind readnone

; [#uses=9]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

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

; [#uses=2]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=1]
define weak i9 @_ssdm_op_PartSelect.i9.i10.i32.i32(i10, i32, i32) nounwind readnone {
entry:
  %empty = call i10 @llvm.part.select.i10(i10 %0, i32 %1, i32 %2) ; [#uses=1 type=i10]
  %empty_13 = trunc i10 %empty to i9              ; [#uses=1 type=i9]
  ret i9 %empty_13
}

; [#uses=2]
define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_14 = trunc i32 %empty to i8              ; [#uses=1 type=i8]
  ret i8 %empty_14
}

; [#uses=2]
define weak i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2) ; [#uses=1 type=i5]
  %empty_15 = trunc i5 %empty to i4               ; [#uses=1 type=i4]
  ret i4 %empty_15
}

; [#uses=0]
declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
define weak i8 @_ssdm_op_BitConcatenate.i8.i4.i4(i4, i4) nounwind readnone {
entry:
  %empty = zext i4 %0 to i8                       ; [#uses=1 type=i8]
  %empty_16 = zext i4 %1 to i8                    ; [#uses=1 type=i8]
  %empty_17 = shl i8 %empty, 4                    ; [#uses=1 type=i8]
  %empty_18 = or i8 %empty_17, %empty_16          ; [#uses=1 type=i8]
  ret i8 %empty_18
}

; [#uses=1]
define weak i5 @_ssdm_op_BitConcatenate.i5.i4.i1(i4, i1) nounwind readnone {
entry:
  %empty = zext i4 %0 to i5                       ; [#uses=1 type=i5]
  %empty_19 = zext i1 %1 to i5                    ; [#uses=1 type=i5]
  %empty_20 = shl i5 %empty, 1                    ; [#uses=1 type=i5]
  %empty_21 = or i5 %empty_20, %empty_19          ; [#uses=1 type=i5]
  ret i5 %empty_21
}

; [#uses=0]
define weak i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1, i3) nounwind readnone {
entry:
  %empty = zext i1 %0 to i4                       ; [#uses=1 type=i4]
  %empty_22 = zext i3 %1 to i4                    ; [#uses=1 type=i4]
  %empty_23 = shl i4 %empty, 3                    ; [#uses=1 type=i4]
  %empty_24 = or i4 %empty_23, %empty_22          ; [#uses=1 type=i4]
  ret i4 %empty_24
}

; [#uses=1]
define weak i13 @_ssdm_op_BitConcatenate.i13.i9.i4(i9, i4) nounwind readnone {
entry:
  %empty = zext i9 %0 to i13                      ; [#uses=1 type=i13]
  %empty_25 = zext i4 %1 to i13                   ; [#uses=1 type=i13]
  %empty_26 = shl i13 %empty, 4                   ; [#uses=1 type=i13]
  %empty_27 = or i13 %empty_26, %empty_25         ; [#uses=1 type=i13]
  ret i13 %empty_27
}

; [#uses=1]
define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13                     ; [#uses=1 type=i13]
  %empty_28 = zext i3 %1 to i13                   ; [#uses=1 type=i13]
  %empty_29 = shl i13 %empty, 3                   ; [#uses=1 type=i13]
  %empty_30 = or i13 %empty_29, %empty_28         ; [#uses=1 type=i13]
  ret i13 %empty_30
}

; [#uses=1]
define weak i12 @_ssdm_op_BitConcatenate.i12.i9.i3(i9, i3) nounwind readnone {
entry:
  %empty = zext i9 %0 to i12                      ; [#uses=1 type=i12]
  %empty_31 = zext i3 %1 to i12                   ; [#uses=1 type=i12]
  %empty_32 = shl i12 %empty, 3                   ; [#uses=1 type=i12]
  %empty_33 = or i12 %empty_32, %empty_31         ; [#uses=1 type=i12]
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
!20 = metadata !{i32 786689, metadata !21, metadata !"output", null, i32 3, metadata !37, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!21 = metadata !{i32 786478, i32 0, metadata !22, metadata !"pool", metadata !"pool", metadata !"", metadata !22, i32 3, metadata !23, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !35, i32 4} ; [ DW_TAG_subprogram ]
!22 = metadata !{i32 786473, metadata !"pool/solution1/pool.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!23 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !24, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!24 = metadata !{null, metadata !25, metadata !31}
!25 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !26} ; [ DW_TAG_pointer_type ]
!26 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3584, i64 32, i32 0, i32 0, metadata !27, metadata !28, i32 0, i32 0} ; [ DW_TAG_array_type ]
!27 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!28 = metadata !{metadata !29, metadata !30}
!29 = metadata !{i32 786465, i64 0, i64 13}       ; [ DW_TAG_subrange_type ]
!30 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!31 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !32} ; [ DW_TAG_pointer_type ]
!32 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 7424, i64 32, i32 0, i32 0, metadata !27, metadata !33, i32 0, i32 0} ; [ DW_TAG_array_type ]
!33 = metadata !{metadata !34, metadata !30}
!34 = metadata !{i32 786465, i64 0, i64 28}       ; [ DW_TAG_subrange_type ]
!35 = metadata !{metadata !36}
!36 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!37 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 50176, i64 32, i32 0, i32 0, metadata !27, metadata !38, i32 0, i32 0} ; [ DW_TAG_array_type ]
!38 = metadata !{metadata !29, metadata !29, metadata !30}
!39 = metadata !{i32 3, i32 17, metadata !21, null}
!40 = metadata !{i32 786689, metadata !21, metadata !"image", null, i32 3, metadata !41, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!41 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 215296, i64 32, i32 0, i32 0, metadata !27, metadata !42, i32 0, i32 0} ; [ DW_TAG_array_type ]
!42 = metadata !{metadata !34, metadata !34, metadata !30}
!43 = metadata !{i32 3, i32 42, metadata !21, null}
!44 = metadata !{i32 7, i32 21, metadata !45, null}
!45 = metadata !{i32 786443, metadata !46, i32 7, i32 2, metadata !22, i32 1} ; [ DW_TAG_lexical_block ]
!46 = metadata !{i32 786443, metadata !21, i32 4, i32 1, metadata !22, i32 0} ; [ DW_TAG_lexical_block ]
!47 = metadata !{i32 7, i32 36, metadata !45, null}
!48 = metadata !{i32 786688, metadata !45, metadata !"channel", metadata !22, i32 7, metadata !49, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!49 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!50 = metadata !{i32 8, i32 16, metadata !51, null}
!51 = metadata !{i32 786443, metadata !45, i32 8, i32 3, metadata !22, i32 2} ; [ DW_TAG_lexical_block ]
!52 = metadata !{i32 11, i32 5, metadata !53, null}
!53 = metadata !{i32 786443, metadata !54, i32 10, i32 4, metadata !22, i32 4} ; [ DW_TAG_lexical_block ]
!54 = metadata !{i32 786443, metadata !51, i32 9, i32 4, metadata !22, i32 3} ; [ DW_TAG_lexical_block ]
!55 = metadata !{i32 15, i32 5, metadata !53, null}
!56 = metadata !{i32 9, i32 17, metadata !54, null}
!57 = metadata !{i32 786688, metadata !46, metadata !"max", metadata !22, i32 6, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!58 = metadata !{i32 12, i32 18, metadata !59, null}
!59 = metadata !{i32 786443, metadata !53, i32 12, i32 5, metadata !22, i32 5} ; [ DW_TAG_lexical_block ]
!60 = metadata !{i32 12, i32 27, metadata !59, null}
!61 = metadata !{i32 786688, metadata !59, metadata !"k", metadata !22, i32 12, metadata !49, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!62 = metadata !{i32 14, i32 7, metadata !63, null}
!63 = metadata !{i32 786443, metadata !59, i32 13, i32 6, metadata !22, i32 6} ; [ DW_TAG_lexical_block ]
!64 = metadata !{i32 13, i32 19, metadata !63, null}
!65 = metadata !{i32 13, i32 28, metadata !63, null}
!66 = metadata !{i32 786688, metadata !63, metadata !"l", metadata !22, i32 13, metadata !49, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!67 = metadata !{i32 9, i32 35, metadata !54, null}
!68 = metadata !{i32 786688, metadata !54, metadata !"j", metadata !22, i32 9, metadata !49, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!69 = metadata !{i32 8, i32 33, metadata !51, null}
!70 = metadata !{i32 786688, metadata !51, metadata !"i", metadata !22, i32 8, metadata !49, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!71 = metadata !{i32 18, i32 1, metadata !46, null}
