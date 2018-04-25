; ModuleID = '/home/sergiu/git/lic/hls/workspace/flatten/solution1/.autopilot/db/a.o.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; [#uses=0]
define void @flatten(float* %output, [6 x [16 x float]]* %input) nounwind uwtable {
  %1 = alloca float*, align 8                     ; [#uses=3 type=float**]
  %2 = alloca [6 x [16 x float]]*, align 8        ; [#uses=3 type=[6 x [16 x float]]**]
  %i = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %j = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %k = alloca i32, align 4                        ; [#uses=6 type=i32*]
  store float* %output, float** %1, align 8
  call void @llvm.dbg.declare(metadata !{float** %1}, metadata !25), !dbg !26 ; [debug line = 3:20] [debug variable = output]
  store [6 x [16 x float]]* %input, [6 x [16 x float]]** %2, align 8
  call void @llvm.dbg.declare(metadata !{[6 x [16 x float]]** %2}, metadata !27), !dbg !28 ; [debug line = 3:39] [debug variable = input]
  %3 = load float** %1, align 8, !dbg !29         ; [#uses=1 type=float*] [debug line = 4:2]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %3, i32 576) nounwind, !dbg !29 ; [debug line = 4:2]
  %4 = load [6 x [16 x float]]** %2, align 8, !dbg !31 ; [#uses=1 type=[6 x [16 x float]]*] [debug line = 4:37]
  call void (...)* @_ssdm_SpecArrayDimSize([6 x [16 x float]]* %4, i32 6) nounwind, !dbg !31 ; [debug line = 4:37]
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !32), !dbg !34 ; [debug line = 5:9] [debug variable = i]
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !35), !dbg !36 ; [debug line = 5:11] [debug variable = j]
  call void @llvm.dbg.declare(metadata !{i32* %k}, metadata !37), !dbg !38 ; [debug line = 5:13] [debug variable = k]
  store i32 0, i32* %i, align 4, !dbg !39         ; [debug line = 6:7]
  br label %5, !dbg !39                           ; [debug line = 6:7]

; <label>:5                                       ; preds = %47, %0
  %6 = load i32* %i, align 4, !dbg !39            ; [#uses=1 type=i32] [debug line = 6:7]
  %7 = icmp slt i32 %6, 6, !dbg !39               ; [#uses=1 type=i1] [debug line = 6:7]
  br i1 %7, label %8, label %50, !dbg !39         ; [debug line = 6:7]

; <label>:8                                       ; preds = %5
  store i32 0, i32* %j, align 4, !dbg !41         ; [debug line = 7:8]
  br label %9, !dbg !41                           ; [debug line = 7:8]

; <label>:9                                       ; preds = %43, %8
  %10 = load i32* %j, align 4, !dbg !41           ; [#uses=1 type=i32] [debug line = 7:8]
  %11 = icmp slt i32 %10, 6, !dbg !41             ; [#uses=1 type=i1] [debug line = 7:8]
  br i1 %11, label %12, label %46, !dbg !41       ; [debug line = 7:8]

; <label>:12                                      ; preds = %9
  store i32 0, i32* %k, align 4, !dbg !43         ; [debug line = 8:21]
  br label %13, !dbg !43                          ; [debug line = 8:21]

; <label>:13                                      ; preds = %39, %12
  %14 = load i32* %k, align 4, !dbg !43           ; [#uses=1 type=i32] [debug line = 8:21]
  %15 = icmp slt i32 %14, 16, !dbg !43            ; [#uses=1 type=i1] [debug line = 8:21]
  br i1 %15, label %16, label %42, !dbg !43       ; [debug line = 8:21]

; <label>:16                                      ; preds = %13
  %17 = load i32* %k, align 4, !dbg !45           ; [#uses=1 type=i32] [debug line = 9:21]
  %18 = sext i32 %17 to i64, !dbg !45             ; [#uses=1 type=i64] [debug line = 9:21]
  %19 = load i32* %j, align 4, !dbg !45           ; [#uses=1 type=i32] [debug line = 9:21]
  %20 = sext i32 %19 to i64, !dbg !45             ; [#uses=1 type=i64] [debug line = 9:21]
  %21 = load i32* %i, align 4, !dbg !45           ; [#uses=1 type=i32] [debug line = 9:21]
  %22 = sext i32 %21 to i64, !dbg !45             ; [#uses=1 type=i64] [debug line = 9:21]
  %23 = load [6 x [16 x float]]** %2, align 8, !dbg !45 ; [#uses=1 type=[6 x [16 x float]]*] [debug line = 9:21]
  %24 = getelementptr inbounds [6 x [16 x float]]* %23, i64 %22, !dbg !45 ; [#uses=1 type=[6 x [16 x float]]*] [debug line = 9:21]
  %25 = getelementptr inbounds [6 x [16 x float]]* %24, i32 0, i64 %20, !dbg !45 ; [#uses=1 type=[16 x float]*] [debug line = 9:21]
  %26 = getelementptr inbounds [16 x float]* %25, i32 0, i64 %18, !dbg !45 ; [#uses=1 type=float*] [debug line = 9:21]
  %27 = load float* %26, align 4, !dbg !45        ; [#uses=1 type=float] [debug line = 9:21]
  %28 = load i32* %i, align 4, !dbg !45           ; [#uses=1 type=i32] [debug line = 9:21]
  %29 = mul nsw i32 %28, 6, !dbg !45              ; [#uses=1 type=i32] [debug line = 9:21]
  %30 = mul nsw i32 %29, 16, !dbg !45             ; [#uses=1 type=i32] [debug line = 9:21]
  %31 = load i32* %j, align 4, !dbg !45           ; [#uses=1 type=i32] [debug line = 9:21]
  %32 = mul nsw i32 %31, 16, !dbg !45             ; [#uses=1 type=i32] [debug line = 9:21]
  %33 = add nsw i32 %30, %32, !dbg !45            ; [#uses=1 type=i32] [debug line = 9:21]
  %34 = load i32* %k, align 4, !dbg !45           ; [#uses=1 type=i32] [debug line = 9:21]
  %35 = add nsw i32 %33, %34, !dbg !45            ; [#uses=1 type=i32] [debug line = 9:21]
  %36 = sext i32 %35 to i64, !dbg !45             ; [#uses=1 type=i64] [debug line = 9:21]
  %37 = load float** %1, align 8, !dbg !45        ; [#uses=1 type=float*] [debug line = 9:21]
  %38 = getelementptr inbounds float* %37, i64 %36, !dbg !45 ; [#uses=1 type=float*] [debug line = 9:21]
  store float %27, float* %38, align 4, !dbg !45  ; [debug line = 9:21]
  br label %39, !dbg !45                          ; [debug line = 9:21]

; <label>:39                                      ; preds = %16
  %40 = load i32* %k, align 4, !dbg !46           ; [#uses=1 type=i32] [debug line = 8:35]
  %41 = add nsw i32 %40, 1, !dbg !46              ; [#uses=1 type=i32] [debug line = 8:35]
  store i32 %41, i32* %k, align 4, !dbg !46       ; [debug line = 8:35]
  br label %13, !dbg !46                          ; [debug line = 8:35]

; <label>:42                                      ; preds = %13
  br label %43, !dbg !47                          ; [debug line = 9:68]

; <label>:43                                      ; preds = %42
  %44 = load i32* %j, align 4, !dbg !48           ; [#uses=1 type=i32] [debug line = 7:22]
  %45 = add nsw i32 %44, 1, !dbg !48              ; [#uses=1 type=i32] [debug line = 7:22]
  store i32 %45, i32* %j, align 4, !dbg !48       ; [debug line = 7:22]
  br label %9, !dbg !48                           ; [debug line = 7:22]

; <label>:46                                      ; preds = %9
  br label %47, !dbg !49                          ; [debug line = 9:68]

; <label>:47                                      ; preds = %46
  %48 = load i32* %i, align 4, !dbg !50           ; [#uses=1 type=i32] [debug line = 6:21]
  %49 = add nsw i32 %48, 1, !dbg !50              ; [#uses=1 type=i32] [debug line = 6:21]
  store i32 %49, i32* %i, align 4, !dbg !50       ; [debug line = 6:21]
  br label %5, !dbg !50                           ; [debug line = 6:21]

; <label>:50                                      ; preds = %5
  ret void, !dbg !51                              ; [debug line = 10:1]
}

; [#uses=5]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=2]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!18}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/flatten/solution1/.autopilot/db/flatten.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"flatten", metadata !"flatten", metadata !"", metadata !6, i32 3, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (float*, [6 x [16 x float]]*)* @flatten, null, null, metadata !16, i32 4} ; [ DW_TAG_subprogram ]
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
!18 = metadata !{void (float*, [6 x [16 x float]]*)* @flatten, metadata !19, metadata !20, metadata !21, metadata !22, metadata !23, metadata !24}
!19 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!20 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!21 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float [6][16]*"}
!22 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!23 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"input"}
!24 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!25 = metadata !{i32 786689, metadata !5, metadata !"output", metadata !6, i32 16777219, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!26 = metadata !{i32 3, i32 20, metadata !5, null}
!27 = metadata !{i32 786689, metadata !5, metadata !"input", metadata !6, i32 33554435, metadata !11, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!28 = metadata !{i32 3, i32 39, metadata !5, null}
!29 = metadata !{i32 4, i32 2, metadata !30, null}
!30 = metadata !{i32 786443, metadata !5, i32 4, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!31 = metadata !{i32 4, i32 37, metadata !30, null}
!32 = metadata !{i32 786688, metadata !30, metadata !"i", metadata !6, i32 5, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!33 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!34 = metadata !{i32 5, i32 9, metadata !30, null}
!35 = metadata !{i32 786688, metadata !30, metadata !"j", metadata !6, i32 5, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!36 = metadata !{i32 5, i32 11, metadata !30, null}
!37 = metadata !{i32 786688, metadata !30, metadata !"k", metadata !6, i32 5, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!38 = metadata !{i32 5, i32 13, metadata !30, null}
!39 = metadata !{i32 6, i32 7, metadata !40, null}
!40 = metadata !{i32 786443, metadata !30, i32 6, i32 3, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!41 = metadata !{i32 7, i32 8, metadata !42, null}
!42 = metadata !{i32 786443, metadata !40, i32 7, i32 4, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!43 = metadata !{i32 8, i32 21, metadata !44, null}
!44 = metadata !{i32 786443, metadata !42, i32 8, i32 17, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!45 = metadata !{i32 9, i32 21, metadata !44, null}
!46 = metadata !{i32 8, i32 35, metadata !44, null}
!47 = metadata !{i32 9, i32 68, metadata !44, null}
!48 = metadata !{i32 7, i32 22, metadata !42, null}
!49 = metadata !{i32 9, i32 68, metadata !42, null}
!50 = metadata !{i32 6, i32 21, metadata !40, null}
!51 = metadata !{i32 10, i32 1, metadata !30, null}
