; ModuleID = '/home/sergiu/git/lic/hls/workspace/pool/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@pool_label2_pool_lab = internal unnamed_addr constant [24 x i8] c"pool_label2_pool_label3\00"
@pool_str = internal unnamed_addr constant [5 x i8] c"pool\00"
@p_str2 = private unnamed_addr constant [12 x i8] c"pool_label3\00", align 1
@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1

define void @pool([1568 x float]* %output_r, [6728 x float]* %image_r) nounwind uwtable {
codeRepl:
  call void (...)* @_ssdm_op_SpecDataflowPipeline(i32 -1, [1 x i8]* @p_str) nounwind
  call void (...)* @_ssdm_op_SpecBitsMap([1568 x float]* %output_r) nounwind, !map !7
  call void (...)* @_ssdm_op_SpecBitsMap([6728 x float]* %image_r) nounwind, !map !14
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @pool_str) nounwind
  call fastcc void @Loop_pool_label2_pro([1568 x float]* %output_r, [6728 x float]* %image_r)
  ret void
}

declare i5 @llvm.part.select.i5(i5, i32, i32) nounwind readnone

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare i13 @llvm.part.select.i13(i13, i32, i32) nounwind readnone

declare i12 @llvm.part.select.i12(i12, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecDataflowPipeline(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i9 @_ssdm_op_PartSelect.i9.i13.i32.i32(i13, i32, i32) nounwind readnone {
entry:
  %empty = call i13 @llvm.part.select.i13(i13 %0, i32 %1, i32 %2)
  %empty_10 = trunc i13 %empty to i9
  ret i9 %empty_10
}

define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_11 = trunc i32 %empty to i8
  ret i8 %empty_11
}

define weak i8 @_ssdm_op_PartSelect.i8.i12.i32.i32(i12, i32, i32) nounwind readnone {
entry:
  %empty = call i12 @llvm.part.select.i12(i12 %0, i32 %1, i32 %2)
  %empty_12 = trunc i12 %empty to i8
  ret i8 %empty_12
}

define weak i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5, i32, i32) nounwind readnone {
entry:
  %empty = call i5 @llvm.part.select.i5(i5 %0, i32 %1, i32 %2)
  %empty_13 = trunc i5 %empty to i4
  ret i4 %empty_13
}

declare i4 @_ssdm_op_PartSelect.i4.i13.i32.i32(i13, i32, i32) nounwind readnone

declare i4 @_ssdm_op_PartSelect.i4.i12.i32.i32(i12, i32, i32) nounwind readnone

declare i23 @_ssdm_op_PartSelect.i23.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i8 @_ssdm_op_BitConcatenate.i8.i4.i4(i4, i4) nounwind readnone {
entry:
  %empty = zext i4 %0 to i8
  %empty_14 = zext i4 %1 to i8
  %empty_15 = shl i8 %empty, 4
  %empty_16 = or i8 %empty_15, %empty_14
  ret i8 %empty_16
}

