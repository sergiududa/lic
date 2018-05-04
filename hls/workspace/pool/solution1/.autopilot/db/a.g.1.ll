; ModuleID = '/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@pool.str = internal unnamed_addr constant [5 x i8] c"pool\00" ; [#uses=1 type=[5 x i8]*]
@.str5 = private unnamed_addr constant [12 x i8] c"pool_label6\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str4 = private unnamed_addr constant [12 x i8] c"pool_label5\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str3 = private unnamed_addr constant [12 x i8] c"pool_label4\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str2 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str1 = private unnamed_addr constant [12 x i8] c"pool_label3\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str = private unnamed_addr constant [12 x i8] c"pool_label2\00", align 1 ; [#uses=1 type=[12 x i8]*]

; [#uses=0]
define void @pool([14 x [8 x float]]* %output, [29 x [8 x float]]* %image) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @pool.str) nounwind
  call void @llvm.dbg.value(metadata !{[14 x [8 x float]]* %output}, i64 0, metadata !28), !dbg !29 ; [debug line = 3:17] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[29 x [8 x float]]* %image}, i64 0, metadata !30), !dbg !31 ; [debug line = 3:42] [debug variable = image]
  call void (...)* @_ssdm_SpecArrayDimSize([14 x [8 x float]]* %output, i32 14) nounwind, !dbg !32 ; [debug line = 4:2]
  call void (...)* @_ssdm_SpecArrayDimSize([29 x [8 x float]]* %image, i32 29) nounwind, !dbg !34 ; [debug line = 4:36]
  br label %1, !dbg !35                           ; [debug line = 7:33]

