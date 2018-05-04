; ModuleID = '/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.o.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [12 x i8] c"pool_label2\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str1 = private unnamed_addr constant [12 x i8] c"pool_label3\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str2 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str3 = private unnamed_addr constant [12 x i8] c"pool_label4\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str4 = private unnamed_addr constant [12 x i8] c"pool_label5\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str5 = private unnamed_addr constant [12 x i8] c"pool_label6\00", align 1 ; [#uses=1 type=[12 x i8]*]

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
  br label %5, !dbg !37                           ; [debug line = 6:11]

; <label>:5                                       ; preds = %0
  call void @llvm.dbg.declare(metadata !{i32* %channel}, metadata !38), !dbg !41 ; [debug line = 7:22] [debug variable = channel]
  store i32 0, i32* %channel, align 4, !dbg !42   ; [debug line = 7:33]
  br label %6, !dbg !42                           ; [debug line = 7:33]

; <label>:6                                       ; preds = %107, %5
  %7 = load i32* %channel, align 4, !dbg !42      ; [#uses=1 type=i32] [debug line = 7:33]
  %8 = icmp slt i32 %7, 8, !dbg !42               ; [#uses=1 type=i1] [debug line = 7:33]
  br i1 %8, label %9, label %110, !dbg !42        ; [debug line = 7:33]

; <label>:9                                       ; preds = %6
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !43 ; [debug line = 8:3]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !43 ; [debug line = 8:3]
  br label %10, !dbg !43                          ; [debug line = 8:3]

; <label>:10                                      ; preds = %9
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !45), !dbg !47 ; [debug line = 8:23] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !48         ; [debug line = 8:28]
  br label %11, !dbg !48                          ; [debug line = 8:28]

; <label>:11                                      ; preds = %103, %10
  %12 = load i32* %i, align 4, !dbg !48           ; [#uses=1 type=i32] [debug line = 8:28]
  %13 = icmp slt i32 %12, 28, !dbg !48            ; [#uses=1 type=i1] [debug line = 8:28]
  br i1 %13, label %14, label %106, !dbg !48      ; [debug line = 8:28]

; <label>:14                                      ; preds = %11
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !49 ; [debug line = 9:2]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !49 ; [debug line = 9:2]
  call void (...)* @_ssdm_op_SpecPipeline(i32 50, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !51 ; [debug line = 10:1]
  br label %15, !dbg !51                          ; [debug line = 10:1]

; <label>:15                                      ; preds = %14
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !52), !dbg !54 ; [debug line = 9:21] [debug variable = j]
  store i32 0, i32* %j, align 4, !dbg !55         ; [debug line = 9:26]
  br label %16, !dbg !55                          ; [debug line = 9:26]

; <label>:16                                      ; preds = %99, %15
  %17 = load i32* %j, align 4, !dbg !55           ; [#uses=1 type=i32] [debug line = 9:26]
  %18 = icmp slt i32 %17, 28, !dbg !55            ; [#uses=1 type=i1] [debug line = 9:26]
  br i1 %18, label %19, label %102, !dbg !55      ; [debug line = 9:26]

; <label>:19                                      ; preds = %16
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !56 ; [debug line = 10:5]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !56 ; [debug line = 10:5]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !58 ; [debug line = 11:1]
  %20 = load i32* %channel, align 4, !dbg !59     ; [#uses=1 type=i32] [debug line = 11:5]
  %21 = sext i32 %20 to i64, !dbg !59             ; [#uses=1 type=i64] [debug line = 11:5]
  %22 = load i32* %j, align 4, !dbg !59           ; [#uses=1 type=i32] [debug line = 11:5]
  %23 = sext i32 %22 to i64, !dbg !59             ; [#uses=1 type=i64] [debug line = 11:5]
  %24 = load i32* %i, align 4, !dbg !59           ; [#uses=1 type=i32] [debug line = 11:5]
  %25 = sext i32 %24 to i64, !dbg !59             ; [#uses=1 type=i64] [debug line = 11:5]
  %26 = load [29 x [8 x float]]** %2, align 8, !dbg !59 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 11:5]
  %27 = getelementptr inbounds [29 x [8 x float]]* %26, i64 %25, !dbg !59 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 11:5]
  %28 = getelementptr inbounds [29 x [8 x float]]* %27, i32 0, i64 %23, !dbg !59 ; [#uses=1 type=[8 x float]*] [debug line = 11:5]
  %29 = getelementptr inbounds [8 x float]* %28, i32 0, i64 %21, !dbg !59 ; [#uses=1 type=float*] [debug line = 11:5]
  %30 = load float* %29, align 4, !dbg !59        ; [#uses=1 type=float] [debug line = 11:5]
  store float %30, float* %max, align 4, !dbg !59 ; [debug line = 11:5]
  br label %31, !dbg !59                          ; [debug line = 11:5]

; <label>:31                                      ; preds = %19
  call void @llvm.dbg.declare(metadata !{i32* %k}, metadata !60), !dbg !62 ; [debug line = 12:25] [debug variable = k]
  store i32 0, i32* %k, align 4, !dbg !63         ; [debug line = 12:30]
  br label %32, !dbg !63                          ; [debug line = 12:30]

; <label>:32                                      ; preds = %82, %31
  %33 = load i32* %k, align 4, !dbg !63           ; [#uses=1 type=i32] [debug line = 12:30]
  %34 = icmp slt i32 %33, 2, !dbg !63             ; [#uses=1 type=i1] [debug line = 12:30]
  br i1 %34, label %35, label %85, !dbg !63       ; [debug line = 12:30]

; <label>:35                                      ; preds = %32
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !64 ; [debug line = 13:2]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !64 ; [debug line = 13:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !66 ; [debug line = 14:1]
  br label %36, !dbg !66                          ; [debug line = 14:1]

; <label>:36                                      ; preds = %35
  call void @llvm.dbg.declare(metadata !{i32* %l}, metadata !67), !dbg !69 ; [debug line = 13:21] [debug variable = l]
  store i32 0, i32* %l, align 4, !dbg !70         ; [debug line = 13:26]
  br label %37, !dbg !70                          ; [debug line = 13:26]

; <label>:37                                      ; preds = %78, %36
  %38 = load i32* %l, align 4, !dbg !70           ; [#uses=1 type=i32] [debug line = 13:26]
  %39 = icmp slt i32 %38, 2, !dbg !70             ; [#uses=1 type=i1] [debug line = 13:26]
  br i1 %39, label %40, label %81, !dbg !70       ; [debug line = 13:26]

; <label>:40                                      ; preds = %37
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !71 ; [debug line = 14:2]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !71 ; [debug line = 14:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !73 ; [debug line = 15:1]
  %41 = load i32* %channel, align 4, !dbg !74     ; [#uses=1 type=i32] [debug line = 14:1]
  %42 = sext i32 %41 to i64, !dbg !74             ; [#uses=1 type=i64] [debug line = 14:1]
  %43 = load i32* %l, align 4, !dbg !74           ; [#uses=1 type=i32] [debug line = 14:1]
  %44 = load i32* %j, align 4, !dbg !74           ; [#uses=1 type=i32] [debug line = 14:1]
  %45 = add nsw i32 %43, %44, !dbg !74            ; [#uses=1 type=i32] [debug line = 14:1]
  %46 = sext i32 %45 to i64, !dbg !74             ; [#uses=1 type=i64] [debug line = 14:1]
  %47 = load i32* %k, align 4, !dbg !74           ; [#uses=1 type=i32] [debug line = 14:1]
  %48 = load i32* %i, align 4, !dbg !74           ; [#uses=1 type=i32] [debug line = 14:1]
  %49 = add nsw i32 %47, %48, !dbg !74            ; [#uses=1 type=i32] [debug line = 14:1]
  %50 = sext i32 %49 to i64, !dbg !74             ; [#uses=1 type=i64] [debug line = 14:1]
  %51 = load [29 x [8 x float]]** %2, align 8, !dbg !74 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 14:1]
  %52 = getelementptr inbounds [29 x [8 x float]]* %51, i64 %50, !dbg !74 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 14:1]
  %53 = getelementptr inbounds [29 x [8 x float]]* %52, i32 0, i64 %46, !dbg !74 ; [#uses=1 type=[8 x float]*] [debug line = 14:1]
  %54 = getelementptr inbounds [8 x float]* %53, i32 0, i64 %42, !dbg !74 ; [#uses=1 type=float*] [debug line = 14:1]
  %55 = load float* %54, align 4, !dbg !74        ; [#uses=1 type=float] [debug line = 14:1]
  %56 = load float* %max, align 4, !dbg !74       ; [#uses=1 type=float] [debug line = 14:1]
  %57 = fcmp ogt float %55, %56, !dbg !74         ; [#uses=1 type=i1] [debug line = 14:1]
  br i1 %57, label %58, label %74, !dbg !74       ; [debug line = 14:1]

; <label>:58                                      ; preds = %40
  %59 = load i32* %channel, align 4, !dbg !74     ; [#uses=1 type=i32] [debug line = 14:1]
  %60 = sext i32 %59 to i64, !dbg !74             ; [#uses=1 type=i64] [debug line = 14:1]
  %61 = load i32* %l, align 4, !dbg !74           ; [#uses=1 type=i32] [debug line = 14:1]
  %62 = load i32* %j, align 4, !dbg !74           ; [#uses=1 type=i32] [debug line = 14:1]
  %63 = add nsw i32 %61, %62, !dbg !74            ; [#uses=1 type=i32] [debug line = 14:1]
  %64 = sext i32 %63 to i64, !dbg !74             ; [#uses=1 type=i64] [debug line = 14:1]
  %65 = load i32* %k, align 4, !dbg !74           ; [#uses=1 type=i32] [debug line = 14:1]
  %66 = load i32* %i, align 4, !dbg !74           ; [#uses=1 type=i32] [debug line = 14:1]
  %67 = add nsw i32 %65, %66, !dbg !74            ; [#uses=1 type=i32] [debug line = 14:1]
  %68 = sext i32 %67 to i64, !dbg !74             ; [#uses=1 type=i64] [debug line = 14:1]
  %69 = load [29 x [8 x float]]** %2, align 8, !dbg !74 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 14:1]
  %70 = getelementptr inbounds [29 x [8 x float]]* %69, i64 %68, !dbg !74 ; [#uses=1 type=[29 x [8 x float]]*] [debug line = 14:1]
  %71 = getelementptr inbounds [29 x [8 x float]]* %70, i32 0, i64 %64, !dbg !74 ; [#uses=1 type=[8 x float]*] [debug line = 14:1]
  %72 = getelementptr inbounds [8 x float]* %71, i32 0, i64 %60, !dbg !74 ; [#uses=1 type=float*] [debug line = 14:1]
  %73 = load float* %72, align 4, !dbg !74        ; [#uses=1 type=float] [debug line = 14:1]
  br label %76, !dbg !74                          ; [debug line = 14:1]

; <label>:74                                      ; preds = %40
  %75 = load float* %max, align 4, !dbg !74       ; [#uses=1 type=float] [debug line = 14:1]
  br label %76, !dbg !74                          ; [debug line = 14:1]

; <label>:76                                      ; preds = %74, %58
  %77 = phi float [ %73, %58 ], [ %75, %74 ], !dbg !74 ; [#uses=1 type=float] [debug line = 14:1]
  store float %77, float* %max, align 4, !dbg !74 ; [debug line = 14:1]
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !75 ; [debug line = 14:75]
  br label %78, !dbg !75                          ; [debug line = 14:75]

; <label>:78                                      ; preds = %76
  %79 = load i32* %l, align 4, !dbg !76           ; [#uses=1 type=i32] [debug line = 13:35]
  %80 = add nsw i32 %79, 1, !dbg !76              ; [#uses=1 type=i32] [debug line = 13:35]
  store i32 %80, i32* %l, align 4, !dbg !76       ; [debug line = 13:35]
  br label %37, !dbg !76                          ; [debug line = 13:35]

; <label>:81                                      ; preds = %37
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !77 ; [debug line = 14:75]
  br label %82, !dbg !77                          ; [debug line = 14:75]

; <label>:82                                      ; preds = %81
  %83 = load i32* %k, align 4, !dbg !78           ; [#uses=1 type=i32] [debug line = 12:39]
  %84 = add nsw i32 %83, 1, !dbg !78              ; [#uses=1 type=i32] [debug line = 12:39]
  store i32 %84, i32* %k, align 4, !dbg !78       ; [debug line = 12:39]
  br label %32, !dbg !78                          ; [debug line = 12:39]

; <label>:85                                      ; preds = %32
  %86 = load float* %max, align 4, !dbg !79       ; [#uses=1 type=float] [debug line = 15:5]
  %87 = load i32* %channel, align 4, !dbg !79     ; [#uses=1 type=i32] [debug line = 15:5]
  %88 = sext i32 %87 to i64, !dbg !79             ; [#uses=1 type=i64] [debug line = 15:5]
  %89 = load i32* %j, align 4, !dbg !79           ; [#uses=1 type=i32] [debug line = 15:5]
  %90 = sdiv i32 %89, 2, !dbg !79                 ; [#uses=1 type=i32] [debug line = 15:5]
  %91 = sext i32 %90 to i64, !dbg !79             ; [#uses=1 type=i64] [debug line = 15:5]
  %92 = load i32* %i, align 4, !dbg !79           ; [#uses=1 type=i32] [debug line = 15:5]
  %93 = sdiv i32 %92, 2, !dbg !79                 ; [#uses=1 type=i32] [debug line = 15:5]
  %94 = sext i32 %93 to i64, !dbg !79             ; [#uses=1 type=i64] [debug line = 15:5]
  %95 = load [14 x [8 x float]]** %1, align 8, !dbg !79 ; [#uses=1 type=[14 x [8 x float]]*] [debug line = 15:5]
  %96 = getelementptr inbounds [14 x [8 x float]]* %95, i64 %94, !dbg !79 ; [#uses=1 type=[14 x [8 x float]]*] [debug line = 15:5]
  %97 = getelementptr inbounds [14 x [8 x float]]* %96, i32 0, i64 %91, !dbg !79 ; [#uses=1 type=[8 x float]*] [debug line = 15:5]
  %98 = getelementptr inbounds [8 x float]* %97, i32 0, i64 %88, !dbg !79 ; [#uses=1 type=float*] [debug line = 15:5]
  store float %86, float* %98, align 4, !dbg !79  ; [debug line = 15:5]
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !80 ; [debug line = 16:4]
  br label %99, !dbg !80                          ; [debug line = 16:4]

; <label>:99                                      ; preds = %85
  %100 = load i32* %j, align 4, !dbg !81          ; [#uses=1 type=i32] [debug line = 9:44]
  %101 = add nsw i32 %100, 2, !dbg !81            ; [#uses=1 type=i32] [debug line = 9:44]
  store i32 %101, i32* %j, align 4, !dbg !81      ; [debug line = 9:44]
  br label %16, !dbg !81                          ; [debug line = 9:44]

; <label>:102                                     ; preds = %16
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !82 ; [debug line = 16:4]
  br label %103, !dbg !82                         ; [debug line = 16:4]

; <label>:103                                     ; preds = %102
  %104 = load i32* %i, align 4, !dbg !83          ; [#uses=1 type=i32] [debug line = 8:45]
  %105 = add nsw i32 %104, 2, !dbg !83            ; [#uses=1 type=i32] [debug line = 8:45]
  store i32 %105, i32* %i, align 4, !dbg !83      ; [debug line = 8:45]
  br label %11, !dbg !83                          ; [debug line = 8:45]

; <label>:106                                     ; preds = %11
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !84 ; [debug line = 16:4]
  br label %107, !dbg !84                         ; [debug line = 16:4]

; <label>:107                                     ; preds = %106
  %108 = load i32* %channel, align 4, !dbg !85    ; [#uses=1 type=i32] [debug line = 7:48]
  %109 = add nsw i32 %108, 1, !dbg !85            ; [#uses=1 type=i32] [debug line = 7:48]
  store i32 %109, i32* %channel, align 4, !dbg !85 ; [debug line = 7:48]
  br label %6, !dbg !85                           ; [debug line = 7:48]

; <label>:110                                     ; preds = %6
  ret void, !dbg !86                              ; [debug line = 18:1]
}

; [#uses=8]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=2]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

; [#uses=5]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=5]
declare void @_ssdm_RegionBegin(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=3]
declare void @_ssdm_Unroll(...) nounwind

; [#uses=5]
declare void @_ssdm_RegionEnd(...) nounwind

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
!37 = metadata !{i32 6, i32 11, metadata !33, null}
!38 = metadata !{i32 786688, metadata !39, metadata !"channel", metadata !6, i32 7, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!39 = metadata !{i32 786443, metadata !33, i32 7, i32 14, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!40 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!41 = metadata !{i32 7, i32 22, metadata !39, null}
!42 = metadata !{i32 7, i32 33, metadata !39, null}
!43 = metadata !{i32 8, i32 3, metadata !44, null}
!44 = metadata !{i32 786443, metadata !39, i32 8, i32 3, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!45 = metadata !{i32 786688, metadata !46, metadata !"i", metadata !6, i32 8, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!46 = metadata !{i32 786443, metadata !44, i32 8, i32 15, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!47 = metadata !{i32 8, i32 23, metadata !46, null}
!48 = metadata !{i32 8, i32 28, metadata !46, null}
!49 = metadata !{i32 9, i32 2, metadata !50, null}
!50 = metadata !{i32 786443, metadata !46, i32 9, i32 1, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!51 = metadata !{i32 10, i32 1, metadata !50, null}
!52 = metadata !{i32 786688, metadata !53, metadata !"j", metadata !6, i32 9, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!53 = metadata !{i32 786443, metadata !50, i32 9, i32 13, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!54 = metadata !{i32 9, i32 21, metadata !53, null}
!55 = metadata !{i32 9, i32 26, metadata !53, null}
!56 = metadata !{i32 10, i32 5, metadata !57, null}
!57 = metadata !{i32 786443, metadata !53, i32 10, i32 4, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 11, i32 1, metadata !57, null}
!59 = metadata !{i32 11, i32 5, metadata !57, null}
!60 = metadata !{i32 786688, metadata !61, metadata !"k", metadata !6, i32 12, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!61 = metadata !{i32 786443, metadata !57, i32 12, i32 17, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!62 = metadata !{i32 12, i32 25, metadata !61, null}
!63 = metadata !{i32 12, i32 30, metadata !61, null}
!64 = metadata !{i32 13, i32 2, metadata !65, null}
!65 = metadata !{i32 786443, metadata !61, i32 13, i32 1, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!66 = metadata !{i32 14, i32 1, metadata !65, null}
!67 = metadata !{i32 786688, metadata !68, metadata !"l", metadata !6, i32 13, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!68 = metadata !{i32 786443, metadata !65, i32 13, i32 13, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!69 = metadata !{i32 13, i32 21, metadata !68, null}
!70 = metadata !{i32 13, i32 26, metadata !68, null}
!71 = metadata !{i32 14, i32 2, metadata !72, null}
!72 = metadata !{i32 786443, metadata !68, i32 14, i32 1, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!73 = metadata !{i32 15, i32 1, metadata !72, null}
!74 = metadata !{i32 14, i32 1, metadata !72, null}
!75 = metadata !{i32 14, i32 75, metadata !72, null}
!76 = metadata !{i32 13, i32 35, metadata !68, null}
!77 = metadata !{i32 14, i32 75, metadata !68, null}
!78 = metadata !{i32 12, i32 39, metadata !61, null}
!79 = metadata !{i32 15, i32 5, metadata !57, null}
!80 = metadata !{i32 16, i32 4, metadata !57, null}
!81 = metadata !{i32 9, i32 44, metadata !53, null}
!82 = metadata !{i32 16, i32 4, metadata !53, null}
!83 = metadata !{i32 8, i32 45, metadata !46, null}
!84 = metadata !{i32 16, i32 4, metadata !46, null}
!85 = metadata !{i32 7, i32 48, metadata !39, null}
!86 = metadata !{i32 18, i32 1, metadata !33, null}