define weak i13 @_ssdm_op_BitConcatenate.i13.i9.i4(i9, i4) nounwind readnone {
entry:
  %empty = zext i9 %0 to i13
  %empty_17 = zext i4 %1 to i13
  %empty_18 = shl i13 %empty, 4
  %empty_19 = or i13 %empty_18, %empty_17
  ret i13 %empty_19
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i8.i4(i8, i4) nounwind readnone {
entry:
  %empty = zext i8 %0 to i12
  %empty_20 = zext i4 %1 to i12
  %empty_21 = shl i12 %empty, 4
  %empty_22 = or i12 %empty_21, %empty_20
  ret i12 %empty_22
}

define weak i11 @_ssdm_op_BitConcatenate.i11.i4.i7(i4, i7) nounwind readnone {
entry:
  %empty = zext i4 %0 to i11
  %empty_23 = zext i7 %1 to i11
  %empty_24 = shl i11 %empty, 7
  %empty_25 = or i11 %empty_24, %empty_23
  ret i11 %empty_25
}

define internal fastcc void @Loop_pool_label2_pro([1568 x float]* nocapture %output_r, [6728 x float]* %image_r) nounwind {
newFuncRoot:
  br label %0

pool_.exit.exitStub:                              ; preds = %0
  ret void

.reset:                                           ; preds = %0
  %channel = add i4 1, %channel_0_i_i
  call void (...)* @_ssdm_op_SpecLoopName([24 x i8]* @pool_label2_pool_lab)
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 112, i64 112, i64 112) nounwind
  %tmp_1_i = icmp ult i5 %i_0_i_i, -4
  %i_0_i_i_mid2 = select i1 %tmp_1_i, i5 %i_0_i_i, i5 0
  %tmp_i_mid2_v = select i1 %tmp_1_i, i4 %channel_0_i_i, i4 %channel
  %tmp_i_mid2_cast1 = zext i4 %tmp_i_mid2_v to i12
  %tmp_i_mid2_cast = zext i4 %tmp_i_mid2_v to i13
  call void (...)* @_ssdm_op_SpecLoopName([12 x i8]* @p_str2) nounwind
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str2) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 50, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind
  %tmp_2_i_cast = zext i5 %i_0_i_i_mid2 to i13
  %tmp = mul i13 232, %tmp_2_i_cast
  %tmp_3 = add i13 %tmp_i_mid2_cast, %tmp
  %tmp_380_cast = zext i13 %tmp_3 to i64
  %image_addr = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_380_cast
  %tmp_5 = add i13 8, %tmp
  %tmp_11 = add i13 %tmp_i_mid2_cast, %tmp_5
  %tmp_382_cast = zext i13 %tmp_11 to i64
  %image_addr_1 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_382_cast
  %tmp_13 = add i13 16, %tmp
  %tmp_20 = add i13 %tmp_i_mid2_cast, %tmp_13
  %tmp_384_cast = zext i13 %tmp_20 to i64
  %image_addr_4 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_384_cast
  %tmp_22 = add i13 24, %tmp
  %tmp_29 = add i13 %tmp_i_mid2_cast, %tmp_22
  %tmp_386_cast = zext i13 %tmp_29 to i64
  %image_addr_5 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_386_cast
  %tmp_31 = add i13 32, %tmp
  %tmp_38 = add i13 %tmp_i_mid2_cast, %tmp_31
  %tmp_388_cast = zext i13 %tmp_38 to i64
  %image_addr_8 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_388_cast
  %tmp_40 = add i13 40, %tmp
  %tmp_47 = add i13 %tmp_i_mid2_cast, %tmp_40
  %tmp_390_cast = zext i13 %tmp_47 to i64
  %image_addr_9 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_390_cast
  %tmp_49 = add i13 48, %tmp
  %tmp_56 = add i13 %tmp_i_mid2_cast, %tmp_49
  %tmp_392_cast = zext i13 %tmp_56 to i64
  %image_addr_12 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_392_cast
  %tmp_58 = add i13 56, %tmp
  %tmp_65 = add i13 %tmp_i_mid2_cast, %tmp_58
  %tmp_394_cast = zext i13 %tmp_65 to i64
  %image_addr_13 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_394_cast
  %tmp_67 = add i13 64, %tmp
  %tmp_74 = add i13 %tmp_i_mid2_cast, %tmp_67
  %tmp_396_cast = zext i13 %tmp_74 to i64
  %image_addr_16 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_396_cast
  %tmp_76 = add i13 72, %tmp
  %tmp_83 = add i13 %tmp_i_mid2_cast, %tmp_76
  %tmp_398_cast = zext i13 %tmp_83 to i64
  %image_addr_17 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_398_cast
  %tmp_85 = add i13 80, %tmp
  %tmp_92 = add i13 %tmp_i_mid2_cast, %tmp_85
  %tmp_400_cast = zext i13 %tmp_92 to i64
  %image_addr_20 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_400_cast
  %tmp_94 = add i13 88, %tmp
  %tmp_101 = add i13 %tmp_i_mid2_cast, %tmp_94
  %tmp_402_cast = zext i13 %tmp_101 to i64
  %image_addr_21 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_402_cast
  %tmp_103 = add i13 96, %tmp
  %tmp_110 = add i13 %tmp_i_mid2_cast, %tmp_103
  %tmp_404_cast = zext i13 %tmp_110 to i64
  %image_addr_24 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_404_cast
  %tmp_112 = add i13 104, %tmp
  %tmp_119 = add i13 %tmp_i_mid2_cast, %tmp_112
  %tmp_406_cast = zext i13 %tmp_119 to i64
  %image_addr_25 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_406_cast
  %tmp_121 = add i13 112, %tmp
  %tmp_128 = add i13 %tmp_i_mid2_cast, %tmp_121
  %tmp_408_cast = zext i13 %tmp_128 to i64
  %image_addr_28 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_408_cast
  %tmp_130 = add i13 120, %tmp
  %tmp_137 = add i13 %tmp_i_mid2_cast, %tmp_130
  %tmp_410_cast = zext i13 %tmp_137 to i64
  %image_addr_29 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_410_cast
  %tmp_139 = add i13 128, %tmp
  %tmp_146 = add i13 %tmp_i_mid2_cast, %tmp_139
  %tmp_412_cast = zext i13 %tmp_146 to i64
  %image_addr_32 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_412_cast
  %tmp_148 = add i13 136, %tmp
  %tmp_155 = add i13 %tmp_i_mid2_cast, %tmp_148
  %tmp_414_cast = zext i13 %tmp_155 to i64
  %image_addr_33 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_414_cast
  %tmp_157 = add i13 144, %tmp
  %tmp_164 = add i13 %tmp_i_mid2_cast, %tmp_157
  %tmp_416_cast = zext i13 %tmp_164 to i64
  %image_addr_36 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_416_cast
  %tmp_166 = add i13 152, %tmp
  %tmp_173 = add i13 %tmp_i_mid2_cast, %tmp_166
  %tmp_418_cast = zext i13 %tmp_173 to i64
  %image_addr_37 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_418_cast
  %tmp_175 = add i13 160, %tmp
  %tmp_182 = add i13 %tmp_i_mid2_cast, %tmp_175
  %tmp_420_cast = zext i13 %tmp_182 to i64
  %image_addr_40 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_420_cast
  %tmp_184 = add i13 168, %tmp
  %tmp_191 = add i13 %tmp_i_mid2_cast, %tmp_184
  %tmp_422_cast = zext i13 %tmp_191 to i64
  %image_addr_41 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_422_cast
  %tmp_193 = add i13 176, %tmp
  %tmp_200 = add i13 %tmp_i_mid2_cast, %tmp_193
  %tmp_424_cast = zext i13 %tmp_200 to i64
  %image_addr_44 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_424_cast
  %tmp_202 = add i13 184, %tmp
  %tmp_209 = add i13 %tmp_i_mid2_cast, %tmp_202
  %tmp_426_cast = zext i13 %tmp_209 to i64
  %image_addr_45 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_426_cast
  %tmp_211 = add i13 192, %tmp
  %tmp_218 = add i13 %tmp_i_mid2_cast, %tmp_211
  %tmp_428_cast = zext i13 %tmp_218 to i64
  %image_addr_48 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_428_cast
  %tmp_220 = add i13 200, %tmp
  %tmp_227 = add i13 %tmp_i_mid2_cast, %tmp_220
  %tmp_430_cast = zext i13 %tmp_227 to i64
  %image_addr_49 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_430_cast
  %tmp_229 = add i13 208, %tmp
  %tmp_236 = add i13 %tmp_i_mid2_cast, %tmp_229
  %tmp_432_cast = zext i13 %tmp_236 to i64
  %image_addr_52 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_432_cast
  %tmp_238 = add i13 216, %tmp
  %tmp_245 = add i13 %tmp_i_mid2_cast, %tmp_238
  %tmp_434_cast = zext i13 %tmp_245 to i64
  %image_addr_53 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_434_cast
  %tmp_247 = call i4 @_ssdm_op_PartSelect.i4.i5.i32.i32(i5 %i_0_i_i_mid2, i32 1, i32 4)
  %tmp_254 = call i11 @_ssdm_op_BitConcatenate.i11.i4.i7(i4 %tmp_247, i7 0)
  %p_shl_cast = zext i11 %tmp_254 to i12
  %tmp_256 = call i8 @_ssdm_op_BitConcatenate.i8.i4.i4(i4 %tmp_247, i4 0)
  %p_shl1_cast = zext i8 %tmp_256 to i12
  %tmp_263 = sub i12 %p_shl_cast, %p_shl1_cast
  %tmp_439_cast = sext i12 %tmp_263 to i13
  %tmp_265 = trunc i12 %tmp_263 to i4
  %tmp_272 = or i4 %tmp_265, %tmp_i_mid2_v
  %tmp_274 = call i8 @_ssdm_op_PartSelect.i8.i12.i32.i32(i12 %tmp_263, i32 4, i32 11)
  %tmp_281 = call i12 @_ssdm_op_BitConcatenate.i12.i8.i4(i8 %tmp_274, i4 %tmp_272)
  %tmp_283 = sext i12 %tmp_281 to i64
  %output_addr = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_283
  %tmp_290 = or i12 %tmp_263, 8
  %tmp_292 = add i12 %tmp_i_mid2_cast1, %tmp_290
  %tmp_445_cast = sext i12 %tmp_292 to i64
  %output_addr_1 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_445_cast
  %tmp_299 = add i13 16, %tmp_439_cast
  %tmp_301 = trunc i13 %tmp_299 to i4
  %tmp_308 = or i4 %tmp_301, %tmp_i_mid2_v
  %tmp_310 = call i9 @_ssdm_op_PartSelect.i9.i13.i32.i32(i13 %tmp_299, i32 4, i32 12)
  %tmp_317 = call i13 @_ssdm_op_BitConcatenate.i13.i9.i4(i9 %tmp_310, i4 %tmp_308)
  %tmp_319 = sext i13 %tmp_317 to i64
  %output_addr_2 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_319
  %tmp_326 = add i12 24, %tmp_263
  %tmp_328 = add i12 %tmp_i_mid2_cast1, %tmp_326
  %tmp_452_cast = sext i12 %tmp_328 to i64
  %output_addr_3 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_452_cast
  %tmp_335 = add i13 32, %tmp_439_cast
  %tmp_337 = trunc i13 %tmp_335 to i4
  %tmp_344 = or i4 %tmp_337, %tmp_i_mid2_v
  %tmp_346 = call i9 @_ssdm_op_PartSelect.i9.i13.i32.i32(i13 %tmp_335, i32 4, i32 12)
  %tmp_353 = call i13 @_ssdm_op_BitConcatenate.i13.i9.i4(i9 %tmp_346, i4 %tmp_344)
  %tmp_355 = sext i13 %tmp_353 to i64
  %output_addr_4 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_355
  %tmp_362 = add i12 40, %tmp_263
  %tmp_364 = add i12 %tmp_i_mid2_cast1, %tmp_362
  %tmp_459_cast = sext i12 %tmp_364 to i64
  %output_addr_5 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_459_cast
  %tmp_371 = add i13 48, %tmp_439_cast
  %tmp_373 = trunc i13 %tmp_371 to i4
  %tmp_379 = or i4 %tmp_373, %tmp_i_mid2_v
  %tmp_380 = call i9 @_ssdm_op_PartSelect.i9.i13.i32.i32(i13 %tmp_371, i32 4, i32 12)
  %tmp_381 = call i13 @_ssdm_op_BitConcatenate.i13.i9.i4(i9 %tmp_380, i4 %tmp_379)
  %tmp_382 = sext i13 %tmp_381 to i64
  %output_addr_6 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_382
  %tmp_383 = add i12 56, %tmp_263
  %tmp_384 = add i12 %tmp_i_mid2_cast1, %tmp_383
  %tmp_466_cast = sext i12 %tmp_384 to i64
  %output_addr_7 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_466_cast
  %tmp_385 = add i13 64, %tmp_439_cast
  %tmp_386 = trunc i13 %tmp_385 to i4
  %tmp_387 = or i4 %tmp_386, %tmp_i_mid2_v
  %tmp_388 = call i9 @_ssdm_op_PartSelect.i9.i13.i32.i32(i13 %tmp_385, i32 4, i32 12)
  %tmp_389 = call i13 @_ssdm_op_BitConcatenate.i13.i9.i4(i9 %tmp_388, i4 %tmp_387)
  %tmp_390 = sext i13 %tmp_389 to i64
  %output_addr_8 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_390
  %tmp_391 = add i12 72, %tmp_263
  %tmp_392 = add i12 %tmp_i_mid2_cast1, %tmp_391
  %tmp_473_cast = sext i12 %tmp_392 to i64
  %output_addr_9 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_473_cast
  %tmp_393 = add i13 80, %tmp_439_cast
  %tmp_394 = trunc i13 %tmp_393 to i4
  %tmp_395 = or i4 %tmp_394, %tmp_i_mid2_v
  %tmp_396 = call i9 @_ssdm_op_PartSelect.i9.i13.i32.i32(i13 %tmp_393, i32 4, i32 12)
  %tmp_397 = call i13 @_ssdm_op_BitConcatenate.i13.i9.i4(i9 %tmp_396, i4 %tmp_395)
  %tmp_398 = sext i13 %tmp_397 to i64
  %output_addr_10 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_398
  %tmp_399 = add i12 88, %tmp_263
  %tmp_400 = add i12 %tmp_i_mid2_cast1, %tmp_399
  %tmp_480_cast = sext i12 %tmp_400 to i64
  %output_addr_11 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_480_cast
  %tmp_401 = add i13 96, %tmp_439_cast
  %tmp_402 = trunc i13 %tmp_401 to i4
  %tmp_403 = or i4 %tmp_402, %tmp_i_mid2_v
  %tmp_404 = call i9 @_ssdm_op_PartSelect.i9.i13.i32.i32(i13 %tmp_401, i32 4, i32 12)
  %tmp_405 = call i13 @_ssdm_op_BitConcatenate.i13.i9.i4(i9 %tmp_404, i4 %tmp_403)
  %tmp_406 = sext i13 %tmp_405 to i64
  %output_addr_12 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_406
  %tmp_407 = add i12 104, %tmp_263
  %tmp_408 = add i12 %tmp_i_mid2_cast1, %tmp_407
  %tmp_487_cast = sext i12 %tmp_408 to i64
  %output_addr_13 = getelementptr [1568 x float]* %output_r, i64 0, i64 %tmp_487_cast
  %image_load = load float* %image_addr, align 4
  %image_load_1 = load float* %image_addr_1, align 4
  %image_load_1_to_int = bitcast float %image_load_1 to i32
  %tmp_2 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_1_to_int, i32 23, i32 30)
  %tmp_409 = trunc i32 %image_load_1_to_int to i23
  %image_load_to_int = bitcast float %image_load to i32
  %tmp_4 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_to_int, i32 23, i32 30)
  %tmp_410 = trunc i32 %image_load_to_int to i23
  %notlhs = icmp ne i8 %tmp_2, -1
  %notrhs = icmp eq i23 %tmp_409, 0
  %tmp_6 = or i1 %notrhs, %notlhs
  %notlhs1 = icmp ne i8 %tmp_4, -1
  %notrhs2 = icmp eq i23 %tmp_410, 0
  %tmp_7 = or i1 %notrhs2, %notlhs1
  %tmp_8 = and i1 %tmp_6, %tmp_7
  %tmp_9 = fcmp ogt float %image_load_1, %image_load
  %tmp_s = and i1 %tmp_8, %tmp_9
  %max_1_i_0_0_1 = select i1 %tmp_s, i13 %tmp_11, i13 %tmp_3
  %max_1_i_0_0_1_cast = zext i13 %max_1_i_0_0_1 to i64
  %image_addr_56 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_0_0_1_cast
  %image_load_56 = load float* %image_addr_56, align 4
  %tmp_5_i_0_s = or i5 %i_0_i_i_mid2, 1
  %tmp_8_i_0_1_cast = zext i5 %tmp_5_i_0_s to i13
  %tmp_411 = mul i13 232, %tmp_8_i_0_1_cast
  %tmp_412 = add i13 %tmp_i_mid2_cast, %tmp_411
  %tmp_489_cast = zext i13 %tmp_412 to i64
  %image_addr_2 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_489_cast
  %tmp_413 = add i13 8, %tmp_411
  %tmp_414 = add i13 %tmp_i_mid2_cast, %tmp_413
  %tmp_491_cast = zext i13 %tmp_414 to i64
  %image_addr_3 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_491_cast
  %tmp_415 = add i13 16, %tmp_411
  %tmp_416 = add i13 %tmp_i_mid2_cast, %tmp_415
  %tmp_493_cast = zext i13 %tmp_416 to i64
  %image_addr_6 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_493_cast
  %tmp_417 = add i13 24, %tmp_411
  %tmp_418 = add i13 %tmp_i_mid2_cast, %tmp_417
  %tmp_495_cast = zext i13 %tmp_418 to i64
  %image_addr_7 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_495_cast
  %tmp_419 = add i13 32, %tmp_411
  %tmp_420 = add i13 %tmp_i_mid2_cast, %tmp_419
  %tmp_497_cast = zext i13 %tmp_420 to i64
  %image_addr_10 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_497_cast
  %tmp_421 = add i13 40, %tmp_411
  %tmp_422 = add i13 %tmp_i_mid2_cast, %tmp_421
  %tmp_499_cast = zext i13 %tmp_422 to i64
  %image_addr_11 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_499_cast
  %tmp_423 = add i13 48, %tmp_411
  %tmp_424 = add i13 %tmp_i_mid2_cast, %tmp_423
  %tmp_501_cast = zext i13 %tmp_424 to i64
  %image_addr_14 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_501_cast
  %tmp_425 = add i13 56, %tmp_411
  %tmp_426 = add i13 %tmp_i_mid2_cast, %tmp_425
  %tmp_503_cast = zext i13 %tmp_426 to i64
  %image_addr_15 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_503_cast
  %tmp_427 = add i13 64, %tmp_411
  %tmp_428 = add i13 %tmp_i_mid2_cast, %tmp_427
  %tmp_505_cast = zext i13 %tmp_428 to i64
  %image_addr_18 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_505_cast
  %tmp_429 = add i13 72, %tmp_411
  %tmp_430 = add i13 %tmp_i_mid2_cast, %tmp_429
  %tmp_507_cast = zext i13 %tmp_430 to i64
  %image_addr_19 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_507_cast
  %tmp_431 = add i13 80, %tmp_411
  %tmp_432 = add i13 %tmp_i_mid2_cast, %tmp_431
  %tmp_509_cast = zext i13 %tmp_432 to i64
  %image_addr_22 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_509_cast
  %tmp_433 = add i13 88, %tmp_411
  %tmp_434 = add i13 %tmp_i_mid2_cast, %tmp_433
  %tmp_511_cast = zext i13 %tmp_434 to i64
  %image_addr_23 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_511_cast
  %tmp_435 = add i13 96, %tmp_411
  %tmp_436 = add i13 %tmp_i_mid2_cast, %tmp_435
  %tmp_513_cast = zext i13 %tmp_436 to i64
  %image_addr_26 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_513_cast
  %tmp_437 = add i13 104, %tmp_411
  %tmp_438 = add i13 %tmp_i_mid2_cast, %tmp_437
  %tmp_515_cast = zext i13 %tmp_438 to i64
  %image_addr_27 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_515_cast
  %tmp_439 = add i13 112, %tmp_411
  %tmp_440 = add i13 %tmp_i_mid2_cast, %tmp_439
  %tmp_517_cast = zext i13 %tmp_440 to i64
  %image_addr_30 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_517_cast
  %tmp_441 = add i13 120, %tmp_411
  %tmp_442 = add i13 %tmp_i_mid2_cast, %tmp_441
  %tmp_519_cast = zext i13 %tmp_442 to i64
  %image_addr_31 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_519_cast
  %tmp_443 = add i13 128, %tmp_411
  %tmp_444 = add i13 %tmp_i_mid2_cast, %tmp_443
  %tmp_521_cast = zext i13 %tmp_444 to i64
  %image_addr_34 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_521_cast
  %tmp_445 = add i13 136, %tmp_411
  %tmp_446 = add i13 %tmp_i_mid2_cast, %tmp_445
  %tmp_523_cast = zext i13 %tmp_446 to i64
  %image_addr_35 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_523_cast
  %tmp_447 = add i13 144, %tmp_411
  %tmp_448 = add i13 %tmp_i_mid2_cast, %tmp_447
  %tmp_525_cast = zext i13 %tmp_448 to i64
  %image_addr_38 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_525_cast
  %tmp_449 = add i13 152, %tmp_411
  %tmp_450 = add i13 %tmp_i_mid2_cast, %tmp_449
  %tmp_527_cast = zext i13 %tmp_450 to i64
  %image_addr_39 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_527_cast
  %tmp_451 = add i13 160, %tmp_411
  %tmp_452 = add i13 %tmp_i_mid2_cast, %tmp_451
  %tmp_529_cast = zext i13 %tmp_452 to i64
  %image_addr_42 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_529_cast
  %tmp_453 = add i13 168, %tmp_411
  %tmp_454 = add i13 %tmp_i_mid2_cast, %tmp_453
  %tmp_531_cast = zext i13 %tmp_454 to i64
  %image_addr_43 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_531_cast
  %tmp_455 = add i13 176, %tmp_411
  %tmp_456 = add i13 %tmp_i_mid2_cast, %tmp_455
  %tmp_533_cast = zext i13 %tmp_456 to i64
  %image_addr_46 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_533_cast
  %tmp_457 = add i13 184, %tmp_411
  %tmp_458 = add i13 %tmp_i_mid2_cast, %tmp_457
  %tmp_535_cast = zext i13 %tmp_458 to i64
  %image_addr_47 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_535_cast
  %tmp_459 = add i13 192, %tmp_411
  %tmp_460 = add i13 %tmp_i_mid2_cast, %tmp_459
  %tmp_537_cast = zext i13 %tmp_460 to i64
  %image_addr_50 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_537_cast
  %tmp_461 = add i13 200, %tmp_411
  %tmp_462 = add i13 %tmp_i_mid2_cast, %tmp_461
  %tmp_539_cast = zext i13 %tmp_462 to i64
  %image_addr_51 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_539_cast
  %tmp_463 = add i13 208, %tmp_411
  %tmp_464 = add i13 %tmp_i_mid2_cast, %tmp_463
  %tmp_541_cast = zext i13 %tmp_464 to i64
  %image_addr_54 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_541_cast
  %tmp_465 = add i13 216, %tmp_411
  %tmp_466 = add i13 %tmp_i_mid2_cast, %tmp_465
  %tmp_543_cast = zext i13 %tmp_466 to i64
  %image_addr_55 = getelementptr [6728 x float]* %image_r, i64 0, i64 %tmp_543_cast
  %image_load_2 = load float* %image_addr_2, align 4
  %image_load_2_to_int = bitcast float %image_load_2 to i32
  %tmp_10 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_2_to_int, i32 23, i32 30)
  %tmp_467 = trunc i32 %image_load_2_to_int to i23
  %max_1_i_0_0_1_to_int = bitcast float %image_load_56 to i32
  %tmp_12 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_0_0_1_to_int, i32 23, i32 30)
  %tmp_468 = trunc i32 %max_1_i_0_0_1_to_int to i23
  %notlhs3 = icmp ne i8 %tmp_10, -1
  %notrhs4 = icmp eq i23 %tmp_467, 0
  %tmp_14 = or i1 %notrhs4, %notlhs3
  %notlhs5 = icmp ne i8 %tmp_12, -1
  %notrhs6 = icmp eq i23 %tmp_468, 0
  %tmp_15 = or i1 %notrhs6, %notlhs5
  %tmp_16 = and i1 %tmp_14, %tmp_15
  %tmp_17 = fcmp ogt float %image_load_2, %image_load_56
  %tmp_18 = and i1 %tmp_16, %tmp_17
  %max_1_i_0_1 = select i1 %tmp_18, i13 %tmp_412, i13 %max_1_i_0_0_1
  %max_1_i_0_1_cast = zext i13 %max_1_i_0_1 to i64
  %image_addr_57 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_0_1_cast
  %image_load_57 = load float* %image_addr_57, align 4
  %image_load_3 = load float* %image_addr_3, align 4
  %image_load_3_to_int = bitcast float %image_load_3 to i32
  %tmp_19 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_3_to_int, i32 23, i32 30)
  %tmp_469 = trunc i32 %image_load_3_to_int to i23
  %max_1_i_0_1_to_int = bitcast float %image_load_57 to i32
  %tmp_21 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_0_1_to_int, i32 23, i32 30)
  %tmp_470 = trunc i32 %max_1_i_0_1_to_int to i23
  %notlhs7 = icmp ne i8 %tmp_19, -1
  %notrhs8 = icmp eq i23 %tmp_469, 0
  %tmp_23 = or i1 %notrhs8, %notlhs7
  %notlhs9 = icmp ne i8 %tmp_21, -1
  %notrhs1 = icmp eq i23 %tmp_470, 0
  %tmp_24 = or i1 %notrhs1, %notlhs9
  %tmp_25 = and i1 %tmp_23, %tmp_24
  %tmp_26 = fcmp ogt float %image_load_3, %image_load_57
  %tmp_27 = and i1 %tmp_25, %tmp_26
  %max_1_i_0_1_1 = select i1 %tmp_27, i13 %tmp_414, i13 %max_1_i_0_1
  %max_1_i_0_1_1_cast = zext i13 %max_1_i_0_1_1 to i64
  %image_addr_58 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_0_1_1_cast
  %image_load_58 = load float* %image_addr_58, align 4
  store float %image_load_58, float* %output_addr, align 4
  %image_load_4 = load float* %image_addr_4, align 4
  %image_load_5 = load float* %image_addr_5, align 4
  %image_load_5_to_int = bitcast float %image_load_5 to i32
  %tmp_28 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_5_to_int, i32 23, i32 30)
  %tmp_471 = trunc i32 %image_load_5_to_int to i23
  %image_load_4_to_int = bitcast float %image_load_4 to i32
  %tmp_30 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_4_to_int, i32 23, i32 30)
  %tmp_472 = trunc i32 %image_load_4_to_int to i23
  %notlhs2 = icmp ne i8 %tmp_28, -1
  %notrhs3 = icmp eq i23 %tmp_471, 0
  %tmp_32 = or i1 %notrhs3, %notlhs2
  %notlhs4 = icmp ne i8 %tmp_30, -1
  %notrhs5 = icmp eq i23 %tmp_472, 0
  %tmp_33 = or i1 %notrhs5, %notlhs4
  %tmp_34 = and i1 %tmp_32, %tmp_33
  %tmp_35 = fcmp ogt float %image_load_5, %image_load_4
  %tmp_36 = and i1 %tmp_34, %tmp_35
  %max_1_i_1_0_1 = select i1 %tmp_36, i13 %tmp_29, i13 %tmp_20
  %max_1_i_1_0_1_cast = zext i13 %max_1_i_1_0_1 to i64
  %image_addr_59 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_1_0_1_cast
  %image_load_59 = load float* %image_addr_59, align 4
  %image_load_6 = load float* %image_addr_6, align 4
  %image_load_6_to_int = bitcast float %image_load_6 to i32
  %tmp_37 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_6_to_int, i32 23, i32 30)
  %tmp_473 = trunc i32 %image_load_6_to_int to i23
  %max_1_i_1_0_1_to_int = bitcast float %image_load_59 to i32
  %tmp_39 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_1_0_1_to_int, i32 23, i32 30)
  %tmp_474 = trunc i32 %max_1_i_1_0_1_to_int to i23
  %notlhs6 = icmp ne i8 %tmp_37, -1
  %notrhs7 = icmp eq i23 %tmp_473, 0
  %tmp_41 = or i1 %notrhs7, %notlhs6
  %notlhs8 = icmp ne i8 %tmp_39, -1
  %notrhs9 = icmp eq i23 %tmp_474, 0
  %tmp_42 = or i1 %notrhs9, %notlhs8
  %tmp_43 = and i1 %tmp_41, %tmp_42
  %tmp_44 = fcmp ogt float %image_load_6, %image_load_59
  %tmp_45 = and i1 %tmp_43, %tmp_44
  %max_1_i_1_1 = select i1 %tmp_45, i13 %tmp_416, i13 %max_1_i_1_0_1
  %max_1_i_1_1_cast = zext i13 %max_1_i_1_1 to i64
  %image_addr_60 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_1_1_cast
  %image_load_60 = load float* %image_addr_60, align 4
  %image_load_7 = load float* %image_addr_7, align 4
  %image_load_7_to_int = bitcast float %image_load_7 to i32
  %tmp_46 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_7_to_int, i32 23, i32 30)
  %tmp_475 = trunc i32 %image_load_7_to_int to i23
  %max_1_i_1_1_to_int = bitcast float %image_load_60 to i32
  %tmp_48 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_1_1_to_int, i32 23, i32 30)
  %tmp_476 = trunc i32 %max_1_i_1_1_to_int to i23
  %notlhs10 = icmp ne i8 %tmp_46, -1
  %notrhs10 = icmp eq i23 %tmp_475, 0
  %tmp_50 = or i1 %notrhs10, %notlhs10
  %notlhs11 = icmp ne i8 %tmp_48, -1
  %notrhs11 = icmp eq i23 %tmp_476, 0
  %tmp_51 = or i1 %notrhs11, %notlhs11
  %tmp_52 = and i1 %tmp_50, %tmp_51
  %tmp_53 = fcmp ogt float %image_load_7, %image_load_60
  %tmp_54 = and i1 %tmp_52, %tmp_53
  %max_1_i_1_1_1 = select i1 %tmp_54, i13 %tmp_418, i13 %max_1_i_1_1
  %max_1_i_1_1_1_cast = zext i13 %max_1_i_1_1_1 to i64
  %image_addr_61 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_1_1_1_cast
  %image_load_61 = load float* %image_addr_61, align 4
  store float %image_load_61, float* %output_addr_1, align 4
  %image_load_8 = load float* %image_addr_8, align 4
  %image_load_9 = load float* %image_addr_9, align 4
  %image_load_9_to_int = bitcast float %image_load_9 to i32
  %tmp_55 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_9_to_int, i32 23, i32 30)
  %tmp_477 = trunc i32 %image_load_9_to_int to i23
  %image_load_8_to_int = bitcast float %image_load_8 to i32
  %tmp_57 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_8_to_int, i32 23, i32 30)
  %tmp_478 = trunc i32 %image_load_8_to_int to i23
  %notlhs12 = icmp ne i8 %tmp_55, -1
  %notrhs12 = icmp eq i23 %tmp_477, 0
  %tmp_59 = or i1 %notrhs12, %notlhs12
  %notlhs13 = icmp ne i8 %tmp_57, -1
  %notrhs13 = icmp eq i23 %tmp_478, 0
  %tmp_60 = or i1 %notrhs13, %notlhs13
  %tmp_61 = and i1 %tmp_59, %tmp_60
  %tmp_62 = fcmp ogt float %image_load_9, %image_load_8
  %tmp_63 = and i1 %tmp_61, %tmp_62
  %max_1_i_2_0_1 = select i1 %tmp_63, i13 %tmp_47, i13 %tmp_38
  %max_1_i_2_0_1_cast = zext i13 %max_1_i_2_0_1 to i64
  %image_addr_62 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_2_0_1_cast
  %image_load_62 = load float* %image_addr_62, align 4
  %image_load_10 = load float* %image_addr_10, align 4
  %image_load_10_to_int = bitcast float %image_load_10 to i32
  %tmp_64 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_10_to_int, i32 23, i32 30)
  %tmp_479 = trunc i32 %image_load_10_to_int to i23
  %max_1_i_2_0_1_to_int = bitcast float %image_load_62 to i32
  %tmp_66 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_2_0_1_to_int, i32 23, i32 30)
  %tmp_480 = trunc i32 %max_1_i_2_0_1_to_int to i23
  %notlhs14 = icmp ne i8 %tmp_64, -1
  %notrhs14 = icmp eq i23 %tmp_479, 0
  %tmp_68 = or i1 %notrhs14, %notlhs14
  %notlhs15 = icmp ne i8 %tmp_66, -1
  %notrhs15 = icmp eq i23 %tmp_480, 0
  %tmp_69 = or i1 %notrhs15, %notlhs15
  %tmp_70 = and i1 %tmp_68, %tmp_69
  %tmp_71 = fcmp ogt float %image_load_10, %image_load_62
  %tmp_72 = and i1 %tmp_70, %tmp_71
  %max_1_i_2_1 = select i1 %tmp_72, i13 %tmp_420, i13 %max_1_i_2_0_1
  %max_1_i_2_1_cast = zext i13 %max_1_i_2_1 to i64
  %image_addr_63 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_2_1_cast
  %image_load_63 = load float* %image_addr_63, align 4
  %image_load_11 = load float* %image_addr_11, align 4
  %image_load_11_to_int = bitcast float %image_load_11 to i32
  %tmp_73 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_11_to_int, i32 23, i32 30)
  %tmp_481 = trunc i32 %image_load_11_to_int to i23
  %max_1_i_2_1_to_int = bitcast float %image_load_63 to i32
  %tmp_75 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_2_1_to_int, i32 23, i32 30)
  %tmp_482 = trunc i32 %max_1_i_2_1_to_int to i23
  %notlhs16 = icmp ne i8 %tmp_73, -1
  %notrhs16 = icmp eq i23 %tmp_481, 0
  %tmp_77 = or i1 %notrhs16, %notlhs16
  %notlhs17 = icmp ne i8 %tmp_75, -1
  %notrhs17 = icmp eq i23 %tmp_482, 0
  %tmp_78 = or i1 %notrhs17, %notlhs17
  %tmp_79 = and i1 %tmp_77, %tmp_78
  %tmp_80 = fcmp ogt float %image_load_11, %image_load_63
  %tmp_81 = and i1 %tmp_79, %tmp_80
  %max_1_i_2_1_1 = select i1 %tmp_81, i13 %tmp_422, i13 %max_1_i_2_1
  %max_1_i_2_1_1_cast = zext i13 %max_1_i_2_1_1 to i64
  %image_addr_64 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_2_1_1_cast
  %image_load_64 = load float* %image_addr_64, align 4
  store float %image_load_64, float* %output_addr_2, align 4
  %image_load_12 = load float* %image_addr_12, align 4
  %image_load_13 = load float* %image_addr_13, align 4
  %image_load_13_to_int = bitcast float %image_load_13 to i32
  %tmp_82 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_13_to_int, i32 23, i32 30)
  %tmp_483 = trunc i32 %image_load_13_to_int to i23
  %image_load_12_to_int = bitcast float %image_load_12 to i32
  %tmp_84 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_12_to_int, i32 23, i32 30)
  %tmp_484 = trunc i32 %image_load_12_to_int to i23
  %notlhs18 = icmp ne i8 %tmp_82, -1
  %notrhs18 = icmp eq i23 %tmp_483, 0
  %tmp_86 = or i1 %notrhs18, %notlhs18
  %notlhs19 = icmp ne i8 %tmp_84, -1
  %notrhs19 = icmp eq i23 %tmp_484, 0
  %tmp_87 = or i1 %notrhs19, %notlhs19
  %tmp_88 = and i1 %tmp_86, %tmp_87
  %tmp_89 = fcmp ogt float %image_load_13, %image_load_12
  %tmp_90 = and i1 %tmp_88, %tmp_89
  %max_1_i_3_0_1 = select i1 %tmp_90, i13 %tmp_65, i13 %tmp_56
  %max_1_i_3_0_1_cast = zext i13 %max_1_i_3_0_1 to i64
  %image_addr_65 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_3_0_1_cast
  %image_load_65 = load float* %image_addr_65, align 4
  %image_load_14 = load float* %image_addr_14, align 4
  %image_load_14_to_int = bitcast float %image_load_14 to i32
  %tmp_91 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_14_to_int, i32 23, i32 30)
  %tmp_485 = trunc i32 %image_load_14_to_int to i23
  %max_1_i_3_0_1_to_int = bitcast float %image_load_65 to i32
  %tmp_93 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_3_0_1_to_int, i32 23, i32 30)
  %tmp_486 = trunc i32 %max_1_i_3_0_1_to_int to i23
  %notlhs20 = icmp ne i8 %tmp_91, -1
  %notrhs20 = icmp eq i23 %tmp_485, 0
  %tmp_95 = or i1 %notrhs20, %notlhs20
  %notlhs21 = icmp ne i8 %tmp_93, -1
  %notrhs21 = icmp eq i23 %tmp_486, 0
  %tmp_96 = or i1 %notrhs21, %notlhs21
  %tmp_97 = and i1 %tmp_95, %tmp_96
  %tmp_98 = fcmp ogt float %image_load_14, %image_load_65
  %tmp_99 = and i1 %tmp_97, %tmp_98
  %max_1_i_3_1 = select i1 %tmp_99, i13 %tmp_424, i13 %max_1_i_3_0_1
  %max_1_i_3_1_cast = zext i13 %max_1_i_3_1 to i64
  %image_addr_66 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_3_1_cast
  %image_load_66 = load float* %image_addr_66, align 4
  %image_load_15 = load float* %image_addr_15, align 4
  %image_load_15_to_int = bitcast float %image_load_15 to i32
  %tmp_100 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_15_to_int, i32 23, i32 30)
  %tmp_487 = trunc i32 %image_load_15_to_int to i23
  %max_1_i_3_1_to_int = bitcast float %image_load_66 to i32
  %tmp_102 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_3_1_to_int, i32 23, i32 30)
  %tmp_488 = trunc i32 %max_1_i_3_1_to_int to i23
  %notlhs22 = icmp ne i8 %tmp_100, -1
  %notrhs22 = icmp eq i23 %tmp_487, 0
  %tmp_104 = or i1 %notrhs22, %notlhs22
  %notlhs23 = icmp ne i8 %tmp_102, -1
  %notrhs23 = icmp eq i23 %tmp_488, 0
  %tmp_105 = or i1 %notrhs23, %notlhs23
  %tmp_106 = and i1 %tmp_104, %tmp_105
  %tmp_107 = fcmp ogt float %image_load_15, %image_load_66
  %tmp_108 = and i1 %tmp_106, %tmp_107
  %max_1_i_3_1_1 = select i1 %tmp_108, i13 %tmp_426, i13 %max_1_i_3_1
  %max_1_i_3_1_1_cast = zext i13 %max_1_i_3_1_1 to i64
  %image_addr_67 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_3_1_1_cast
  %image_load_67 = load float* %image_addr_67, align 4
  store float %image_load_67, float* %output_addr_3, align 4
  %image_load_16 = load float* %image_addr_16, align 4
  %image_load_17 = load float* %image_addr_17, align 4
  %image_load_17_to_int = bitcast float %image_load_17 to i32
  %tmp_109 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_17_to_int, i32 23, i32 30)
  %tmp_489 = trunc i32 %image_load_17_to_int to i23
  %image_load_16_to_int = bitcast float %image_load_16 to i32
  %tmp_111 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_16_to_int, i32 23, i32 30)
  %tmp_490 = trunc i32 %image_load_16_to_int to i23
  %notlhs24 = icmp ne i8 %tmp_109, -1
  %notrhs24 = icmp eq i23 %tmp_489, 0
  %tmp_113 = or i1 %notrhs24, %notlhs24
  %notlhs25 = icmp ne i8 %tmp_111, -1
  %notrhs25 = icmp eq i23 %tmp_490, 0
  %tmp_114 = or i1 %notrhs25, %notlhs25
  %tmp_115 = and i1 %tmp_113, %tmp_114
  %tmp_116 = fcmp ogt float %image_load_17, %image_load_16
  %tmp_117 = and i1 %tmp_115, %tmp_116
  %max_1_i_4_0_1 = select i1 %tmp_117, i13 %tmp_83, i13 %tmp_74
  %max_1_i_4_0_1_cast = zext i13 %max_1_i_4_0_1 to i64
  %image_addr_68 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_4_0_1_cast
  %image_load_68 = load float* %image_addr_68, align 4
  %image_load_18 = load float* %image_addr_18, align 4
  %image_load_18_to_int = bitcast float %image_load_18 to i32
  %tmp_118 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_18_to_int, i32 23, i32 30)
  %tmp_491 = trunc i32 %image_load_18_to_int to i23
  %max_1_i_4_0_1_to_int = bitcast float %image_load_68 to i32
  %tmp_120 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_4_0_1_to_int, i32 23, i32 30)
  %tmp_492 = trunc i32 %max_1_i_4_0_1_to_int to i23
  %notlhs26 = icmp ne i8 %tmp_118, -1
  %notrhs26 = icmp eq i23 %tmp_491, 0
  %tmp_122 = or i1 %notrhs26, %notlhs26
  %notlhs27 = icmp ne i8 %tmp_120, -1
  %notrhs27 = icmp eq i23 %tmp_492, 0
  %tmp_123 = or i1 %notrhs27, %notlhs27
  %tmp_124 = and i1 %tmp_122, %tmp_123
  %tmp_125 = fcmp ogt float %image_load_18, %image_load_68
  %tmp_126 = and i1 %tmp_124, %tmp_125
  %max_1_i_4_1 = select i1 %tmp_126, i13 %tmp_428, i13 %max_1_i_4_0_1
  %max_1_i_4_1_cast = zext i13 %max_1_i_4_1 to i64
  %image_addr_69 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_4_1_cast
  %image_load_69 = load float* %image_addr_69, align 4
  %image_load_19 = load float* %image_addr_19, align 4
  %image_load_19_to_int = bitcast float %image_load_19 to i32
  %tmp_127 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_19_to_int, i32 23, i32 30)
  %tmp_493 = trunc i32 %image_load_19_to_int to i23
  %max_1_i_4_1_to_int = bitcast float %image_load_69 to i32
  %tmp_129 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_4_1_to_int, i32 23, i32 30)
  %tmp_494 = trunc i32 %max_1_i_4_1_to_int to i23
  %notlhs28 = icmp ne i8 %tmp_127, -1
  %notrhs28 = icmp eq i23 %tmp_493, 0
  %tmp_131 = or i1 %notrhs28, %notlhs28
  %notlhs29 = icmp ne i8 %tmp_129, -1
  %notrhs29 = icmp eq i23 %tmp_494, 0
  %tmp_132 = or i1 %notrhs29, %notlhs29
  %tmp_133 = and i1 %tmp_131, %tmp_132
  %tmp_134 = fcmp ogt float %image_load_19, %image_load_69
  %tmp_135 = and i1 %tmp_133, %tmp_134
  %max_1_i_4_1_1 = select i1 %tmp_135, i13 %tmp_430, i13 %max_1_i_4_1
  %max_1_i_4_1_1_cast = zext i13 %max_1_i_4_1_1 to i64
  %image_addr_70 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_4_1_1_cast
  %image_load_70 = load float* %image_addr_70, align 4
  store float %image_load_70, float* %output_addr_4, align 4
  %image_load_20 = load float* %image_addr_20, align 4
  %image_load_21 = load float* %image_addr_21, align 4
  %image_load_21_to_int = bitcast float %image_load_21 to i32
  %tmp_136 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_21_to_int, i32 23, i32 30)
  %tmp_495 = trunc i32 %image_load_21_to_int to i23
  %image_load_20_to_int = bitcast float %image_load_20 to i32
  %tmp_138 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_20_to_int, i32 23, i32 30)
  %tmp_496 = trunc i32 %image_load_20_to_int to i23
  %notlhs30 = icmp ne i8 %tmp_136, -1
  %notrhs30 = icmp eq i23 %tmp_495, 0
  %tmp_140 = or i1 %notrhs30, %notlhs30
  %notlhs31 = icmp ne i8 %tmp_138, -1
  %notrhs31 = icmp eq i23 %tmp_496, 0
  %tmp_141 = or i1 %notrhs31, %notlhs31
  %tmp_142 = and i1 %tmp_140, %tmp_141
  %tmp_143 = fcmp ogt float %image_load_21, %image_load_20
  %tmp_144 = and i1 %tmp_142, %tmp_143
  %max_1_i_5_0_1 = select i1 %tmp_144, i13 %tmp_101, i13 %tmp_92
  %max_1_i_5_0_1_cast = zext i13 %max_1_i_5_0_1 to i64
  %image_addr_71 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_5_0_1_cast
  %image_load_71 = load float* %image_addr_71, align 4
  %image_load_22 = load float* %image_addr_22, align 4
  %image_load_22_to_int = bitcast float %image_load_22 to i32
  %tmp_145 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_22_to_int, i32 23, i32 30)
  %tmp_497 = trunc i32 %image_load_22_to_int to i23
  %max_1_i_5_0_1_to_int = bitcast float %image_load_71 to i32
  %tmp_147 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_5_0_1_to_int, i32 23, i32 30)
  %tmp_498 = trunc i32 %max_1_i_5_0_1_to_int to i23
  %notlhs32 = icmp ne i8 %tmp_145, -1
  %notrhs32 = icmp eq i23 %tmp_497, 0
  %tmp_149 = or i1 %notrhs32, %notlhs32
  %notlhs33 = icmp ne i8 %tmp_147, -1
  %notrhs33 = icmp eq i23 %tmp_498, 0
  %tmp_150 = or i1 %notrhs33, %notlhs33
  %tmp_151 = and i1 %tmp_149, %tmp_150
  %tmp_152 = fcmp ogt float %image_load_22, %image_load_71
  %tmp_153 = and i1 %tmp_151, %tmp_152
  %max_1_i_5_1 = select i1 %tmp_153, i13 %tmp_432, i13 %max_1_i_5_0_1
  %max_1_i_5_1_cast = zext i13 %max_1_i_5_1 to i64
  %image_addr_72 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_5_1_cast
  %image_load_72 = load float* %image_addr_72, align 4
  %image_load_23 = load float* %image_addr_23, align 4
  %image_load_23_to_int = bitcast float %image_load_23 to i32
  %tmp_154 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_23_to_int, i32 23, i32 30)
  %tmp_499 = trunc i32 %image_load_23_to_int to i23
  %max_1_i_5_1_to_int = bitcast float %image_load_72 to i32
  %tmp_156 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_5_1_to_int, i32 23, i32 30)
  %tmp_500 = trunc i32 %max_1_i_5_1_to_int to i23
  %notlhs34 = icmp ne i8 %tmp_154, -1
  %notrhs34 = icmp eq i23 %tmp_499, 0
  %tmp_158 = or i1 %notrhs34, %notlhs34
  %notlhs35 = icmp ne i8 %tmp_156, -1
  %notrhs35 = icmp eq i23 %tmp_500, 0
  %tmp_159 = or i1 %notrhs35, %notlhs35
  %tmp_160 = and i1 %tmp_158, %tmp_159
  %tmp_161 = fcmp ogt float %image_load_23, %image_load_72
  %tmp_162 = and i1 %tmp_160, %tmp_161
  %max_1_i_5_1_1 = select i1 %tmp_162, i13 %tmp_434, i13 %max_1_i_5_1
  %max_1_i_5_1_1_cast = zext i13 %max_1_i_5_1_1 to i64
  %image_addr_73 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_5_1_1_cast
  %image_load_73 = load float* %image_addr_73, align 4
  store float %image_load_73, float* %output_addr_5, align 4
  %image_load_24 = load float* %image_addr_24, align 4
  %image_load_25 = load float* %image_addr_25, align 4
  %image_load_25_to_int = bitcast float %image_load_25 to i32
  %tmp_163 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_25_to_int, i32 23, i32 30)
  %tmp_501 = trunc i32 %image_load_25_to_int to i23
  %image_load_24_to_int = bitcast float %image_load_24 to i32
  %tmp_165 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_24_to_int, i32 23, i32 30)
  %tmp_502 = trunc i32 %image_load_24_to_int to i23
  %notlhs36 = icmp ne i8 %tmp_163, -1
  %notrhs36 = icmp eq i23 %tmp_501, 0
  %tmp_167 = or i1 %notrhs36, %notlhs36
  %notlhs37 = icmp ne i8 %tmp_165, -1
  %notrhs37 = icmp eq i23 %tmp_502, 0
  %tmp_168 = or i1 %notrhs37, %notlhs37
  %tmp_169 = and i1 %tmp_167, %tmp_168
  %tmp_170 = fcmp ogt float %image_load_25, %image_load_24
  %tmp_171 = and i1 %tmp_169, %tmp_170
  %max_1_i_6_0_1 = select i1 %tmp_171, i13 %tmp_119, i13 %tmp_110
  %max_1_i_6_0_1_cast = zext i13 %max_1_i_6_0_1 to i64
  %image_addr_74 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_6_0_1_cast
  %image_load_74 = load float* %image_addr_74, align 4
  %image_load_26 = load float* %image_addr_26, align 4
  %image_load_26_to_int = bitcast float %image_load_26 to i32
  %tmp_172 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_26_to_int, i32 23, i32 30)
  %tmp_503 = trunc i32 %image_load_26_to_int to i23
  %max_1_i_6_0_1_to_int = bitcast float %image_load_74 to i32
  %tmp_174 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_6_0_1_to_int, i32 23, i32 30)
  %tmp_504 = trunc i32 %max_1_i_6_0_1_to_int to i23
  %notlhs38 = icmp ne i8 %tmp_172, -1
  %notrhs38 = icmp eq i23 %tmp_503, 0
  %tmp_176 = or i1 %notrhs38, %notlhs38
  %notlhs39 = icmp ne i8 %tmp_174, -1
  %notrhs39 = icmp eq i23 %tmp_504, 0
  %tmp_177 = or i1 %notrhs39, %notlhs39
  %tmp_178 = and i1 %tmp_176, %tmp_177
  %tmp_179 = fcmp ogt float %image_load_26, %image_load_74
  %tmp_180 = and i1 %tmp_178, %tmp_179
  %max_1_i_6_1 = select i1 %tmp_180, i13 %tmp_436, i13 %max_1_i_6_0_1
  %max_1_i_6_1_cast = zext i13 %max_1_i_6_1 to i64
  %image_addr_75 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_6_1_cast
  %image_load_75 = load float* %image_addr_75, align 4
  %image_load_27 = load float* %image_addr_27, align 4
  %image_load_27_to_int = bitcast float %image_load_27 to i32
  %tmp_181 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_27_to_int, i32 23, i32 30)
  %tmp_505 = trunc i32 %image_load_27_to_int to i23
  %max_1_i_6_1_to_int = bitcast float %image_load_75 to i32
  %tmp_183 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_6_1_to_int, i32 23, i32 30)
  %tmp_506 = trunc i32 %max_1_i_6_1_to_int to i23
  %notlhs40 = icmp ne i8 %tmp_181, -1
  %notrhs40 = icmp eq i23 %tmp_505, 0
  %tmp_185 = or i1 %notrhs40, %notlhs40
  %notlhs41 = icmp ne i8 %tmp_183, -1
  %notrhs41 = icmp eq i23 %tmp_506, 0
  %tmp_186 = or i1 %notrhs41, %notlhs41
  %tmp_187 = and i1 %tmp_185, %tmp_186
  %tmp_188 = fcmp ogt float %image_load_27, %image_load_75
  %tmp_189 = and i1 %tmp_187, %tmp_188
  %max_1_i_6_1_1 = select i1 %tmp_189, i13 %tmp_438, i13 %max_1_i_6_1
  %max_1_i_6_1_1_cast = zext i13 %max_1_i_6_1_1 to i64
  %image_addr_76 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_6_1_1_cast
  %image_load_76 = load float* %image_addr_76, align 4
  store float %image_load_76, float* %output_addr_6, align 4
  %image_load_28 = load float* %image_addr_28, align 4
  %image_load_29 = load float* %image_addr_29, align 4
  %image_load_29_to_int = bitcast float %image_load_29 to i32
  %tmp_190 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_29_to_int, i32 23, i32 30)
  %tmp_507 = trunc i32 %image_load_29_to_int to i23
  %image_load_28_to_int = bitcast float %image_load_28 to i32
  %tmp_192 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_28_to_int, i32 23, i32 30)
  %tmp_508 = trunc i32 %image_load_28_to_int to i23
  %notlhs42 = icmp ne i8 %tmp_190, -1
  %notrhs42 = icmp eq i23 %tmp_507, 0
  %tmp_194 = or i1 %notrhs42, %notlhs42
  %notlhs43 = icmp ne i8 %tmp_192, -1
  %notrhs43 = icmp eq i23 %tmp_508, 0
  %tmp_195 = or i1 %notrhs43, %notlhs43
  %tmp_196 = and i1 %tmp_194, %tmp_195
  %tmp_197 = fcmp ogt float %image_load_29, %image_load_28
  %tmp_198 = and i1 %tmp_196, %tmp_197
  %max_1_i_7_0_1 = select i1 %tmp_198, i13 %tmp_137, i13 %tmp_128
  %max_1_i_7_0_1_cast = zext i13 %max_1_i_7_0_1 to i64
  %image_addr_77 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_7_0_1_cast
  %image_load_77 = load float* %image_addr_77, align 4
  %image_load_30 = load float* %image_addr_30, align 4
  %image_load_30_to_int = bitcast float %image_load_30 to i32
  %tmp_199 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_30_to_int, i32 23, i32 30)
  %tmp_509 = trunc i32 %image_load_30_to_int to i23
  %max_1_i_7_0_1_to_int = bitcast float %image_load_77 to i32
  %tmp_201 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_7_0_1_to_int, i32 23, i32 30)
  %tmp_510 = trunc i32 %max_1_i_7_0_1_to_int to i23
  %notlhs44 = icmp ne i8 %tmp_199, -1
  %notrhs44 = icmp eq i23 %tmp_509, 0
  %tmp_203 = or i1 %notrhs44, %notlhs44
  %notlhs45 = icmp ne i8 %tmp_201, -1
  %notrhs45 = icmp eq i23 %tmp_510, 0
  %tmp_204 = or i1 %notrhs45, %notlhs45
  %tmp_205 = and i1 %tmp_203, %tmp_204
  %tmp_206 = fcmp ogt float %image_load_30, %image_load_77
  %tmp_207 = and i1 %tmp_205, %tmp_206
  %max_1_i_7_1 = select i1 %tmp_207, i13 %tmp_440, i13 %max_1_i_7_0_1
  %max_1_i_7_1_cast = zext i13 %max_1_i_7_1 to i64
  %image_addr_78 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_7_1_cast
  %image_load_78 = load float* %image_addr_78, align 4
  %image_load_31 = load float* %image_addr_31, align 4
  %image_load_31_to_int = bitcast float %image_load_31 to i32
  %tmp_208 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_31_to_int, i32 23, i32 30)
  %tmp_511 = trunc i32 %image_load_31_to_int to i23
  %max_1_i_7_1_to_int = bitcast float %image_load_78 to i32
  %tmp_210 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_7_1_to_int, i32 23, i32 30)
  %tmp_512 = trunc i32 %max_1_i_7_1_to_int to i23
  %notlhs46 = icmp ne i8 %tmp_208, -1
  %notrhs46 = icmp eq i23 %tmp_511, 0
  %tmp_212 = or i1 %notrhs46, %notlhs46
  %notlhs47 = icmp ne i8 %tmp_210, -1
  %notrhs47 = icmp eq i23 %tmp_512, 0
  %tmp_213 = or i1 %notrhs47, %notlhs47
  %tmp_214 = and i1 %tmp_212, %tmp_213
  %tmp_215 = fcmp ogt float %image_load_31, %image_load_78
  %tmp_216 = and i1 %tmp_214, %tmp_215
  %max_1_i_7_1_1 = select i1 %tmp_216, i13 %tmp_442, i13 %max_1_i_7_1
  %max_1_i_7_1_1_cast = zext i13 %max_1_i_7_1_1 to i64
  %image_addr_79 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_7_1_1_cast
  %image_load_79 = load float* %image_addr_79, align 4
  store float %image_load_79, float* %output_addr_7, align 4
  %image_load_32 = load float* %image_addr_32, align 4
  %image_load_33 = load float* %image_addr_33, align 4
  %image_load_33_to_int = bitcast float %image_load_33 to i32
  %tmp_217 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_33_to_int, i32 23, i32 30)
  %tmp_513 = trunc i32 %image_load_33_to_int to i23
  %image_load_32_to_int = bitcast float %image_load_32 to i32
  %tmp_219 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_32_to_int, i32 23, i32 30)
  %tmp_514 = trunc i32 %image_load_32_to_int to i23
  %notlhs48 = icmp ne i8 %tmp_217, -1
  %notrhs48 = icmp eq i23 %tmp_513, 0
  %tmp_221 = or i1 %notrhs48, %notlhs48
  %notlhs49 = icmp ne i8 %tmp_219, -1
  %notrhs49 = icmp eq i23 %tmp_514, 0
  %tmp_222 = or i1 %notrhs49, %notlhs49
  %tmp_223 = and i1 %tmp_221, %tmp_222
  %tmp_224 = fcmp ogt float %image_load_33, %image_load_32
  %tmp_225 = and i1 %tmp_223, %tmp_224
  %max_1_i_8_0_1 = select i1 %tmp_225, i13 %tmp_155, i13 %tmp_146
  %max_1_i_8_0_1_cast = zext i13 %max_1_i_8_0_1 to i64
  %image_addr_80 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_8_0_1_cast
  %image_load_80 = load float* %image_addr_80, align 4
  %image_load_34 = load float* %image_addr_34, align 4
  %image_load_34_to_int = bitcast float %image_load_34 to i32
  %tmp_226 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_34_to_int, i32 23, i32 30)
  %tmp_515 = trunc i32 %image_load_34_to_int to i23
  %max_1_i_8_0_1_to_int = bitcast float %image_load_80 to i32
  %tmp_228 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_8_0_1_to_int, i32 23, i32 30)
  %tmp_516 = trunc i32 %max_1_i_8_0_1_to_int to i23
  %notlhs50 = icmp ne i8 %tmp_226, -1
  %notrhs50 = icmp eq i23 %tmp_515, 0
  %tmp_230 = or i1 %notrhs50, %notlhs50
  %notlhs51 = icmp ne i8 %tmp_228, -1
  %notrhs51 = icmp eq i23 %tmp_516, 0
  %tmp_231 = or i1 %notrhs51, %notlhs51
  %tmp_232 = and i1 %tmp_230, %tmp_231
  %tmp_233 = fcmp ogt float %image_load_34, %image_load_80
  %tmp_234 = and i1 %tmp_232, %tmp_233
  %max_1_i_8_1 = select i1 %tmp_234, i13 %tmp_444, i13 %max_1_i_8_0_1
  %max_1_i_8_1_cast = zext i13 %max_1_i_8_1 to i64
  %image_addr_81 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_8_1_cast
  %image_load_81 = load float* %image_addr_81, align 4
  %image_load_35 = load float* %image_addr_35, align 4
  %image_load_35_to_int = bitcast float %image_load_35 to i32
  %tmp_235 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_35_to_int, i32 23, i32 30)
  %tmp_517 = trunc i32 %image_load_35_to_int to i23
  %max_1_i_8_1_to_int = bitcast float %image_load_81 to i32
  %tmp_237 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_8_1_to_int, i32 23, i32 30)
  %tmp_518 = trunc i32 %max_1_i_8_1_to_int to i23
  %notlhs52 = icmp ne i8 %tmp_235, -1
  %notrhs52 = icmp eq i23 %tmp_517, 0
  %tmp_239 = or i1 %notrhs52, %notlhs52
  %notlhs53 = icmp ne i8 %tmp_237, -1
  %notrhs53 = icmp eq i23 %tmp_518, 0
  %tmp_240 = or i1 %notrhs53, %notlhs53
  %tmp_241 = and i1 %tmp_239, %tmp_240
  %tmp_242 = fcmp ogt float %image_load_35, %image_load_81
  %tmp_243 = and i1 %tmp_241, %tmp_242
  %max_1_i_8_1_1 = select i1 %tmp_243, i13 %tmp_446, i13 %max_1_i_8_1
  %max_1_i_8_1_1_cast = zext i13 %max_1_i_8_1_1 to i64
  %image_addr_82 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_8_1_1_cast
  %image_load_82 = load float* %image_addr_82, align 4
  store float %image_load_82, float* %output_addr_8, align 4
  %image_load_36 = load float* %image_addr_36, align 4
  %image_load_37 = load float* %image_addr_37, align 4
  %image_load_37_to_int = bitcast float %image_load_37 to i32
  %tmp_244 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_37_to_int, i32 23, i32 30)
  %tmp_519 = trunc i32 %image_load_37_to_int to i23
  %image_load_36_to_int = bitcast float %image_load_36 to i32
  %tmp_246 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_36_to_int, i32 23, i32 30)
  %tmp_520 = trunc i32 %image_load_36_to_int to i23
  %notlhs54 = icmp ne i8 %tmp_244, -1
  %notrhs54 = icmp eq i23 %tmp_519, 0
  %tmp_248 = or i1 %notrhs54, %notlhs54
  %notlhs55 = icmp ne i8 %tmp_246, -1
  %notrhs55 = icmp eq i23 %tmp_520, 0
  %tmp_249 = or i1 %notrhs55, %notlhs55
  %tmp_250 = and i1 %tmp_248, %tmp_249
  %tmp_251 = fcmp ogt float %image_load_37, %image_load_36
  %tmp_252 = and i1 %tmp_250, %tmp_251
  %max_1_i_9_0_1 = select i1 %tmp_252, i13 %tmp_173, i13 %tmp_164
  %max_1_i_9_0_1_cast = zext i13 %max_1_i_9_0_1 to i64
  %image_addr_83 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_9_0_1_cast
  %image_load_83 = load float* %image_addr_83, align 4
  %image_load_38 = load float* %image_addr_38, align 4
  %image_load_38_to_int = bitcast float %image_load_38 to i32
  %tmp_253 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_38_to_int, i32 23, i32 30)
  %tmp_521 = trunc i32 %image_load_38_to_int to i23
  %max_1_i_9_0_1_to_int = bitcast float %image_load_83 to i32
  %tmp_255 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_9_0_1_to_int, i32 23, i32 30)
  %tmp_522 = trunc i32 %max_1_i_9_0_1_to_int to i23
  %notlhs56 = icmp ne i8 %tmp_253, -1
  %notrhs56 = icmp eq i23 %tmp_521, 0
  %tmp_257 = or i1 %notrhs56, %notlhs56
  %notlhs57 = icmp ne i8 %tmp_255, -1
  %notrhs57 = icmp eq i23 %tmp_522, 0
  %tmp_258 = or i1 %notrhs57, %notlhs57
  %tmp_259 = and i1 %tmp_257, %tmp_258
  %tmp_260 = fcmp ogt float %image_load_38, %image_load_83
  %tmp_261 = and i1 %tmp_259, %tmp_260
  %max_1_i_9_1 = select i1 %tmp_261, i13 %tmp_448, i13 %max_1_i_9_0_1
  %max_1_i_9_1_cast = zext i13 %max_1_i_9_1 to i64
  %image_addr_84 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_9_1_cast
  %image_load_84 = load float* %image_addr_84, align 4
  %image_load_39 = load float* %image_addr_39, align 4
  %image_load_39_to_int = bitcast float %image_load_39 to i32
  %tmp_262 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_39_to_int, i32 23, i32 30)
  %tmp_523 = trunc i32 %image_load_39_to_int to i23
  %max_1_i_9_1_to_int = bitcast float %image_load_84 to i32
  %tmp_264 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_9_1_to_int, i32 23, i32 30)
  %tmp_524 = trunc i32 %max_1_i_9_1_to_int to i23
  %notlhs58 = icmp ne i8 %tmp_262, -1
  %notrhs58 = icmp eq i23 %tmp_523, 0
  %tmp_266 = or i1 %notrhs58, %notlhs58
  %notlhs59 = icmp ne i8 %tmp_264, -1
  %notrhs59 = icmp eq i23 %tmp_524, 0
  %tmp_267 = or i1 %notrhs59, %notlhs59
  %tmp_268 = and i1 %tmp_266, %tmp_267
  %tmp_269 = fcmp ogt float %image_load_39, %image_load_84
  %tmp_270 = and i1 %tmp_268, %tmp_269
  %max_1_i_9_1_1 = select i1 %tmp_270, i13 %tmp_450, i13 %max_1_i_9_1
  %max_1_i_9_1_1_cast = zext i13 %max_1_i_9_1_1 to i64
  %image_addr_85 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_9_1_1_cast
  %image_load_85 = load float* %image_addr_85, align 4
  store float %image_load_85, float* %output_addr_9, align 4
  %image_load_40 = load float* %image_addr_40, align 4
  %image_load_41 = load float* %image_addr_41, align 4
  %image_load_41_to_int = bitcast float %image_load_41 to i32
  %tmp_271 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_41_to_int, i32 23, i32 30)
  %tmp_525 = trunc i32 %image_load_41_to_int to i23
  %image_load_40_to_int = bitcast float %image_load_40 to i32
  %tmp_273 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_40_to_int, i32 23, i32 30)
  %tmp_526 = trunc i32 %image_load_40_to_int to i23
  %notlhs60 = icmp ne i8 %tmp_271, -1
  %notrhs60 = icmp eq i23 %tmp_525, 0
  %tmp_275 = or i1 %notrhs60, %notlhs60
  %notlhs61 = icmp ne i8 %tmp_273, -1
  %notrhs61 = icmp eq i23 %tmp_526, 0
  %tmp_276 = or i1 %notrhs61, %notlhs61
  %tmp_277 = and i1 %tmp_275, %tmp_276
  %tmp_278 = fcmp ogt float %image_load_41, %image_load_40
  %tmp_279 = and i1 %tmp_277, %tmp_278
  %max_1_i_10_0_1 = select i1 %tmp_279, i13 %tmp_191, i13 %tmp_182
  %max_1_i_10_0_1_cast = zext i13 %max_1_i_10_0_1 to i64
  %image_addr_86 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_10_0_1_cast
  %image_load_86 = load float* %image_addr_86, align 4
  %image_load_42 = load float* %image_addr_42, align 4
  %image_load_42_to_int = bitcast float %image_load_42 to i32
  %tmp_280 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_42_to_int, i32 23, i32 30)
  %tmp_527 = trunc i32 %image_load_42_to_int to i23
  %max_1_i_10_0_1_to_in = bitcast float %image_load_86 to i32
  %tmp_282 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_10_0_1_to_in, i32 23, i32 30)
  %tmp_528 = trunc i32 %max_1_i_10_0_1_to_in to i23
  %notlhs62 = icmp ne i8 %tmp_280, -1
  %notrhs62 = icmp eq i23 %tmp_527, 0
  %tmp_284 = or i1 %notrhs62, %notlhs62
  %notlhs63 = icmp ne i8 %tmp_282, -1
  %notrhs63 = icmp eq i23 %tmp_528, 0
  %tmp_285 = or i1 %notrhs63, %notlhs63
  %tmp_286 = and i1 %tmp_284, %tmp_285
  %tmp_287 = fcmp ogt float %image_load_42, %image_load_86
  %tmp_288 = and i1 %tmp_286, %tmp_287
  %max_1_i_10_1 = select i1 %tmp_288, i13 %tmp_452, i13 %max_1_i_10_0_1
  %max_1_i_10_1_cast = zext i13 %max_1_i_10_1 to i64
  %image_addr_87 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_10_1_cast
  %image_load_87 = load float* %image_addr_87, align 4
  %image_load_43 = load float* %image_addr_43, align 4
  %image_load_43_to_int = bitcast float %image_load_43 to i32
  %tmp_289 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_43_to_int, i32 23, i32 30)
  %tmp_529 = trunc i32 %image_load_43_to_int to i23
  %max_1_i_10_1_to_int = bitcast float %image_load_87 to i32
  %tmp_291 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_10_1_to_int, i32 23, i32 30)
  %tmp_530 = trunc i32 %max_1_i_10_1_to_int to i23
  %notlhs64 = icmp ne i8 %tmp_289, -1
  %notrhs64 = icmp eq i23 %tmp_529, 0
  %tmp_293 = or i1 %notrhs64, %notlhs64
  %notlhs65 = icmp ne i8 %tmp_291, -1
  %notrhs65 = icmp eq i23 %tmp_530, 0
  %tmp_294 = or i1 %notrhs65, %notlhs65
  %tmp_295 = and i1 %tmp_293, %tmp_294
  %tmp_296 = fcmp ogt float %image_load_43, %image_load_87
  %tmp_297 = and i1 %tmp_295, %tmp_296
  %max_1_i_10_1_1 = select i1 %tmp_297, i13 %tmp_454, i13 %max_1_i_10_1
  %max_1_i_10_1_1_cast = zext i13 %max_1_i_10_1_1 to i64
  %image_addr_88 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_10_1_1_cast
  %image_load_88 = load float* %image_addr_88, align 4
  store float %image_load_88, float* %output_addr_10, align 4
  %image_load_44 = load float* %image_addr_44, align 4
  %image_load_45 = load float* %image_addr_45, align 4
  %image_load_45_to_int = bitcast float %image_load_45 to i32
  %tmp_298 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_45_to_int, i32 23, i32 30)
  %tmp_531 = trunc i32 %image_load_45_to_int to i23
  %image_load_44_to_int = bitcast float %image_load_44 to i32
  %tmp_300 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_44_to_int, i32 23, i32 30)
  %tmp_532 = trunc i32 %image_load_44_to_int to i23
  %notlhs66 = icmp ne i8 %tmp_298, -1
  %notrhs66 = icmp eq i23 %tmp_531, 0
  %tmp_302 = or i1 %notrhs66, %notlhs66
  %notlhs67 = icmp ne i8 %tmp_300, -1
  %notrhs67 = icmp eq i23 %tmp_532, 0
  %tmp_303 = or i1 %notrhs67, %notlhs67
  %tmp_304 = and i1 %tmp_302, %tmp_303
  %tmp_305 = fcmp ogt float %image_load_45, %image_load_44
  %tmp_306 = and i1 %tmp_304, %tmp_305
  %max_1_i_11_0_1 = select i1 %tmp_306, i13 %tmp_209, i13 %tmp_200
  %max_1_i_11_0_1_cast = zext i13 %max_1_i_11_0_1 to i64
  %image_addr_89 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_11_0_1_cast
  %image_load_89 = load float* %image_addr_89, align 4
  %image_load_46 = load float* %image_addr_46, align 4
  %image_load_46_to_int = bitcast float %image_load_46 to i32
  %tmp_307 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_46_to_int, i32 23, i32 30)
  %tmp_533 = trunc i32 %image_load_46_to_int to i23
  %max_1_i_11_0_1_to_in = bitcast float %image_load_89 to i32
  %tmp_309 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_11_0_1_to_in, i32 23, i32 30)
  %tmp_534 = trunc i32 %max_1_i_11_0_1_to_in to i23
  %notlhs68 = icmp ne i8 %tmp_307, -1
  %notrhs68 = icmp eq i23 %tmp_533, 0
  %tmp_311 = or i1 %notrhs68, %notlhs68
  %notlhs69 = icmp ne i8 %tmp_309, -1
  %notrhs69 = icmp eq i23 %tmp_534, 0
  %tmp_312 = or i1 %notrhs69, %notlhs69
  %tmp_313 = and i1 %tmp_311, %tmp_312
  %tmp_314 = fcmp ogt float %image_load_46, %image_load_89
  %tmp_315 = and i1 %tmp_313, %tmp_314
  %max_1_i_11_1 = select i1 %tmp_315, i13 %tmp_456, i13 %max_1_i_11_0_1
  %max_1_i_11_1_cast = zext i13 %max_1_i_11_1 to i64
  %image_addr_90 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_11_1_cast
  %image_load_90 = load float* %image_addr_90, align 4
  %image_load_47 = load float* %image_addr_47, align 4
  %image_load_47_to_int = bitcast float %image_load_47 to i32
  %tmp_316 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_47_to_int, i32 23, i32 30)
  %tmp_535 = trunc i32 %image_load_47_to_int to i23
  %max_1_i_11_1_to_int = bitcast float %image_load_90 to i32
  %tmp_318 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_11_1_to_int, i32 23, i32 30)
  %tmp_536 = trunc i32 %max_1_i_11_1_to_int to i23
  %notlhs70 = icmp ne i8 %tmp_316, -1
  %notrhs70 = icmp eq i23 %tmp_535, 0
  %tmp_320 = or i1 %notrhs70, %notlhs70
  %notlhs71 = icmp ne i8 %tmp_318, -1
  %notrhs71 = icmp eq i23 %tmp_536, 0
  %tmp_321 = or i1 %notrhs71, %notlhs71
  %tmp_322 = and i1 %tmp_320, %tmp_321
  %tmp_323 = fcmp ogt float %image_load_47, %image_load_90
  %tmp_324 = and i1 %tmp_322, %tmp_323
  %max_1_i_11_1_1 = select i1 %tmp_324, i13 %tmp_458, i13 %max_1_i_11_1
  %max_1_i_11_1_1_cast = zext i13 %max_1_i_11_1_1 to i64
  %image_addr_91 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_11_1_1_cast
  %image_load_91 = load float* %image_addr_91, align 4
  store float %image_load_91, float* %output_addr_11, align 4
  %image_load_48 = load float* %image_addr_48, align 4
  %image_load_49 = load float* %image_addr_49, align 4
  %image_load_49_to_int = bitcast float %image_load_49 to i32
  %tmp_325 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_49_to_int, i32 23, i32 30)
  %tmp_537 = trunc i32 %image_load_49_to_int to i23
  %image_load_48_to_int = bitcast float %image_load_48 to i32
  %tmp_327 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_48_to_int, i32 23, i32 30)
  %tmp_538 = trunc i32 %image_load_48_to_int to i23
  %notlhs72 = icmp ne i8 %tmp_325, -1
  %notrhs72 = icmp eq i23 %tmp_537, 0
  %tmp_329 = or i1 %notrhs72, %notlhs72
  %notlhs73 = icmp ne i8 %tmp_327, -1
  %notrhs73 = icmp eq i23 %tmp_538, 0
  %tmp_330 = or i1 %notrhs73, %notlhs73
  %tmp_331 = and i1 %tmp_329, %tmp_330
  %tmp_332 = fcmp ogt float %image_load_49, %image_load_48
  %tmp_333 = and i1 %tmp_331, %tmp_332
  %max_1_i_12_0_1 = select i1 %tmp_333, i13 %tmp_227, i13 %tmp_218
  %max_1_i_12_0_1_cast = zext i13 %max_1_i_12_0_1 to i64
  %image_addr_92 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_12_0_1_cast
  %image_load_92 = load float* %image_addr_92, align 4
  %image_load_50 = load float* %image_addr_50, align 4
  %image_load_50_to_int = bitcast float %image_load_50 to i32
  %tmp_334 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_50_to_int, i32 23, i32 30)
  %tmp_539 = trunc i32 %image_load_50_to_int to i23
  %max_1_i_12_0_1_to_in = bitcast float %image_load_92 to i32
  %tmp_336 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_12_0_1_to_in, i32 23, i32 30)
  %tmp_540 = trunc i32 %max_1_i_12_0_1_to_in to i23
  %notlhs74 = icmp ne i8 %tmp_334, -1
  %notrhs74 = icmp eq i23 %tmp_539, 0
  %tmp_338 = or i1 %notrhs74, %notlhs74
  %notlhs75 = icmp ne i8 %tmp_336, -1
  %notrhs75 = icmp eq i23 %tmp_540, 0
  %tmp_339 = or i1 %notrhs75, %notlhs75
  %tmp_340 = and i1 %tmp_338, %tmp_339
  %tmp_341 = fcmp ogt float %image_load_50, %image_load_92
  %tmp_342 = and i1 %tmp_340, %tmp_341
  %max_1_i_12_1 = select i1 %tmp_342, i13 %tmp_460, i13 %max_1_i_12_0_1
  %max_1_i_12_1_cast = zext i13 %max_1_i_12_1 to i64
  %image_addr_93 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_12_1_cast
  %image_load_93 = load float* %image_addr_93, align 4
  %image_load_51 = load float* %image_addr_51, align 4
  %image_load_51_to_int = bitcast float %image_load_51 to i32
  %tmp_343 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_51_to_int, i32 23, i32 30)
  %tmp_541 = trunc i32 %image_load_51_to_int to i23
  %max_1_i_12_1_to_int = bitcast float %image_load_93 to i32
  %tmp_345 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_12_1_to_int, i32 23, i32 30)
  %tmp_542 = trunc i32 %max_1_i_12_1_to_int to i23
  %notlhs76 = icmp ne i8 %tmp_343, -1
  %notrhs76 = icmp eq i23 %tmp_541, 0
  %tmp_347 = or i1 %notrhs76, %notlhs76
  %notlhs77 = icmp ne i8 %tmp_345, -1
  %notrhs77 = icmp eq i23 %tmp_542, 0
  %tmp_348 = or i1 %notrhs77, %notlhs77
  %tmp_349 = and i1 %tmp_347, %tmp_348
  %tmp_350 = fcmp ogt float %image_load_51, %image_load_93
  %tmp_351 = and i1 %tmp_349, %tmp_350
  %max_1_i_12_1_1 = select i1 %tmp_351, i13 %tmp_462, i13 %max_1_i_12_1
  %max_1_i_12_1_1_cast = zext i13 %max_1_i_12_1_1 to i64
  %image_addr_94 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_12_1_1_cast
  %image_load_94 = load float* %image_addr_94, align 4
  store float %image_load_94, float* %output_addr_12, align 4
  %image_load_52 = load float* %image_addr_52, align 4
  %image_load_53 = load float* %image_addr_53, align 4
  %image_load_53_to_int = bitcast float %image_load_53 to i32
  %tmp_352 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_53_to_int, i32 23, i32 30)
  %tmp_543 = trunc i32 %image_load_53_to_int to i23
  %image_load_52_to_int = bitcast float %image_load_52 to i32
  %tmp_354 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_52_to_int, i32 23, i32 30)
  %tmp_544 = trunc i32 %image_load_52_to_int to i23
  %notlhs78 = icmp ne i8 %tmp_352, -1
  %notrhs78 = icmp eq i23 %tmp_543, 0
  %tmp_356 = or i1 %notrhs78, %notlhs78
  %notlhs79 = icmp ne i8 %tmp_354, -1
  %notrhs79 = icmp eq i23 %tmp_544, 0
  %tmp_357 = or i1 %notrhs79, %notlhs79
  %tmp_358 = and i1 %tmp_356, %tmp_357
  %tmp_359 = fcmp ogt float %image_load_53, %image_load_52
  %tmp_360 = and i1 %tmp_358, %tmp_359
  %max_1_i_13_0_1 = select i1 %tmp_360, i13 %tmp_245, i13 %tmp_236
  %max_1_i_13_0_1_cast = zext i13 %max_1_i_13_0_1 to i64
  %image_addr_95 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_13_0_1_cast
  %image_load_95 = load float* %image_addr_95, align 4
  %image_load_54 = load float* %image_addr_54, align 4
  %image_load_54_to_int = bitcast float %image_load_54 to i32
  %tmp_361 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_54_to_int, i32 23, i32 30)
  %tmp_545 = trunc i32 %image_load_54_to_int to i23
  %max_1_i_13_0_1_to_in = bitcast float %image_load_95 to i32
  %tmp_363 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_13_0_1_to_in, i32 23, i32 30)
  %tmp_546 = trunc i32 %max_1_i_13_0_1_to_in to i23
  %notlhs80 = icmp ne i8 %tmp_361, -1
  %notrhs80 = icmp eq i23 %tmp_545, 0
  %tmp_365 = or i1 %notrhs80, %notlhs80
  %notlhs81 = icmp ne i8 %tmp_363, -1
  %notrhs81 = icmp eq i23 %tmp_546, 0
  %tmp_366 = or i1 %notrhs81, %notlhs81
  %tmp_367 = and i1 %tmp_365, %tmp_366
  %tmp_368 = fcmp ogt float %image_load_54, %image_load_95
  %tmp_369 = and i1 %tmp_367, %tmp_368
  %max_1_i_13_1 = select i1 %tmp_369, i13 %tmp_464, i13 %max_1_i_13_0_1
  %max_1_i_13_1_cast = zext i13 %max_1_i_13_1 to i64
  %image_addr_96 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_13_1_cast
  %image_load_96 = load float* %image_addr_96, align 4
  %image_load_55 = load float* %image_addr_55, align 4
  %image_load_55_to_int = bitcast float %image_load_55 to i32
  %tmp_370 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %image_load_55_to_int, i32 23, i32 30)
  %tmp_547 = trunc i32 %image_load_55_to_int to i23
  %max_1_i_13_1_to_int = bitcast float %image_load_96 to i32
  %tmp_372 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %max_1_i_13_1_to_int, i32 23, i32 30)
  %tmp_548 = trunc i32 %max_1_i_13_1_to_int to i23
  %notlhs82 = icmp ne i8 %tmp_370, -1
  %notrhs82 = icmp eq i23 %tmp_547, 0
  %tmp_374 = or i1 %notrhs82, %notlhs82
  %notlhs83 = icmp ne i8 %tmp_372, -1
  %notrhs83 = icmp eq i23 %tmp_548, 0
  %tmp_375 = or i1 %notrhs83, %notlhs83
  %tmp_376 = and i1 %tmp_374, %tmp_375
  %tmp_377 = fcmp ogt float %image_load_55, %image_load_96
  %tmp_378 = and i1 %tmp_376, %tmp_377
  %max_1_i_13_1_1 = select i1 %tmp_378, i13 %tmp_466, i13 %max_1_i_13_1
  %max_1_i_13_1_1_cast = zext i13 %max_1_i_13_1_1 to i64
  %image_addr_97 = getelementptr [6728 x float]* %image_r, i64 0, i64 %max_1_i_13_1_1_cast
  %image_load_97 = load float* %image_addr_97, align 4
  store float %image_load_97, float* %output_addr_13, align 4
  %empty_26 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str2, i32 %tmp_1) nounwind
  %i = add i5 2, %i_0_i_i_mid2
  br label %0

