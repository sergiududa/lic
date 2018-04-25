; ModuleID = '/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@pool.str = internal unnamed_addr constant [5 x i8] c"pool\00" ; [#uses=1 type=[5 x i8]*]

; [#uses=0]
define void @pool([14 x [14 x [8 x float]]]* %output, [29 x [29 x [8 x float]]]* %image) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([14 x [14 x [8 x float]]]* %output) nounwind, !map !28
  call void (...)* @_ssdm_op_SpecBitsMap([29 x [29 x [8 x float]]]* %image) nounwind, !map !35
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @pool.str) nounwind
  call void @llvm.dbg.value(metadata !{[14 x [14 x [8 x float]]]* %output}, i64 0, metadata !41), !dbg !44 ; [debug line = 3:17] [debug variable = output]
  call void @llvm.dbg.value(metadata !{[29 x [29 x [8 x float]]]* %image}, i64 0, metadata !45), !dbg !48 ; [debug line = 3:42] [debug variable = image]
  br label %1, !dbg !49                           ; [debug line = 7:21]

; <label>:1                                       ; preds = %12, %0
  %channel = phi i4 [ 0, %0 ], [ %channel.1, %12 ] ; [#uses=3 type=i4]
  %exitcond2 = icmp eq i4 %channel, -8, !dbg !49  ; [#uses=1 type=i1] [debug line = 7:21]
  %2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond2, label %13, label %.preheader4.preheader, !dbg !49 ; [debug line = 7:21]

.preheader4.preheader:                            ; preds = %1
  %tmp = zext i4 %channel to i64, !dbg !52        ; [#uses=3 type=i64] [debug line = 11:5]
  br label %.preheader4, !dbg !56                 ; [debug line = 8:16]

.preheader4:                                      ; preds = %11, %.preheader4.preheader
  %i = phi i5 [ %i.1, %11 ], [ 0, %.preheader4.preheader ] ; [#uses=5 type=i5]
  %tmp.1 = icmp ult i5 %i, -4, !dbg !56           ; [#uses=1 type=i1] [debug line = 8:16]
  %3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 14, i64 14, i64 14) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.1, label %.preheader3.preheader, label %12, !dbg !56 ; [debug line = 8:16]

.preheader3.preheader:                            ; preds = %.preheader4
  %tmp.2 = zext i5 %i to i64, !dbg !52            ; [#uses=1 type=i64] [debug line = 11:5]
  %_lshr.f = lshr exact i5 %i, 1, !dbg !57        ; [#uses=1 type=i5] [debug line = 15:5]
  %_lshr.f.cast = trunc i5 %_lshr.f to i4, !dbg !57 ; [#uses=1 type=i4] [debug line = 15:5]
  %tmp.4 = zext i4 %_lshr.f.cast to i64, !dbg !57 ; [#uses=1 type=i64] [debug line = 15:5]
  br label %.preheader3, !dbg !58                 ; [debug line = 9:17]

.preheader3:                                      ; preds = %10, %.preheader3.preheader
  %j = phi i5 [ %j.1, %10 ], [ 0, %.preheader3.preheader ] ; [#uses=5 type=i5]
  %tmp.6 = icmp ult i5 %j, -4, !dbg !58           ; [#uses=1 type=i1] [debug line = 9:17]
  %4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 14, i64 14, i64 14) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.6, label %5, label %11, !dbg !58     ; [debug line = 9:17]

; <label>:5                                       ; preds = %.preheader3
  %tmp.7 = zext i5 %j to i64, !dbg !52            ; [#uses=1 type=i64] [debug line = 11:5]
  %image.addr = getelementptr [29 x [29 x [8 x float]]]* %image, i64 0, i64 %tmp.2, i64 %tmp.7, i64 %tmp, !dbg !52 ; [#uses=1 type=float*] [debug line = 11:5]
  %max = load float* %image.addr, align 4, !dbg !52 ; [#uses=1 type=float] [debug line = 11:5]
  call void @llvm.dbg.value(metadata !{float %max}, i64 0, metadata !59), !dbg !52 ; [debug line = 11:5] [debug variable = max]
  br label %6, !dbg !60                           ; [debug line = 12:18]

; <label>:6                                       ; preds = %9, %5
  %max1 = phi float [ %max, %5 ], [ %max.1.lcssa, %9 ] ; [#uses=2 type=float]
  %k = phi i2 [ 0, %5 ], [ %k.1, %9 ]             ; [#uses=3 type=i2]
  %k.cast2 = zext i2 %k to i5, !dbg !60           ; [#uses=1 type=i5] [debug line = 12:18]
  %exitcond1 = icmp eq i2 %k, -2, !dbg !60        ; [#uses=1 type=i1] [debug line = 12:18]
  %7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond1, label %10, label %.preheader.preheader, !dbg !60 ; [debug line = 12:18]

.preheader.preheader:                             ; preds = %6
  %tmp.5 = add i5 %k.cast2, %i, !dbg !62          ; [#uses=1 type=i5] [debug line = 14:7]
  %tmp.8 = zext i5 %tmp.5 to i64, !dbg !62        ; [#uses=1 type=i64] [debug line = 14:7]
  br label %.preheader, !dbg !64                  ; [debug line = 13:19]

.preheader:                                       ; preds = %._crit_edge, %.preheader.preheader
  %max.1 = phi float [ %max.2, %._crit_edge ], [ %max1, %.preheader.preheader ] ; [#uses=4 type=float]
  %l = phi i2 [ %l.1, %._crit_edge ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i2]
  %l.cast1 = zext i2 %l to i5, !dbg !64           ; [#uses=1 type=i5] [debug line = 13:19]
  %exitcond = icmp eq i2 %l, -2, !dbg !64         ; [#uses=1 type=i1] [debug line = 13:19]
  %8 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond, label %9, label %._crit_edge, !dbg !64 ; [debug line = 13:19]

._crit_edge:                                      ; preds = %.preheader
  %tmp.3 = add i5 %l.cast1, %j, !dbg !62          ; [#uses=1 type=i5] [debug line = 14:7]
  %tmp.9 = zext i5 %tmp.3 to i64, !dbg !62        ; [#uses=1 type=i64] [debug line = 14:7]
  %image.addr.1 = getelementptr [29 x [29 x [8 x float]]]* %image, i64 0, i64 %tmp.8, i64 %tmp.9, i64 %tmp, !dbg !62 ; [#uses=1 type=float*] [debug line = 14:7]
  %image.load = load float* %image.addr.1, align 4, !dbg !62 ; [#uses=3 type=float] [debug line = 14:7]
  %image.load_to_int = bitcast float %image.load to i32 ; [#uses=2 type=i32]
  %tmp.10 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image.load_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp.11 = trunc i32 %image.load_to_int to i23   ; [#uses=1 type=i23]
  %max.1_to_int = bitcast float %max.1 to i32     ; [#uses=2 type=i32]
  %tmp.12 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max.1_to_int, i32 23, i32 30) ; [#uses=1 type=i8]
  %tmp.13 = trunc i32 %max.1_to_int to i23        ; [#uses=1 type=i23]
  %notlhs = icmp ne i8 %tmp.10, -1                ; [#uses=1 type=i1]
  %notrhs = icmp eq i23 %tmp.11, 0                ; [#uses=1 type=i1]
  %tmp.14 = or i1 %notrhs, %notlhs                ; [#uses=1 type=i1]
  %notlhs6 = icmp ne i8 %tmp.12, -1               ; [#uses=1 type=i1]
  %notrhs7 = icmp eq i23 %tmp.13, 0               ; [#uses=1 type=i1]
  %tmp.15 = or i1 %notrhs7, %notlhs6              ; [#uses=1 type=i1]
  %tmp.16 = and i1 %tmp.14, %tmp.15               ; [#uses=1 type=i1]
  %tmp.17 = fcmp ogt float %image.load, %max.1, !dbg !62 ; [#uses=1 type=i1] [debug line = 14:7]
  %tmp.18 = and i1 %tmp.16, %tmp.17, !dbg !62     ; [#uses=1 type=i1] [debug line = 14:7]
  %max.2 = select i1 %tmp.18, float %image.load, float %max.1, !dbg !62 ; [#uses=1 type=float] [debug line = 14:7]
  call void @llvm.dbg.value(metadata !{float %max.2}, i64 0, metadata !59), !dbg !62 ; [debug line = 14:7] [debug variable = max]
  %l.1 = add i2 %l, 1, !dbg !65                   ; [#uses=1 type=i2] [debug line = 13:28]
  call void @llvm.dbg.value(metadata !{i2 %l.1}, i64 0, metadata !66), !dbg !65 ; [debug line = 13:28] [debug variable = l]
  br label %.preheader, !dbg !65                  ; [debug line = 13:28]

; <label>:9                                       ; preds = %.preheader
  %max.1.lcssa = phi float [ %max.1, %.preheader ] ; [#uses=1 type=float]
  %k.1 = add i2 %k, 1, !dbg !68                   ; [#uses=1 type=i2] [debug line = 12:27]
  call void @llvm.dbg.value(metadata !{i2 %k.1}, i64 0, metadata !69), !dbg !68 ; [debug line = 12:27] [debug variable = k]
  br label %6, !dbg !68                           ; [debug line = 12:27]

; <label>:10                                      ; preds = %6
  %max1.lcssa = phi float [ %max1, %6 ]           ; [#uses=1 type=float]
  %_lshr.f1 = lshr exact i5 %j, 1, !dbg !57       ; [#uses=1 type=i5] [debug line = 15:5]
  %_lshr.f1.cast = trunc i5 %_lshr.f1 to i4, !dbg !57 ; [#uses=1 type=i4] [debug line = 15:5]
  %tmp. = zext i4 %_lshr.f1.cast to i64, !dbg !57 ; [#uses=1 type=i64] [debug line = 15:5]
  %output.addr = getelementptr [14 x [14 x [8 x float]]]* %output, i64 0, i64 %tmp.4, i64 %tmp., i64 %tmp, !dbg !57 ; [#uses=1 type=float*] [debug line = 15:5]
  store float %max1.lcssa, float* %output.addr, align 4, !dbg !57 ; [debug line = 15:5]
  %j.1 = add i5 %j, 2, !dbg !70                   ; [#uses=1 type=i5] [debug line = 9:35]
  call void @llvm.dbg.value(metadata !{i5 %j.1}, i64 0, metadata !71), !dbg !70 ; [debug line = 9:35] [debug variable = j]
  br label %.preheader3, !dbg !70                 ; [debug line = 9:35]

; <label>:11                                      ; preds = %.preheader3
  %i.1 = add i5 %i, 2, !dbg !72                   ; [#uses=1 type=i5] [debug line = 8:33]
  call void @llvm.dbg.value(metadata !{i5 %i.1}, i64 0, metadata !73), !dbg !72 ; [debug line = 8:33] [debug variable = i]
  br label %.preheader4, !dbg !72                 ; [debug line = 8:33]

; <label>:12                                      ; preds = %.preheader4
  %channel.1 = add i4 %channel, 1, !dbg !74       ; [#uses=1 type=i4] [debug line = 7:36]
  call void @llvm.dbg.value(metadata !{i4 %channel.1}, i64 0, metadata !75), !dbg !74 ; [debug line = 7:36] [debug variable = channel]
  br label %1, !dbg !74                           ; [debug line = 7:36]

; <label>:13                                      ; preds = %1
  ret void, !dbg !76                              ; [debug line = 18:1]
}

; [#uses=9]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=5]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

; [#uses=2]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=2]
declare i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!21}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/pool.pragma.2.c", metadata !"/home/sergiu/git/lic/hls/workspace", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"pool", metadata !"pool", metadata !"", metadata !6, i32 3, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !19, i32 4} ; [ DW_TAG_subprogram ]
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
!21 = metadata !{null, metadata !22, metadata !23, metadata !24, metadata !25, metadata !26, metadata !27}
!22 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!23 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!24 = metadata !{metadata !"kernel_arg_type", metadata !"float [14][8]*", metadata !"float [29][8]*"}
!25 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!26 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"image"}
!27 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!28 = metadata !{metadata !29}
!29 = metadata !{i32 0, i32 31, metadata !30}
!30 = metadata !{metadata !31}
!31 = metadata !{metadata !"output", metadata !32, metadata !"float", i32 0, i32 31}
!32 = metadata !{metadata !33, metadata !33, metadata !34}
!33 = metadata !{i32 0, i32 13, i32 1}
!34 = metadata !{i32 0, i32 7, i32 1}
!35 = metadata !{metadata !36}
!36 = metadata !{i32 0, i32 31, metadata !37}
!37 = metadata !{metadata !38}
!38 = metadata !{metadata !"image", metadata !39, metadata !"float", i32 0, i32 31}
!39 = metadata !{metadata !40, metadata !40, metadata !34}
!40 = metadata !{i32 0, i32 28, i32 1}
!41 = metadata !{i32 786689, metadata !5, metadata !"output", null, i32 3, metadata !42, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!42 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 50176, i64 32, i32 0, i32 0, metadata !11, metadata !43, i32 0, i32 0} ; [ DW_TAG_array_type ]
!43 = metadata !{metadata !13, metadata !13, metadata !14}
!44 = metadata !{i32 3, i32 17, metadata !5, null}
!45 = metadata !{i32 786689, metadata !5, metadata !"image", null, i32 3, metadata !46, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!46 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 215296, i64 32, i32 0, i32 0, metadata !11, metadata !47, i32 0, i32 0} ; [ DW_TAG_array_type ]
!47 = metadata !{metadata !18, metadata !18, metadata !14}
!48 = metadata !{i32 3, i32 42, metadata !5, null}
!49 = metadata !{i32 7, i32 21, metadata !50, null}
!50 = metadata !{i32 786443, metadata !51, i32 7, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!51 = metadata !{i32 786443, metadata !5, i32 4, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!52 = metadata !{i32 11, i32 5, metadata !53, null}
!53 = metadata !{i32 786443, metadata !54, i32 10, i32 4, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!54 = metadata !{i32 786443, metadata !55, i32 9, i32 4, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!55 = metadata !{i32 786443, metadata !50, i32 8, i32 3, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!56 = metadata !{i32 8, i32 16, metadata !55, null}
!57 = metadata !{i32 15, i32 5, metadata !53, null}
!58 = metadata !{i32 9, i32 17, metadata !54, null}
!59 = metadata !{i32 786688, metadata !51, metadata !"max", metadata !6, i32 6, metadata !11, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!60 = metadata !{i32 12, i32 18, metadata !61, null}
!61 = metadata !{i32 786443, metadata !53, i32 12, i32 5, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!62 = metadata !{i32 14, i32 7, metadata !63, null}
!63 = metadata !{i32 786443, metadata !61, i32 13, i32 6, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!64 = metadata !{i32 13, i32 19, metadata !63, null}
!65 = metadata !{i32 13, i32 28, metadata !63, null}
!66 = metadata !{i32 786688, metadata !63, metadata !"l", metadata !6, i32 13, metadata !67, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!67 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!68 = metadata !{i32 12, i32 27, metadata !61, null}
!69 = metadata !{i32 786688, metadata !61, metadata !"k", metadata !6, i32 12, metadata !67, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!70 = metadata !{i32 9, i32 35, metadata !54, null}
!71 = metadata !{i32 786688, metadata !54, metadata !"j", metadata !6, i32 9, metadata !67, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!72 = metadata !{i32 8, i32 33, metadata !55, null}
!73 = metadata !{i32 786688, metadata !55, metadata !"i", metadata !6, i32 8, metadata !67, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!74 = metadata !{i32 7, i32 36, metadata !50, null}
!75 = metadata !{i32 786688, metadata !50, metadata !"channel", metadata !6, i32 7, metadata !67, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!76 = metadata !{i32 18, i32 1, metadata !51, null}
