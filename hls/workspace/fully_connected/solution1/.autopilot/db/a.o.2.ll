; ModuleID = '/home/sergiu/git/lic/hls/workspace/fully_connected/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@fc.str = internal unnamed_addr constant [3 x i8] c"fc\00" ; [#uses=1 type=[3 x i8]*]

; [#uses=8]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @fc([120 x float]* %output, [576 x float]* %input, [576 x [120 x float]]* %weight, [120 x float]* %bias) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([120 x float]* %output) nounwind, !map !34
  call void (...)* @_ssdm_op_SpecBitsMap([576 x float]* %input) nounwind, !map !40
  call void (...)* @_ssdm_op_SpecBitsMap([576 x [120 x float]]* %weight) nounwind, !map !46
  call void (...)* @_ssdm_op_SpecBitsMap([120 x float]* %bias) nounwind, !map !51
  call void (...)* @_ssdm_op_SpecTopModule([3 x i8]* @fc.str) nounwind
  call void @llvm.dbg.value(metadata !{[120 x float]* %output}, i64 0, metadata !55), !dbg !56 ; [debug line = 4:15] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[576 x float]* %input}, i64 0, metadata !57), !dbg !61 ; [debug line = 4:34] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[576 x [120 x float]]* %weight}, i64 0, metadata !62), !dbg !65 ; [debug line = 4:52] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{[120 x float]* %bias}, i64 0, metadata !66), !dbg !67 ; [debug line = 4:76] [debug variable = bias]
  br label %1, !dbg !68                           ; [debug line = 7:15]

