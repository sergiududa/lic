; ModuleID = '/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@pool.str = internal unnamed_addr constant [5 x i8] c"pool\00" ; [#uses=1 type=[5 x i8]*]
@.str5 = private unnamed_addr constant [12 x i8] c"pool_label6\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str4 = private unnamed_addr constant [12 x i8] c"pool_label5\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str3 = private unnamed_addr constant [12 x i8] c"pool_label4\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str2 = private unnamed_addr constant [12 x i8] c"pool_label3\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str1 = private unnamed_addr constant [12 x i8] c"pool_label2\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]

; [#uses=0]
define void @pool([14 x [8 x float]]* %output, [29 x [8 x float]]* %image) nounwind uwtable {
codeRepl:
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @pool.str) nounwind
  call void @llvm.dbg.value(metadata !{[14 x [8 x float]]* %output}, i64 0, metadata !28), !dbg !29 ; [debug line = 3:17] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[29 x [8 x float]]* %image}, i64 0, metadata !30), !dbg !31 ; [debug line = 3:42] [debug variable = image]
  call void (...)* @_ssdm_SpecArrayDimSize([14 x [8 x float]]* %output, i32 14) nounwind, !dbg !32 ; [debug line = 4:2]
  call void (...)* @_ssdm_SpecArrayDimSize([29 x [8 x float]]* %image, i32 29) nounwind, !dbg !34 ; [debug line = 4:36]
  call void (...)* @_ssdm_op_SpecDataflowPipeline(i32 -1, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !35 ; [debug line = 5:1]
  br label %0

; <label>:0                                       ; preds = %1, %codeRepl
  %channel.0.i = phi i32 [ 0, %codeRepl ], [ %channel, %1 ] ; [#uses=3 type=i32]
  %exitcond2.i = icmp eq i32 %channel.0.i, 8, !dbg !36 ; [#uses=1 type=i1] [debug line = 7:33]
  br i1 %exitcond2.i, label %pool_.exit, label %3, !dbg !36 ; [debug line = 7:33]

; <label>:1                                       ; preds = %2
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str1, i64 0, i64 0), i32 %rbegin) nounwind, !dbg !38 ; [#uses=0 type=i32] [debug line = 16:4]
  %channel = add nsw i32 %channel.0.i, 1, !dbg !41 ; [#uses=1 type=i32] [debug line = 7:48]
  call void @llvm.dbg.value(metadata !{i32 %channel}, i64 0, metadata !42) nounwind, !dbg !41 ; [debug line = 7:48] [debug variable = channel]
  br label %0, !dbg !41                           ; [debug line = 7:48]

; <label>:2                                       ; preds = %4, %3
  %i.0.i = phi i32 [ 0, %3 ], [ %i, %4 ]          ; [#uses=5 type=i32]
  %tmp.1 = icmp slt i32 %i.0.i, 28, !dbg !44      ; [#uses=1 type=i1] [debug line = 8:28]
  br i1 %tmp.1, label %6, label %1, !dbg !44      ; [debug line = 8:28]

; <label>:3                                       ; preds = %0
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !45 ; [debug line = 8:3]
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !45 ; [#uses=1 type=i32] [debug line = 8:3]
  %tmp = sext i32 %channel.0.i to i64, !dbg !46   ; [#uses=3 type=i64] [debug line = 11:5]
  br label %2, !dbg !44                           ; [debug line = 8:28]

; <label>:4                                       ; preds = %5
  %rend4 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str2, i64 0, i64 0), i32 %rbegin3) nounwind, !dbg !50 ; [#uses=0 type=i32] [debug line = 16:4]
  %i = add nsw i32 %i.0.i, 2, !dbg !51            ; [#uses=1 type=i32] [debug line = 8:45]
  call void @llvm.dbg.value(metadata !{i32 %i}, i64 0, metadata !52) nounwind, !dbg !51 ; [debug line = 8:45] [debug variable = i]
  br label %2, !dbg !51                           ; [debug line = 8:45]

; <label>:5                                       ; preds = %7, %6
  %j.0.i = phi i32 [ 0, %6 ], [ %j, %7 ]          ; [#uses=5 type=i32]
  %tmp.6 = icmp slt i32 %j.0.i, 28, !dbg !53      ; [#uses=1 type=i1] [debug line = 9:26]
  br i1 %tmp.6, label %9, label %4, !dbg !53      ; [debug line = 9:26]

; <label>:6                                       ; preds = %2
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !54 ; [debug line = 9:2]
  %rbegin3 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !54 ; [#uses=1 type=i32] [debug line = 9:2]
  call void (...)* @_ssdm_op_SpecPipeline(i32 50, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !55 ; [debug line = 10:1]
  %tmp.2 = sext i32 %i.0.i to i64, !dbg !46       ; [#uses=1 type=i64] [debug line = 11:5]
  %tmp.3 = sdiv i32 %i.0.i, 2, !dbg !56           ; [#uses=1 type=i32] [debug line = 15:5]
  %tmp.4 = sext i32 %tmp.3 to i64, !dbg !56       ; [#uses=1 type=i64] [debug line = 15:5]
  br label %5, !dbg !53                           ; [debug line = 9:26]

; <label>:7                                       ; preds = %8
  %max.0.i.lcssa = phi float [ %max.0.i, %8 ]     ; [#uses=1 type=float]
  %tmp.9 = sdiv i32 %j.0.i, 2, !dbg !56           ; [#uses=1 type=i32] [debug line = 15:5]
  %tmp.10 = sext i32 %tmp.9 to i64, !dbg !56      ; [#uses=1 type=i64] [debug line = 15:5]
  %output.addr = getelementptr inbounds [14 x [8 x float]]* %output, i64 %tmp.4, i64 %tmp.10, i64 %tmp, !dbg !56 ; [#uses=1 type=float*] [debug line = 15:5]
  store float %max.0.i.lcssa, float* %output.addr, align 4, !dbg !56 ; [debug line = 15:5]
  %rend6 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str3, i64 0, i64 0), i32 %rbegin5) nounwind, !dbg !57 ; [#uses=0 type=i32] [debug line = 16:4]
  %j = add nsw i32 %j.0.i, 2, !dbg !58            ; [#uses=1 type=i32] [debug line = 9:44]
  call void @llvm.dbg.value(metadata !{i32 %j}, i64 0, metadata !59) nounwind, !dbg !58 ; [debug line = 9:44] [debug variable = j]
  br label %5, !dbg !58                           ; [debug line = 9:44]

; <label>:8                                       ; preds = %10, %9
  %max.0.i = phi float [ %max, %9 ], [ %max.1.i.lcssa, %10 ] ; [#uses=2 type=float]
  %k.0.i = phi i32 [ 0, %9 ], [ %k, %10 ]         ; [#uses=3 type=i32]
  %exitcond1.i = icmp eq i32 %k.0.i, 2, !dbg !60  ; [#uses=1 type=i1] [debug line = 12:30]
  br i1 %exitcond1.i, label %7, label %12, !dbg !60 ; [debug line = 12:30]

; <label>:9                                       ; preds = %5
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str3, i64 0, i64 0)) nounwind, !dbg !62 ; [debug line = 10:5]
  %rbegin5 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str3, i64 0, i64 0)) nounwind, !dbg !62 ; [#uses=1 type=i32] [debug line = 10:5]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !63 ; [debug line = 11:1]
  %tmp.7 = sext i32 %j.0.i to i64, !dbg !46       ; [#uses=1 type=i64] [debug line = 11:5]
  %image.addr = getelementptr inbounds [29 x [8 x float]]* %image, i64 %tmp.2, i64 %tmp.7, i64 %tmp, !dbg !46 ; [#uses=1 type=float*] [debug line = 11:5]
  %max = load float* %image.addr, align 4, !dbg !46 ; [#uses=2 type=float] [debug line = 11:5]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %max) nounwind
  call void @llvm.dbg.value(metadata !{float %max}, i64 0, metadata !64) nounwind, !dbg !46 ; [debug line = 11:5] [debug variable = max]
  br label %8, !dbg !60                           ; [debug line = 12:30]

; <label>:10                                      ; preds = %11
  %max.1.i.lcssa = phi float [ %max.1.i, %11 ]    ; [#uses=1 type=float]
  %rend8 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str4, i64 0, i64 0), i32 %rbegin7) nounwind, !dbg !65 ; [#uses=0 type=i32] [debug line = 14:75]
  %k = add nsw i32 %k.0.i, 1, !dbg !68            ; [#uses=1 type=i32] [debug line = 12:39]
  call void @llvm.dbg.value(metadata !{i32 %k}, i64 0, metadata !69) nounwind, !dbg !68 ; [debug line = 12:39] [debug variable = k]
  br label %8, !dbg !68                           ; [debug line = 12:39]

; <label>:11                                      ; preds = %._crit_edge.i, %12
  %max.1.i = phi float [ %max.0.i, %12 ], [ %max.1, %._crit_edge.i ] ; [#uses=3 type=float]
  %l.0.i = phi i32 [ 0, %12 ], [ %l, %._crit_edge.i ] ; [#uses=3 type=i32]
  %exitcond.i = icmp eq i32 %l.0.i, 2, !dbg !70   ; [#uses=1 type=i1] [debug line = 13:26]
  br i1 %exitcond.i, label %10, label %14, !dbg !70 ; [debug line = 13:26]

; <label>:12                                      ; preds = %8
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !71 ; [debug line = 13:2]
  %rbegin7 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !71 ; [#uses=1 type=i32] [debug line = 13:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !72 ; [debug line = 14:1]
  %tmp.12 = add nsw i32 %k.0.i, %i.0.i, !dbg !73  ; [#uses=1 type=i32] [debug line = 14:1]
  %tmp.13 = sext i32 %tmp.12 to i64, !dbg !73     ; [#uses=1 type=i64] [debug line = 14:1]
  br label %11, !dbg !70                          ; [debug line = 13:26]

._crit_edge.i:                                    ; preds = %14, %13
  %max.1 = phi float [ %image.load, %13 ], [ %max.1.i, %14 ], !dbg !73 ; [#uses=1 type=float] [debug line = 14:1]
  call void @llvm.dbg.value(metadata !{float %max.1}, i64 0, metadata !64) nounwind, !dbg !73 ; [debug line = 14:1] [debug variable = max]
  %rend10 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str5, i64 0, i64 0), i32 %rbegin9) nounwind, !dbg !75 ; [#uses=0 type=i32] [debug line = 14:75]
  %l = add nsw i32 %l.0.i, 1, !dbg !76            ; [#uses=1 type=i32] [debug line = 13:35]
  call void @llvm.dbg.value(metadata !{i32 %l}, i64 0, metadata !77) nounwind, !dbg !76 ; [debug line = 13:35] [debug variable = l]
  br label %11, !dbg !76                          ; [debug line = 13:35]

; <label>:13                                      ; preds = %14
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %image.load) nounwind
  br label %._crit_edge.i, !dbg !73               ; [debug line = 14:1]

; <label>:14                                      ; preds = %11
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str5, i64 0, i64 0)) nounwind, !dbg !78 ; [debug line = 14:2]
  %rbegin9 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str5, i64 0, i64 0)) nounwind, !dbg !78 ; [#uses=1 type=i32] [debug line = 14:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !79 ; [debug line = 15:1]
  %tmp.15 = add nsw i32 %l.0.i, %j.0.i, !dbg !73  ; [#uses=1 type=i32] [debug line = 14:1]
  %tmp.16 = sext i32 %tmp.15 to i64, !dbg !73     ; [#uses=1 type=i64] [debug line = 14:1]
  %image.addr.1 = getelementptr inbounds [29 x [8 x float]]* %image, i64 %tmp.13, i64 %tmp.16, i64 %tmp, !dbg !73 ; [#uses=1 type=float*] [debug line = 14:1]
  %image.load = load float* %image.addr.1, align 4, !dbg !73 ; [#uses=4 type=float] [debug line = 14:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %image.load) nounwind
  %tmp.17 = fcmp ogt float %image.load, %max.1.i, !dbg !73 ; [#uses=1 type=i1] [debug line = 14:1]
  br i1 %tmp.17, label %13, label %._crit_edge.i, !dbg !73 ; [debug line = 14:1]

pool_.exit:                                       ; preds = %0
  ret void, !dbg !80                              ; [debug line = 18:1]
}

; [#uses=9]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=5]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=5]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=5]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecDataflowPipeline(...) nounwind

; [#uses=3]
declare void @_ssdm_Unroll(...) nounwind

; [#uses=3]
declare void @_ssdm_SpecKeepArrayLoad(...)

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
!35 = metadata !{i32 5, i32 1, metadata !33, null}
!36 = metadata !{i32 7, i32 33, metadata !37, null}
!37 = metadata !{i32 786443, metadata !33, i32 7, i32 14, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!38 = metadata !{i32 16, i32 4, metadata !39, null}
!39 = metadata !{i32 786443, metadata !40, i32 8, i32 15, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!40 = metadata !{i32 786443, metadata !37, i32 8, i32 3, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!41 = metadata !{i32 7, i32 48, metadata !37, null}
!42 = metadata !{i32 786688, metadata !37, metadata !"channel", metadata !6, i32 7, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!43 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!44 = metadata !{i32 8, i32 28, metadata !39, null}
!45 = metadata !{i32 8, i32 3, metadata !40, null}
!46 = metadata !{i32 11, i32 5, metadata !47, null}
!47 = metadata !{i32 786443, metadata !48, i32 10, i32 4, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!48 = metadata !{i32 786443, metadata !49, i32 9, i32 13, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!49 = metadata !{i32 786443, metadata !39, i32 9, i32 1, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!50 = metadata !{i32 16, i32 4, metadata !48, null}
!51 = metadata !{i32 8, i32 45, metadata !39, null}
!52 = metadata !{i32 786688, metadata !39, metadata !"i", metadata !6, i32 8, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!53 = metadata !{i32 9, i32 26, metadata !48, null}
!54 = metadata !{i32 9, i32 2, metadata !49, null}
!55 = metadata !{i32 10, i32 1, metadata !49, null}
!56 = metadata !{i32 15, i32 5, metadata !47, null}
!57 = metadata !{i32 16, i32 4, metadata !47, null}
!58 = metadata !{i32 9, i32 44, metadata !48, null}
!59 = metadata !{i32 786688, metadata !48, metadata !"j", metadata !6, i32 9, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!60 = metadata !{i32 12, i32 30, metadata !61, null}
!61 = metadata !{i32 786443, metadata !47, i32 12, i32 17, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!62 = metadata !{i32 10, i32 5, metadata !47, null}
!63 = metadata !{i32 11, i32 1, metadata !47, null}
!64 = metadata !{i32 786688, metadata !33, metadata !"max", metadata !6, i32 6, metadata !11, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!65 = metadata !{i32 14, i32 75, metadata !66, null}
!66 = metadata !{i32 786443, metadata !67, i32 13, i32 13, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!67 = metadata !{i32 786443, metadata !61, i32 13, i32 1, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!68 = metadata !{i32 12, i32 39, metadata !61, null}
!69 = metadata !{i32 786688, metadata !61, metadata !"k", metadata !6, i32 12, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!70 = metadata !{i32 13, i32 26, metadata !66, null}
!71 = metadata !{i32 13, i32 2, metadata !67, null}
!72 = metadata !{i32 14, i32 1, metadata !67, null}
!73 = metadata !{i32 14, i32 1, metadata !74, null}
!74 = metadata !{i32 786443, metadata !66, i32 14, i32 1, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!75 = metadata !{i32 14, i32 75, metadata !74, null}
!76 = metadata !{i32 13, i32 35, metadata !66, null}
!77 = metadata !{i32 786688, metadata !66, metadata !"l", metadata !6, i32 13, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!78 = metadata !{i32 14, i32 2, metadata !74, null}
!79 = metadata !{i32 15, i32 1, metadata !74, null}
!80 = metadata !{i32 18, i32 1, metadata !33, null}