; <label>:0                                       ; preds = %.reset, %newFuncRoot
  %indvar_flatten = phi i7 [ 0, %newFuncRoot ], [ %indvar_flatten_next, %.reset ]
  %channel_0_i_i = phi i4 [ 0, %newFuncRoot ], [ %tmp_i_mid2_v, %.reset ]
  %i_0_i_i = phi i5 [ 0, %newFuncRoot ], [ %i, %.reset ]
  %exitcond_flatten = icmp eq i7 %indvar_flatten, -16
  %indvar_flatten_next = add i7 %indvar_flatten, 1
  br i1 %exitcond_flatten, label %pool_.exit.exitStub, label %.reset
}

!opencl.kernels = !{!0}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"float [14][8]*", metadata !"float [29][8]*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"output", metadata !"image"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{metadata !8}
!8 = metadata !{i32 0, i32 31, metadata !9}
!9 = metadata !{metadata !10}
!10 = metadata !{metadata !"output", metadata !11, metadata !"float", i32 0, i32 31}
!11 = metadata !{metadata !12, metadata !12, metadata !13}
!12 = metadata !{i32 0, i32 13, i32 1}
!13 = metadata !{i32 0, i32 7, i32 1}
!14 = metadata !{metadata !15}
!15 = metadata !{i32 0, i32 31, metadata !16}
!16 = metadata !{metadata !17}
!17 = metadata !{metadata !"image", metadata !18, metadata !"float", i32 0, i32 31}
!18 = metadata !{metadata !19, metadata !19, metadata !13}
!19 = metadata !{i32 0, i32 28, i32 1}
