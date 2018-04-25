; ModuleID = '/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.o.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; [#uses=0]
define void @pool([14 x [8 x float]]* %output, [29 x [8 x float]]* %image) nounwind uwtable {
  %1 = alloca [14 x [8 x float]]*, align 8        ; [#uses=3 type=[14 x [8 x float]]**]
  %2 = alloca [29 x [8 x float]]*, align 8        ; [#uses=5 type=[29 x [8 x float]]**]
  %max = alloca float, align 4                    ; [#uses=5 type=float*]
  %channel = alloca i32, align 4                  ; [#uses=8 type=i32*]
  %i = alloca i32, align 4                        ; [#uses=8 type=i32*]
  %j = alloca i32, align 4                        ; [#uses=8 type=i32*]
  %k = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %l = alloca i32, align 4                        ; [#uses=6 type=i32*]
  store [14 x [8 x float]]* %output, [14 x [8 x float]]** %1, align 8
  call void @llvm.dbg.declare(metadata !{[14 x [8 x float]]** %1}, metadata !28), !dbg !29 ; [debug line = 3:17] [debug variable = output]
  store [29 x [8 x float]]* %image, [29 x [8 x float]]** %2, align 8
  call void @llvm.dbg.declare(metadata !{[29 x [8 x float]]** %2}, metadata !30), !dbg !31 ; [debug line = 3:42] [debug variable = image]
  %3 = load [14 x [8 x float]]** %1, align 8, !dbg !32 ; [#uses=1 type=[14 x [8 x float]]*] [debug line = 4:2]
  call void (...)* @_ssdm_SpecArrayDimSize([14 x [8 x float]]* %3, i32 14) nounwind, !dbg !32 ; [debug line = 4:2]
  %4 = load [29 x [8 x float]]** %2, align 8, !dbg !34 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 4:36]
  call void (...)* @_ssdm_SpecArrayDimSize([29 x [8 x float]]* %4, i32 29) nounwind, !dbg !34 ; [debug line = 4:36]
  call void @llvm.dbg.declare(metadata !{float* %max}, metadata !35), !dbg !36 ; [debug line = 6:8] [debug variable = max]
  call void @llvm.dbg.declare(metadata !{i32* %channel}, metadata !37), !dbg !40 ; [debug line = 7:10] [debug variable = channel]
  store i32 0, i32* %channel, align 4, !dbg !41   ; [debug line = 7:21]
  br label %5, !dbg !41                           ; [debug line = 7:21]

; <label>:5                                       ; preds = %102, %0
  %6 = load i32* %channel, align 4, !dbg !41      ; [#uses=1 type=i32] [debug line = 7:21]
  %7 = icmp slt i32 %6, 8, !dbg !41               ; [#uses=1 type=i1] [debug line = 7:21]
  br i1 %7, label %8, label %105, !dbg !41        ; [debug line = 7:21]

; <label>:8                                       ; preds = %5
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !42), !dbg !44 ; [debug line = 8:11] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !45         ; [debug line = 8:16]
  br label %9, !dbg !45                           ; [debug line = 8:16]

; <label>:9                                       ; preds = %98, %8
  %10 = load i32* %i, align 4, !dbg !45           ; [#uses=1 type=i32] [debug line = 8:16]
  %11 = icmp slt i32 %10, 28, !dbg !45            ; [#uses=1 type=i1] [debug line = 8:16]
  br i1 %11, label %12, label %101, !dbg !45      ; [debug line = 8:16]

; <label>:12                                      ; preds = %9
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !46), !dbg !48 ; [debug line = 9:12] [debug variable = j]
  store i32 0, i32* %j, align 4, !dbg !49         ; [debug line = 9:17]
  br label %13, !dbg !49                          ; [debug line = 9:17]

; <label>:13                                      ; preds = %94, %12
  %14 = load i32* %j, align 4, !dbg !49           ; [#uses=1 type=i32] [debug line = 9:17]
  %15 = icmp slt i32 %14, 28, !dbg !49            ; [#uses=1 type=i1] [debug line = 9:17]
  br i1 %15, label %16, label %97, !dbg !49       ; [debug line = 9:17]

; <label>:16                                      ; preds = %13
  %17 = load i32* %channel, align 4, !dbg !50     ; [#uses=1 type=i32] [debug line = 11:5]
  %18 = sext i32 %17 to i64, !dbg !50             ; [#uses=1 type=i64] [debug line = 11:5]
  %19 = load i32* %j, align 4, !dbg !50           ; [#uses=1 type=i32] [debug line = 11:5]
  %20 = sext i32 %19 to i64, !dbg !50             ; [#uses=1 type=i64] [debug line = 11:5]
  %21 = load i32* %i, align 4, !dbg !50           ; [#uses=1 type=i32] [debug line = 11:5]
  %22 = sext i32 %21 to i64, !dbg !50             ; [#uses=1 type=i64] [debug line = 11:5]
  %23 = load [29 x [8 x float]]** %2, align 8, !dbg !50 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 11:5]
  %24 = getelementptr inbounds [29 x [8 x float]]* %23, i64 %22, !dbg !50 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 11:5]
  %25 = getelementptr inbounds [29 x [8 x float]]* %24, i32 0, i64 %20, !dbg !50 ; [#uses=1 type=[8 x float]*] [debug line = 11:5]
  %26 = getelementptr inbounds [8 x float]* %25, i32 0, i64 %18, !dbg !50 ; [#uses=1 type=float*] [debug line = 11:5]
  %27 = load float* %26, align 4, !dbg !50        ; [#uses=1 type=float] [debug line = 11:5]
  store float %27, float* %max, align 4, !dbg !50 ; [debug line = 11:5]
  call void @llvm.dbg.declare(metadata !{i32* %k}, metadata !52), !dbg !54 ; [debug line = 12:13] [debug variable = k]
  store i32 0, i32* %k, align 4, !dbg !55         ; [debug line = 12:18]
  br label %28, !dbg !55                          ; [debug line = 12:18]

; <label>:28                                      ; preds = %77, %16
  %29 = load i32* %k, align 4, !dbg !55           ; [#uses=1 type=i32] [debug line = 12:18]
  %30 = icmp slt i32 %29, 2, !dbg !55             ; [#uses=1 type=i1] [debug line = 12:18]
  br i1 %30, label %31, label %80, !dbg !55       ; [debug line = 12:18]

; <label>:31                                      ; preds = %28
  call void @llvm.dbg.declare(metadata !{i32* %l}, metadata !56), !dbg !58 ; [debug line = 13:14] [debug variable = l]
  store i32 0, i32* %l, align 4, !dbg !59         ; [debug line = 13:19]
  br label %32, !dbg !59                          ; [debug line = 13:19]

; <label>:32                                      ; preds = %73, %31
  %33 = load i32* %l, align 4, !dbg !59           ; [#uses=1 type=i32] [debug line = 13:19]
  %34 = icmp slt i32 %33, 2, !dbg !59             ; [#uses=1 type=i1] [debug line = 13:19]
  br i1 %34, label %35, label %76, !dbg !59       ; [debug line = 13:19]

; <label>:35                                      ; preds = %32
  %36 = load i32* %channel, align 4, !dbg !60     ; [#uses=1 type=i32] [debug line = 14:7]
  %37 = sext i32 %36 to i64, !dbg !60             ; [#uses=1 type=i64] [debug line = 14:7]
  %38 = load i32* %l, align 4, !dbg !60           ; [#uses=1 type=i32] [debug line = 14:7]
  %39 = load i32* %j, align 4, !dbg !60           ; [#uses=1 type=i32] [debug line = 14:7]
  %40 = add nsw i32 %38, %39, !dbg !60            ; [#uses=1 type=i32] [debug line = 14:7]
  %41 = sext i32 %40 to i64, !dbg !60             ; [#uses=1 type=i64] [debug line = 14:7]
  %42 = load i32* %k, align 4, !dbg !60           ; [#uses=1 type=i32] [debug line = 14:7]
  %43 = load i32* %i, align 4, !dbg !60           ; [#uses=1 type=i32] [debug line = 14:7]
  %44 = add nsw i32 %42, %43, !dbg !60            ; [#uses=1 type=i32] [debug line = 14:7]
  %45 = sext i32 %44 to i64, !dbg !60             ; [#uses=1 type=i64] [debug line = 14:7]
  %46 = load [29 x [8 x float]]** %2, align 8, !dbg !60 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 14:7]
  %47 = getelementptr inbounds [29 x [8 x float]]* %46, i64 %45, !dbg !60 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 14:7]
  %48 = getelementptr inbounds [29 x [8 x float]]* %47, i32 0, i64 %41, !dbg !60 ; [#uses=1 type=[8 x float]*] [debug line = 14:7]
  %49 = getelementptr inbounds [8 x float]* %48, i32 0, i64 %37, !dbg !60 ; [#uses=1 type=float*] [debug line = 14:7]
  %50 = load float* %49, align 4, !dbg !60        ; [#uses=1 type=float] [debug line = 14:7]
  %51 = load float* %max, align 4, !dbg !60       ; [#uses=1 type=float] [debug line = 14:7]
  %52 = fcmp ogt float %50, %51, !dbg !60         ; [#uses=1 type=i1] [debug line = 14:7]
  br i1 %52, label %53, label %69, !dbg !60       ; [debug line = 14:7]

; <label>:53                                      ; preds = %35
  %54 = load i32* %channel, align 4, !dbg !60     ; [#uses=1 type=i32] [debug line = 14:7]
  %55 = sext i32 %54 to i64, !dbg !60             ; [#uses=1 type=i64] [debug line = 14:7]
  %56 = load i32* %l, align 4, !dbg !60           ; [#uses=1 type=i32] [debug line = 14:7]
  %57 = load i32* %j, align 4, !dbg !60           ; [#uses=1 type=i32] [debug line = 14:7]
  %58 = add nsw i32 %56, %57, !dbg !60            ; [#uses=1 type=i32] [debug line = 14:7]
  %59 = sext i32 %58 to i64, !dbg !60             ; [#uses=1 type=i64] [debug line = 14:7]
  %60 = load i32* %k, align 4, !dbg !60           ; [#uses=1 type=i32] [debug line = 14:7]
  %61 = load i32* %i, align 4, !dbg !60           ; [#uses=1 type=i32] [debug line = 14:7]
  %62 = add nsw i32 %60, %61, !dbg !60            ; [#uses=1 type=i32] [debug line = 14:7]
  %63 = sext i32 %62 to i64, !dbg !60             ; [#uses=1 type=i64] [debug line = 14:7]
  %64 = load [29 x [8 x float]]** %2, align 8, !dbg !60 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 14:7]
  %65 = getelementptr inbounds [29 x [8 x float]]* %64, i64 %63, !dbg !60 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 14:7]
  %66 = getelementptr inbounds [29 x [8 x float]]* %65, i32 0, i64 %59, !dbg !60 ; [#uses=1 type=[8 x float]*] [debug line = 14:7]
  %67 = getelementptr inbounds [8 x float]* %66, i32 0, i64 %55, !dbg !60 ; [#uses=1 type=float*] [debug line = 14:7]
  %68 = load float* %67, align 4, !dbg !60        ; [#uses=1 type=float] [debug line = 14:7]
  br label %71, !dbg !60                          ; [debug line = 14:7]

; <label>:69                                      ; preds = %35
  %70 = load float* %max, align 4, !dbg !60       ; [#uses=1 type=float] [debug line = 14:7]
  br label %71, !dbg !60                          ; [debug line = 14:7]

; <label>:71                                      ; preds = %69, %53
  %72 = phi float [ %68, %53 ], [ %70, %69 ], !dbg !60 ; [#uses=1 type=float] [debug line = 14:7]
  store float %72, float* %max, align 4, !dbg !60 ; [debug line = 14:7]
  br label %73, !dbg !60                          ; [debug line = 14:7]

; <label>:73                                      ; preds = %71
  %74 = load i32* %l, align 4, !dbg !61           ; [#uses=1 type=i32] [debug line = 13:28]
  %75 = add nsw i32 %74, 1, !dbg !61              ; [#uses=1 type=i32] [debug line = 13:28]
  store i32 %75, i32* %l, align 4, !dbg !61       ; [debug line = 13:28]
  br label %32, !dbg !61                          ; [debug line = 13:28]

; <label>:76                                      ; preds = %32
  br label %77, !dbg !62                          ; [debug line = 14:81]

; <label>:77                                      ; preds = %76
  %78 = load i32* %k, align 4, !dbg !63           ; [#uses=1 type=i32] [debug line = 12:27]
  %79 = add nsw i32 %78, 1, !dbg !63              ; [#uses=1 type=i32] [debug line = 12:27]
  store i32 %79, i32* %k, align 4, !dbg !63       ; [debug line = 12:27]
  br label %28, !dbg !63                          ; [debug line = 12:27]

; <label>:80                                      ; preds = %28
  %81 = load float* %max, align 4, !dbg !64       ; [#uses=1 type=float] [debug line = 15:5]
  %82 = load i32* %channel, align 4, !dbg !64     ; [#uses=1 type=i32] [debug line = 15:5]
  %83 = sext i32 %82 to i64, !dbg !64             ; [#uses=1 type=i64] [debug line = 15:5]
  %84 = load i32* %j, align 4, !dbg !64           ; [#uses=1 type=i32] [debug line = 15:5]
  %85 = sdiv i32 %84, 2, !dbg !64                 ; [#uses=1 type=i32] [debug line = 15:5]
  %86 = sext i32 %85 to i64, !dbg !64             ; [#uses=1 type=i64] [debug line = 15:5]
  %87 = load i32* %i, align 4, !dbg !64           ; [#uses=1 type=i32] [debug line = 15:5]
  %88 = sdiv i32 %87, 2, !dbg !64                 ; [#uses=1 type=i32] [debug line = 15:5]
  %89 = sext i32 %88 to i64, !dbg !64             ; [#uses=1 type=i64] [debug line = 15:5]
  %90 = load [14 x [8 x float]]** %1, align 8, !dbg !64 ; [#uses=1 type=[14 x [8 x float]]*] [debug line = 15:5]
  %91 = getelementptr inbounds [14 x [8 x float]]* %90, i64 %89, !dbg !64 ; [#uses=1 type=[14 x [8 x float]]*] [debug line = 15:5]
  %92 = getelementptr inbounds [14 x [8 x float]]* %91, i32 0, i64 %86, !dbg !64 ; [#uses=1 type=[8 x float]*] [debug line = 15:5]
  %93 = getelementptr inbounds [8 x float]* %92, i32 0, i64 %83, !dbg !64 ; [#uses=1 type=float*] [debug line = 15:5]
  store float %81, float* %93, align 4, !dbg !64  ; [debug line = 15:5]
  br label %94, !dbg !65                          ; [debug line = 16:4]

; <label>:94                                      ; preds = %80
  %95 = load i32* %j, align 4, !dbg !66           ; [#uses=1 type=i32] [debug line = 9:35]
  %96 = add nsw i32 %95, 2, !dbg !66              ; [#uses=1 type=i32] [debug line = 9:35]
  store i32 %96, i32* %j, align 4, !dbg !66       ; [debug line = 9:35]
  br label %13, !dbg !66                          ; [debug line = 9:35]

; <label>:97                                      ; preds = %13
  br label %98, !dbg !67                          ; [debug line = 16:4]

; <label>:98                                      ; preds = %97
  %99 = load i32* %i, align 4, !dbg !68           ; [#uses=1 type=i32] [debug line = 8:33]
  %100 = add nsw i32 %99, 2, !dbg !68             ; [#uses=1 type=i32] [debug line = 8:33]
  store i32 %100, i32* %i, align 4, !dbg !68      ; [debug line = 8:33]
  br label %9, !dbg !68                           ; [debug line = 8:33]

; <label>:101                                     ; preds = %9
  br label %102, !dbg !69                         ; [debug line = 16:4]

; <label>:102                                     ; preds = %101
  %103 = load i32* %channel, align 4, !dbg !70    ; [#uses=1 type=i32] [debug line = 7:36]
  %104 = add nsw i32 %103, 1, !dbg !70            ; [#uses=1 type=i32] [debug line = 7:36]
  store i32 %104, i32* %channel, align 4, !dbg !70 ; [debug line = 7:36]
  br label %5, !dbg !70                           ; [debug line = 7:36]

; <label>:105                                     ; preds = %5
  ret void, !dbg !71                              ; [debug line = 18:1]
}

; [#uses=8]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=2]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!21}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/pool.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"pool", metadata !"pool", metadata !"", metadata !6, i32 3, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ([14 x [8 x float]]*, [29 x [8 x float]]*)* @pool, null, null, metadata !19, i32 4} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"pool/solution1/pool.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !15}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3584, i64 32, i32 0, i32 0, metadata !11, metadata !12, i32 0, i32 0} ; [ DW_TAG_array_type ]
!11 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!12 = metadata !{metadata !13, metadata !14}
!13 = metadata !{i32 786465, i64 0, i64 13}       ; [ DW_TAG_subrange_type ]
!14 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!15 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !16} ; [ DW_TAG_pointer_type ]
!16 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 7424, i64 32, i32 0, i32 0, metadata !11, metadata !17, i32 0, i32 0} ; [ DW_TAG_array_type ]
!17 = metadata !{metadata !18, metadata !14}
!18 = metadata !{i32 786465, i64 0, i64 28}       ; [ DW_TAG_subrange_type ]
!19 = metadata !{metadata !20}
!20 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!21 = metadata !{void ([14 x [8 x float]]*, [29 x [8 x float]]*)* @pool, metadata !22, metadata !23, metadata !24, metadata !25, metadata !26, metadata !27}
!22 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!23 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!24 = metadata !{metadata !"kernel_arg_type", metadata !"float [14][8]*", metadata !"float [29][8]*"}
!25 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!26 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"image"}
!27 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!28 = metadata !{i32 786689, metadata !5, metadata !"output", metadata !6, i32 16777219, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!29 = metadata !{i32 3, i32 17, metadata !5, null}
!30 = metadata !{i32 786689, metadata !5, metadata !"image", metadata !6, i32 33554435, metadata !15, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!31 = metadata !{i32 3, i32 42, metadata !5, null}
!32 = metadata !{i32 4, i32 2, metadata !33, null}
!33 = metadata !{i32 786443, metadata !5, i32 4, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!34 = metadata !{i32 4, i32 36, metadata !33, null}
!35 = metadata !{i32 786688, metadata !33, metadata !"max", metadata !6, i32 6, metadata !11, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!36 = metadata !{i32 6, i32 8, metadata !33, null}
!37 = metadata !{i32 786688, metadata !38, metadata !"channel", metadata !6, i32 7, metadata !39, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!38 = metadata !{i32 786443, metadata !33, i32 7, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!39 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!40 = metadata !{i32 7, i32 10, metadata !38, null}
!41 = metadata !{i32 7, i32 21, metadata !38, null}
!42 = metadata !{i32 786688, metadata !43, metadata !"i", metadata !6, i32 8, metadata !39, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!43 = metadata !{i32 786443, metadata !38, i32 8, i32 3, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!44 = metadata !{i32 8, i32 11, metadata !43, null}
!45 = metadata !{i32 8, i32 16, metadata !43, null}
!46 = metadata !{i32 786688, metadata !47, metadata !"j", metadata !6, i32 9, metadata !39, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!47 = metadata !{i32 786443, metadata !43, i32 9, i32 4, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!48 = metadata !{i32 9, i32 12, metadata !47, null}
!49 = metadata !{i32 9, i32 17, metadata !47, null}
!50 = metadata !{i32 11, i32 5, metadata !51, null}
!51 = metadata !{i32 786443, metadata !47, i32 10, i32 4, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!52 = metadata !{i32 786688, metadata !53, metadata !"k", metadata !6, i32 12, metadata !39, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!53 = metadata !{i32 786443, metadata !51, i32 12, i32 5, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!54 = metadata !{i32 12, i32 13, metadata !53, null}
!55 = metadata !{i32 12, i32 18, metadata !53, null}
!56 = metadata !{i32 786688, metadata !57, metadata !"l", metadata !6, i32 13, metadata !39, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!57 = metadata !{i32 786443, metadata !53, i32 13, i32 6, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 13, i32 14, metadata !57, null}
!59 = metadata !{i32 13, i32 19, metadata !57, null}
!60 = metadata !{i32 14, i32 7, metadata !57, null}
!61 = metadata !{i32 13, i32 28, metadata !57, null}
!62 = metadata !{i32 14, i32 81, metadata !57, null}
!63 = metadata !{i32 12, i32 27, metadata !53, null}
!64 = metadata !{i32 15, i32 5, metadata !51, null}
!65 = metadata !{i32 16, i32 4, metadata !51, null}
!66 = metadata !{i32 9, i32 35, metadata !47, null}
!67 = metadata !{i32 16, i32 4, metadata !47, null}
!68 = metadata !{i32 8, i32 33, metadata !43, null}
!69 = metadata !{i32 16, i32 4, metadata !43, null}
!70 = metadata !{i32 7, i32 36, metadata !38, null}
!71 = metadata !{i32 18, i32 1, metadata !33, null}
