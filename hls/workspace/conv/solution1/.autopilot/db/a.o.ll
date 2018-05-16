; ModuleID = '/home/sergiu/git/lic/hls/workspace/conv/solution1/.autopilot/db/a.o.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str2 = private unnamed_addr constant [5 x i8] c"axis\00", align 1 ; [#uses=1 type=[5 x i8]*]
@.str3 = private unnamed_addr constant [5 x i8] c"both\00", align 1 ; [#uses=1 type=[5 x i8]*]
@.str4 = private unnamed_addr constant [12 x i8] c"conv_label4\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str5 = private unnamed_addr constant [12 x i8] c"conv_label3\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str6 = private unnamed_addr constant [12 x i8] c"conv_label0\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str7 = private unnamed_addr constant [12 x i8] c"conv_label2\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str8 = private unnamed_addr constant [12 x i8] c"conv_label1\00", align 1 ; [#uses=1 type=[12 x i8]*]

; [#uses=1]
define internal float @relu(float %a) nounwind uwtable {
  %1 = alloca float, align 4                      ; [#uses=3 type=float*]
  store float %a, float* %1, align 4
  call void @llvm.dbg.declare(metadata !{float* %1}, metadata !44), !dbg !45 ; [debug line = 4:18] [debug variable = a]
  %2 = load float* %1, align 4, !dbg !46          ; [#uses=1 type=float] [debug line = 6:2]
  %3 = fcmp ogt float %2, 0.000000e+00, !dbg !46  ; [#uses=1 type=i1] [debug line = 6:2]
  br i1 %3, label %4, label %6, !dbg !46          ; [debug line = 6:2]

; <label>:4                                       ; preds = %0
  %5 = load float* %1, align 4, !dbg !46          ; [#uses=1 type=float] [debug line = 6:2]
  br label %7, !dbg !46                           ; [debug line = 6:2]

; <label>:6                                       ; preds = %0
  br label %7, !dbg !46                           ; [debug line = 6:2]

; <label>:7                                       ; preds = %6, %4
  %8 = phi float [ %5, %4 ], [ 0.000000e+00, %6 ], !dbg !46 ; [#uses=1 type=float] [debug line = 6:2]
  ret float %8, !dbg !46                          ; [debug line = 6:2]
}

; [#uses=13]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=0]
define void @conv([29 x [8 x float]]* %output, [32 x [1 x float]]* %image, [4 x [1 x [8 x float]]]* %weight, float* %bias) nounwind uwtable {
  %1 = alloca [29 x [8 x float]]*, align 8        ; [#uses=4 type=[29 x [8 x float]]**]
  %2 = alloca [32 x [1 x float]]*, align 8        ; [#uses=4 type=[32 x [1 x float]]**]
  %3 = alloca [4 x [1 x [8 x float]]]*, align 8   ; [#uses=4 type=[4 x [1 x [8 x float]]]**]
  %4 = alloca float*, align 8                     ; [#uses=4 type=float**]
  %i = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %j = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %k = alloca i32, align 4                        ; [#uses=0 type=i32*]
  %filter = alloca i32, align 4                   ; [#uses=7 type=i32*]
  %sum = alloca float, align 4                    ; [#uses=4 type=float*]
  %row_offset = alloca i32, align 4               ; [#uses=6 type=i32*]
  %col_offset = alloca i32, align 4               ; [#uses=6 type=i32*]
  %channel_offset = alloca i32, align 4           ; [#uses=6 type=i32*]
  store [29 x [8 x float]]* %output, [29 x [8 x float]]** %1, align 8
  call void @llvm.dbg.declare(metadata !{[29 x [8 x float]]** %1}, metadata !48), !dbg !49 ; [debug line = 5:17] [debug variable = output]
  store [32 x [1 x float]]* %image, [32 x [1 x float]]** %2, align 8
  call void @llvm.dbg.declare(metadata !{[32 x [1 x float]]** %2}, metadata !50), !dbg !51 ; [debug line = 5:42] [debug variable = image]
  store [4 x [1 x [8 x float]]]* %weight, [4 x [1 x [8 x float]]]** %3, align 8
  call void @llvm.dbg.declare(metadata !{[4 x [1 x [8 x float]]]** %3}, metadata !52), !dbg !53 ; [debug line = 5:66] [debug variable = weight]
  store float* %bias, float** %4, align 8
  call void @llvm.dbg.declare(metadata !{float** %4}, metadata !54), !dbg !55 ; [debug line = 5:92] [debug variable = bias]
  %5 = load [29 x [8 x float]]** %1, align 8, !dbg !56 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 6:2]
  call void (...)* @_ssdm_SpecArrayDimSize([29 x [8 x float]]* %5, i32 29) nounwind, !dbg !56 ; [debug line = 6:2]
  %6 = load [32 x [1 x float]]** %2, align 8, !dbg !58 ; [#uses=1 type=[32 x [1 x float]]*] [debug line = 6:36]
  call void (...)* @_ssdm_SpecArrayDimSize([32 x [1 x float]]* %6, i32 32) nounwind, !dbg !58 ; [debug line = 6:36]
  %7 = load float** %4, align 8, !dbg !59         ; [#uses=1 type=float*] [debug line = 6:69]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %7, i32 8) nounwind, !dbg !59 ; [debug line = 6:69]
  %8 = load [4 x [1 x [8 x float]]]** %3, align 8, !dbg !60 ; [#uses=1 type=[4 x [1 x [8 x float]]]*] [debug line = 6:100]
  call void (...)* @_ssdm_SpecArrayDimSize([4 x [1 x [8 x float]]]* %8, i32 4) nounwind, !dbg !60 ; [debug line = 6:100]
  %9 = load float** %4, align 8, !dbg !61         ; [#uses=1 type=float*] [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(float* %9, i8* getelementptr inbounds ([10 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !61 ; [debug line = 7:1]
  %10 = load [4 x [1 x [8 x float]]]** %3, align 8, !dbg !61 ; [#uses=1 type=[4 x [1 x [8 x float]]]*] [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface([4 x [1 x [8 x float]]]* %10, i8* getelementptr inbounds ([10 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !61 ; [debug line = 7:1]
  %11 = load [32 x [1 x float]]** %2, align 8, !dbg !61 ; [#uses=1 type=[32 x [1 x float]]*] [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface([32 x [1 x float]]* %11, i8* getelementptr inbounds ([5 x i8]* @.str2, i32 0, i32 0), i32 1, i32 1, i8* getelementptr inbounds ([5 x i8]* @.str3, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !61 ; [debug line = 7:1]
  %12 = load [29 x [8 x float]]** %1, align 8, !dbg !61 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface([29 x [8 x float]]* %12, i8* getelementptr inbounds ([5 x i8]* @.str2, i32 0, i32 0), i32 1, i32 1, i8* getelementptr inbounds ([5 x i8]* @.str3, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !61 ; [debug line = 7:1]
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !62), !dbg !64 ; [debug line = 7:6] [debug variable = i]
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !65), !dbg !66 ; [debug line = 7:8] [debug variable = j]
  call void @llvm.dbg.declare(metadata !{i32* %k}, metadata !67), !dbg !68 ; [debug line = 7:10] [debug variable = k]
  call void @llvm.dbg.declare(metadata !{i32* %filter}, metadata !69), !dbg !70 ; [debug line = 7:12] [debug variable = filter]
  call void @llvm.dbg.declare(metadata !{float* %sum}, metadata !71), !dbg !72 ; [debug line = 8:8] [debug variable = sum]
  call void @llvm.dbg.declare(metadata !{i32* %row_offset}, metadata !73), !dbg !74 ; [debug line = 9:6] [debug variable = row_offset]
  call void @llvm.dbg.declare(metadata !{i32* %col_offset}, metadata !75), !dbg !76 ; [debug line = 9:18] [debug variable = col_offset]
  call void @llvm.dbg.declare(metadata !{i32* %channel_offset}, metadata !77), !dbg !78 ; [debug line = 9:30] [debug variable = channel_offset]
  store i32 0, i32* %filter, align 4, !dbg !79    ; [debug line = 14:6]
  br label %13, !dbg !79                          ; [debug line = 14:6]

; <label>:13                                      ; preds = %114, %0
  %14 = load i32* %filter, align 4, !dbg !79      ; [#uses=1 type=i32] [debug line = 14:6]
  %15 = icmp slt i32 %14, 8, !dbg !79             ; [#uses=1 type=i1] [debug line = 14:6]
  br i1 %15, label %16, label %117, !dbg !79      ; [debug line = 14:6]

; <label>:16                                      ; preds = %13
  br label %17, !dbg !81                          ; [debug line = 15:2]

; <label>:17                                      ; preds = %16
  store i32 0, i32* %i, align 4, !dbg !83         ; [debug line = 17:19]
  br label %18, !dbg !83                          ; [debug line = 17:19]

; <label>:18                                      ; preds = %110, %17
  %19 = load i32* %i, align 4, !dbg !83           ; [#uses=1 type=i32] [debug line = 17:19]
  %20 = icmp slt i32 %19, 29, !dbg !83            ; [#uses=1 type=i1] [debug line = 17:19]
  br i1 %20, label %21, label %113, !dbg !83      ; [debug line = 17:19]

; <label>:21                                      ; preds = %18
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !85 ; [debug line = 18:2]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !85 ; [debug line = 18:2]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !87 ; [debug line = 19:1]
  br label %22, !dbg !87                          ; [debug line = 19:1]

; <label>:22                                      ; preds = %21
  store i32 0, i32* %j, align 4, !dbg !88         ; [debug line = 18:17]
  br label %23, !dbg !88                          ; [debug line = 18:17]

; <label>:23                                      ; preds = %106, %22
  %24 = load i32* %j, align 4, !dbg !88           ; [#uses=1 type=i32] [debug line = 18:17]
  %25 = icmp slt i32 %24, 29, !dbg !88            ; [#uses=1 type=i1] [debug line = 18:17]
  br i1 %25, label %26, label %109, !dbg !88      ; [debug line = 18:17]

; <label>:26                                      ; preds = %23
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !90 ; [debug line = 19:5]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !90 ; [debug line = 19:5]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !92 ; [debug line = 20:1]
  store float 0.000000e+00, float* %sum, align 4, !dbg !93 ; [debug line = 21:5]
  br label %27, !dbg !93                          ; [debug line = 21:5]

; <label>:27                                      ; preds = %26
  store i32 0, i32* %row_offset, align 4, !dbg !94 ; [debug line = 22:21]
  br label %28, !dbg !94                          ; [debug line = 22:21]

; <label>:28                                      ; preds = %82, %27
  %29 = load i32* %row_offset, align 4, !dbg !94  ; [#uses=1 type=i32] [debug line = 22:21]
  %30 = icmp slt i32 %29, 4, !dbg !94             ; [#uses=1 type=i1] [debug line = 22:21]
  br i1 %30, label %31, label %85, !dbg !94       ; [debug line = 22:21]

; <label>:31                                      ; preds = %28
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str6, i32 0, i32 0)) nounwind, !dbg !96 ; [debug line = 24:2]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str6, i32 0, i32 0)) nounwind, !dbg !96 ; [debug line = 24:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !98 ; [debug line = 25:1]
  br label %32, !dbg !98                          ; [debug line = 25:1]

; <label>:32                                      ; preds = %31
  store i32 0, i32* %col_offset, align 4, !dbg !99 ; [debug line = 24:17]
  br label %33, !dbg !99                          ; [debug line = 24:17]

; <label>:33                                      ; preds = %78, %32
  %34 = load i32* %col_offset, align 4, !dbg !99  ; [#uses=1 type=i32] [debug line = 24:17]
  %35 = icmp slt i32 %34, 4, !dbg !99             ; [#uses=1 type=i1] [debug line = 24:17]
  br i1 %35, label %36, label %81, !dbg !99       ; [debug line = 24:17]

; <label>:36                                      ; preds = %33
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str7, i32 0, i32 0)) nounwind, !dbg !101 ; [debug line = 25:2]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str7, i32 0, i32 0)) nounwind, !dbg !101 ; [debug line = 25:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !103 ; [debug line = 26:1]
  br label %37, !dbg !103                         ; [debug line = 26:1]

; <label>:37                                      ; preds = %36
  store i32 0, i32* %channel_offset, align 4, !dbg !104 ; [debug line = 25:17]
  br label %38, !dbg !104                         ; [debug line = 25:17]

; <label>:38                                      ; preds = %74, %37
  %39 = load i32* %channel_offset, align 4, !dbg !104 ; [#uses=1 type=i32] [debug line = 25:17]
  %40 = icmp slt i32 %39, 1, !dbg !104            ; [#uses=1 type=i1] [debug line = 25:17]
  br i1 %40, label %41, label %77, !dbg !104      ; [debug line = 25:17]

; <label>:41                                      ; preds = %38
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !106 ; [debug line = 26:2]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !106 ; [debug line = 26:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !108 ; [debug line = 27:1]
  %42 = load i32* %channel_offset, align 4, !dbg !109 ; [#uses=1 type=i32] [debug line = 26:1]
  %43 = sext i32 %42 to i64, !dbg !109            ; [#uses=1 type=i64] [debug line = 26:1]
  %44 = load i32* %j, align 4, !dbg !109          ; [#uses=1 type=i32] [debug line = 26:1]
  %45 = load i32* %col_offset, align 4, !dbg !109 ; [#uses=1 type=i32] [debug line = 26:1]
  %46 = add nsw i32 %44, %45, !dbg !109           ; [#uses=1 type=i32] [debug line = 26:1]
  %47 = sext i32 %46 to i64, !dbg !109            ; [#uses=1 type=i64] [debug line = 26:1]
  %48 = load i32* %i, align 4, !dbg !109          ; [#uses=1 type=i32] [debug line = 26:1]
  %49 = load i32* %row_offset, align 4, !dbg !109 ; [#uses=1 type=i32] [debug line = 26:1]
  %50 = add nsw i32 %48, %49, !dbg !109           ; [#uses=1 type=i32] [debug line = 26:1]
  %51 = sext i32 %50 to i64, !dbg !109            ; [#uses=1 type=i64] [debug line = 26:1]
  %52 = load [32 x [1 x float]]** %2, align 8, !dbg !109 ; [#uses=1 type=[32 x [1 x float]]*] [debug line = 26:1]
  %53 = getelementptr inbounds [32 x [1 x float]]* %52, i64 %51, !dbg !109 ; [#uses=1 type=[32 x [1 x float]]*] [debug line = 26:1]
  %54 = getelementptr inbounds [32 x [1 x float]]* %53, i32 0, i64 %47, !dbg !109 ; [#uses=1 type=[1 x float]*] [debug line = 26:1]
  %55 = getelementptr inbounds [1 x float]* %54, i32 0, i64 %43, !dbg !109 ; [#uses=1 type=float*] [debug line = 26:1]
  %56 = load float* %55, align 4, !dbg !109       ; [#uses=1 type=float] [debug line = 26:1]
  %57 = load i32* %filter, align 4, !dbg !109     ; [#uses=1 type=i32] [debug line = 26:1]
  %58 = sext i32 %57 to i64, !dbg !109            ; [#uses=1 type=i64] [debug line = 26:1]
  %59 = load i32* %channel_offset, align 4, !dbg !109 ; [#uses=1 type=i32] [debug line = 26:1]
  %60 = sext i32 %59 to i64, !dbg !109            ; [#uses=1 type=i64] [debug line = 26:1]
  %61 = load i32* %col_offset, align 4, !dbg !109 ; [#uses=1 type=i32] [debug line = 26:1]
  %62 = sext i32 %61 to i64, !dbg !109            ; [#uses=1 type=i64] [debug line = 26:1]
  %63 = load i32* %row_offset, align 4, !dbg !109 ; [#uses=1 type=i32] [debug line = 26:1]
  %64 = sext i32 %63 to i64, !dbg !109            ; [#uses=1 type=i64] [debug line = 26:1]
  %65 = load [4 x [1 x [8 x float]]]** %3, align 8, !dbg !109 ; [#uses=1 type=[4 x [1 x [8 x float]]]*] [debug line = 26:1]
  %66 = getelementptr inbounds [4 x [1 x [8 x float]]]* %65, i64 %64, !dbg !109 ; [#uses=1 type=[4 x [1 x [8 x float]]]*] [debug line = 26:1]
  %67 = getelementptr inbounds [4 x [1 x [8 x float]]]* %66, i32 0, i64 %62, !dbg !109 ; [#uses=1 type=[1 x [8 x float]]*] [debug line = 26:1]
  %68 = getelementptr inbounds [1 x [8 x float]]* %67, i32 0, i64 %60, !dbg !109 ; [#uses=1 type=[8 x float]*] [debug line = 26:1]
  %69 = getelementptr inbounds [8 x float]* %68, i32 0, i64 %58, !dbg !109 ; [#uses=1 type=float*] [debug line = 26:1]
  %70 = load float* %69, align 4, !dbg !109       ; [#uses=1 type=float] [debug line = 26:1]
  %71 = fmul float %56, %70, !dbg !109            ; [#uses=1 type=float] [debug line = 26:1]
  %72 = load float* %sum, align 4, !dbg !109      ; [#uses=1 type=float] [debug line = 26:1]
  %73 = fadd float %72, %71, !dbg !109            ; [#uses=1 type=float] [debug line = 26:1]
  store float %73, float* %sum, align 4, !dbg !109 ; [debug line = 26:1]
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !110 ; [debug line = 26:117]
  br label %74, !dbg !110                         ; [debug line = 26:117]

; <label>:74                                      ; preds = %41
  %75 = load i32* %channel_offset, align 4, !dbg !111 ; [#uses=1 type=i32] [debug line = 25:57]
  %76 = add nsw i32 %75, 1, !dbg !111             ; [#uses=1 type=i32] [debug line = 25:57]
  store i32 %76, i32* %channel_offset, align 4, !dbg !111 ; [debug line = 25:57]
  br label %38, !dbg !111                         ; [debug line = 25:57]

; <label>:77                                      ; preds = %38
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str7, i32 0, i32 0)) nounwind, !dbg !112 ; [debug line = 26:117]
  br label %78, !dbg !112                         ; [debug line = 26:117]

; <label>:78                                      ; preds = %77
  %79 = load i32* %col_offset, align 4, !dbg !113 ; [#uses=1 type=i32] [debug line = 24:48]
  %80 = add nsw i32 %79, 1, !dbg !113             ; [#uses=1 type=i32] [debug line = 24:48]
  store i32 %80, i32* %col_offset, align 4, !dbg !113 ; [debug line = 24:48]
  br label %33, !dbg !113                         ; [debug line = 24:48]

; <label>:81                                      ; preds = %33
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str6, i32 0, i32 0)) nounwind, !dbg !114 ; [debug line = 26:117]
  br label %82, !dbg !114                         ; [debug line = 26:117]

; <label>:82                                      ; preds = %81
  %83 = load i32* %row_offset, align 4, !dbg !115 ; [#uses=1 type=i32] [debug line = 22:52]
  %84 = add nsw i32 %83, 1, !dbg !115             ; [#uses=1 type=i32] [debug line = 22:52]
  store i32 %84, i32* %row_offset, align 4, !dbg !115 ; [debug line = 22:52]
  br label %28, !dbg !115                         ; [debug line = 22:52]

; <label>:85                                      ; preds = %28
  %86 = load float* %sum, align 4, !dbg !116      ; [#uses=1 type=float] [debug line = 27:32]
  %87 = load i32* %filter, align 4, !dbg !116     ; [#uses=1 type=i32] [debug line = 27:32]
  %88 = sext i32 %87 to i64, !dbg !116            ; [#uses=1 type=i64] [debug line = 27:32]
  %89 = load float** %4, align 8, !dbg !116       ; [#uses=1 type=float*] [debug line = 27:32]
  %90 = getelementptr inbounds float* %89, i64 %88, !dbg !116 ; [#uses=1 type=float*] [debug line = 27:32]
  %91 = load float* %90, align 4, !dbg !116       ; [#uses=1 type=float] [debug line = 27:32]
  %92 = fadd float %86, %91, !dbg !116            ; [#uses=1 type=float] [debug line = 27:32]
  %93 = call float @relu(float %92), !dbg !116    ; [#uses=1 type=float] [debug line = 27:32]
  %94 = load i32* %filter, align 4, !dbg !116     ; [#uses=1 type=i32] [debug line = 27:32]
  %95 = sext i32 %94 to i64, !dbg !116            ; [#uses=1 type=i64] [debug line = 27:32]
  %96 = load i32* %j, align 4, !dbg !116          ; [#uses=1 type=i32] [debug line = 27:32]
  %97 = sdiv i32 %96, 1, !dbg !116                ; [#uses=1 type=i32] [debug line = 27:32]
  %98 = sext i32 %97 to i64, !dbg !116            ; [#uses=1 type=i64] [debug line = 27:32]
  %99 = load i32* %i, align 4, !dbg !116          ; [#uses=1 type=i32] [debug line = 27:32]
  %100 = sdiv i32 %99, 1, !dbg !116               ; [#uses=1 type=i32] [debug line = 27:32]
  %101 = sext i32 %100 to i64, !dbg !116          ; [#uses=1 type=i64] [debug line = 27:32]
  %102 = load [29 x [8 x float]]** %1, align 8, !dbg !116 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 27:32]
  %103 = getelementptr inbounds [29 x [8 x float]]* %102, i64 %101, !dbg !116 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 27:32]
  %104 = getelementptr inbounds [29 x [8 x float]]* %103, i32 0, i64 %98, !dbg !116 ; [#uses=1 type=[8 x float]*] [debug line = 27:32]
  %105 = getelementptr inbounds [8 x float]* %104, i32 0, i64 %95, !dbg !116 ; [#uses=1 type=float*] [debug line = 27:32]
  store float %93, float* %105, align 4, !dbg !116 ; [debug line = 27:32]
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !117 ; [debug line = 28:4]
  br label %106, !dbg !117                        ; [debug line = 28:4]

; <label>:106                                     ; preds = %85
  %107 = load i32* %j, align 4, !dbg !118         ; [#uses=1 type=i32] [debug line = 18:42]
  %108 = add nsw i32 %107, 1, !dbg !118           ; [#uses=1 type=i32] [debug line = 18:42]
  store i32 %108, i32* %j, align 4, !dbg !118     ; [debug line = 18:42]
  br label %23, !dbg !118                         ; [debug line = 18:42]

; <label>:109                                     ; preds = %23
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !119 ; [debug line = 28:4]
  br label %110, !dbg !119                        ; [debug line = 28:4]

; <label>:110                                     ; preds = %109
  %111 = load i32* %i, align 4, !dbg !120         ; [#uses=1 type=i32] [debug line = 17:44]
  %112 = add nsw i32 %111, 1, !dbg !120           ; [#uses=1 type=i32] [debug line = 17:44]
  store i32 %112, i32* %i, align 4, !dbg !120     ; [debug line = 17:44]
  br label %18, !dbg !120                         ; [debug line = 17:44]

; <label>:113                                     ; preds = %18
  br label %114, !dbg !121                        ; [debug line = 29:2]

; <label>:114                                     ; preds = %113
  %115 = load i32* %filter, align 4, !dbg !122    ; [#uses=1 type=i32] [debug line = 14:30]
  %116 = add nsw i32 %115, 1, !dbg !122           ; [#uses=1 type=i32] [debug line = 14:30]
  store i32 %116, i32* %filter, align 4, !dbg !122 ; [debug line = 14:30]
  br label %13, !dbg !122                         ; [debug line = 14:30]

; <label>:117                                     ; preds = %13
  ret void, !dbg !123                             ; [debug line = 30:1]
}

; [#uses=4]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

; [#uses=4]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=5]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=5]
declare void @_ssdm_RegionBegin(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=4]
declare void @_ssdm_Unroll(...) nounwind

; [#uses=5]
declare void @_ssdm_RegionEnd(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!31, !38}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/conv/solution1/.autopilot/db/conv.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
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
!12 = metadata !{i32 786478, i32 0, metadata !13, metadata !"conv", metadata !"conv", metadata !"", metadata !13, i32 5, metadata !14, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ([29 x [8 x float]]*, [32 x [1 x float]]*, [4 x [1 x [8 x float]]]*, float*)* @conv, null, null, metadata !10, i32 6} ; [ DW_TAG_subprogram ]
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
!31 = metadata !{float (float)* @relu, metadata !32, metadata !33, metadata !34, metadata !35, metadata !36, metadata !37}
!32 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!33 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!34 = metadata !{metadata !"kernel_arg_type", metadata !"float"}
!35 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!36 = metadata !{metadata !"kernel_arg_name", metadata !"a"}
!37 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!38 = metadata !{void ([29 x [8 x float]]*, [32 x [1 x float]]*, [4 x [1 x [8 x float]]]*, float*)* @conv, metadata !39, metadata !40, metadata !41, metadata !42, metadata !43, metadata !37}
!39 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1, i32 1}
!40 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!41 = metadata !{metadata !"kernel_arg_type", metadata !"float [29][8]*", metadata !"float [32][1]*", metadata !"float [4][1][8]*", metadata !"float*"}
!42 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!43 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"image", metadata !"weight", metadata !"bias"}
!44 = metadata !{i32 786689, metadata !5, metadata !"a", metadata !6, i32 16777220, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!45 = metadata !{i32 4, i32 18, metadata !5, null}
!46 = metadata !{i32 6, i32 2, metadata !47, null}
!47 = metadata !{i32 786443, metadata !5, i32 5, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!48 = metadata !{i32 786689, metadata !12, metadata !"output", metadata !13, i32 16777221, metadata !16, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!49 = metadata !{i32 5, i32 17, metadata !12, null}
!50 = metadata !{i32 786689, metadata !12, metadata !"image", metadata !13, i32 33554437, metadata !21, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!51 = metadata !{i32 5, i32 42, metadata !12, null}
!52 = metadata !{i32 786689, metadata !12, metadata !"weight", metadata !13, i32 50331653, metadata !26, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!53 = metadata !{i32 5, i32 66, metadata !12, null}
!54 = metadata !{i32 786689, metadata !12, metadata !"bias", metadata !13, i32 67108869, metadata !30, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!55 = metadata !{i32 5, i32 92, metadata !12, null}
!56 = metadata !{i32 6, i32 2, metadata !57, null}
!57 = metadata !{i32 786443, metadata !12, i32 6, i32 1, metadata !13, i32 1} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 6, i32 36, metadata !57, null}
!59 = metadata !{i32 6, i32 69, metadata !57, null}
!60 = metadata !{i32 6, i32 100, metadata !57, null}
!61 = metadata !{i32 7, i32 1, metadata !57, null}
!62 = metadata !{i32 786688, metadata !57, metadata !"i", metadata !13, i32 7, metadata !63, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!63 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!64 = metadata !{i32 7, i32 6, metadata !57, null}
!65 = metadata !{i32 786688, metadata !57, metadata !"j", metadata !13, i32 7, metadata !63, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!66 = metadata !{i32 7, i32 8, metadata !57, null}
!67 = metadata !{i32 786688, metadata !57, metadata !"k", metadata !13, i32 7, metadata !63, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!68 = metadata !{i32 7, i32 10, metadata !57, null}
!69 = metadata !{i32 786688, metadata !57, metadata !"filter", metadata !13, i32 7, metadata !63, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!70 = metadata !{i32 7, i32 12, metadata !57, null}
!71 = metadata !{i32 786688, metadata !57, metadata !"sum", metadata !13, i32 8, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!72 = metadata !{i32 8, i32 8, metadata !57, null}
!73 = metadata !{i32 786688, metadata !57, metadata !"row_offset", metadata !13, i32 9, metadata !63, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!74 = metadata !{i32 9, i32 6, metadata !57, null}
!75 = metadata !{i32 786688, metadata !57, metadata !"col_offset", metadata !13, i32 9, metadata !63, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!76 = metadata !{i32 9, i32 18, metadata !57, null}
!77 = metadata !{i32 786688, metadata !57, metadata !"channel_offset", metadata !13, i32 9, metadata !63, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!78 = metadata !{i32 9, i32 30, metadata !57, null}
!79 = metadata !{i32 14, i32 6, metadata !80, null}
!80 = metadata !{i32 786443, metadata !57, i32 14, i32 2, metadata !13, i32 2} ; [ DW_TAG_lexical_block ]
!81 = metadata !{i32 15, i32 2, metadata !82, null}
!82 = metadata !{i32 786443, metadata !80, i32 15, i32 2, metadata !13, i32 3} ; [ DW_TAG_lexical_block ]
!83 = metadata !{i32 17, i32 19, metadata !84, null}
!84 = metadata !{i32 786443, metadata !82, i32 17, i32 15, metadata !13, i32 4} ; [ DW_TAG_lexical_block ]
!85 = metadata !{i32 18, i32 2, metadata !86, null}
!86 = metadata !{i32 786443, metadata !84, i32 18, i32 1, metadata !13, i32 5} ; [ DW_TAG_lexical_block ]
!87 = metadata !{i32 19, i32 1, metadata !86, null}
!88 = metadata !{i32 18, i32 17, metadata !89, null}
!89 = metadata !{i32 786443, metadata !86, i32 18, i32 13, metadata !13, i32 6} ; [ DW_TAG_lexical_block ]
!90 = metadata !{i32 19, i32 5, metadata !91, null}
!91 = metadata !{i32 786443, metadata !89, i32 19, i32 4, metadata !13, i32 7} ; [ DW_TAG_lexical_block ]
!92 = metadata !{i32 20, i32 1, metadata !91, null}
!93 = metadata !{i32 21, i32 5, metadata !91, null}
!94 = metadata !{i32 22, i32 21, metadata !95, null}
!95 = metadata !{i32 786443, metadata !91, i32 22, i32 17, metadata !13, i32 8} ; [ DW_TAG_lexical_block ]
!96 = metadata !{i32 24, i32 2, metadata !97, null}
!97 = metadata !{i32 786443, metadata !95, i32 24, i32 1, metadata !13, i32 9} ; [ DW_TAG_lexical_block ]
!98 = metadata !{i32 25, i32 1, metadata !97, null}
!99 = metadata !{i32 24, i32 17, metadata !100, null}
!100 = metadata !{i32 786443, metadata !97, i32 24, i32 13, metadata !13, i32 10} ; [ DW_TAG_lexical_block ]
!101 = metadata !{i32 25, i32 2, metadata !102, null}
!102 = metadata !{i32 786443, metadata !100, i32 25, i32 1, metadata !13, i32 11} ; [ DW_TAG_lexical_block ]
!103 = metadata !{i32 26, i32 1, metadata !102, null}
!104 = metadata !{i32 25, i32 17, metadata !105, null}
!105 = metadata !{i32 786443, metadata !102, i32 25, i32 13, metadata !13, i32 12} ; [ DW_TAG_lexical_block ]
!106 = metadata !{i32 26, i32 2, metadata !107, null}
!107 = metadata !{i32 786443, metadata !105, i32 26, i32 1, metadata !13, i32 13} ; [ DW_TAG_lexical_block ]
!108 = metadata !{i32 27, i32 1, metadata !107, null}
!109 = metadata !{i32 26, i32 1, metadata !107, null}
!110 = metadata !{i32 26, i32 117, metadata !107, null}
!111 = metadata !{i32 25, i32 57, metadata !105, null}
!112 = metadata !{i32 26, i32 117, metadata !105, null}
!113 = metadata !{i32 24, i32 48, metadata !100, null}
!114 = metadata !{i32 26, i32 117, metadata !100, null}
!115 = metadata !{i32 22, i32 52, metadata !95, null}
!116 = metadata !{i32 27, i32 32, metadata !91, null}
!117 = metadata !{i32 28, i32 4, metadata !91, null}
!118 = metadata !{i32 18, i32 42, metadata !89, null}
!119 = metadata !{i32 28, i32 4, metadata !89, null}
!120 = metadata !{i32 17, i32 44, metadata !84, null}
!121 = metadata !{i32 29, i32 2, metadata !82, null}
!122 = metadata !{i32 14, i32 30, metadata !80, null}
!123 = metadata !{i32 30, i32 1, metadata !57, null}
