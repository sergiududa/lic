; ModuleID = '/home/sergiu/git/lic/hls/workspace/fully_connected/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@fc.str = internal unnamed_addr constant [3 x i8] c"fc\00" ; [#uses=1 type=[3 x i8]*]

; [#uses=1]
define internal fastcc float @relu(float %a) nounwind uwtable {
  call void @llvm.dbg.value(metadata !{float %a}, i64 0, metadata !34), !dbg !35 ; [debug line = 4:18] [debug variable = a]
  %tmp = fcmp ogt float %a, 0.000000e+00, !dbg !36 ; [#uses=1 type=i1] [debug line = 6:2]
  %a.assign = select i1 %tmp, float %a, float 0.000000e+00, !dbg !36 ; [#uses=1 type=float] [debug line = 6:2]
  call void @llvm.dbg.value(metadata !{float %a.assign}, i64 0, metadata !34), !dbg !36 ; [debug line = 6:2] [debug variable = a]
  ret float %a.assign, !dbg !36                   ; [debug line = 6:2]
}

; [#uses=8]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @fc(float* %output, float* %input, [120 x float]* %weight, float* %bias) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecTopModule([3 x i8]* @fc.str) nounwind
  call void @llvm.dbg.value(metadata !{float* %output}, i64 0, metadata !38), !dbg !39 ; [debug line = 4:15] [debug variable = output]
  call void @llvm.dbg.value(metadata !{float* %input}, i64 0, metadata !40), !dbg !41 ; [debug line = 4:34] [debug variable = input]
  call void @llvm.dbg.value(metadata !{[120 x float]* %weight}, i64 0, metadata !42), !dbg !43 ; [debug line = 4:52] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{float* %bias}, i64 0, metadata !44), !dbg !45 ; [debug line = 4:76] [debug variable = bias]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %output, i32 120) nounwind, !dbg !46 ; [debug line = 5:2]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %input, i32 576) nounwind, !dbg !48 ; [debug line = 5:37]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %bias, i32 120) nounwind, !dbg !49 ; [debug line = 5:71]
  call void (...)* @_ssdm_SpecArrayDimSize([120 x float]* %weight, i32 576) nounwind, !dbg !50 ; [debug line = 5:104]
  br label %1, !dbg !51                           ; [debug line = 7:15]

