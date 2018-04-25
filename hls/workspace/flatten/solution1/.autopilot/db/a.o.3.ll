; ModuleID = '/home/sergiu/git/lic/hls/workspace/flatten/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@flatten_str = internal unnamed_addr constant [8 x i8] c"flatten\00" ; [#uses=1 type=[8 x i8]*]

; [#uses=5]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @flatten([576 x float]* %output, [576 x float]* %input) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([576 x float]* %output) nounwind, !map !7
  call void (...)* @_ssdm_op_SpecBitsMap([576 x float]* %input) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecTopModule([8 x i8]* @flatten_str) nounwind
  call void @llvm.dbg.value(metadata !{[576 x float]* %output}, i64 0, metadata !20), !dbg !37 ; [debug line = 3:20] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[576 x float]* %input}, i64 0, metadata !38), !dbg !41 ; [debug line = 3:39] [debug variable = input]
  br label %.loopexit, !dbg !42                   ; [debug line = 6:7]

.loopexit.loopexit:                               ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %0
  %i = phi i3 [ 0, %0 ], [ %i_1, %.loopexit.loopexit ] ; [#uses=6 type=i3]
  %exitcond2 = icmp eq i3 %i, -2, !dbg !42        ; [#uses=1 type=i1] [debug line = 6:7]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6) nounwind ; [#uses=0 type=i32]
  %i_1 = add i3 %i, 1, !dbg !45                   ; [#uses=1 type=i3] [debug line = 6:21]
  call void @llvm.dbg.value(metadata !{i3 %i_1}, i64 0, metadata !46), !dbg !45 ; [debug line = 6:21] [debug variable = i]
  br i1 %exitcond2, label %2, label %.preheader3.preheader, !dbg !42 ; [debug line = 6:7]

.preheader3.preheader:                            ; preds = %.loopexit
  %tmp = call i6 @_ssdm_op_BitConcatenate.i6.i3.i3(i3 %i, i3 0) ; [#uses=1 type=i6]
  %p_shl1_cast = zext i6 %tmp to i7               ; [#uses=1 type=i7]
  %tmp_2 = call i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3 %i, i1 false) ; [#uses=1 type=i4]
  %p_shl2_cast = zext i4 %tmp_2 to i7, !dbg !48   ; [#uses=1 type=i7] [debug line = 9:21]
  %tmp_5 = sub i7 %p_shl1_cast, %p_shl2_cast, !dbg !48 ; [#uses=1 type=i7] [debug line = 9:21]
  %p_shl = call i10 @_ssdm_op_BitConcatenate.i10.i3.i7(i3 %i, i7 0), !dbg !48 ; [#uses=1 type=i10] [debug line = 9:21]
  %p_shl_cast = zext i10 %p_shl to i11, !dbg !48  ; [#uses=1 type=i11] [debug line = 9:21]
  %p_shl5 = call i8 @_ssdm_op_BitConcatenate.i8.i3.i5(i3 %i, i5 0), !dbg !48 ; [#uses=1 type=i8] [debug line = 9:21]
  %p_shl5_cast = zext i8 %p_shl5 to i11, !dbg !48 ; [#uses=1 type=i11] [debug line = 9:21]
  %tmp_1 = sub i11 %p_shl_cast, %p_shl5_cast, !dbg !48 ; [#uses=1 type=i11] [debug line = 9:21]
  br label %.preheader3, !dbg !51                 ; [debug line = 7:8]

.preheader3.loopexit:                             ; preds = %.preheader
  br label %.preheader3

.preheader3:                                      ; preds = %.preheader3.loopexit, %.preheader3.preheader
  %j = phi i3 [ 0, %.preheader3.preheader ], [ %j_1, %.preheader3.loopexit ] ; [#uses=4 type=i3]
  %exitcond1 = icmp eq i3 %j, -2, !dbg !51        ; [#uses=1 type=i1] [debug line = 7:8]
  %empty_2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6) nounwind ; [#uses=0 type=i32]
  %j_1 = add i3 %j, 1, !dbg !52                   ; [#uses=1 type=i3] [debug line = 7:22]
  call void @llvm.dbg.value(metadata !{i3 %j_1}, i64 0, metadata !53), !dbg !52 ; [debug line = 7:22] [debug variable = j]
  br i1 %exitcond1, label %.loopexit.loopexit, label %.preheader.preheader, !dbg !51 ; [debug line = 7:8]

.preheader.preheader:                             ; preds = %.preheader3
  %tmp_3_cast = zext i3 %j to i7                  ; [#uses=1 type=i7]
  %tmp_7 = add i7 %tmp_3_cast, %tmp_5             ; [#uses=1 type=i7]
  %tmp_11_cast = call i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7 %tmp_7, i4 0), !dbg !48 ; [#uses=1 type=i11] [debug line = 9:21]
  %tmp_4 = call i7 @_ssdm_op_BitConcatenate.i7.i3.i4(i3 %j, i4 0), !dbg !48 ; [#uses=1 type=i7] [debug line = 9:21]
  br label %.preheader, !dbg !54                  ; [debug line = 8:21]

.preheader:                                       ; preds = %1, %.preheader.preheader
  %k = phi i5 [ %k_1, %1 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i5]
  %k_cast3 = zext i5 %k to i7, !dbg !54           ; [#uses=1 type=i7] [debug line = 8:21]
  %exitcond = icmp eq i5 %k, -16, !dbg !54        ; [#uses=1 type=i1] [debug line = 8:21]
  %empty_3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind ; [#uses=0 type=i32]
  %k_1 = add i5 %k, 1, !dbg !55                   ; [#uses=1 type=i5] [debug line = 8:35]
  br i1 %exitcond, label %.preheader3.loopexit, label %1, !dbg !54 ; [debug line = 8:21]

; <label>:1                                       ; preds = %.preheader
  %tmp_6_cast = zext i5 %k to i11, !dbg !48       ; [#uses=1 type=i11] [debug line = 9:21]
  %tmp_s = add i11 %tmp_11_cast, %tmp_6_cast, !dbg !48 ; [#uses=1 type=i11] [debug line = 9:21]
  %tmp_12_cast = zext i11 %tmp_s to i64, !dbg !48 ; [#uses=1 type=i64] [debug line = 9:21]
  %input_addr = getelementptr [576 x float]* %input, i64 0, i64 %tmp_12_cast, !dbg !48 ; [#uses=1 type=float*] [debug line = 9:21]
  %input_load = load float* %input_addr, align 4, !dbg !48 ; [#uses=1 type=float] [debug line = 9:21]
  %tmp1 = add i7 %k_cast3, %tmp_4, !dbg !48       ; [#uses=1 type=i7] [debug line = 9:21]
  %tmp1_cast = zext i7 %tmp1 to i11, !dbg !48     ; [#uses=1 type=i11] [debug line = 9:21]
  %tmp_8 = add i11 %tmp_1, %tmp1_cast, !dbg !48   ; [#uses=1 type=i11] [debug line = 9:21]
  %tmp_8_cast = sext i11 %tmp_8 to i32, !dbg !48  ; [#uses=1 type=i32] [debug line = 9:21]
  %tmp_9 = zext i32 %tmp_8_cast to i64, !dbg !48  ; [#uses=1 type=i64] [debug line = 9:21]
  %output_addr = getelementptr [576 x float]* %output, i64 0, i64 %tmp_9, !dbg !48 ; [#uses=1 type=float*] [debug line = 9:21]
  store float %input_load, float* %output_addr, align 4, !dbg !48 ; [debug line = 9:21]
  call void @llvm.dbg.value(metadata !{i5 %k_1}, i64 0, metadata !56), !dbg !55 ; [debug line = 8:35] [debug variable = k]
  br label %.preheader, !dbg !55                  ; [debug line = 8:35]

; <label>:2                                       ; preds = %.loopexit
  ret void, !dbg !57                              ; [debug line = 10:1]
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=3]
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
define weak i8 @_ssdm_op_BitConcatenate.i8.i3.i5(i3, i5) nounwind readnone {
entry:
  %empty = zext i3 %0 to i8                       ; [#uses=1 type=i8]
  %empty_4 = zext i5 %1 to i8                     ; [#uses=1 type=i8]
  %empty_5 = shl i8 %empty, 5                     ; [#uses=1 type=i8]
  %empty_6 = or i8 %empty_5, %empty_4             ; [#uses=1 type=i8]
  ret i8 %empty_6
}

; [#uses=1]
define weak i7 @_ssdm_op_BitConcatenate.i7.i3.i4(i3, i4) nounwind readnone {
entry:
  %empty = zext i3 %0 to i7                       ; [#uses=1 type=i7]
  %empty_7 = zext i4 %1 to i7                     ; [#uses=1 type=i7]
  %empty_8 = shl i7 %empty, 4                     ; [#uses=1 type=i7]
  %empty_9 = or i7 %empty_8, %empty_7             ; [#uses=1 type=i7]
  ret i7 %empty_9
}

; [#uses=1]
define weak i6 @_ssdm_op_BitConcatenate.i6.i3.i3(i3, i3) nounwind readnone {
entry:
  %empty = zext i3 %0 to i6                       ; [#uses=1 type=i6]
  %empty_10 = zext i3 %1 to i6                    ; [#uses=1 type=i6]
  %empty_11 = shl i6 %empty, 3                    ; [#uses=1 type=i6]
  %empty_12 = or i6 %empty_11, %empty_10          ; [#uses=1 type=i6]
  ret i6 %empty_12
}

; [#uses=1]
define weak i4 @_ssdm_op_BitConcatenate.i4.i3.i1(i3, i1) nounwind readnone {
entry:
  %empty = zext i3 %0 to i4                       ; [#uses=1 type=i4]
  %empty_13 = zext i1 %1 to i4                    ; [#uses=1 type=i4]
  %empty_14 = shl i4 %empty, 1                    ; [#uses=1 type=i4]
  %empty_15 = or i4 %empty_14, %empty_13          ; [#uses=1 type=i4]
  ret i4 %empty_15
}

; [#uses=1]
define weak i11 @_ssdm_op_BitConcatenate.i11.i7.i4(i7, i4) nounwind readnone {
entry:
  %empty = zext i7 %0 to i11                      ; [#uses=1 type=i11]
  %empty_16 = zext i4 %1 to i11                   ; [#uses=1 type=i11]
  %empty_17 = shl i11 %empty, 4                   ; [#uses=1 type=i11]
  %empty_18 = or i11 %empty_17, %empty_16         ; [#uses=1 type=i11]
  ret i11 %empty_18
}

; [#uses=1]
define weak i10 @_ssdm_op_BitConcatenate.i10.i3.i7(i3, i7) nounwind readnone {
entry:
  %empty = zext i3 %0 to i10                      ; [#uses=1 type=i10]
  %empty_19 = zext i7 %1 to i10                   ; [#uses=1 type=i10]
  %empty_20 = shl i10 %empty, 7                   ; [#uses=1 type=i10]
  %empty_21 = or i10 %empty_20, %empty_19         ; [#uses=1 type=i10]
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
!20 = metadata !{i32 786689, metadata !21, metadata !"output", null, i32 3, metadata !34, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!21 = metadata !{i32 786478, i32 0, metadata !22, metadata !"flatten", metadata !"flatten", metadata !"", metadata !22, i32 3, metadata !23, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !32, i32 4} ; [ DW_TAG_subprogram ]
!22 = metadata !{i32 786473, metadata !"flatten/solution1/.tcls/flatten.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!23 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !24, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!24 = metadata !{null, metadata !25, metadata !27}
!25 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !26} ; [ DW_TAG_pointer_type ]
!26 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!27 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !28} ; [ DW_TAG_pointer_type ]
!28 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3072, i64 32, i32 0, i32 0, metadata !26, metadata !29, i32 0, i32 0} ; [ DW_TAG_array_type ]
!29 = metadata !{metadata !30, metadata !31}
!30 = metadata !{i32 786465, i64 0, i64 5}        ; [ DW_TAG_subrange_type ]
!31 = metadata !{i32 786465, i64 0, i64 15}       ; [ DW_TAG_subrange_type ]
!32 = metadata !{metadata !33}
!33 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!34 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 18432, i64 32, i32 0, i32 0, metadata !26, metadata !35, i32 0, i32 0} ; [ DW_TAG_array_type ]
!35 = metadata !{metadata !36}
!36 = metadata !{i32 786465, i64 0, i64 575}      ; [ DW_TAG_subrange_type ]
!37 = metadata !{i32 3, i32 20, metadata !21, null}
!38 = metadata !{i32 786689, metadata !21, metadata !"input", null, i32 3, metadata !39, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!39 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 18432, i64 32, i32 0, i32 0, metadata !26, metadata !40, i32 0, i32 0} ; [ DW_TAG_array_type ]
!40 = metadata !{metadata !30, metadata !30, metadata !31}
!41 = metadata !{i32 3, i32 39, metadata !21, null}
!42 = metadata !{i32 6, i32 7, metadata !43, null}
!43 = metadata !{i32 786443, metadata !44, i32 6, i32 3, metadata !22, i32 1} ; [ DW_TAG_lexical_block ]
!44 = metadata !{i32 786443, metadata !21, i32 4, i32 1, metadata !22, i32 0} ; [ DW_TAG_lexical_block ]
!45 = metadata !{i32 6, i32 21, metadata !43, null}
!46 = metadata !{i32 786688, metadata !44, metadata !"i", metadata !22, i32 5, metadata !47, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!47 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!48 = metadata !{i32 9, i32 21, metadata !49, null}
!49 = metadata !{i32 786443, metadata !50, i32 8, i32 17, metadata !22, i32 3} ; [ DW_TAG_lexical_block ]
!50 = metadata !{i32 786443, metadata !43, i32 7, i32 4, metadata !22, i32 2} ; [ DW_TAG_lexical_block ]
!51 = metadata !{i32 7, i32 8, metadata !50, null}
!52 = metadata !{i32 7, i32 22, metadata !50, null}
!53 = metadata !{i32 786688, metadata !44, metadata !"j", metadata !22, i32 5, metadata !47, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!54 = metadata !{i32 8, i32 21, metadata !49, null}
!55 = metadata !{i32 8, i32 35, metadata !49, null}
!56 = metadata !{i32 786688, metadata !44, metadata !"k", metadata !22, i32 5, metadata !47, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!57 = metadata !{i32 10, i32 1, metadata !44, null}
