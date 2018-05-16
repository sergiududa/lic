; ModuleID = '/home/sergiu/git/lic/hls/workspace/conv/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@conv.str = internal unnamed_addr constant [5 x i8] c"conv\00" ; [#uses=1 type=[5 x i8]*]
@.str8 = private unnamed_addr constant [12 x i8] c"conv_label1\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str7 = private unnamed_addr constant [12 x i8] c"conv_label2\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str6 = private unnamed_addr constant [12 x i8] c"conv_label0\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str5 = private unnamed_addr constant [12 x i8] c"conv_label3\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str4 = private unnamed_addr constant [12 x i8] c"conv_label4\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str3 = private unnamed_addr constant [5 x i8] c"both\00", align 1 ; [#uses=1 type=[5 x i8]*]
@.str2 = private unnamed_addr constant [5 x i8] c"axis\00", align 1 ; [#uses=1 type=[5 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]

; [#uses=1]
define internal fastcc float @relu(float %a) nounwind uwtable {
  call void @llvm.dbg.value(metadata !{float %a}, i64 0, metadata !44), !dbg !45 ; [debug line = 4:18] [debug variable = a]
  %tmp = fcmp ogt float %a, 0.000000e+00, !dbg !46 ; [#uses=1 type=i1] [debug line = 6:2]
  %a.assign = select i1 %tmp, float %a, float 0.000000e+00, !dbg !46 ; [#uses=1 type=float] [debug line = 6:2]
  call void @llvm.dbg.value(metadata !{float %a.assign}, i64 0, metadata !44), !dbg !46 ; [debug line = 6:2] [debug variable = a]
  ret float %a.assign, !dbg !46                   ; [debug line = 6:2]
}

; [#uses=11]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @conv([29 x [8 x float]]* %output, [32 x [1 x float]]* %image, [4 x [1 x [8 x float]]]* %weight, float* %bias) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @conv.str) nounwind
  call void @llvm.dbg.value(metadata !{[29 x [8 x float]]* %output}, i64 0, metadata !48), !dbg !49 ; [debug line = 5:17] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[32 x [1 x float]]* %image}, i64 0, metadata !50), !dbg !51 ; [debug line = 5:42] [debug variable = image]
  call void @llvm.dbg.value(metadata !{[4 x [1 x [8 x float]]]* %weight}, i64 0, metadata !52), !dbg !53 ; [debug line = 5:66] [debug variable = weight]
  call void @llvm.dbg.value(metadata !{float* %bias}, i64 0, metadata !54), !dbg !55 ; [debug line = 5:92] [debug variable = bias]
  call void (...)* @_ssdm_SpecArrayDimSize([29 x [8 x float]]* %output, i32 29) nounwind, !dbg !56 ; [debug line = 6:2]
  call void (...)* @_ssdm_SpecArrayDimSize([32 x [1 x float]]* %image, i32 32) nounwind, !dbg !58 ; [debug line = 6:36]
  call void (...)* @_ssdm_SpecArrayDimSize(float* %bias, i32 8) nounwind, !dbg !59 ; [debug line = 6:69]
  call void (...)* @_ssdm_SpecArrayDimSize([4 x [1 x [8 x float]]]* %weight, i32 4) nounwind, !dbg !60 ; [debug line = 6:100]
  call void (...)* @_ssdm_op_SpecInterface(float* %bias, i8* getelementptr inbounds ([10 x i8]* @.str, i64 0, i64 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !61 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface([4 x [1 x [8 x float]]]* %weight, i8* getelementptr inbounds ([10 x i8]* @.str, i64 0, i64 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !61 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface([32 x [1 x float]]* %image, i8* getelementptr inbounds ([5 x i8]* @.str2, i64 0, i64 0), i32 1, i32 1, i8* getelementptr inbounds ([5 x i8]* @.str3, i64 0, i64 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !61 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface([29 x [8 x float]]* %output, i8* getelementptr inbounds ([5 x i8]* @.str2, i64 0, i64 0), i32 1, i32 1, i8* getelementptr inbounds ([5 x i8]* @.str3, i64 0, i64 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !61 ; [debug line = 7:1]
  br label %1, !dbg !62                           ; [debug line = 14:6]

; <label>:1                                       ; preds = %12, %0
  %filter = phi i32 [ 0, %0 ], [ %filter.1, %12 ] ; [#uses=3 type=i32]
  %exitcond5 = icmp eq i32 %filter, 8, !dbg !62   ; [#uses=1 type=i1] [debug line = 14:6]
  br i1 %exitcond5, label %13, label %.preheader.preheader, !dbg !62 ; [debug line = 14:6]

.preheader.preheader:                             ; preds = %1
  %tmp = sext i32 %filter to i64, !dbg !64        ; [#uses=3 type=i64] [debug line = 26:1]
  %bias.addr = getelementptr inbounds float* %bias, i64 %tmp, !dbg !76 ; [#uses=1 type=float*] [debug line = 27:32]
  br label %.preheader, !dbg !77                  ; [debug line = 17:19]

.preheader:                                       ; preds = %11, %.preheader.preheader
  %i = phi i32 [ %i.1, %11 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i32]
  %exitcond4 = icmp eq i32 %i, 29, !dbg !77       ; [#uses=1 type=i1] [debug line = 17:19]
  br i1 %exitcond4, label %12, label %2, !dbg !77 ; [debug line = 17:19]

; <label>:2                                       ; preds = %.preheader
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !78 ; [debug line = 18:2]
  %rbegin1 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !78 ; [#uses=1 type=i32] [debug line = 18:2]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !79 ; [debug line = 19:1]
  %tmp.3 = sext i32 %i to i64, !dbg !76           ; [#uses=1 type=i64] [debug line = 27:32]
  br label %3, !dbg !80                           ; [debug line = 18:17]

; <label>:3                                       ; preds = %10, %2
  %j = phi i32 [ 0, %2 ], [ %j.1, %10 ]           ; [#uses=4 type=i32]
  %exitcond3 = icmp eq i32 %j, 29, !dbg !80       ; [#uses=1 type=i1] [debug line = 18:17]
  br i1 %exitcond3, label %11, label %4, !dbg !80 ; [debug line = 18:17]

; <label>:4                                       ; preds = %3
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str5, i64 0, i64 0)) nounwind, !dbg !81 ; [debug line = 19:5]
  %rbegin2 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str5, i64 0, i64 0)) nounwind, !dbg !81 ; [#uses=1 type=i32] [debug line = 19:5]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !82 ; [debug line = 20:1]
  br label %5, !dbg !83                           ; [debug line = 22:21]

; <label>:5                                       ; preds = %9, %4
  %sum = phi float [ 0.000000e+00, %4 ], [ %sum.1.lcssa, %9 ] ; [#uses=2 type=float]
  %row_offset = phi i32 [ 0, %4 ], [ %row_offset.1, %9 ] ; [#uses=4 type=i32]
  %exitcond2 = icmp eq i32 %row_offset, 4, !dbg !83 ; [#uses=1 type=i1] [debug line = 22:21]
  br i1 %exitcond2, label %10, label %6, !dbg !83 ; [debug line = 22:21]

; <label>:6                                       ; preds = %5
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str6, i64 0, i64 0)) nounwind, !dbg !84 ; [debug line = 24:2]
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str6, i64 0, i64 0)) nounwind, !dbg !84 ; [#uses=1 type=i32] [debug line = 24:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !85 ; [debug line = 25:1]
  %tmp.9 = add nsw i32 %row_offset, %i, !dbg !64  ; [#uses=1 type=i32] [debug line = 26:1]
  %tmp.10 = sext i32 %tmp.9 to i64, !dbg !64      ; [#uses=1 type=i64] [debug line = 26:1]
  %tmp.11 = sext i32 %row_offset to i64, !dbg !64 ; [#uses=1 type=i64] [debug line = 26:1]
  br label %7, !dbg !86                           ; [debug line = 24:17]

; <label>:7                                       ; preds = %8, %6
  %sum.1 = phi float [ %sum, %6 ], [ %tmp.17, %8 ] ; [#uses=2 type=float]
  %col_offset = phi i32 [ 0, %6 ], [ %col_offset.1, %8 ] ; [#uses=4 type=i32]
  %exitcond1 = icmp eq i32 %col_offset, 4, !dbg !86 ; [#uses=1 type=i1] [debug line = 24:17]
  br i1 %exitcond1, label %9, label %8, !dbg !86  ; [debug line = 24:17]

; <label>:8                                       ; preds = %7
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str7, i64 0, i64 0)) nounwind, !dbg !87 ; [debug line = 25:2]
  %rbegin8 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str7, i64 0, i64 0)) nounwind, !dbg !87 ; [#uses=1 type=i32] [debug line = 25:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !88 ; [debug line = 26:1]
  %rbegin6 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str8, i64 0, i64 0)) nounwind, !dbg !89 ; [#uses=1 type=i32] [debug line = 26:2]
  %tmp.13 = add nsw i32 %col_offset, %j, !dbg !64 ; [#uses=1 type=i32] [debug line = 26:1]
  %tmp.14 = sext i32 %tmp.13 to i64, !dbg !64     ; [#uses=1 type=i64] [debug line = 26:1]
  %image.addr = getelementptr inbounds [32 x [1 x float]]* %image, i64 %tmp.10, i64 %tmp.14, i64 0, !dbg !64 ; [#uses=1 type=float*] [debug line = 26:1]
  %image.load = load float* %image.addr, align 4, !dbg !64 ; [#uses=2 type=float] [debug line = 26:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %image.load) nounwind
  %tmp.15 = sext i32 %col_offset to i64, !dbg !64 ; [#uses=1 type=i64] [debug line = 26:1]
  %weight.addr = getelementptr inbounds [4 x [1 x [8 x float]]]* %weight, i64 %tmp.11, i64 %tmp.15, i64 0, i64 %tmp, !dbg !64 ; [#uses=1 type=float*] [debug line = 26:1]
  %weight.load = load float* %weight.addr, align 4, !dbg !64 ; [#uses=2 type=float] [debug line = 26:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %weight.load) nounwind
  %tmp.16 = fmul float %image.load, %weight.load, !dbg !64 ; [#uses=1 type=float] [debug line = 26:1]
  %tmp.17 = fadd float %sum.1, %tmp.16, !dbg !64  ; [#uses=1 type=float] [debug line = 26:1]
  %rend7 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str8, i64 0, i64 0), i32 %rbegin6) nounwind, !dbg !90 ; [#uses=0 type=i32] [debug line = 26:117]
  %rend9 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str7, i64 0, i64 0), i32 %rbegin8) nounwind, !dbg !91 ; [#uses=0 type=i32] [debug line = 26:117]
  %col_offset.1 = add nsw i32 %col_offset, 1, !dbg !92 ; [#uses=1 type=i32] [debug line = 24:48]
  call void @llvm.dbg.value(metadata !{i32 %col_offset.1}, i64 0, metadata !93), !dbg !92 ; [debug line = 24:48] [debug variable = col_offset]
  br label %7, !dbg !92                           ; [debug line = 24:48]

; <label>:9                                       ; preds = %7
  %sum.1.lcssa = phi float [ %sum.1, %7 ]         ; [#uses=1 type=float]
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str6, i64 0, i64 0), i32 %rbegin) nounwind, !dbg !95 ; [#uses=0 type=i32] [debug line = 26:117]
  %row_offset.1 = add nsw i32 %row_offset, 1, !dbg !96 ; [#uses=1 type=i32] [debug line = 22:52]
  call void @llvm.dbg.value(metadata !{i32 %row_offset.1}, i64 0, metadata !97), !dbg !96 ; [debug line = 22:52] [debug variable = row_offset]
  br label %5, !dbg !96                           ; [debug line = 22:52]

; <label>:10                                      ; preds = %5
  %sum.0.lcssa = phi float [ %sum, %5 ]           ; [#uses=1 type=float]
  %bias.load = load float* %bias.addr, align 4, !dbg !76 ; [#uses=2 type=float] [debug line = 27:32]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %bias.load) nounwind
  %tmp.5 = fadd float %sum.0.lcssa, %bias.load, !dbg !76 ; [#uses=1 type=float] [debug line = 27:32]
  %tmp.6 = call fastcc float @relu(float %tmp.5), !dbg !76 ; [#uses=1 type=float] [debug line = 27:32]
  %tmp.7 = sext i32 %j to i64, !dbg !76           ; [#uses=1 type=i64] [debug line = 27:32]
  %output.addr = getelementptr inbounds [29 x [8 x float]]* %output, i64 %tmp.3, i64 %tmp.7, i64 %tmp, !dbg !76 ; [#uses=1 type=float*] [debug line = 27:32]
  store float %tmp.6, float* %output.addr, align 4, !dbg !76 ; [debug line = 27:32]
  %rend11 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str5, i64 0, i64 0), i32 %rbegin2) nounwind, !dbg !98 ; [#uses=0 type=i32] [debug line = 28:4]
  %j.1 = add nsw i32 %j, 1, !dbg !99              ; [#uses=1 type=i32] [debug line = 18:42]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !100), !dbg !99 ; [debug line = 18:42] [debug variable = j]
  br label %3, !dbg !99                           ; [debug line = 18:42]

; <label>:11                                      ; preds = %3
  %rend13 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str4, i64 0, i64 0), i32 %rbegin1) nounwind, !dbg !101 ; [#uses=0 type=i32] [debug line = 28:4]
  %i.1 = add nsw i32 %i, 1, !dbg !102             ; [#uses=1 type=i32] [debug line = 17:44]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !103), !dbg !102 ; [debug line = 17:44] [debug variable = i]
  br label %.preheader, !dbg !102                 ; [debug line = 17:44]

; <label>:12                                      ; preds = %.preheader
  %filter.1 = add nsw i32 %filter, 1, !dbg !104   ; [#uses=1 type=i32] [debug line = 14:30]
  call void @llvm.dbg.value(metadata !{i32 %filter.1}, i64 0, metadata !105), !dbg !104 ; [debug line = 14:30] [debug variable = filter]
  br label %1, !dbg !104                          ; [debug line = 14:30]

; <label>:13                                      ; preds = %1
  ret void, !dbg !106                             ; [debug line = 30:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=5]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=5]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=4]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=4]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=3]
declare void @_ssdm_Unroll(...) nounwind

; [#uses=3]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=4]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

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
!62 = metadata !{i32 14, i32 6, metadata !63, null}
!63 = metadata !{i32 786443, metadata !57, i32 14, i32 2, metadata !13, i32 2} ; [ DW_TAG_lexical_block ]
!64 = metadata !{i32 26, i32 1, metadata !65, null}
!65 = metadata !{i32 786443, metadata !66, i32 26, i32 1, metadata !13, i32 13} ; [ DW_TAG_lexical_block ]
!66 = metadata !{i32 786443, metadata !67, i32 25, i32 13, metadata !13, i32 12} ; [ DW_TAG_lexical_block ]
!67 = metadata !{i32 786443, metadata !68, i32 25, i32 1, metadata !13, i32 11} ; [ DW_TAG_lexical_block ]
!68 = metadata !{i32 786443, metadata !69, i32 24, i32 13, metadata !13, i32 10} ; [ DW_TAG_lexical_block ]
!69 = metadata !{i32 786443, metadata !70, i32 24, i32 1, metadata !13, i32 9} ; [ DW_TAG_lexical_block ]
!70 = metadata !{i32 786443, metadata !71, i32 22, i32 17, metadata !13, i32 8} ; [ DW_TAG_lexical_block ]
!71 = metadata !{i32 786443, metadata !72, i32 19, i32 4, metadata !13, i32 7} ; [ DW_TAG_lexical_block ]
!72 = metadata !{i32 786443, metadata !73, i32 18, i32 13, metadata !13, i32 6} ; [ DW_TAG_lexical_block ]
!73 = metadata !{i32 786443, metadata !74, i32 18, i32 1, metadata !13, i32 5} ; [ DW_TAG_lexical_block ]
!74 = metadata !{i32 786443, metadata !75, i32 17, i32 15, metadata !13, i32 4} ; [ DW_TAG_lexical_block ]
!75 = metadata !{i32 786443, metadata !63, i32 15, i32 2, metadata !13, i32 3} ; [ DW_TAG_lexical_block ]
!76 = metadata !{i32 27, i32 32, metadata !71, null}
!77 = metadata !{i32 17, i32 19, metadata !74, null}
!78 = metadata !{i32 18, i32 2, metadata !73, null}
!79 = metadata !{i32 19, i32 1, metadata !73, null}
!80 = metadata !{i32 18, i32 17, metadata !72, null}
!81 = metadata !{i32 19, i32 5, metadata !71, null}
!82 = metadata !{i32 20, i32 1, metadata !71, null}
!83 = metadata !{i32 22, i32 21, metadata !70, null}
!84 = metadata !{i32 24, i32 2, metadata !69, null}
!85 = metadata !{i32 25, i32 1, metadata !69, null}
!86 = metadata !{i32 24, i32 17, metadata !68, null}
!87 = metadata !{i32 25, i32 2, metadata !67, null}
!88 = metadata !{i32 26, i32 1, metadata !67, null}
!89 = metadata !{i32 26, i32 2, metadata !65, null}
!90 = metadata !{i32 26, i32 117, metadata !65, null}
!91 = metadata !{i32 26, i32 117, metadata !66, null}
!92 = metadata !{i32 24, i32 48, metadata !68, null}
!93 = metadata !{i32 786688, metadata !57, metadata !"col_offset", metadata !13, i32 9, metadata !94, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!94 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!95 = metadata !{i32 26, i32 117, metadata !68, null}
!96 = metadata !{i32 22, i32 52, metadata !70, null}
!97 = metadata !{i32 786688, metadata !57, metadata !"row_offset", metadata !13, i32 9, metadata !94, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!98 = metadata !{i32 28, i32 4, metadata !71, null}
!99 = metadata !{i32 18, i32 42, metadata !72, null}
!100 = metadata !{i32 786688, metadata !57, metadata !"j", metadata !13, i32 7, metadata !94, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!101 = metadata !{i32 28, i32 4, metadata !72, null}
!102 = metadata !{i32 17, i32 44, metadata !74, null}
!103 = metadata !{i32 786688, metadata !57, metadata !"i", metadata !13, i32 7, metadata !94, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!104 = metadata !{i32 14, i32 30, metadata !63, null}
!105 = metadata !{i32 786688, metadata !57, metadata !"filter", metadata !13, i32 7, metadata !94, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!106 = metadata !{i32 30, i32 1, metadata !57, null}