; <label>:1                                       ; preds = %7, %0
  %i = phi i7 [ 0, %0 ], [ %i.1, %7 ]             ; [#uses=3 type=i7]
  %exitcond1 = icmp eq i7 %i, -8, !dbg !68        ; [#uses=1 type=i1] [debug line = 7:15]
  %2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 120, i64 120, i64 120) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond1, label %8, label %3, !dbg !68  ; [debug line = 7:15]

; <label>:3                                       ; preds = %1
  %tmp = zext i7 %i to i64, !dbg !71              ; [#uses=3 type=i64] [debug line = 9:3]
  %output.addr = getelementptr [120 x float]* %output, i64 0, i64 %tmp, !dbg !71 ; [#uses=1 type=float*] [debug line = 9:3]
  br label %4, !dbg !73                           ; [debug line = 10:16]

; <label>:4                                       ; preds = %6, %3
  %tmp.2 = phi float [ 0.000000e+00, %3 ], [ %tmp.8, %6 ] ; [#uses=2 type=float]
  %j = phi i10 [ 0, %3 ], [ %j.1, %6 ]            ; [#uses=3 type=i10]
  %exitcond = icmp eq i10 %j, -448, !dbg !73      ; [#uses=1 type=i1] [debug line = 10:16]
  %5 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 576, i64 576, i64 576) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond, label %7, label %6, !dbg !73   ; [debug line = 10:16]

; <label>:6                                       ; preds = %4
  %tmp.6 = zext i10 %j to i64, !dbg !75           ; [#uses=2 type=i64] [debug line = 11:4]
  %weight.addr = getelementptr [576 x [120 x float]]* %weight, i64 0, i64 %tmp.6, i64 %tmp, !dbg !75 ; [#uses=1 type=float*] [debug line = 11:4]
  %weight.load = load float* %weight.addr, align 4, !dbg !75 ; [#uses=1 type=float] [debug line = 11:4]
  %input.addr = getelementptr [576 x float]* %input, i64 0, i64 %tmp.6, !dbg !75 ; [#uses=1 type=float*] [debug line = 11:4]
  %input.load = load float* %input.addr, align 4, !dbg !75 ; [#uses=1 type=float] [debug line = 11:4]
  %tmp.7 = fmul float %weight.load, %input.load, !dbg !75 ; [#uses=1 type=float] [debug line = 11:4]
  %tmp.8 = fadd float %tmp.2, %tmp.7, !dbg !75    ; [#uses=1 type=float] [debug line = 11:4]
  %j.1 = add i10 %j, 1, !dbg !76                  ; [#uses=1 type=i10] [debug line = 10:27]
  call void @llvm.dbg.value(metadata !{i10 %j.1}, i64 0, metadata !77), !dbg !76 ; [debug line = 10:27] [debug variable = j]
  br label %4, !dbg !76                           ; [debug line = 10:27]

; <label>:7                                       ; preds = %4
  %tmp.2.lcssa = phi float [ %tmp.2, %4 ]         ; [#uses=1 type=float]
  %bias.addr = getelementptr [120 x float]* %bias, i64 0, i64 %tmp, !dbg !79 ; [#uses=1 type=float*] [debug line = 12:3]
  %bias.load = load float* %bias.addr, align 4, !dbg !79 ; [#uses=1 type=float] [debug line = 12:3]
  %a.assign = fadd float %tmp.2.lcssa, %bias.load, !dbg !79 ; [#uses=3 type=float] [debug line = 12:3]
  call void @llvm.dbg.value(metadata !{float %a.assign}, i64 0, metadata !80), !dbg !82 ; [debug line = 4:18@13:15] [debug variable = a]
  %a.assign_to_int = bitcast float %a.assign to i32 ; [#uses=2 type=i32]
  %tmp.1 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %a.assign_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp.3 = trunc i32 %a.assign_to_int to i23      ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp.1, -1                 ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp.3, 0                 ; [#uses=1 type=i1]
  %tmp.4 = or i1 %notrhs, %notlhs                 ; [#uses=1 type=i1]
  %tmp.5 = fcmp ogt float %a.assign, 0.000000e+00, !dbg !83 ; [#uses=1 type=i1] [debug line = 6:2@13:15]
  %tmp.9 = and i1 %tmp.4, %tmp.5, !dbg !83        ; [#uses=1 type=i1] [debug line = 6:2@13:15]
  %a.assign.1 = select i1 %tmp.9, float %a.assign, float 0.000000e+00, !dbg !83 ; [#uses=1 type=float] [debug line = 6:2@13:15]
  call void @llvm.dbg.value(metadata !{float %a.assign.1}, i64 0, metadata !80), !dbg !83 ; [debug line = 6:2@13:15] [debug variable = a]
  store float %a.assign.1, float* %output.addr, align 4, !dbg !81 ; [debug line = 13:15]
  %i.1 = add i7 %i, 1, !dbg !85                   ; [#uses=1 type=i7] [debug line = 7:26]
  call void @llvm.dbg.value(metadata !{i7 %i.1}, i64 0, metadata !86), !dbg !85 ; [debug line = 7:26] [debug variable = i]
  br label %1, !dbg !85                           ; [debug line = 7:26]

; <label>:8                                       ; preds = %1
  ret void, !dbg !87                              ; [debug line = 16:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=2]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

; [#uses=4]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=1]
declare i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!21, !28}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/fully_connected/solution1/.autopilot/db/fc.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !12}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"relu", metadata !"relu", metadata !"", metadata !6, i32 4, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !10, i32 5} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"/home/sergiu/git/lic/hls/workspace/fully_connected/headers/activations.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !9}
!9 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!10 = metadata !{metadata !11}
!11 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!12 = metadata !{i32 786478, i32 0, metadata !13, metadata !"fc", metadata !"fc", metadata !"", metadata !13, i32 4, metadata !14, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !10, i32 5} ; [ DW_TAG_subprogram ]
!13 = metadata !{i32 786473, metadata !"fully_connected/solution1/fc.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!14 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !15, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!15 = metadata !{null, metadata !16, metadata !16, metadata !17, metadata !16}
!16 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !9} ; [ DW_TAG_pointer_type ]
!17 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !18} ; [ DW_TAG_pointer_type ]
!18 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3840, i64 32, i32 0, i32 0, metadata !9, metadata !19, i32 0, i32 0} ; [ DW_TAG_array_type ]
!19 = metadata !{metadata !20}
!20 = metadata !{i32 786465, i64 0, i64 119}      ; [ DW_TAG_subrange_type ]
!21 = metadata !{null, metadata !22, metadata !23, metadata !24, metadata !25, metadata !26, metadata !27}
!22 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!23 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!24 = metadata !{metadata !"kernel_arg_type", metadata !"float"}
!25 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!26 = metadata !{metadata !"kernel_arg_name", metadata !"a"}
!27 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!28 = metadata !{null, metadata !29, metadata !30, metadata !31, metadata !32, metadata !33, metadata !27}
!29 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1}
!30 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!31 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float*", metadata !"float [120]*", metadata !"float*"}
!32 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!33 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"input", metadata !"weight", metadata !"bias"}
!34 = metadata !{metadata !35}
!35 = metadata !{i32 0, i32 31, metadata !36}
!36 = metadata !{metadata !37}
!37 = metadata !{metadata !"output", metadata !38, metadata !"float", i32 0, i32 31}
!38 = metadata !{metadata !39}
!39 = metadata !{i32 0, i32 119, i32 1}
!40 = metadata !{metadata !41}
!41 = metadata !{i32 0, i32 31, metadata !42}
!42 = metadata !{metadata !43}
!43 = metadata !{metadata !"input", metadata !44, metadata !"float", i32 0, i32 31}
!44 = metadata !{metadata !45}
!45 = metadata !{i32 0, i32 575, i32 1}
!46 = metadata !{metadata !47}
!47 = metadata !{i32 0, i32 31, metadata !48}
!48 = metadata !{metadata !49}
!49 = metadata !{metadata !"weight", metadata !50, metadata !"float", i32 0, i32 31}
!50 = metadata !{metadata !45, metadata !39}
!51 = metadata !{metadata !52}
!52 = metadata !{i32 0, i32 31, metadata !53}
!53 = metadata !{metadata !54}
!54 = metadata !{metadata !"bias", metadata !38, metadata !"float", i32 0, i32 31}
!55 = metadata !{i32 786689, metadata !12, metadata !"output", null, i32 4, metadata !18, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!56 = metadata !{i32 4, i32 15, metadata !12, null}
!57 = metadata !{i32 786689, metadata !12, metadata !"input", null, i32 4, metadata !58, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!58 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 18432, i64 32, i32 0, i32 0, metadata !9, metadata !59, i32 0, i32 0} ; [ DW_TAG_array_type ]
!59 = metadata !{metadata !60}
!60 = metadata !{i32 786465, i64 0, i64 575}      ; [ DW_TAG_subrange_type ]
!61 = metadata !{i32 4, i32 34, metadata !12, null}
!62 = metadata !{i32 786689, metadata !12, metadata !"weight", null, i32 4, metadata !63, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!63 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 2211840, i64 32, i32 0, i32 0, metadata !9, metadata !64, i32 0, i32 0} ; [ DW_TAG_array_type ]
!64 = metadata !{metadata !60, metadata !20}
!65 = metadata !{i32 4, i32 52, metadata !12, null}
!66 = metadata !{i32 786689, metadata !12, metadata !"bias", null, i32 4, metadata !18, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!67 = metadata !{i32 4, i32 76, metadata !12, null}
!68 = metadata !{i32 7, i32 15, metadata !69, null}
!69 = metadata !{i32 786443, metadata !70, i32 7, i32 2, metadata !13, i32 2} ; [ DW_TAG_lexical_block ]
!70 = metadata !{i32 786443, metadata !12, i32 5, i32 1, metadata !13, i32 1} ; [ DW_TAG_lexical_block ]
!71 = metadata !{i32 9, i32 3, metadata !72, null}
!72 = metadata !{i32 786443, metadata !69, i32 8, i32 2, metadata !13, i32 3} ; [ DW_TAG_lexical_block ]
!73 = metadata !{i32 10, i32 16, metadata !74, null}
!74 = metadata !{i32 786443, metadata !72, i32 10, i32 3, metadata !13, i32 4} ; [ DW_TAG_lexical_block ]
!75 = metadata !{i32 11, i32 4, metadata !74, null}
!76 = metadata !{i32 10, i32 27, metadata !74, null}
!77 = metadata !{i32 786688, metadata !74, metadata !"j", metadata !13, i32 10, metadata !78, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!78 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!79 = metadata !{i32 12, i32 3, metadata !72, null}
!80 = metadata !{i32 786689, metadata !5, metadata !"a", metadata !6, i32 16777220, metadata !9, i32 0, metadata !81} ; [ DW_TAG_arg_variable ]
!81 = metadata !{i32 13, i32 15, metadata !72, null}
!82 = metadata !{i32 4, i32 18, metadata !5, metadata !81}
!83 = metadata !{i32 6, i32 2, metadata !84, metadata !81}
!84 = metadata !{i32 786443, metadata !5, i32 5, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!85 = metadata !{i32 7, i32 26, metadata !69, null}
!86 = metadata !{i32 786688, metadata !69, metadata !"i", metadata !13, i32 7, metadata !78, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!87 = metadata !{i32 16, i32 1, metadata !70, null}
