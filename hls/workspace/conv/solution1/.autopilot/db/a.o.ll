; ModuleID = '/home/sergiu/git/lic/hls/workspace/conv/solution1/.autopilot/db/a.o.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; [#uses=1]
define internal float @relu(float %a) nounwind uwtable {
  %1 = alloca float, align 4                      ; [#uses=3 type=float*]
  store float %a, float* %1, align 4
  call void @llvm.dbg.declare(metadata !{float* %1}, metadata !54), !dbg !55 ; [debug line = 4:18] [debug variable = a]
  %2 = load float* %1, align 4, !dbg !56          ; [#uses=1 type=float] [debug line = 6:2]
  %3 = fcmp ogt float %2, 0.000000e+00, !dbg !56  ; [#uses=1 type=i1] [debug line = 6:2]
  br i1 %3, label %4, label %6, !dbg !56          ; [debug line = 6:2]

; <label>:4                                       ; preds = %0
  %5 = load float* %1, align 4, !dbg !56          ; [#uses=1 type=float] [debug line = 6:2]
  br label %7, !dbg !56                           ; [debug line = 6:2]

; <label>:6                                       ; preds = %0
  br label %7, !dbg !56                           ; [debug line = 6:2]

; <label>:7                                       ; preds = %6, %4
  %8 = phi float [ %5, %4 ], [ 0.000000e+00, %6 ], !dbg !56 ; [#uses=1 type=float] [debug line = 6:2]
  ret float %8, !dbg !56                          ; [debug line = 6:2]
}

; [#uses=13]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=0]
define void @conv([29 x [8 x float]]* %output, [32 x [1 x float]]* %image, [4 x [1 x [8 x float]]]* %weight, float* %bias) nounwind uwtable {
  %1 = alloca [29 x [8 x float]]*, align 8        ; [#uses=3 type=[29 x [8 x float]]**]
  %2 = alloca [32 x [1 x float]]*, align 8        ; [#uses=3 type=[32 x [1 x float]]**]
  %3 = alloca [4 x [1 x [8 x float]]]*, align 8   ; [#uses=3 type=[4 x [1 x [8 x float]]]**]
  %4 = alloca float*, align 8                     ; [#uses=3 type=float**]
  %i = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %j = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %k = alloca i32, align 4                        ; [#uses=0 type=i32*]
  %filter = alloca i32, align 4                   ; [#uses=7 type=i32*]
  %sum = alloca float, align 4                    ; [#uses=4 type=float*]
  %row_offset = alloca i32, align 4               ; [#uses=6 type=i32*]
  %col_offset = alloca i32, align 4               ; [#uses=6 type=i32*]
  %channel_offset = alloca i32, align 4           ; [#uses=6 type=i32*]
  store [29 x [8 x float]]* %output, [29 x [8 x float]]** %1, align 8
  call void @llvm.dbg.declare(metadata !{[29 x [8 x float]]** %1}, metadata !58), !dbg !59 ; [debug line = 6:17] [debug variable = output]
  store [32 x [1 x float]]* %image, [32 x [1 x float]]** %2, align 8
  call void @llvm.dbg.declare(metadata !{[32 x [1 x float]]** %2}, metadata !60), !dbg !61 ; [debug line = 6:42] [debug variable = image]
  store [4 x [1 x [8 x float]]]* %weight, [4 x [1 x [8 x float]]]** %3, align 8
  call void @llvm.dbg.declare(metadata !{[4 x [1 x [8 x float]]]** %3}, metadata !62), !dbg !63 ; [debug line = 6:66] [debug variable = weight]
  store float* %bias, float** %4, align 8
  call void @llvm.dbg.declare(metadata !{float** %4}, metadata !64), !dbg !65 ; [debug line = 6:92] [debug variable = bias]
  %5 = load [29 x [8 x float]]** %1, align 8, !dbg !66 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 7:2]
  call void (...)* @_ssdm_SpecArrayDimSize([29 x [8 x float]]* %5, i32 29) nounwind, !dbg !66 ; [debug line = 7:2]
  %6 = load [32 x [1 x float]]** %2, align 8, !dbg !68 ; [#uses=1 type=[32 x [1 x float]]*] [debug line = 7:36]
  call void (...)* @_ssdm_SpecArrayDimSize([32 x [1 x float]]* %6, i32 32) nounwind, !dbg !68 ; [debug line = 7:36]
  %7 = load float** %4, align 8, !dbg !69         ; [#uses=1 type=float*] [debug line = 7:69]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %7, i32 8) nounwind, !dbg !69 ; [debug line = 7:69]
  %8 = load [4 x [1 x [8 x float]]]** %3, align 8, !dbg !70 ; [#uses=1 type=[4 x [1 x [8 x float]]]*] [debug line = 7:100]
  call void (...)* @_ssdm_SpecArrayDimSize([4 x [1 x [8 x float]]]* %8, i32 4) nounwind, !dbg !70 ; [debug line = 7:100]
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !71), !dbg !72 ; [debug line = 8:6] [debug variable = i]
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !73), !dbg !74 ; [debug line = 8:8] [debug variable = j]
  call void @llvm.dbg.declare(metadata !{i32* %k}, metadata !75), !dbg !76 ; [debug line = 8:10] [debug variable = k]
  call void @llvm.dbg.declare(metadata !{i32* %filter}, metadata !77), !dbg !78 ; [debug line = 8:12] [debug variable = filter]
  call void @llvm.dbg.declare(metadata !{float* %sum}, metadata !79), !dbg !80 ; [debug line = 9:8] [debug variable = sum]
  call void @llvm.dbg.declare(metadata !{i32* %row_offset}, metadata !81), !dbg !82 ; [debug line = 10:6] [debug variable = row_offset]
  call void @llvm.dbg.declare(metadata !{i32* %col_offset}, metadata !83), !dbg !84 ; [debug line = 10:18] [debug variable = col_offset]
  call void @llvm.dbg.declare(metadata !{i32* %channel_offset}, metadata !85), !dbg !86 ; [debug line = 10:30] [debug variable = channel_offset]
  store i32 0, i32* %filter, align 4, !dbg !87    ; [debug line = 15:6]
  br label %9, !dbg !87                           ; [debug line = 15:6]

; <label>:9                                       ; preds = %105, %0
  %10 = load i32* %filter, align 4, !dbg !87      ; [#uses=1 type=i32] [debug line = 15:6]
  %11 = icmp slt i32 %10, 8, !dbg !87             ; [#uses=1 type=i1] [debug line = 15:6]
  br i1 %11, label %12, label %108, !dbg !87      ; [debug line = 15:6]

; <label>:12                                      ; preds = %9
  store i32 0, i32* %i, align 4, !dbg !89         ; [debug line = 18:7]
  br label %13, !dbg !89                          ; [debug line = 18:7]

; <label>:13                                      ; preds = %101, %12
  %14 = load i32* %i, align 4, !dbg !89           ; [#uses=1 type=i32] [debug line = 18:7]
  %15 = icmp slt i32 %14, 29, !dbg !89            ; [#uses=1 type=i1] [debug line = 18:7]
  br i1 %15, label %16, label %104, !dbg !89      ; [debug line = 18:7]

; <label>:16                                      ; preds = %13
  store i32 0, i32* %j, align 4, !dbg !92         ; [debug line = 19:8]
  br label %17, !dbg !92                          ; [debug line = 19:8]

; <label>:17                                      ; preds = %97, %16
  %18 = load i32* %j, align 4, !dbg !92           ; [#uses=1 type=i32] [debug line = 19:8]
  %19 = icmp slt i32 %18, 29, !dbg !92            ; [#uses=1 type=i1] [debug line = 19:8]
  br i1 %19, label %20, label %100, !dbg !92      ; [debug line = 19:8]

; <label>:20                                      ; preds = %17
  store float 0.000000e+00, float* %sum, align 4, !dbg !94 ; [debug line = 22:5]
  store i32 0, i32* %row_offset, align 4, !dbg !96 ; [debug line = 23:9]
  br label %21, !dbg !96                          ; [debug line = 23:9]

; <label>:21                                      ; preds = %73, %20
  %22 = load i32* %row_offset, align 4, !dbg !96  ; [#uses=1 type=i32] [debug line = 23:9]
  %23 = icmp slt i32 %22, 4, !dbg !96             ; [#uses=1 type=i1] [debug line = 23:9]
  br i1 %23, label %24, label %76, !dbg !96       ; [debug line = 23:9]

; <label>:24                                      ; preds = %21
  store i32 0, i32* %col_offset, align 4, !dbg !98 ; [debug line = 25:10]
  br label %25, !dbg !98                          ; [debug line = 25:10]

; <label>:25                                      ; preds = %69, %24
  %26 = load i32* %col_offset, align 4, !dbg !98  ; [#uses=1 type=i32] [debug line = 25:10]
  %27 = icmp slt i32 %26, 4, !dbg !98             ; [#uses=1 type=i1] [debug line = 25:10]
  br i1 %27, label %28, label %72, !dbg !98       ; [debug line = 25:10]

; <label>:28                                      ; preds = %25
  store i32 0, i32* %channel_offset, align 4, !dbg !100 ; [debug line = 26:11]
  br label %29, !dbg !100                         ; [debug line = 26:11]

; <label>:29                                      ; preds = %65, %28
  %30 = load i32* %channel_offset, align 4, !dbg !100 ; [#uses=1 type=i32] [debug line = 26:11]
  %31 = icmp slt i32 %30, 1, !dbg !100            ; [#uses=1 type=i1] [debug line = 26:11]
  br i1 %31, label %32, label %68, !dbg !100      ; [debug line = 26:11]

; <label>:32                                      ; preds = %29
  %33 = load i32* %channel_offset, align 4, !dbg !102 ; [#uses=1 type=i32] [debug line = 27:8]
  %34 = sext i32 %33 to i64, !dbg !102            ; [#uses=1 type=i64] [debug line = 27:8]
  %35 = load i32* %j, align 4, !dbg !102          ; [#uses=1 type=i32] [debug line = 27:8]
  %36 = load i32* %col_offset, align 4, !dbg !102 ; [#uses=1 type=i32] [debug line = 27:8]
  %37 = add nsw i32 %35, %36, !dbg !102           ; [#uses=1 type=i32] [debug line = 27:8]
  %38 = sext i32 %37 to i64, !dbg !102            ; [#uses=1 type=i64] [debug line = 27:8]
  %39 = load i32* %i, align 4, !dbg !102          ; [#uses=1 type=i32] [debug line = 27:8]
  %40 = load i32* %row_offset, align 4, !dbg !102 ; [#uses=1 type=i32] [debug line = 27:8]
  %41 = add nsw i32 %39, %40, !dbg !102           ; [#uses=1 type=i32] [debug line = 27:8]
  %42 = sext i32 %41 to i64, !dbg !102            ; [#uses=1 type=i64] [debug line = 27:8]
  %43 = load [32 x [1 x float]]** %2, align 8, !dbg !102 ; [#uses=1 type=[32 x [1 x float]]*] [debug line = 27:8]
  %44 = getelementptr inbounds [32 x [1 x float]]* %43, i64 %42, !dbg !102 ; [#uses=1 type=[32 x [1 x float]]*] [debug line = 27:8]
  %45 = getelementptr inbounds [32 x [1 x float]]* %44, i32 0, i64 %38, !dbg !102 ; [#uses=1 type=[1 x float]*] [debug line = 27:8]
  %46 = getelementptr inbounds [1 x float]* %45, i32 0, i64 %34, !dbg !102 ; [#uses=1 type=float*] [debug line = 27:8]
  %47 = load float* %46, align 4, !dbg !102       ; [#uses=1 type=float] [debug line = 27:8]
  %48 = load i32* %filter, align 4, !dbg !102     ; [#uses=1 type=i32] [debug line = 27:8]
  %49 = sext i32 %48 to i64, !dbg !102            ; [#uses=1 type=i64] [debug line = 27:8]
  %50 = load i32* %channel_offset, align 4, !dbg !102 ; [#uses=1 type=i32] [debug line = 27:8]
  %51 = sext i32 %50 to i64, !dbg !102            ; [#uses=1 type=i64] [debug line = 27:8]
  %52 = load i32* %col_offset, align 4, !dbg !102 ; [#uses=1 type=i32] [debug line = 27:8]
  %53 = sext i32 %52 to i64, !dbg !102            ; [#uses=1 type=i64] [debug line = 27:8]
  %54 = load i32* %row_offset, align 4, !dbg !102 ; [#uses=1 type=i32] [debug line = 27:8]
  %55 = sext i32 %54 to i64, !dbg !102            ; [#uses=1 type=i64] [debug line = 27:8]
  %56 = load [4 x [1 x [8 x float]]]** %3, align 8, !dbg !102 ; [#uses=1 type=[4 x [1 x [8 x float]]]*] [debug line = 27:8]
  %57 = getelementptr inbounds [4 x [1 x [8 x float]]]* %56, i64 %55, !dbg !102 ; [#uses=1 type=[4 x [1 x [8 x float]]]*] [debug line = 27:8]
  %58 = getelementptr inbounds [4 x [1 x [8 x float]]]* %57, i32 0, i64 %53, !dbg !102 ; [#uses=1 type=[1 x [8 x float]]*] [debug line = 27:8]
  %59 = getelementptr inbounds [1 x [8 x float]]* %58, i32 0, i64 %51, !dbg !102 ; [#uses=1 type=[8 x float]*] [debug line = 27:8]
  %60 = getelementptr inbounds [8 x float]* %59, i32 0, i64 %49, !dbg !102 ; [#uses=1 type=float*] [debug line = 27:8]
  %61 = load float* %60, align 4, !dbg !102       ; [#uses=1 type=float] [debug line = 27:8]
  %62 = fmul float %47, %61, !dbg !102            ; [#uses=1 type=float] [debug line = 27:8]
  %63 = load float* %sum, align 4, !dbg !102      ; [#uses=1 type=float] [debug line = 27:8]
  %64 = fadd float %63, %62, !dbg !102            ; [#uses=1 type=float] [debug line = 27:8]
  store float %64, float* %sum, align 4, !dbg !102 ; [debug line = 27:8]
  br label %65, !dbg !102                         ; [debug line = 27:8]

; <label>:65                                      ; preds = %32
  %66 = load i32* %channel_offset, align 4, !dbg !103 ; [#uses=1 type=i32] [debug line = 26:51]
  %67 = add nsw i32 %66, 1, !dbg !103             ; [#uses=1 type=i32] [debug line = 26:51]
  store i32 %67, i32* %channel_offset, align 4, !dbg !103 ; [debug line = 26:51]
  br label %29, !dbg !103                         ; [debug line = 26:51]

; <label>:68                                      ; preds = %29
  br label %69, !dbg !104                         ; [debug line = 27:124]

; <label>:69                                      ; preds = %68
  %70 = load i32* %col_offset, align 4, !dbg !105 ; [#uses=1 type=i32] [debug line = 25:41]
  %71 = add nsw i32 %70, 1, !dbg !105             ; [#uses=1 type=i32] [debug line = 25:41]
  store i32 %71, i32* %col_offset, align 4, !dbg !105 ; [debug line = 25:41]
  br label %25, !dbg !105                         ; [debug line = 25:41]

; <label>:72                                      ; preds = %25
  br label %73, !dbg !106                         ; [debug line = 27:124]

; <label>:73                                      ; preds = %72
  %74 = load i32* %row_offset, align 4, !dbg !107 ; [#uses=1 type=i32] [debug line = 23:40]
  %75 = add nsw i32 %74, 1, !dbg !107             ; [#uses=1 type=i32] [debug line = 23:40]
  store i32 %75, i32* %row_offset, align 4, !dbg !107 ; [debug line = 23:40]
  br label %21, !dbg !107                         ; [debug line = 23:40]

; <label>:76                                      ; preds = %21
  %77 = load float* %sum, align 4, !dbg !108      ; [#uses=1 type=float] [debug line = 28:32]
  %78 = load i32* %filter, align 4, !dbg !108     ; [#uses=1 type=i32] [debug line = 28:32]
  %79 = sext i32 %78 to i64, !dbg !108            ; [#uses=1 type=i64] [debug line = 28:32]
  %80 = load float** %4, align 8, !dbg !108       ; [#uses=1 type=float*] [debug line = 28:32]
  %81 = getelementptr inbounds float* %80, i64 %79, !dbg !108 ; [#uses=1 type=float*] [debug line = 28:32]
  %82 = load float* %81, align 4, !dbg !108       ; [#uses=1 type=float] [debug line = 28:32]
  %83 = fadd float %77, %82, !dbg !108            ; [#uses=1 type=float] [debug line = 28:32]
  %84 = call float @relu(float %83), !dbg !108    ; [#uses=1 type=float] [debug line = 28:32]
  %85 = load i32* %filter, align 4, !dbg !108     ; [#uses=1 type=i32] [debug line = 28:32]
  %86 = sext i32 %85 to i64, !dbg !108            ; [#uses=1 type=i64] [debug line = 28:32]
  %87 = load i32* %j, align 4, !dbg !108          ; [#uses=1 type=i32] [debug line = 28:32]
  %88 = sdiv i32 %87, 1, !dbg !108                ; [#uses=1 type=i32] [debug line = 28:32]
  %89 = sext i32 %88 to i64, !dbg !108            ; [#uses=1 type=i64] [debug line = 28:32]
  %90 = load i32* %i, align 4, !dbg !108          ; [#uses=1 type=i32] [debug line = 28:32]
  %91 = sdiv i32 %90, 1, !dbg !108                ; [#uses=1 type=i32] [debug line = 28:32]
  %92 = sext i32 %91 to i64, !dbg !108            ; [#uses=1 type=i64] [debug line = 28:32]
  %93 = load [29 x [8 x float]]** %1, align 8, !dbg !108 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 28:32]
  %94 = getelementptr inbounds [29 x [8 x float]]* %93, i64 %92, !dbg !108 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 28:32]
  %95 = getelementptr inbounds [29 x [8 x float]]* %94, i32 0, i64 %89, !dbg !108 ; [#uses=1 type=[8 x float]*] [debug line = 28:32]
  %96 = getelementptr inbounds [8 x float]* %95, i32 0, i64 %86, !dbg !108 ; [#uses=1 type=float*] [debug line = 28:32]
  store float %84, float* %96, align 4, !dbg !108 ; [debug line = 28:32]
  br label %97, !dbg !109                         ; [debug line = 29:4]

; <label>:97                                      ; preds = %76
  %98 = load i32* %j, align 4, !dbg !110          ; [#uses=1 type=i32] [debug line = 19:33]
  %99 = add nsw i32 %98, 1, !dbg !110             ; [#uses=1 type=i32] [debug line = 19:33]
  store i32 %99, i32* %j, align 4, !dbg !110      ; [debug line = 19:33]
  br label %17, !dbg !110                         ; [debug line = 19:33]

; <label>:100                                     ; preds = %17
  br label %101, !dbg !111                        ; [debug line = 29:4]

; <label>:101                                     ; preds = %100
  %102 = load i32* %i, align 4, !dbg !112         ; [#uses=1 type=i32] [debug line = 18:32]
  %103 = add nsw i32 %102, 1, !dbg !112           ; [#uses=1 type=i32] [debug line = 18:32]
  store i32 %103, i32* %i, align 4, !dbg !112     ; [debug line = 18:32]
  br label %13, !dbg !112                         ; [debug line = 18:32]

; <label>:104                                     ; preds = %13
  br label %105, !dbg !113                        ; [debug line = 30:2]

; <label>:105                                     ; preds = %104
  %106 = load i32* %filter, align 4, !dbg !114    ; [#uses=1 type=i32] [debug line = 15:30]
  %107 = add nsw i32 %106, 1, !dbg !114           ; [#uses=1 type=i32] [debug line = 15:30]
  store i32 %107, i32* %filter, align 4, !dbg !114 ; [debug line = 15:30]
  br label %9, !dbg !114                          ; [debug line = 15:30]

; <label>:108                                     ; preds = %9
  ret void, !dbg !115                             ; [debug line = 31:1]
}

; [#uses=4]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!41, !48}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/conv/solution1/.autopilot/db/conv.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !31} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !12}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"relu", metadata !"relu", metadata !"", metadata !6, i32 4, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, float (float)* @relu, null, null, metadata !10, i32 5} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"/home/sergiu/git/lic/hls/workspace/conv/headers/activations.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !9}
!9 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!10 = metadata !{metadata !11}
!11 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!12 = metadata !{i32 786478, i32 0, metadata !13, metadata !"conv", metadata !"conv", metadata !"", metadata !13, i32 6, metadata !14, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ([29 x [8 x float]]*, [32 x [1 x float]]*, [4 x [1 x [8 x float]]]*, float*)* @conv, null, null, metadata !10, i32 7} ; [ DW_TAG_subprogram ]
!13 = metadata !{i32 786473, metadata !"conv/solution1/conv.c", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!14 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !15, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!15 = metadata !{null, metadata !16, metadata !21, metadata !26, metadata !30}
!16 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !17} ; [ DW_TAG_pointer_type ]
!17 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 7424, i64 32, i32 0, i32 0, metadata !9, metadata !18, i32 0, i32 0} ; [ DW_TAG_array_type ]
!18 = metadata !{metadata !19, metadata !20}
!19 = metadata !{i32 786465, i64 0, i64 28}       ; [ DW_TAG_subrange_type ]
!20 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!21 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !22} ; [ DW_TAG_pointer_type ]
!22 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1024, i64 32, i32 0, i32 0, metadata !9, metadata !23, i32 0, i32 0} ; [ DW_TAG_array_type ]
!23 = metadata !{metadata !24, metadata !25}
!24 = metadata !{i32 786465, i64 0, i64 31}       ; [ DW_TAG_subrange_type ]
!25 = metadata !{i32 786465, i64 0, i64 0}        ; [ DW_TAG_subrange_type ]
!26 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !27} ; [ DW_TAG_pointer_type ]
!27 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1024, i64 32, i32 0, i32 0, metadata !9, metadata !28, i32 0, i32 0} ; [ DW_TAG_array_type ]
!28 = metadata !{metadata !29, metadata !25, metadata !20}
!29 = metadata !{i32 786465, i64 0, i64 3}        ; [ DW_TAG_subrange_type ]
!30 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !9} ; [ DW_TAG_pointer_type ]
!31 = metadata !{metadata !32}
!32 = metadata !{metadata !33, metadata !36, metadata !37, metadata !38}
!33 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdin_", metadata !"_IO_2_1_stdin_", metadata !"", metadata !34, i32 315, metadata !35, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!34 = metadata !{i32 786473, metadata !"/usr/include/libio.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!35 = metadata !{i32 786451, null, metadata !"_IO_FILE_plus", metadata !34, i32 313, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_structure_type ]
!36 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdout_", metadata !"_IO_2_1_stdout_", metadata !"", metadata !34, i32 316, metadata !35, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!37 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stderr_", metadata !"_IO_2_1_stderr_", metadata !"", metadata !34, i32 317, metadata !35, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!38 = metadata !{i32 786484, i32 0, null, metadata !"sys_nerr", metadata !"sys_nerr", metadata !"", metadata !39, i32 26, metadata !40, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!39 = metadata !{i32 786473, metadata !"/usr/include/x86_64-linux-gnu/bits/sys_errlist.h", metadata !"/home/sergiu/git/lic/hls/workspace", null} ; [ DW_TAG_file_type ]
!40 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!41 = metadata !{float (float)* @relu, metadata !42, metadata !43, metadata !44, metadata !45, metadata !46, metadata !47}
!42 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!43 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!44 = metadata !{metadata !"kernel_arg_type", metadata !"float"}
!45 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!46 = metadata !{metadata !"kernel_arg_name", metadata !"a"}
!47 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!48 = metadata !{void ([29 x [8 x float]]*, [32 x [1 x float]]*, [4 x [1 x [8 x float]]]*, float*)* @conv, metadata !49, metadata !50, metadata !51, metadata !52, metadata !53, metadata !47}
!49 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1}
!50 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!51 = metadata !{metadata !"kernel_arg_type", metadata !"float [29][8]*", metadata !"float [32][1]*", metadata !"float [4][1][8]*", metadata !"float*"}
!52 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!53 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"image", metadata !"weight", metadata !"bias"}
!54 = metadata !{i32 786689, metadata !5, metadata !"a", metadata !6, i32 16777220, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!55 = metadata !{i32 4, i32 18, metadata !5, null}
!56 = metadata !{i32 6, i32 2, metadata !57, null}
!57 = metadata !{i32 786443, metadata !5, i32 5, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 786689, metadata !12, metadata !"output", metadata !13, i32 16777222, metadata !16, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!59 = metadata !{i32 6, i32 17, metadata !12, null}
!60 = metadata !{i32 786689, metadata !12, metadata !"image", metadata !13, i32 33554438, metadata !21, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!61 = metadata !{i32 6, i32 42, metadata !12, null}
!62 = metadata !{i32 786689, metadata !12, metadata !"weight", metadata !13, i32 50331654, metadata !26, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!63 = metadata !{i32 6, i32 66, metadata !12, null}
!64 = metadata !{i32 786689, metadata !12, metadata !"bias", metadata !13, i32 67108870, metadata !30, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!65 = metadata !{i32 6, i32 92, metadata !12, null}
!66 = metadata !{i32 7, i32 2, metadata !67, null}
!67 = metadata !{i32 786443, metadata !12, i32 7, i32 1, metadata !13, i32 1} ; [ DW_TAG_lexical_block ]
!68 = metadata !{i32 7, i32 36, metadata !67, null}
!69 = metadata !{i32 7, i32 69, metadata !67, null}
!70 = metadata !{i32 7, i32 100, metadata !67, null}
!71 = metadata !{i32 786688, metadata !67, metadata !"i", metadata !13, i32 8, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!72 = metadata !{i32 8, i32 6, metadata !67, null}
!73 = metadata !{i32 786688, metadata !67, metadata !"j", metadata !13, i32 8, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!74 = metadata !{i32 8, i32 8, metadata !67, null}
!75 = metadata !{i32 786688, metadata !67, metadata !"k", metadata !13, i32 8, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!76 = metadata !{i32 8, i32 10, metadata !67, null}
!77 = metadata !{i32 786688, metadata !67, metadata !"filter", metadata !13, i32 8, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!78 = metadata !{i32 8, i32 12, metadata !67, null}
!79 = metadata !{i32 786688, metadata !67, metadata !"sum", metadata !13, i32 9, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!80 = metadata !{i32 9, i32 8, metadata !67, null}
!81 = metadata !{i32 786688, metadata !67, metadata !"row_offset", metadata !13, i32 10, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!82 = metadata !{i32 10, i32 6, metadata !67, null}
!83 = metadata !{i32 786688, metadata !67, metadata !"col_offset", metadata !13, i32 10, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!84 = metadata !{i32 10, i32 18, metadata !67, null}
!85 = metadata !{i32 786688, metadata !67, metadata !"channel_offset", metadata !13, i32 10, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!86 = metadata !{i32 10, i32 30, metadata !67, null}
!87 = metadata !{i32 15, i32 6, metadata !88, null}
!88 = metadata !{i32 786443, metadata !67, i32 15, i32 2, metadata !13, i32 2} ; [ DW_TAG_lexical_block ]
!89 = metadata !{i32 18, i32 7, metadata !90, null}
!90 = metadata !{i32 786443, metadata !91, i32 18, i32 3, metadata !13, i32 4} ; [ DW_TAG_lexical_block ]
!91 = metadata !{i32 786443, metadata !88, i32 16, i32 2, metadata !13, i32 3} ; [ DW_TAG_lexical_block ]
!92 = metadata !{i32 19, i32 8, metadata !93, null}
!93 = metadata !{i32 786443, metadata !90, i32 19, i32 4, metadata !13, i32 5} ; [ DW_TAG_lexical_block ]
!94 = metadata !{i32 22, i32 5, metadata !95, null}
!95 = metadata !{i32 786443, metadata !93, i32 20, i32 4, metadata !13, i32 6} ; [ DW_TAG_lexical_block ]
!96 = metadata !{i32 23, i32 9, metadata !97, null}
!97 = metadata !{i32 786443, metadata !95, i32 23, i32 5, metadata !13, i32 7} ; [ DW_TAG_lexical_block ]
!98 = metadata !{i32 25, i32 10, metadata !99, null}
!99 = metadata !{i32 786443, metadata !97, i32 25, i32 6, metadata !13, i32 8} ; [ DW_TAG_lexical_block ]
!100 = metadata !{i32 26, i32 11, metadata !101, null}
!101 = metadata !{i32 786443, metadata !99, i32 26, i32 7, metadata !13, i32 9} ; [ DW_TAG_lexical_block ]
!102 = metadata !{i32 27, i32 8, metadata !101, null}
!103 = metadata !{i32 26, i32 51, metadata !101, null}
!104 = metadata !{i32 27, i32 124, metadata !101, null}
!105 = metadata !{i32 25, i32 41, metadata !99, null}
!106 = metadata !{i32 27, i32 124, metadata !99, null}
!107 = metadata !{i32 23, i32 40, metadata !97, null}
!108 = metadata !{i32 28, i32 32, metadata !95, null}
!109 = metadata !{i32 29, i32 4, metadata !95, null}
!110 = metadata !{i32 19, i32 33, metadata !93, null}
!111 = metadata !{i32 29, i32 4, metadata !93, null}
!112 = metadata !{i32 18, i32 32, metadata !90, null}
!113 = metadata !{i32 30, i32 2, metadata !91, null}
!114 = metadata !{i32 15, i32 30, metadata !88, null}
!115 = metadata !{i32 31, i32 1, metadata !67, null}