; <label>:1                                       ; preds = %15, %0
  %channel = phi i32 [ 0, %0 ], [ %channel.1, %15 ] ; [#uses=3 type=i32]
  %exitcond2 = icmp eq i32 %channel, 8, !dbg !35  ; [#uses=1 type=i1] [debug line = 7:33]
  br i1 %exitcond2, label %16, label %2, !dbg !35 ; [debug line = 7:33]

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !37 ; [debug line = 8:3]
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !37 ; [#uses=1 type=i32] [debug line = 8:3]
  %tmp = sext i32 %channel to i64, !dbg !39       ; [#uses=3 type=i64] [debug line = 11:5]
  br label %3, !dbg !44                           ; [debug line = 8:28]

; <label>:3                                       ; preds = %14, %2
  %i = phi i32 [ 0, %2 ], [ %i.1, %14 ]           ; [#uses=5 type=i32]
  %tmp.1 = icmp slt i32 %i, 28, !dbg !44          ; [#uses=1 type=i1] [debug line = 8:28]
  br i1 %tmp.1, label %4, label %15, !dbg !44     ; [debug line = 8:28]

; <label>:4                                       ; preds = %3
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !45 ; [debug line = 9:2]
  %rbegin3 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !45 ; [#uses=1 type=i32] [debug line = 9:2]
  call void (...)* @_ssdm_op_SpecPipeline(i32 50, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !46 ; [debug line = 10:1]
  %tmp.2 = sext i32 %i to i64, !dbg !39           ; [#uses=1 type=i64] [debug line = 11:5]
  %tmp.3 = sdiv i32 %i, 2, !dbg !47               ; [#uses=1 type=i32] [debug line = 15:5]
  %tmp.4 = sext i32 %tmp.3 to i64, !dbg !47       ; [#uses=1 type=i64] [debug line = 15:5]
  br label %5, !dbg !48                           ; [debug line = 9:26]

; <label>:5                                       ; preds = %13, %4
  %j = phi i32 [ 0, %4 ], [ %j.1, %13 ]           ; [#uses=5 type=i32]
  %tmp.6 = icmp slt i32 %j, 28, !dbg !48          ; [#uses=1 type=i1] [debug line = 9:26]
  br i1 %tmp.6, label %6, label %14, !dbg !48     ; [debug line = 9:26]

; <label>:6                                       ; preds = %5
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str3, i64 0, i64 0)) nounwind, !dbg !49 ; [debug line = 10:5]
  %rbegin5 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str3, i64 0, i64 0)) nounwind, !dbg !49 ; [#uses=1 type=i32] [debug line = 10:5]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !50 ; [debug line = 11:1]
  %tmp.7 = sext i32 %j to i64, !dbg !39           ; [#uses=1 type=i64] [debug line = 11:5]
  %image.addr = getelementptr inbounds [29 x [8 x float]]* %image, i64 %tmp.2, i64 %tmp.7, i64 %tmp, !dbg !39 ; [#uses=1 type=float*] [debug line = 11:5]
  %max = load float* %image.addr, align 4, !dbg !39 ; [#uses=2 type=float] [debug line = 11:5]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %max) nounwind
  call void @llvm.dbg.value(metadata !{float %max}, i64 0, metadata !51), !dbg !39 ; [debug line = 11:5] [debug variable = max]
  br label %7, !dbg !52                           ; [debug line = 12:30]

; <label>:7                                       ; preds = %12, %6
  %max1 = phi float [ %max, %6 ], [ %max.1.lcssa, %12 ] ; [#uses=2 type=float]
  %k = phi i32 [ 0, %6 ], [ %k.1, %12 ]           ; [#uses=3 type=i32]
  %exitcond1 = icmp eq i32 %k, 2, !dbg !52        ; [#uses=1 type=i1] [debug line = 12:30]
  br i1 %exitcond1, label %13, label %8, !dbg !52 ; [debug line = 12:30]

; <label>:8                                       ; preds = %7
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !54 ; [debug line = 13:2]
  %rbegin7 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !54 ; [#uses=1 type=i32] [debug line = 13:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !56 ; [debug line = 14:1]
  %tmp.12 = add nsw i32 %k, %i, !dbg !57          ; [#uses=1 type=i32] [debug line = 14:1]
  %tmp.13 = sext i32 %tmp.12 to i64, !dbg !57     ; [#uses=1 type=i64] [debug line = 14:1]
  br label %9, !dbg !60                           ; [debug line = 13:26]

; <label>:9                                       ; preds = %._crit_edge, %8
  %max.1 = phi float [ %max1, %8 ], [ %max.2, %._crit_edge ] ; [#uses=3 type=float]
  %l = phi i32 [ 0, %8 ], [ %l.1, %._crit_edge ]  ; [#uses=3 type=i32]
  %exitcond = icmp eq i32 %l, 2, !dbg !60         ; [#uses=1 type=i1] [debug line = 13:26]
  br i1 %exitcond, label %12, label %10, !dbg !60 ; [debug line = 13:26]

; <label>:10                                      ; preds = %9
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str5, i64 0, i64 0)) nounwind, !dbg !61 ; [debug line = 14:2]
  %rbegin9 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str5, i64 0, i64 0)) nounwind, !dbg !61 ; [#uses=1 type=i32] [debug line = 14:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !62 ; [debug line = 15:1]
  %tmp.15 = add nsw i32 %l, %j, !dbg !57          ; [#uses=1 type=i32] [debug line = 14:1]
  %tmp.16 = sext i32 %tmp.15 to i64, !dbg !57     ; [#uses=1 type=i64] [debug line = 14:1]
  %image.addr.1 = getelementptr inbounds [29 x [8 x float]]* %image, i64 %tmp.13, i64 %tmp.16, i64 %tmp, !dbg !57 ; [#uses=1 type=float*] [debug line = 14:1]
  %image.load = load float* %image.addr.1, align 4, !dbg !57 ; [#uses=4 type=float] [debug line = 14:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %image.load) nounwind
  %tmp.17 = fcmp ogt float %image.load, %max.1, !dbg !57 ; [#uses=1 type=i1] [debug line = 14:1]
  br i1 %tmp.17, label %11, label %._crit_edge, !dbg !57 ; [debug line = 14:1]

; <label>:11                                      ; preds = %10
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %image.load) nounwind
  br label %._crit_edge, !dbg !57                 ; [debug line = 14:1]

._crit_edge:                                      ; preds = %11, %10
  %max.2 = phi float [ %image.load, %11 ], [ %max.1, %10 ], !dbg !57 ; [#uses=1 type=float] [debug line = 14:1]
  call void @llvm.dbg.value(metadata !{float %max.2}, i64 0, metadata !51), !dbg !57 ; [debug line = 14:1] [debug variable = max]
  %rend10 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str5, i64 0, i64 0), i32 %rbegin9) nounwind, !dbg !63 ; [#uses=0 type=i32] [debug line = 14:75]
  %l.1 = add nsw i32 %l, 1, !dbg !64              ; [#uses=1 type=i32] [debug line = 13:35]
  call void @llvm.dbg.value(metadata !{i32 %l.1}, i64 0, metadata !65), !dbg !64 ; [debug line = 13:35] [debug variable = l]
  br label %9, !dbg !64                           ; [debug line = 13:35]

; <label>:12                                      ; preds = %9
  %max.1.lcssa = phi float [ %max.1, %9 ]         ; [#uses=1 type=float]
  %rend8 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str4, i64 0, i64 0), i32 %rbegin7) nounwind, !dbg !67 ; [#uses=0 type=i32] [debug line = 14:75]
  %k.1 = add nsw i32 %k, 1, !dbg !68              ; [#uses=1 type=i32] [debug line = 12:39]
  call void @llvm.dbg.value(metadata !{i32 %k.1}, i64 0, metadata !69), !dbg !68 ; [debug line = 12:39] [debug variable = k]
  br label %7, !dbg !68                           ; [debug line = 12:39]

; <label>:13                                      ; preds = %7
  %max.0.lcssa = phi float [ %max1, %7 ]          ; [#uses=1 type=float]
  %tmp.9 = sdiv i32 %j, 2, !dbg !47               ; [#uses=1 type=i32] [debug line = 15:5]
  %tmp.10 = sext i32 %tmp.9 to i64, !dbg !47      ; [#uses=1 type=i64] [debug line = 15:5]
  %output.addr = getelementptr inbounds [14 x [8 x float]]* %output, i64 %tmp.4, i64 %tmp.10, i64 %tmp, !dbg !47 ; [#uses=1 type=float*] [debug line = 15:5]
  store float %max.0.lcssa, float* %output.addr, align 4, !dbg !47 ; [debug line = 15:5]
  %rend6 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str3, i64 0, i64 0), i32 %rbegin5) nounwind, !dbg !70 ; [#uses=0 type=i32] [debug line = 16:4]
  %j.1 = add nsw i32 %j, 2, !dbg !71              ; [#uses=1 type=i32] [debug line = 9:44]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !72), !dbg !71 ; [debug line = 9:44] [debug variable = j]
  br label %5, !dbg !71                           ; [debug line = 9:44]

; <label>:14                                      ; preds = %5
  %rend4 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str1, i64 0, i64 0), i32 %rbegin3) nounwind, !dbg !73 ; [#uses=0 type=i32] [debug line = 16:4]
  %i.1 = add nsw i32 %i, 2, !dbg !74              ; [#uses=1 type=i32] [debug line = 8:45]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !75), !dbg !74 ; [debug line = 8:45] [debug variable = i]
  br label %3, !dbg !74                           ; [debug line = 8:45]

; <label>:15                                      ; preds = %3
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str, i64 0, i64 0), i32 %rbegin) nounwind, !dbg !76 ; [#uses=0 type=i32] [debug line = 16:4]
  %channel.1 = add nsw i32 %channel, 1, !dbg !77  ; [#uses=1 type=i32] [debug line = 7:48]
  call void @llvm.dbg.value(metadata !{i32 %channel.1}, i64 0, metadata !78), !dbg !77 ; [debug line = 7:48] [debug variable = channel]
  br label %1, !dbg !77                           ; [debug line = 7:48]

; <label>:16                                      ; preds = %1
  ret void, !dbg !79                              ; [debug line = 18:1]
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
!35 = metadata !{i32 7, i32 33, metadata !36, null}
!36 = metadata !{i32 786443, metadata !33, i32 7, i32 14, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!37 = metadata !{i32 8, i32 3, metadata !38, null}
!38 = metadata !{i32 786443, metadata !36, i32 8, i32 3, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!39 = metadata !{i32 11, i32 5, metadata !40, null}
!40 = metadata !{i32 786443, metadata !41, i32 10, i32 4, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!41 = metadata !{i32 786443, metadata !42, i32 9, i32 13, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!42 = metadata !{i32 786443, metadata !43, i32 9, i32 1, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!43 = metadata !{i32 786443, metadata !38, i32 8, i32 15, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!44 = metadata !{i32 8, i32 28, metadata !43, null}
!45 = metadata !{i32 9, i32 2, metadata !42, null}
!46 = metadata !{i32 10, i32 1, metadata !42, null}
!47 = metadata !{i32 15, i32 5, metadata !40, null}
!48 = metadata !{i32 9, i32 26, metadata !41, null}
!49 = metadata !{i32 10, i32 5, metadata !40, null}
!50 = metadata !{i32 11, i32 1, metadata !40, null}
!51 = metadata !{i32 786688, metadata !33, metadata !"max", metadata !6, i32 6, metadata !11, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!52 = metadata !{i32 12, i32 30, metadata !53, null}
!53 = metadata !{i32 786443, metadata !40, i32 12, i32 17, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!54 = metadata !{i32 13, i32 2, metadata !55, null}
!55 = metadata !{i32 786443, metadata !53, i32 13, i32 1, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!56 = metadata !{i32 14, i32 1, metadata !55, null}
!57 = metadata !{i32 14, i32 1, metadata !58, null}
!58 = metadata !{i32 786443, metadata !59, i32 14, i32 1, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!59 = metadata !{i32 786443, metadata !55, i32 13, i32 13, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!60 = metadata !{i32 13, i32 26, metadata !59, null}
!61 = metadata !{i32 14, i32 2, metadata !58, null}
!62 = metadata !{i32 15, i32 1, metadata !58, null}
!63 = metadata !{i32 14, i32 75, metadata !58, null}
!64 = metadata !{i32 13, i32 35, metadata !59, null}
!65 = metadata !{i32 786688, metadata !59, metadata !"l", metadata !6, i32 13, metadata !66, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!66 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!67 = metadata !{i32 14, i32 75, metadata !59, null}
!68 = metadata !{i32 12, i32 39, metadata !53, null}
!69 = metadata !{i32 786688, metadata !53, metadata !"k", metadata !6, i32 12, metadata !66, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!70 = metadata !{i32 16, i32 4, metadata !40, null}
!71 = metadata !{i32 9, i32 44, metadata !41, null}
!72 = metadata !{i32 786688, metadata !41, metadata !"j", metadata !6, i32 9, metadata !66, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!73 = metadata !{i32 16, i32 4, metadata !41, null}
!74 = metadata !{i32 8, i32 45, metadata !43, null}
!75 = metadata !{i32 786688, metadata !43, metadata !"i", metadata !6, i32 8, metadata !66, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!76 = metadata !{i32 16, i32 4, metadata !43, null}
!77 = metadata !{i32 7, i32 48, metadata !36, null}
!78 = metadata !{i32 786688, metadata !36, metadata !"channel", metadata !6, i32 7, metadata !66, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!79 = metadata !{i32 18, i32 1, metadata !33, null}
