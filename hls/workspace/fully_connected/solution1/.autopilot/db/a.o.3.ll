; ModuleID = '/home/sergiu/git/lic/hls/workspace/fully_connected/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@fc_str = internal unnamed_addr constant [3 x i8] c"fc\00" ; [#uses=1 type=[3 x i8]*]

; [#uses=1]
declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

; [#uses=8]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @fc([120 x float]* %output, [576 x float]* %input, [69120 x float]* %weight, [120 x float]* %bias) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([120 x float]* %output) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecBitsMap([576 x float]* %input) nounwind, !map !19
  call void (...)* @_ssdm_op_SpecBitsMap([69120 x float]* %weight) nounwind, !map !25
  call void (...)* @_ssdm_op_SpecBitsMap([120 x float]* %bias) nounwind, !map !30
  call void (...)* @_ssdm_op_SpecTopModule([3 x i8]* @fc_str) nounwind
  call void @llvm.dbg.value(metadata !{[120 x float]* %output}, i64 0, metadata !34), !dbg !47 ; [debug line = 4:15] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[576 x float]* %input}, i64 0, metadata !48), !dbg !52 ; [debug line = 4:34] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[69120 x float]* %weight}, i64 0, metadata !53), !dbg !56 ; [debug line = 4:52] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[120 x float]* %bias}, i64 0, metadata !57), !dbg !58 ; [debug line = 4:76] [debug variable = bias]
  br label %1, !dbg !59                           ; [debug line = 7:15]