; <label>:1                                       ; preds = %5, %0
  %i = phi i32 [ 0, %0 ], [ %i.1, %5 ]            ; [#uses=3 type=i32]
  %exitcond1 = icmp eq i32 %i, 120, !dbg !51      ; [#uses=1 type=i1] [debug line = 7:15]
  br i1 %exitcond1, label %6, label %2, !dbg !51  ; [debug line = 7:15]

; <label>:2                                       ; preds = %1
  %tmp = sext i32 %i to i64, !dbg !53             ; [#uses=3 type=i64] [debug line = 9:3]
  %output.addr = getelementptr inbounds float* %output, i64 %tmp, !dbg !53 ; [#uses=4 type=float*] [debug line = 9:3]
  store float 0.000000e+00, float* %output.addr, align 4, !dbg !53 ; [debug line = 9:3]
  br label %3, !dbg !55                           ; [debug line = 10:16]

; <label>:3                                       ; preds = %4, %2
  %tmp.2 = phi float [ 0.000000e+00, %2 ], [ %tmp.8, %4 ] ; [#uses=3 type=float]
  %j = phi i32 [ 0, %2 ], [ %j.1, %4 ]            ; [#uses=3 type=i32]
  %exitcond = icmp eq i32 %j, 576, !dbg !55       ; [#uses=1 type=i1] [debug line = 10:16]
  br i1 %exitcond, label %5, label %4, !dbg !55   ; [debug line = 10:16]

; <label>:4                                       ; preds = %3
  %tmp.6 = sext i32 %j to i64, !dbg !57           ; [#uses=2 type=i64] [debug line = 11:4]
  %weight.addr = getelementptr inbounds [120 x float]* %weight, i64 %tmp.6, i64 %tmp, !dbg !57 ; [#uses=1 type=float*] [debug line = 11:4]
  %weight.load = load float* %weight.addr, align 4, !dbg !57 ; [#uses=2 type=float] [debug line = 11:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %weight.load) nounwind
  %input.addr = getelementptr inbounds float* %input, i64 %tmp.6, !dbg !57 ; [#uses=1 type=float*] [debug line = 11:4]
  %input.load = load float* %input.addr, align 4, !dbg !57 ; [#uses=2 type=float] [debug line = 11:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %input.load) nounwind
  %tmp.7 = fmul float %weight.load, %input.load, !dbg !57 ; [#uses=1 type=float] [debug line = 11:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %tmp.2) nounwind
  %tmp.8 = fadd float %tmp.2, %tmp.7, !dbg !57    ; [#uses=2 type=float] [debug line = 11:4]
  store float %tmp.8, float* %output.addr, align 4, !dbg !57 ; [debug line = 11:4]
  %j.1 = add nsw i32 %j, 1, !dbg !58              ; [#uses=1 type=i32] [debug line = 10:27]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !59), !dbg !58 ; [debug line = 10:27] [debug variable = j]
  br label %3, !dbg !58                           ; [debug line = 10:27]

; <label>:5                                       ; preds = %3
  %.lcssa = phi float [ %tmp.2, %3 ]              ; [#uses=2 type=float]
  %bias.addr = getelementptr inbounds float* %bias, i64 %tmp, !dbg !61 ; [#uses=1 type=float*] [debug line = 12:3]
  %bias.load = load float* %bias.addr, align 4, !dbg !61 ; [#uses=2 type=float] [debug line = 12:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %bias.load) nounwind
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %.lcssa) nounwind
  %tmp.3 = fadd float %.lcssa, %bias.load, !dbg !61 ; [#uses=3 type=float] [debug line = 12:3]
  store float %tmp.3, float* %output.addr, align 4, !dbg !61 ; [debug line = 12:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %tmp.3) nounwind
  %tmp.4 = call fastcc float @relu(float %tmp.3), !dbg !62 ; [#uses=1 type=float] [debug line = 13:15]
  store float %tmp.4, float* %output.addr, align 4, !dbg !62 ; [debug line = 13:15]
  %i.1 = add nsw i32 %i, 1, !dbg !63              ; [#uses=1 type=i32] [debug line = 7:26]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !64), !dbg !63 ; [debug line = 7:26] [debug variable = i]
  br label %1, !dbg !63                           ; [debug line = 7:26]

; <label>:6                                       ; preds = %1
  ret void, !dbg !65                              ; [debug line = 16:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=6]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=4]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!21, !28}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/fully_connected/solution1/.autopilot/db/fc.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !12}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"relu", metadata !"relu", metadata !"", metadata !6, i32 4, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, float (float)* @relu, null, null, metadata !10, i32 5} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"/home/sergiu/git/lic/hls/workspace/fully_connected/headers/activations.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !9}
!9 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!10 = metadata !{metadata !11}
!11 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!12 = metadata !{i32 786478, i32 0, metadata !13, metadata !"fc", metadata !"fc", metadata !"", metadata !13, i32 4, metadata !14, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (float*, float*, [120 x float]*, float*)* @fc, null, null, metadata !10, i32 5} ; [ DW_TAG_subprogram ]
!13 = metadata !{i32 786473, metadata !"fully_connected/solution1/fc.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!14 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !15, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!15 = metadata !{null, metadata !16, metadata !16, metadata !17, metadata !16}
!16 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !9} ; [ DW_TAG_pointer_type ]
!17 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !18} ; [ DW_TAG_pointer_type ]
!18 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3840, i64 32, i32 0, i32 0, metadata !9, metadata !19, i32 0, i32 0} ; [ DW_TAG_array_type ]
!19 = metadata !{metadata !20}
!20 = metadata !{i32 786465, i64 0, i64 119}      ; [ DW_TAG_subrange_type ]
!21 = metadata !{float (float)* @relu, metadata !22, metadata !23, metadata !24, metadata !25, metadata !26, metadata !27}
!22 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!23 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!24 = metadata !{metadata !"kernel_arg_type", metadata !"float"}
!25 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!26 = metadata !{metadata !"kernel_arg_name", metadata !"a"}
!27 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!28 = metadata !{void (float*, float*, [120 x float]*, float*)* @fc, metadata !29, metadata !30, metadata !31, metadata !32, metadata !33, metadata !27}
!29 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1}
!30 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!31 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float*", metadata !"float [120]*", metadata !"float*"}
!32 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!33 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"input", metadata !"weight", metadata !"bias"}
!34 = metadata !{i32 786689, metadata !5, metadata !"a", metadata !6, i32 16777220, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!35 = metadata !{i32 4, i32 18, metadata !5, null}
!36 = metadata !{i32 6, i32 2, metadata !37, null}
!37 = metadata !{i32 786443, metadata !5, i32 5, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!38 = metadata !{i32 786689, metadata !12, metadata !"output", metadata !13, i32 16777220, metadata !16, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!39 = metadata !{i32 4, i32 15, metadata !12, null}
!40 = metadata !{i32 786689, metadata !12, metadata !"input", metadata !13, i32 33554436, metadata !16, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!41 = metadata !{i32 4, i32 34, metadata !12, null}
!42 = metadata !{i32 786689, metadata !12, metadata !"weight", metadata !13, i32 50331652, metadata !17, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!43 = metadata !{i32 4, i32 52, metadata !12, null}
!44 = metadata !{i32 786689, metadata !12, metadata !"bias", metadata !13, i32 67108868, metadata !16, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!45 = metadata !{i32 4, i32 76, metadata !12, null}
!46 = metadata !{i32 5, i32 2, metadata !47, null}
!47 = metadata !{i32 786443, metadata !12, i32 5, i32 1, metadata !13, i32 1} ; [ DW_TAG_lexical_block ]
!48 = metadata !{i32 5, i32 37, metadata !47, null}
!49 = metadata !{i32 5, i32 71, metadata !47, null}
!50 = metadata !{i32 5, i32 104, metadata !47, null}
!51 = metadata !{i32 7, i32 15, metadata !52, null}
!52 = metadata !{i32 786443, metadata !47, i32 7, i32 2, metadata !13, i32 2} ; [ DW_TAG_lexical_block ]
!53 = metadata !{i32 9, i32 3, metadata !54, null}
!54 = metadata !{i32 786443, metadata !52, i32 8, i32 2, metadata !13, i32 3} ; [ DW_TAG_lexical_block ]
!55 = metadata !{i32 10, i32 16, metadata !56, null}
!56 = metadata !{i32 786443, metadata !54, i32 10, i32 3, metadata !13, i32 4} ; [ DW_TAG_lexical_block ]
!57 = metadata !{i32 11, i32 4, metadata !56, null}
!58 = metadata !{i32 10, i32 27, metadata !56, null}
!59 = metadata !{i32 786688, metadata !56, metadata !"j", metadata !13, i32 10, metadata !60, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!60 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!61 = metadata !{i32 12, i32 3, metadata !54, null}
!62 = metadata !{i32 13, i32 15, metadata !54, null}
!63 = metadata !{i32 7, i32 26, metadata !52, null}
!64 = metadata !{i32 786688, metadata !52, metadata !"i", metadata !13, i32 7, metadata !60, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!65 = metadata !{i32 16, i32 1, metadata !47, null}
