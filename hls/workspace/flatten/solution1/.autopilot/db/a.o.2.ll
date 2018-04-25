; ModuleID = '/home/sergiu/git/lic/hls/workspace/flatten/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@flatten.str = internal unnamed_addr constant [8 x i8] c"flatten\00" ; [#uses=1 type=[8 x i8]*]

; [#uses=5]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @flatten([576 x float]* %output, [6 x [6 x [16 x float]]]* %input) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([576 x float]* %output) nounwind, !map !25
  call void (...)* @_ssdm_op_SpecBitsMap([6 x [6 x [16 x float]]]* %input) nounwind, !map !31
  call void (...)* @_ssdm_op_SpecTopModule([8 x i8]* @flatten.str) nounwind
  call void @llvm.dbg.value(metadata !{[576 x float]* %output}, i64 0, metadata !38), !dbg !42 ; [debug line = 3:20] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[6 x [6 x [16 x float]]]* %input}, i64 0, metadata !43), !dbg !46 ; [debug line = 3:39] [debug variable = input]
  br label %1, !dbg !47                           ; [debug line = 6:7]

; <label>:1                                       ; preds = %7, %0
  %i = phi i3 [ 0, %0 ], [ %i.1, %7 ]             ; [#uses=5 type=i3]
  %i.cast8 = zext i3 %i to i8, !dbg !47           ; [#uses=1 type=i8] [debug line = 6:7]
  %i.cast7 = zext i3 %i to i10, !dbg !47          ; [#uses=1 type=i10] [debug line = 6:7]
  %exitcond2 = icmp eq i3 %i, -2, !dbg !47        ; [#uses=1 type=i1] [debug line = 6:7]
  %2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond2, label %8, label %.preheader3.preheader, !dbg !47 ; [debug line = 6:7]

.preheader3.preheader:                            ; preds = %1
  %tmp = zext i3 %i to i64, !dbg !50              ; [#uses=1 type=i64] [debug line = 9:21]
  %_shl = shl nuw i10 %i.cast7, 7, !dbg !50       ; [#uses=1 type=i10] [debug line = 9:21]
  %_shl.cast = zext i10 %_shl to i11, !dbg !50    ; [#uses=1 type=i11] [debug line = 9:21]
  %_shl5 = shl nuw i8 %i.cast8, 5, !dbg !50       ; [#uses=1 type=i8] [debug line = 9:21]
  %_shl5.cast = zext i8 %_shl5 to i11, !dbg !50   ; [#uses=1 type=i11] [debug line = 9:21]
  %tmp.1 = sub i11 %_shl.cast, %_shl5.cast, !dbg !50 ; [#uses=1 type=i11] [debug line = 9:21]
  br label %.preheader3, !dbg !53                 ; [debug line = 7:8]

.preheader3:                                      ; preds = %6, %.preheader3.preheader
  %j = phi i3 [ %j.1, %6 ], [ 0, %.preheader3.preheader ] ; [#uses=4 type=i3]
  %j.cast5 = zext i3 %j to i7, !dbg !53           ; [#uses=1 type=i7] [debug line = 7:8]
  %exitcond1 = icmp eq i3 %j, -2, !dbg !53        ; [#uses=1 type=i1] [debug line = 7:8]
  %3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 6, i64 6, i64 6) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond1, label %7, label %.preheader.preheader, !dbg !53 ; [debug line = 7:8]

.preheader.preheader:                             ; preds = %.preheader3
  %tmp.3 = zext i3 %j to i64, !dbg !50            ; [#uses=1 type=i64] [debug line = 9:21]
  %tmp.4 = shl nuw i7 %j.cast5, 4, !dbg !50       ; [#uses=1 type=i7] [debug line = 9:21]
  br label %.preheader, !dbg !54                  ; [debug line = 8:21]

.preheader:                                       ; preds = %5, %.preheader.preheader
  %k = phi i5 [ %k.1, %5 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i5]
  %k.cast3 = zext i5 %k to i7, !dbg !54           ; [#uses=1 type=i7] [debug line = 8:21]
  %exitcond = icmp eq i5 %k, -16, !dbg !54        ; [#uses=1 type=i1] [debug line = 8:21]
  %4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond, label %6, label %5, !dbg !54   ; [debug line = 8:21]

; <label>:5                                       ; preds = %.preheader
  %tmp.6 = zext i5 %k to i64, !dbg !50            ; [#uses=1 type=i64] [debug line = 9:21]
  %input.addr = getelementptr [6 x [6 x [16 x float]]]* %input, i64 0, i64 %tmp, i64 %tmp.3, i64 %tmp.6, !dbg !50 ; [#uses=1 type=float*] [debug line = 9:21]
  %input.load = load float* %input.addr, align 4, !dbg !50 ; [#uses=1 type=float] [debug line = 9:21]
  %tmp1 = add i7 %k.cast3, %tmp.4, !dbg !50       ; [#uses=1 type=i7] [debug line = 9:21]
  %tmp1.cast = zext i7 %tmp1 to i11, !dbg !50     ; [#uses=1 type=i11] [debug line = 9:21]
  %tmp.8 = add i11 %tmp.1, %tmp1.cast, !dbg !50   ; [#uses=1 type=i11] [debug line = 9:21]
  %tmp.8.cast = sext i11 %tmp.8 to i32, !dbg !50  ; [#uses=1 type=i32] [debug line = 9:21]
  %tmp.9 = zext i32 %tmp.8.cast to i64, !dbg !50  ; [#uses=1 type=i64] [debug line = 9:21]
  %output.addr = getelementptr [576 x float]* %output, i64 0, i64 %tmp.9, !dbg !50 ; [#uses=1 type=float*] [debug line = 9:21]
  store float %input.load, float* %output.addr, align 4, !dbg !50 ; [debug line = 9:21]
  %k.1 = add i5 %k, 1, !dbg !55                   ; [#uses=1 type=i5] [debug line = 8:35]
  call void @llvm.dbg.value(metadata !{i5 %k.1}, i64 0, metadata !56), !dbg !55 ; [debug line = 8:35] [debug variable = k]
  br label %.preheader, !dbg !55                  ; [debug line = 8:35]

; <label>:6                                       ; preds = %.preheader
  %j.1 = add i3 %j, 1, !dbg !58                   ; [#uses=1 type=i3] [debug line = 7:22]
  call void @llvm.dbg.value(metadata !{i3 %j.1}, i64 0, metadata !59), !dbg !58 ; [debug line = 7:22] [debug variable = j]
  br label %.preheader3, !dbg !58                 ; [debug line = 7:22]

; <label>:7                                       ; preds = %.preheader3
  %i.1 = add i3 %i, 1, !dbg !60                   ; [#uses=1 type=i3] [debug line = 6:21]
  call void @llvm.dbg.value(metadata !{i3 %i.1}, i64 0, metadata !61), !dbg !60 ; [debug line = 6:21] [debug variable = i]
  br label %1, !dbg !60                           ; [debug line = 6:21]

; <label>:8                                       ; preds = %1
  ret void, !dbg !62                              ; [debug line = 10:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=3]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

; [#uses=2]
declare void @_ssdm_op_SpecBitsMap(...)

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!18}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/flatten/solution1/.autopilot/db/flatten.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"flatten", metadata !"flatten", metadata !"", metadata !6, i32 3, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !16, i32 4} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"flatten/solution1/.tcls/flatten.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !11}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!11 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !12} ; [ DW_TAG_pointer_type ]
!12 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3072, i64 32, i32 0, i32 0, metadata !10, metadata !13, i32 0, i32 0} ; [ DW_TAG_array_type ]
!13 = metadata !{metadata !14, metadata !15}
!14 = metadata !{i32 786465, i64 0, i64 5}        ; [ DW_TAG_subrange_type ]
!15 = metadata !{i32 786465, i64 0, i64 15}       ; [ DW_TAG_subrange_type ]
!16 = metadata !{metadata !17}
!17 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!18 = metadata !{null, metadata !19, metadata !20, metadata !21, metadata !22, metadata !23, metadata !24}
!19 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!20 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!21 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float [6][16]*"}
!22 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!23 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"input"}
!24 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!25 = metadata !{metadata !26}
!26 = metadata !{i32 0, i32 31, metadata !27}
!27 = metadata !{metadata !28}
!28 = metadata !{metadata !"output", metadata !29, metadata !"float", i32 0, i32 31}
!29 = metadata !{metadata !30}
!30 = metadata !{i32 0, i32 575, i32 1}
!31 = metadata !{metadata !32}
!32 = metadata !{i32 0, i32 31, metadata !33}
!33 = metadata !{metadata !34}
!34 = metadata !{metadata !"input", metadata !35, metadata !"float", i32 0, i32 31}
!35 = metadata !{metadata !36, metadata !36, metadata !37}
!36 = metadata !{i32 0, i32 5, i32 1}
!37 = metadata !{i32 0, i32 15, i32 1}
!38 = metadata !{i32 786689, metadata !5, metadata !"output", null, i32 3, metadata !39, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!39 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 18432, i64 32, i32 0, i32 0, metadata !10, metadata !40, i32 0, i32 0} ; [ DW_TAG_array_type ]
!40 = metadata !{metadata !41}
!41 = metadata !{i32 786465, i64 0, i64 575}      ; [ DW_TAG_subrange_type ]
!42 = metadata !{i32 3, i32 20, metadata !5, null}
!43 = metadata !{i32 786689, metadata !5, metadata !"input", null, i32 3, metadata !44, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!44 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 18432, i64 32, i32 0, i32 0, metadata !10, metadata !45, i32 0, i32 0} ; [ DW_TAG_array_type ]
!45 = metadata !{metadata !14, metadata !14, metadata !15}
!46 = metadata !{i32 3, i32 39, metadata !5, null}
!47 = metadata !{i32 6, i32 7, metadata !48, null}
!48 = metadata !{i32 786443, metadata !49, i32 6, i32 3, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!49 = metadata !{i32 786443, metadata !5, i32 4, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!50 = metadata !{i32 9, i32 21, metadata !51, null}
!51 = metadata !{i32 786443, metadata !52, i32 8, i32 17, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!52 = metadata !{i32 786443, metadata !48, i32 7, i32 4, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!53 = metadata !{i32 7, i32 8, metadata !52, null}
!54 = metadata !{i32 8, i32 21, metadata !51, null}
!55 = metadata !{i32 8, i32 35, metadata !51, null}
!56 = metadata !{i32 786688, metadata !49, metadata !"k", metadata !6, i32 5, metadata !57, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!57 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!58 = metadata !{i32 7, i32 22, metadata !52, null}
!59 = metadata !{i32 786688, metadata !49, metadata !"j", metadata !6, i32 5, metadata !57, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!60 = metadata !{i32 6, i32 21, metadata !48, null}
!61 = metadata !{i32 786688, metadata !49, metadata !"i", metadata !6, i32 5, metadata !57, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!62 = metadata !{i32 10, i32 1, metadata !49, null}
