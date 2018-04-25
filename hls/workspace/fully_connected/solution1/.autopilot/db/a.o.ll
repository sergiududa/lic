; ModuleID = '/home/sergiu/git/lic/hls/workspace/fully_connected/solution1/.autopilot/db/a.o.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; [#uses=1]
define internal float @relu(float %a) nounwind uwtable {
  %1 = alloca float, align 4                      ; [#uses=3 type=float*]
  store float %a, float* %1, align 4
  call void @llvm.dbg.declare(metadata !{float* %1}, metadata !34), !dbg !35 ; [debug line = 4:18] [debug variable = a]
  %2 = load float* %1, align 4, !dbg !36          ; [#uses=1 type=float] [debug line = 6:2]
  %3 = fcmp ogt float %2, 0.000000e+00, !dbg !36  ; [#uses=1 type=i1] [debug line = 6:2]
  br i1 %3, label %4, label %6, !dbg !36          ; [debug line = 6:2]

; <label>:4                                       ; preds = %0
  %5 = load float* %1, align 4, !dbg !36          ; [#uses=1 type=float] [debug line = 6:2]
  br label %7, !dbg !36                           ; [debug line = 6:2]

; <label>:6                                       ; preds = %0
  br label %7, !dbg !36                           ; [debug line = 6:2]

; <label>:7                                       ; preds = %6, %4
  %8 = phi float [ %5, %4 ], [ 0.000000e+00, %6 ], !dbg !36 ; [#uses=1 type=float] [debug line = 6:2]
  ret float %8, !dbg !36                          ; [debug line = 6:2]
}

; [#uses=7]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=0]
define void @fc(float* %output, float* %input, [120 x float]* %weight, float* %bias) nounwind uwtable {
  %1 = alloca float*, align 8                     ; [#uses=7 type=float**]
  %2 = alloca float*, align 8                     ; [#uses=3 type=float**]
  %3 = alloca [120 x float]*, align 8             ; [#uses=3 type=[120 x float]**]
  %4 = alloca float*, align 8                     ; [#uses=3 type=float**]
  %i = alloca i32, align 4                        ; [#uses=11 type=i32*]
  %j = alloca i32, align 4                        ; [#uses=6 type=i32*]
  store float* %output, float** %1, align 8
  call void @llvm.dbg.declare(metadata !{float** %1}, metadata !38), !dbg !39 ; [debug line = 4:15] [debug variable = output]
  store float* %input, float** %2, align 8
  call void @llvm.dbg.declare(metadata !{float** %2}, metadata !40), !dbg !41 ; [debug line = 4:34] [debug variable = input]
  store [120 x float]* %weight, [120 x float]** %3, align 8
  call void @llvm.dbg.declare(metadata !{[120 x float]** %3}, metadata !42), !dbg !43 ; [debug line = 4:52] [debug variable = weight]
  store float* %bias, float** %4, align 8
  call void @llvm.dbg.declare(metadata !{float** %4}, metadata !44), !dbg !45 ; [debug line = 4:76] [debug variable = bias]
  %5 = load float** %1, align 8, !dbg !46         ; [#uses=1 type=float*] [debug line = 5:2]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %5, i32 120) nounwind, !dbg !46 ; [debug line = 5:2]
  %6 = load float** %2, align 8, !dbg !48         ; [#uses=1 type=float*] [debug line = 5:37]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %6, i32 576) nounwind, !dbg !48 ; [debug line = 5:37]
  %7 = load float** %4, align 8, !dbg !49         ; [#uses=1 type=float*] [debug line = 5:71]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %7, i32 120) nounwind, !dbg !49 ; [debug line = 5:71]
  %8 = load [120 x float]** %3, align 8, !dbg !50 ; [#uses=1 type=[120 x float]*] [debug line = 5:104]
  call void (...)* @_ssdm_SpecArrayDimSize([120 x float]* %8, i32 576) nounwind, !dbg !50 ; [debug line = 5:104]
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !51), !dbg !54 ; [debug line = 7:10] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !55         ; [debug line = 7:15]
  br label %9, !dbg !55                           ; [debug line = 7:15]

; <label>:9                                       ; preds = %66, %0
  %10 = load i32* %i, align 4, !dbg !55           ; [#uses=1 type=i32] [debug line = 7:15]
  %11 = icmp slt i32 %10, 120, !dbg !55           ; [#uses=1 type=i1] [debug line = 7:15]
  br i1 %11, label %12, label %69, !dbg !55       ; [debug line = 7:15]

; <label>:12                                      ; preds = %9
  %13 = load i32* %i, align 4, !dbg !56           ; [#uses=1 type=i32] [debug line = 9:3]
  %14 = sext i32 %13 to i64, !dbg !56             ; [#uses=1 type=i64] [debug line = 9:3]
  %15 = load float** %1, align 8, !dbg !56        ; [#uses=1 type=float*] [debug line = 9:3]
  %16 = getelementptr inbounds float* %15, i64 %14, !dbg !56 ; [#uses=1 type=float*] [debug line = 9:3]
  store float 0.000000e+00, float* %16, align 4, !dbg !56 ; [debug line = 9:3]
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !58), !dbg !60 ; [debug line = 10:11] [debug variable = j]
  store i32 0, i32* %j, align 4, !dbg !61         ; [debug line = 10:16]
  br label %17, !dbg !61                          ; [debug line = 10:16]

; <label>:17                                      ; preds = %41, %12
  %18 = load i32* %j, align 4, !dbg !61           ; [#uses=1 type=i32] [debug line = 10:16]
  %19 = icmp slt i32 %18, 576, !dbg !61           ; [#uses=1 type=i1] [debug line = 10:16]
  br i1 %19, label %20, label %44, !dbg !61       ; [debug line = 10:16]

; <label>:20                                      ; preds = %17
  %21 = load i32* %i, align 4, !dbg !62           ; [#uses=1 type=i32] [debug line = 11:4]
  %22 = sext i32 %21 to i64, !dbg !62             ; [#uses=1 type=i64] [debug line = 11:4]
  %23 = load i32* %j, align 4, !dbg !62           ; [#uses=1 type=i32] [debug line = 11:4]
  %24 = sext i32 %23 to i64, !dbg !62             ; [#uses=1 type=i64] [debug line = 11:4]
  %25 = load [120 x float]** %3, align 8, !dbg !62 ; [#uses=1 type=[120 x float]*] [debug line = 11:4]
  %26 = getelementptr inbounds [120 x float]* %25, i64 %24, !dbg !62 ; [#uses=1 type=[120 x float]*] [debug line = 11:4]
  %27 = getelementptr inbounds [120 x float]* %26, i32 0, i64 %22, !dbg !62 ; [#uses=1 type=float*] [debug line = 11:4]
  %28 = load float* %27, align 4, !dbg !62        ; [#uses=1 type=float] [debug line = 11:4]
  %29 = load i32* %j, align 4, !dbg !62           ; [#uses=1 type=i32] [debug line = 11:4]
  %30 = sext i32 %29 to i64, !dbg !62             ; [#uses=1 type=i64] [debug line = 11:4]
  %31 = load float** %2, align 8, !dbg !62        ; [#uses=1 type=float*] [debug line = 11:4]
  %32 = getelementptr inbounds float* %31, i64 %30, !dbg !62 ; [#uses=1 type=float*] [debug line = 11:4]
  %33 = load float* %32, align 4, !dbg !62        ; [#uses=1 type=float] [debug line = 11:4]
  %34 = fmul float %28, %33, !dbg !62             ; [#uses=1 type=float] [debug line = 11:4]
  %35 = load i32* %i, align 4, !dbg !62           ; [#uses=1 type=i32] [debug line = 11:4]
  %36 = sext i32 %35 to i64, !dbg !62             ; [#uses=1 type=i64] [debug line = 11:4]
  %37 = load float** %1, align 8, !dbg !62        ; [#uses=1 type=float*] [debug line = 11:4]
  %38 = getelementptr inbounds float* %37, i64 %36, !dbg !62 ; [#uses=2 type=float*] [debug line = 11:4]
  %39 = load float* %38, align 4, !dbg !62        ; [#uses=1 type=float] [debug line = 11:4]
  %40 = fadd float %39, %34, !dbg !62             ; [#uses=1 type=float] [debug line = 11:4]
  store float %40, float* %38, align 4, !dbg !62  ; [debug line = 11:4]
  br label %41, !dbg !62                          ; [debug line = 11:4]

; <label>:41                                      ; preds = %20
  %42 = load i32* %j, align 4, !dbg !63           ; [#uses=1 type=i32] [debug line = 10:27]
  %43 = add nsw i32 %42, 1, !dbg !63              ; [#uses=1 type=i32] [debug line = 10:27]
  store i32 %43, i32* %j, align 4, !dbg !63       ; [debug line = 10:27]
  br label %17, !dbg !63                          ; [debug line = 10:27]

; <label>:44                                      ; preds = %17
  %45 = load i32* %i, align 4, !dbg !64           ; [#uses=1 type=i32] [debug line = 12:3]
  %46 = sext i32 %45 to i64, !dbg !64             ; [#uses=1 type=i64] [debug line = 12:3]
  %47 = load float** %4, align 8, !dbg !64        ; [#uses=1 type=float*] [debug line = 12:3]
  %48 = getelementptr inbounds float* %47, i64 %46, !dbg !64 ; [#uses=1 type=float*] [debug line = 12:3]
  %49 = load float* %48, align 4, !dbg !64        ; [#uses=1 type=float] [debug line = 12:3]
  %50 = load i32* %i, align 4, !dbg !64           ; [#uses=1 type=i32] [debug line = 12:3]
  %51 = sext i32 %50 to i64, !dbg !64             ; [#uses=1 type=i64] [debug line = 12:3]
  %52 = load float** %1, align 8, !dbg !64        ; [#uses=1 type=float*] [debug line = 12:3]
  %53 = getelementptr inbounds float* %52, i64 %51, !dbg !64 ; [#uses=2 type=float*] [debug line = 12:3]
  %54 = load float* %53, align 4, !dbg !64        ; [#uses=1 type=float] [debug line = 12:3]
  %55 = fadd float %54, %49, !dbg !64             ; [#uses=1 type=float] [debug line = 12:3]
  store float %55, float* %53, align 4, !dbg !64  ; [debug line = 12:3]
  %56 = load i32* %i, align 4, !dbg !65           ; [#uses=1 type=i32] [debug line = 13:15]
  %57 = sext i32 %56 to i64, !dbg !65             ; [#uses=1 type=i64] [debug line = 13:15]
  %58 = load float** %1, align 8, !dbg !65        ; [#uses=1 type=float*] [debug line = 13:15]
  %59 = getelementptr inbounds float* %58, i64 %57, !dbg !65 ; [#uses=1 type=float*] [debug line = 13:15]
  %60 = load float* %59, align 4, !dbg !65        ; [#uses=1 type=float] [debug line = 13:15]
  %61 = call float @relu(float %60), !dbg !65     ; [#uses=1 type=float] [debug line = 13:15]
  %62 = load i32* %i, align 4, !dbg !65           ; [#uses=1 type=i32] [debug line = 13:15]
  %63 = sext i32 %62 to i64, !dbg !65             ; [#uses=1 type=i64] [debug line = 13:15]
  %64 = load float** %1, align 8, !dbg !65        ; [#uses=1 type=float*] [debug line = 13:15]
  %65 = getelementptr inbounds float* %64, i64 %63, !dbg !65 ; [#uses=1 type=float*] [debug line = 13:15]
  store float %61, float* %65, align 4, !dbg !65  ; [debug line = 13:15]
  br label %66, !dbg !66                          ; [debug line = 14:2]

; <label>:66                                      ; preds = %44
  %67 = load i32* %i, align 4, !dbg !67           ; [#uses=1 type=i32] [debug line = 7:26]
  %68 = add nsw i32 %67, 1, !dbg !67              ; [#uses=1 type=i32] [debug line = 7:26]
  store i32 %68, i32* %i, align 4, !dbg !67       ; [debug line = 7:26]
  br label %9, !dbg !67                           ; [debug line = 7:26]

; <label>:69                                      ; preds = %9
  ret void, !dbg !68                              ; [debug line = 16:1]
}

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
!51 = metadata !{i32 786688, metadata !52, metadata !"i", metadata !13, i32 7, metadata !53, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!52 = metadata !{i32 786443, metadata !47, i32 7, i32 2, metadata !13, i32 2} ; [ DW_TAG_lexical_block ]
!53 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!54 = metadata !{i32 7, i32 10, metadata !52, null}
!55 = metadata !{i32 7, i32 15, metadata !52, null}
!56 = metadata !{i32 9, i32 3, metadata !57, null}
!57 = metadata !{i32 786443, metadata !52, i32 8, i32 2, metadata !13, i32 3} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 786688, metadata !59, metadata !"j", metadata !13, i32 10, metadata !53, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!59 = metadata !{i32 786443, metadata !57, i32 10, i32 3, metadata !13, i32 4} ; [ DW_TAG_lexical_block ]
!60 = metadata !{i32 10, i32 11, metadata !59, null}
!61 = metadata !{i32 10, i32 16, metadata !59, null}
!62 = metadata !{i32 11, i32 4, metadata !59, null}
!63 = metadata !{i32 10, i32 27, metadata !59, null}
!64 = metadata !{i32 12, i32 3, metadata !57, null}
!65 = metadata !{i32 13, i32 15, metadata !57, null}
!66 = metadata !{i32 14, i32 2, metadata !57, null}
!67 = metadata !{i32 7, i32 26, metadata !52, null}
!68 = metadata !{i32 16, i32 1, metadata !47, null}