; <label>:1                                       ; preds = %5, %0
  %i = phi i7 [ 0, %0 ], [ %i_1, %5 ]             ; [#uses=4 type=i7]
  %exitcond1 = icmp eq i7 %i, -8, !dbg !59        ; [#uses=1 type=i1] [debug line = 7:15]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 120, i64 120, i64 120) nounwind ; [#uses=0 type=i32]
  %i_1 = add i7 %i, 1, !dbg !62                   ; [#uses=1 type=i7] [debug line = 7:26]
  br i1 %exitcond1, label %6, label %2, !dbg !59  ; [debug line = 7:15]

; <label>:2                                       ; preds = %1
  %tmp = zext i7 %i to i64, !dbg !63              ; [#uses=2 type=i64] [debug line = 9:3]
  %tmp_cast = zext i7 %i to i18, !dbg !63         ; [#uses=1 type=i18] [debug line = 9:3]
  %output_addr = getelementptr [120 x float]* %output, i64 0, i64 %tmp, !dbg !63 ; [#uses=1 type=float*] [debug line = 9:3]
  br label %3, !dbg !65                           ; [debug line = 10:16]

; <label>:3                                       ; preds = %4, %2
  %tmp_2 = phi float [ 0.000000e+00, %2 ], [ %tmp_8, %4 ] ; [#uses=2 type=float]
  %j = phi i10 [ 0, %2 ], [ %j_1, %4 ]            ; [#uses=5 type=i10]
  %exitcond = icmp eq i10 %j, -448, !dbg !65      ; [#uses=1 type=i1] [debug line = 10:16]
  %empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 576, i64 576, i64 576) nounwind ; [#uses=0 type=i32]
  %j_1 = add i10 %j, 1, !dbg !67                  ; [#uses=1 type=i10] [debug line = 10:27]
  br i1 %exitcond, label %5, label %4, !dbg !65   ; [debug line = 10:16]

; <label>:4                                       ; preds = %3
  %tmp_6 = zext i10 %j to i64, !dbg !68           ; [#uses=1 type=i64] [debug line = 11:4]
  %tmp_s = call i17 @_ssdm_op_BitConcatenate.i17.i10.i7(i10 %j, i7 0) ; [#uses=1 type=i17]
  %p_shl_cast = zext i17 %tmp_s to i18            ; [#uses=1 type=i18]
  %tmp_10 = call i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10 %j, i3 0) ; [#uses=1 type=i13]
  %p_shl1_cast = zext i13 %tmp_10 to i18, !dbg !68 ; [#uses=1 type=i18] [debug line = 11:4]
  %tmp_11 = sub i18 %p_shl_cast, %p_shl1_cast, !dbg !68 ; [#uses=1 type=i18] [debug line = 11:4]
  %tmp_12 = add i18 %tmp_11, %tmp_cast, !dbg !68  ; [#uses=1 type=i18] [debug line = 11:4]
  %tmp_13_cast = sext i18 %tmp_12 to i64, !dbg !68 ; [#uses=1 type=i64] [debug line = 11:4]
  %weight_addr = getelementptr [69120 x float]* %weight, i64 0, i64 %tmp_13_cast, !dbg !68 ; [#uses=1 type=float*] [debug line = 11:4]
  %weight_load = load float* %weight_addr, align 4, !dbg !68 ; [#uses=1 type=float] [debug line = 11:4]
  %input_addr = getelementptr [576 x float]* %input, i64 0, i64 %tmp_6, !dbg !68 ; [#uses=1 type=float*] [debug line = 11:4]
  %input_load = load float* %input_addr, align 4, !dbg !68 ; [#uses=1 type=float] [debug line = 11:4]
  %tmp_7 = fmul float %weight_load, %input_load, !dbg !68 ; [#uses=1 type=float] [debug line = 11:4]
  %tmp_8 = fadd float %tmp_2, %tmp_7, !dbg !68    ; [#uses=1 type=float] [debug line = 11:4]
  call void @llvm.dbg.value(metadata !{i10 %j_1}, i64 0, metadata !69), !dbg !67 ; [debug line = 10:27] [debug variable = j]
  br label %3, !dbg !67                           ; [debug line = 10:27]

; <label>:5                                       ; preds = %3
  %bias_addr = getelementptr [120 x float]* %bias, i64 0, i64 %tmp, !dbg !71 ; [#uses=1 type=float*] [debug line = 12:3]
  %bias_load = load float* %bias_addr, align 4, !dbg !71 ; [#uses=1 type=float] [debug line = 12:3]
  %a_assign = fadd float %tmp_2, %bias_load, !dbg !71 ; [#uses=3 type=float] [debug line = 12:3]
  call void @llvm.dbg.value(metadata !{float %a_assign}, i64 0, metadata !72), !dbg !78 ; [debug line = 4:18@13:15] [debug variable = a]
  %a_assign_to_int = bitcast float %a_assign to i32 ; [#uses=2 type=i32]
  %tmp_1 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %a_assign_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp_3 = trunc i32 %a_assign_to_int to i23      ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp_1, -1                 ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp_3, 0                 ; [#uses=1 type=i1]
  %tmp_4 = or i1 %notrhs, %notlhs                 ; [#uses=1 type=i1]
  %tmp_5 = fcmp ogt float %a_assign, 0.000000e+00, !dbg !79 ; [#uses=1 type=i1] [debug line = 6:2@13:15]
  %tmp_9 = and i1 %tmp_4, %tmp_5, !dbg !79        ; [#uses=1 type=i1] [debug line = 6:2@13:15]
  %a_assign_1 = select i1 %tmp_9, float %a_assign, float 0.000000e+00, !dbg !79 ; [#uses=1 type=float] [debug line = 6:2@13:15]
  call void @llvm.dbg.value(metadata !{float %a_assign_1}, i64 0, metadata !72), !dbg !79 ; [debug line = 6:2@13:15] [debug variable = a]
  store float %a_assign_1, float* %output_addr, align 4, !dbg !77 ; [debug line = 13:15]
  call void @llvm.dbg.value(metadata !{i7 %i_1}, i64 0, metadata !81), !dbg !62 ; [debug line = 7:26] [debug variable = i]
  br label %1, !dbg !62                           ; [debug line = 7:26]

; <label>:6                                       ; preds = %1
  ret void, !dbg !82                              ; [debug line = 16:1]
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=2]
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
  %empty_5 = trunc i32 %empty to i8               ; [#uses=1 type=i8]
  ret i8 %empty_5
}

; [#uses=0]
declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
define weak i17 @_ssdm_op_BitConcatenate.i17.i10.i7(i10, i7) nounwind readnone {
entry:
  %empty = zext i10 %0 to i17                     ; [#uses=1 type=i17]
  %empty_6 = zext i7 %1 to i17                    ; [#uses=1 type=i17]
  %empty_7 = shl i17 %empty, 7                    ; [#uses=1 type=i17]
  %empty_8 = or i17 %empty_7, %empty_6            ; [#uses=1 type=i17]
  ret i17 %empty_8
}

; [#uses=1]
define weak i13 @_ssdm_op_BitConcatenate.i13.i10.i3(i10, i3) nounwind readnone {
entry:
  %empty = zext i10 %0 to i13                     ; [#uses=1 type=i13]
  %empty_9 = zext i3 %1 to i13                    ; [#uses=1 type=i13]
  %empty_10 = shl i13 %empty, 3                   ; [#uses=1 type=i13]
  %empty_11 = or i13 %empty_10, %empty_9          ; [#uses=1 type=i13]
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
!34 = metadata !{i32 786689, metadata !35, metadata !"output", null, i32 4, metadata !42, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!35 = metadata !{i32 786478, i32 0, metadata !36, metadata !"fc", metadata !"fc", metadata !"", metadata !36, i32 4, metadata !37, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !45, i32 5} ; [ DW_TAG_subprogram ]
!36 = metadata !{i32 786473, metadata !"fully_connected/solution1/fc.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!37 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !38, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!38 = metadata !{null, metadata !39, metadata !39, metadata !41, metadata !39}
!39 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !40} ; [ DW_TAG_pointer_type ]
!40 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!41 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !42} ; [ DW_TAG_pointer_type ]
!42 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3840, i64 32, i32 0, i32 0, metadata !40, metadata !43, i32 0, i32 0} ; [ DW_TAG_array_type ]
!43 = metadata !{metadata !44}
!44 = metadata !{i32 786465, i64 0, i64 119}      ; [ DW_TAG_subrange_type ]
!45 = metadata !{metadata !46}
!46 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!47 = metadata !{i32 4, i32 15, metadata !35, null}
!48 = metadata !{i32 786689, metadata !35, metadata !"input", null, i32 4, metadata !49, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!49 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 18432, i64 32, i32 0, i32 0, metadata !40, metadata !50, i32 0, i32 0} ; [ DW_TAG_array_type ]
!50 = metadata !{metadata !51}
!51 = metadata !{i32 786465, i64 0, i64 575}      ; [ DW_TAG_subrange_type ]
!52 = metadata !{i32 4, i32 34, metadata !35, null}
!53 = metadata !{i32 786689, metadata !35, metadata !"weight", null, i32 4, metadata !54, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!54 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 2211840, i64 32, i32 0, i32 0, metadata !40, metadata !55, i32 0, i32 0} ; [ DW_TAG_array_type ]
!55 = metadata !{metadata !51, metadata !44}
!56 = metadata !{i32 4, i32 52, metadata !35, null}
!57 = metadata !{i32 786689, metadata !35, metadata !"bias", null, i32 4, metadata !42, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!58 = metadata !{i32 4, i32 76, metadata !35, null}
!59 = metadata !{i32 7, i32 15, metadata !60, null}
!60 = metadata !{i32 786443, metadata !61, i32 7, i32 2, metadata !36, i32 2} ; [ DW_TAG_lexical_block ]
!61 = metadata !{i32 786443, metadata !35, i32 5, i32 1, metadata !36, i32 1} ; [ DW_TAG_lexical_block ]
!62 = metadata !{i32 7, i32 26, metadata !60, null}
!63 = metadata !{i32 9, i32 3, metadata !64, null}
!64 = metadata !{i32 786443, metadata !60, i32 8, i32 2, metadata !36, i32 3} ; [ DW_TAG_lexical_block ]
!65 = metadata !{i32 10, i32 16, metadata !66, null}
!66 = metadata !{i32 786443, metadata !64, i32 10, i32 3, metadata !36, i32 4} ; [ DW_TAG_lexical_block ]
!67 = metadata !{i32 10, i32 27, metadata !66, null}
!68 = metadata !{i32 11, i32 4, metadata !66, null}
!69 = metadata !{i32 786688, metadata !66, metadata !"j", metadata !36, i32 10, metadata !70, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!70 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!71 = metadata !{i32 12, i32 3, metadata !64, null}
!72 = metadata !{i32 786689, metadata !73, metadata !"a", metadata !74, i32 16777220, metadata !40, i32 0, metadata !77} ; [ DW_TAG_arg_variable ]
!73 = metadata !{i32 786478, i32 0, metadata !74, metadata !"relu", metadata !"relu", metadata !"", metadata !74, i32 4, metadata !75, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !45, i32 5} ; [ DW_TAG_subprogram ]
!74 = metadata !{i32 786473, metadata !"/home/sergiu/git/lic/hls/workspace/fully_connected/headers/activations.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!75 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !76, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!76 = metadata !{metadata !40, metadata !40}
!77 = metadata !{i32 13, i32 15, metadata !64, null}
!78 = metadata !{i32 4, i32 18, metadata !73, metadata !77}
!79 = metadata !{i32 6, i32 2, metadata !80, metadata !77}
!80 = metadata !{i32 786443, metadata !73, i32 5, i32 1, metadata !74, i32 0} ; [ DW_TAG_lexical_block ]
!81 = metadata !{i32 786688, metadata !60, metadata !"i", metadata !36, i32 7, metadata !70, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!82 = metadata !{i32 16, i32 1, metadata !61, null}
