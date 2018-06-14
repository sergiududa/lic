#include "conv_layer1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_layer1::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[3];
}

void conv_layer1::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[4];
}

void conv_layer1::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[5];
}

void conv_layer1::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[6];
}

void conv_layer1::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[7];
}

void conv_layer1::thread_ap_CS_fsm_pp0_stage5() {
    ap_CS_fsm_pp0_stage5 = ap_CS_fsm.read()[8];
}

void conv_layer1::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[9];
}

void conv_layer1::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[10];
}

void conv_layer1::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void conv_layer1::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void conv_layer1::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[11];
}

void conv_layer1::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void conv_layer1::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_pp0_stage1_01001() {
    ap_block_pp0_stage1_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read())))) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter2_exitcond_flatten_reg_6831.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())));
}

void conv_layer1::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read())))) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter2_exitcond_flatten_reg_6831.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())));
}

void conv_layer1::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  ((esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read())) || 
   (esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
    esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read())))) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter2_exitcond_flatten_reg_6831.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())));
}

void conv_layer1::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_pp0_stage2_01001() {
    ap_block_pp0_stage2_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_pp0_stage3_01001() {
    ap_block_pp0_stage3_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read())));
}

void conv_layer1::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read())));
}

void conv_layer1::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read())));
}

void conv_layer1::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_pp0_stage4_01001() {
    ap_block_pp0_stage4_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage5() {
    ap_block_pp0_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_pp0_stage5_01001() {
    ap_block_pp0_stage5_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read())));
}

void conv_layer1::thread_ap_block_pp0_stage5_11001() {
    ap_block_pp0_stage5_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read())));
}

void conv_layer1::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read())));
}

void conv_layer1::thread_ap_block_pp0_stage6() {
    ap_block_pp0_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_pp0_stage6_01001() {
    ap_block_pp0_stage6_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage6_11001() {
    ap_block_pp0_stage6_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_pp0_stage7() {
    ap_block_pp0_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_pp0_stage7_01001() {
    ap_block_pp0_stage7_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read())));
}

void conv_layer1::thread_ap_block_pp0_stage7_11001() {
    ap_block_pp0_stage7_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read())));
}

void conv_layer1::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read())));
}

void conv_layer1::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void conv_layer1::thread_ap_block_state10_pp0_stage6_iter0() {
    ap_block_state10_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_state11_pp0_stage7_iter0() {
    ap_block_state11_pp0_stage7_iter0 = (esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()));
}

void conv_layer1::thread_ap_block_state12_pp0_stage0_iter1() {
    ap_block_state12_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_state13_pp0_stage1_iter1() {
    ap_block_state13_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_state14_pp0_stage2_iter1() {
    ap_block_state14_pp0_stage2_iter1 = (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_state15_pp0_stage3_iter1() {
    ap_block_state15_pp0_stage3_iter1 = (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_state16_pp0_stage4_iter1() {
    ap_block_state16_pp0_stage4_iter1 = (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_state17_pp0_stage5_iter1() {
    ap_block_state17_pp0_stage5_iter1 = (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_state18_pp0_stage6_iter1() {
    ap_block_state18_pp0_stage6_iter1 = (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_state19_pp0_stage7_iter1() {
    ap_block_state19_pp0_stage7_iter1 = (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_state20_pp0_stage0_iter2() {
    ap_block_state20_pp0_stage0_iter2 = (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_state21_pp0_stage1_iter2() {
    ap_block_state21_pp0_stage1_iter2 = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter2_exitcond_flatten_reg_6831.read()) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_V_full_n.read()));
}

void conv_layer1::thread_ap_block_state3() {
    ap_block_state3 = (esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()));
}

void conv_layer1::thread_ap_block_state4_pp0_stage0_iter0() {
    ap_block_state4_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_state5_pp0_stage1_iter0() {
    ap_block_state5_pp0_stage1_iter0 = ((esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read())));
}

void conv_layer1::thread_ap_block_state6_pp0_stage2_iter0() {
    ap_block_state6_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_state7_pp0_stage3_iter0() {
    ap_block_state7_pp0_stage3_iter0 = (esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()));
}

void conv_layer1::thread_ap_block_state8_pp0_stage4_iter0() {
    ap_block_state8_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void conv_layer1::thread_ap_block_state9_pp0_stage5_iter0() {
    ap_block_state9_pp0_stage5_iter0 = (esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()));
}

void conv_layer1::thread_ap_condition_pp0_exit_iter0_state4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_fu_2223_p2.read())) {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_0;
    }
}

void conv_layer1::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void conv_layer1::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void conv_layer1::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void conv_layer1::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_ap_phi_mux_i_1_phi_fu_2181_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0))) {
        ap_phi_mux_i_1_phi_fu_2181_p4 = i_1_mid2_reg_6844.read();
    } else {
        ap_phi_mux_i_1_phi_fu_2181_p4 = i_1_reg_2177.read();
    }
}

void conv_layer1::thread_ap_phi_mux_indvar_flatten_phi_fu_2170_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0))) {
        ap_phi_mux_indvar_flatten_phi_fu_2170_p4 = indvar_flatten_next_reg_6835.read();
    } else {
        ap_phi_mux_indvar_flatten_phi_fu_2170_p4 = indvar_flatten_reg_2166.read();
    }
}

void conv_layer1::thread_ap_phi_mux_j_phi_fu_2192_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0))) {
        ap_phi_mux_j_phi_fu_2192_p4 = j_5_reg_6849.read();
    } else {
        ap_phi_mux_j_phi_fu_2192_p4 = j_reg_2188.read();
    }
}

void conv_layer1::thread_ap_predicate_op1477_read_state7() {
    ap_predicate_op1477_read_state7 = (esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_reg_6854.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_reg_6840.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_1_reg_7087.read()));
}

void conv_layer1::thread_ap_predicate_op1951_read_state9() {
    ap_predicate_op1951_read_state9 = (esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_reg_6854.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_reg_6840.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_2_reg_7211.read()));
}

void conv_layer1::thread_ap_predicate_op2441_read_state11() {
    ap_predicate_op2441_read_state11 = (esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_reg_6854.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_reg_6840.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_3_reg_7355.read()));
}

void conv_layer1::thread_ap_predicate_op795_read_state5() {
    ap_predicate_op795_read_state5 = (esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_reg_6854.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_reg_6840.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_13_reg_6858.read()));
}

void conv_layer1::thread_ap_predicate_op981_read_state5() {
    ap_predicate_op981_read_state5 = (esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_6854.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_i4_reg_6862.read()));
}

void conv_layer1::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_0_V_address0() {
    conv_buff_val_0_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_0_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_0_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_0_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_0_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_10_V_address0() {
    conv_buff_val_10_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_10_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_10_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_10_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_10_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_10_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_10_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_11_V_address0() {
    conv_buff_val_11_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_11_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_11_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_11_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_11_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_11_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_11_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_12_V_address0() {
    conv_buff_val_12_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_12_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_12_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_12_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_12_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_12_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_12_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_13_V_address0() {
    conv_buff_val_13_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_13_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_13_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_13_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_13_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_13_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_13_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_14_V_address0() {
    conv_buff_val_14_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_14_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_14_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_14_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_14_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_14_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_14_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_15_V_address0() {
    conv_buff_val_15_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_15_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_15_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_15_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_15_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_15_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_15_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_16_V_address0() {
    conv_buff_val_16_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_16_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_16_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_16_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_16_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_16_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_16_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_17_V_address0() {
    conv_buff_val_17_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_17_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_17_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_17_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_17_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_17_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_17_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_18_V_address0() {
    conv_buff_val_18_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_18_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_18_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_18_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_18_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_18_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_18_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_19_V_address0() {
    conv_buff_val_19_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_19_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_19_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_19_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_19_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_19_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_19_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_1_V_address0() {
    conv_buff_val_1_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_1_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_1_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_1_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_1_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_20_V_address0() {
    conv_buff_val_20_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_20_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_20_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_20_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_20_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_20_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_20_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_21_V_address0() {
    conv_buff_val_21_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_21_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_21_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_21_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_21_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_21_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_21_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_22_V_address0() {
    conv_buff_val_22_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_22_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_22_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_22_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_22_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_22_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_22_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_23_V_address0() {
    conv_buff_val_23_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_23_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_23_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_23_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_23_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_23_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_23_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_24_V_address0() {
    conv_buff_val_24_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_24_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_24_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_24_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_24_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_24_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_24_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_25_V_address0() {
    conv_buff_val_25_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_25_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_25_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_25_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_25_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_25_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_25_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_26_V_address0() {
    conv_buff_val_26_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_26_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_26_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_26_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_26_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_26_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_26_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_27_V_address0() {
    conv_buff_val_27_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_27_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_27_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_27_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_27_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_27_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_27_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_28_V_address0() {
    conv_buff_val_28_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_28_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_28_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_28_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_28_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_28_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_28_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_29_V_address0() {
    conv_buff_val_29_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_29_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_29_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_29_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_29_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_29_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_29_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_2_V_address0() {
    conv_buff_val_2_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_2_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_2_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_2_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_2_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_30_V_address0() {
    conv_buff_val_30_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_30_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_30_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_30_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_30_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_30_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_30_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_31_V_address0() {
    conv_buff_val_31_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_31_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_31_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_31_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_31_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_31_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_31_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_32_V_address0() {
    conv_buff_val_32_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_32_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_32_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_32_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_32_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_32_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_32_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_33_V_address0() {
    conv_buff_val_33_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_33_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_33_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_33_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_33_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_33_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_33_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_34_V_address0() {
    conv_buff_val_34_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_34_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_34_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_34_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_34_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_34_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_34_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_35_V_address0() {
    conv_buff_val_35_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_35_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_35_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_35_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_35_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_35_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_35_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_36_V_address0() {
    conv_buff_val_36_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_36_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_36_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_36_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_36_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_36_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_36_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_37_V_address0() {
    conv_buff_val_37_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_37_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_37_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_37_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_37_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_37_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_37_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_38_V_address0() {
    conv_buff_val_38_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_38_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_38_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_38_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_38_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_38_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_38_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_39_V_address0() {
    conv_buff_val_39_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_39_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_39_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_39_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_39_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_39_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_39_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_3_V_address0() {
    conv_buff_val_3_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_3_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_3_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_3_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_3_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_40_V_address0() {
    conv_buff_val_40_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_40_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_40_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_40_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_40_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_40_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_40_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_41_V_address0() {
    conv_buff_val_41_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_41_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_41_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_41_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_41_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_41_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_41_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_42_V_address0() {
    conv_buff_val_42_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_42_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_42_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_42_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_42_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_42_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_42_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_43_V_address0() {
    conv_buff_val_43_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_43_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_43_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_43_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_43_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_43_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_43_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_44_V_address0() {
    conv_buff_val_44_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_44_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_44_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_44_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_44_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_44_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_44_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_45_V_address0() {
    conv_buff_val_45_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_45_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_45_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_45_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_45_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_45_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_45_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_46_V_address0() {
    conv_buff_val_46_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_46_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_46_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_46_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_46_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_46_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_46_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_47_V_address0() {
    conv_buff_val_47_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_47_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_47_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_47_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_47_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_47_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_47_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_48_V_address0() {
    conv_buff_val_48_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_48_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_48_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_48_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_48_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_48_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_48_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_49_V_address0() {
    conv_buff_val_49_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_49_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_49_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_49_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_49_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_49_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_49_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_4_V_address0() {
    conv_buff_val_4_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_4_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_4_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_4_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_4_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_4_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_50_V_address0() {
    conv_buff_val_50_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_50_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_50_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_50_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_50_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_50_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_50_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_51_V_address0() {
    conv_buff_val_51_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_51_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_51_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_51_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_51_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_51_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_51_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_52_V_address0() {
    conv_buff_val_52_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_52_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_52_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_52_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_52_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_52_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_52_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_53_V_address0() {
    conv_buff_val_53_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_53_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_53_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_53_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_53_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_53_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_53_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_54_V_address0() {
    conv_buff_val_54_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_54_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_54_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_54_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_54_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_54_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_54_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_55_V_address0() {
    conv_buff_val_55_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_55_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_55_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_55_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_55_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_55_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_55_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_56_V_address0() {
    conv_buff_val_56_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_56_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_56_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_56_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_56_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_56_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_56_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_57_V_address0() {
    conv_buff_val_57_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_57_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_57_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_57_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_57_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_57_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_57_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_58_V_address0() {
    conv_buff_val_58_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_58_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_58_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_58_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_58_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_58_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_58_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_59_V_address0() {
    conv_buff_val_59_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_59_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_59_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_59_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_59_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_59_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_59_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_5_V_address0() {
    conv_buff_val_5_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_5_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_5_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_5_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_5_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_5_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_60_V_address0() {
    conv_buff_val_60_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_60_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_60_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_60_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_60_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_60_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_60_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_61_V_address0() {
    conv_buff_val_61_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_61_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_61_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_61_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_61_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_61_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_61_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_62_V_address0() {
    conv_buff_val_62_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_62_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_62_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_62_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_62_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_62_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_62_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_63_V_address0() {
    conv_buff_val_63_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_63_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_63_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_63_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_63_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_63_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_63_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_64_V_address0() {
    conv_buff_val_64_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_64_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_64_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_64_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_64_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_64_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_64_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_65_V_address0() {
    conv_buff_val_65_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_65_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_65_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_65_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_65_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_65_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_65_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_66_V_address0() {
    conv_buff_val_66_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_66_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_66_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_66_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_66_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_66_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_66_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_67_V_address0() {
    conv_buff_val_67_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_67_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_67_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_67_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_67_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_67_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_67_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_68_V_address0() {
    conv_buff_val_68_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_68_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_68_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_68_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_68_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_68_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_68_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_69_V_address0() {
    conv_buff_val_69_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_69_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_69_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_69_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_69_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_69_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_69_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_6_V_address0() {
    conv_buff_val_6_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_6_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_6_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_6_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_6_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_6_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_70_V_address0() {
    conv_buff_val_70_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_70_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_70_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_70_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_70_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_70_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_70_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_71_V_address0() {
    conv_buff_val_71_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_71_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_71_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_71_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_71_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_71_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_71_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_72_V_address0() {
    conv_buff_val_72_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_72_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_72_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_72_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_72_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_72_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_72_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_73_V_address0() {
    conv_buff_val_73_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_73_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_73_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_73_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_73_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_73_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_73_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_74_V_address0() {
    conv_buff_val_74_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_74_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_74_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_74_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_74_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_74_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_74_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_75_V_address0() {
    conv_buff_val_75_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_75_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_75_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_75_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_75_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_75_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_75_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_76_V_address0() {
    conv_buff_val_76_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_76_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_76_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_76_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_76_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_76_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_76_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_77_V_address0() {
    conv_buff_val_77_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_77_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_77_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_77_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_77_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_77_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_77_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_78_V_address0() {
    conv_buff_val_78_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_78_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_78_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_78_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_78_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_78_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_78_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_79_V_address0() {
    conv_buff_val_79_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_79_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_79_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_79_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_79_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_79_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_79_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_7_V_address0() {
    conv_buff_val_7_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_7_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_7_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_7_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_7_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_7_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_7_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_80_V_address0() {
    conv_buff_val_80_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_80_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_80_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_80_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_80_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_80_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_80_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_81_V_address0() {
    conv_buff_val_81_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_81_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_81_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_81_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_81_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_81_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_81_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_82_V_address0() {
    conv_buff_val_82_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_82_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_82_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_82_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_82_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_82_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_82_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_83_V_address0() {
    conv_buff_val_83_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_83_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_83_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_83_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_83_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_83_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_83_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_84_V_address0() {
    conv_buff_val_84_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_84_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_84_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_84_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_84_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_84_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_84_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_85_V_address0() {
    conv_buff_val_85_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_85_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_85_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_85_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_85_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_85_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_85_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_86_V_address0() {
    conv_buff_val_86_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_86_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_86_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_86_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_86_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_86_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_86_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_87_V_address0() {
    conv_buff_val_87_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_87_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_87_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_87_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_87_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_87_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_87_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_88_V_address0() {
    conv_buff_val_88_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_88_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_88_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_88_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_88_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_88_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_88_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_89_V_address0() {
    conv_buff_val_89_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_89_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_89_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_89_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_89_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_89_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_89_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_8_V_address0() {
    conv_buff_val_8_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_8_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_8_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_8_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_8_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_8_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_8_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_90_V_address0() {
    conv_buff_val_90_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_90_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_90_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_90_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_90_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_90_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_90_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_91_V_address0() {
    conv_buff_val_91_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_91_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_91_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_91_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_91_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_91_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_91_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_92_V_address0() {
    conv_buff_val_92_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_92_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_92_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_92_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_92_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_92_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_92_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_93_V_address0() {
    conv_buff_val_93_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_93_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_93_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_93_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_93_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_93_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_93_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_94_V_address0() {
    conv_buff_val_94_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_94_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_94_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_94_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_94_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_94_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_94_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_95_V_address0() {
    conv_buff_val_95_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_95_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_95_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_95_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_95_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_95_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_95_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_96_V_address0() {
    conv_buff_val_96_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_96_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_96_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_96_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_96_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_96_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_96_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_97_V_address0() {
    conv_buff_val_97_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_97_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_97_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_97_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_97_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_97_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_97_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_98_V_address0() {
    conv_buff_val_98_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_98_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_98_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_98_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_98_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_98_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_98_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_99_V_address0() {
    conv_buff_val_99_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_99_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_99_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_99_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_99_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_99_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_99_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_9_V_address0() {
    conv_buff_val_9_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void conv_layer1::thread_conv_buff_val_9_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_nbreadreq_fu_834_p3.read())))) {
        conv_buff_val_9_V_ce0 = ap_const_logic_1;
    } else {
        conv_buff_val_9_V_ce0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_conv_buff_val_9_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        conv_buff_val_9_V_we0 = ap_const_logic_1;
    } else {
        conv_buff_val_9_V_we0 = ap_const_logic_0;
    }
}

void conv_layer1::thread_exitcond2_fu_2247_p2() {
    exitcond2_fu_2247_p2 = (!ap_phi_mux_j_phi_fu_2192_p4.read().is_01() || !ap_const_lv5_1D.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_j_phi_fu_2192_p4.read() == ap_const_lv5_1D);
}

void conv_layer1::thread_exitcond_flatten_fu_2223_p2() {
    exitcond_flatten_fu_2223_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_2170_p4.read().is_01() || !ap_const_lv10_349.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten_phi_fu_2170_p4.read() == ap_const_lv10_349);
}

void conv_layer1::thread_exitcond_fu_2199_p2() {
    exitcond_fu_2199_p2 = (!i_reg_2155.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_2155.read() == ap_const_lv7_64);
}

void conv_layer1::thread_grp_fu_5390_p1() {
    grp_fu_5390_p1 =  (sc_lv<9>) (ap_const_lv24_FFFF64);
}

void conv_layer1::thread_grp_fu_5406_p0() {
    grp_fu_5406_p0 =  (sc_lv<16>) (p_054_0_0_1_cast1_fu_2432_p1.read());
}

void conv_layer1::thread_grp_fu_5406_p1() {
    grp_fu_5406_p1 =  (sc_lv<10>) (ap_const_lv26_11B);
}

void conv_layer1::thread_grp_fu_5415_p0() {
    grp_fu_5415_p0 =  (sc_lv<16>) (p_054_0_0_2_cast_fu_2446_p1.read());
}

void conv_layer1::thread_grp_fu_5415_p1() {
    grp_fu_5415_p1 =  (sc_lv<11>) (ap_const_lv27_251);
}

void conv_layer1::thread_grp_fu_5415_p2() {
    grp_fu_5415_p2 = esl_concat<16,12>(tmp_241_fu_2452_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5424_p0() {
    grp_fu_5424_p0 =  (sc_lv<16>) (p_054_0_0_3_cast_fu_2469_p1.read());
}

void conv_layer1::thread_grp_fu_5424_p1() {
    grp_fu_5424_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFCFD);
}

void conv_layer1::thread_grp_fu_5424_p2() {
    grp_fu_5424_p2 = esl_concat<16,12>(tmp_242_fu_2475_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5433_p0() {
    grp_fu_5433_p0 =  (sc_lv<16>) (p_054_0_0_1_cast_fu_2429_p1.read());
}

void conv_layer1::thread_grp_fu_5433_p1() {
    grp_fu_5433_p1 =  (sc_lv<11>) (ap_const_lv27_2CB);
}

void conv_layer1::thread_grp_fu_5442_p0() {
    grp_fu_5442_p0 =  (sc_lv<16>) (p_054_0_0_3_cast_fu_2469_p1.read());
}

void conv_layer1::thread_grp_fu_5442_p1() {
    grp_fu_5442_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD2C);
}

void conv_layer1::thread_grp_fu_5442_p2() {
    grp_fu_5442_p2 = esl_concat<16,12>(tmp_257_fu_2567_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5451_p0() {
    grp_fu_5451_p0 =  (sc_lv<16>) (p_054_0_0_1_cast_fu_2429_p1.read());
}

void conv_layer1::thread_grp_fu_5451_p1() {
    grp_fu_5451_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD88);
}

void conv_layer1::thread_grp_fu_5460_p0() {
    grp_fu_5460_p0 =  (sc_lv<16>) (p_054_0_0_2_cast1_fu_2449_p1.read());
}

void conv_layer1::thread_grp_fu_5460_p1() {
    grp_fu_5460_p1 =  (sc_lv<10>) (ap_const_lv26_1CD);
}

void conv_layer1::thread_grp_fu_5460_p2() {
    grp_fu_5460_p2 = esl_concat<16,12>(tmp_271_fu_2605_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5469_p1() {
    grp_fu_5469_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEDE);
}

void conv_layer1::thread_grp_fu_5469_p2() {
    grp_fu_5469_p2 = esl_concat<16,12>(tmp_272_fu_2622_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5478_p0() {
    grp_fu_5478_p0 =  (sc_lv<16>) (p_054_0_0_1_cast_fu_2429_p1.read());
}

void conv_layer1::thread_grp_fu_5478_p1() {
    grp_fu_5478_p1 =  (sc_lv<11>) (ap_const_lv27_24E);
}

void conv_layer1::thread_grp_fu_5487_p0() {
    grp_fu_5487_p0 =  (sc_lv<16>) (p_054_0_0_2_cast_fu_2446_p1.read());
}

void conv_layer1::thread_grp_fu_5487_p1() {
    grp_fu_5487_p1 =  (sc_lv<11>) (ap_const_lv27_316);
}

void conv_layer1::thread_grp_fu_5487_p2() {
    grp_fu_5487_p2 = esl_concat<16,12>(tmp_286_fu_2659_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5496_p0() {
    grp_fu_5496_p0 =  (sc_lv<16>) (p_054_0_0_1_cast_fu_2429_p1.read());
}

void conv_layer1::thread_grp_fu_5496_p1() {
    grp_fu_5496_p1 =  (sc_lv<11>) (ap_const_lv27_2A4);
}

void conv_layer1::thread_grp_fu_5505_p0() {
    grp_fu_5505_p0 =  (sc_lv<16>) (p_054_0_0_2_cast_fu_2446_p1.read());
}

void conv_layer1::thread_grp_fu_5505_p1() {
    grp_fu_5505_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD24);
}

void conv_layer1::thread_grp_fu_5505_p2() {
    grp_fu_5505_p2 = esl_concat<16,12>(tmp_301_fu_2741_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5514_p0() {
    grp_fu_5514_p0 =  (sc_lv<16>) (p_054_0_0_3_cast_fu_2469_p1.read());
}

void conv_layer1::thread_grp_fu_5514_p1() {
    grp_fu_5514_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD7B);
}

void conv_layer1::thread_grp_fu_5514_p2() {
    grp_fu_5514_p2 = esl_concat<16,12>(tmp_302_fu_2758_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5523_p0() {
    grp_fu_5523_p0 =  (sc_lv<16>) (p_054_0_0_1_cast1_fu_2432_p1.read());
}

void conv_layer1::thread_grp_fu_5523_p1() {
    grp_fu_5523_p1 =  (sc_lv<10>) (ap_const_lv26_15F);
}

void conv_layer1::thread_grp_fu_5532_p0() {
    grp_fu_5532_p0 =  (sc_lv<16>) (p_054_0_0_2_cast1_fu_2449_p1.read());
}

void conv_layer1::thread_grp_fu_5532_p1() {
    grp_fu_5532_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEED);
}

void conv_layer1::thread_grp_fu_5541_p0() {
    grp_fu_5541_p0 =  (sc_lv<16>) (p_054_0_1_cast_fu_2884_p1.read());
}

void conv_layer1::thread_grp_fu_5541_p1() {
    grp_fu_5541_p1 =  (sc_lv<11>) (ap_const_lv27_27E);
}

void conv_layer1::thread_grp_fu_5541_p2() {
    grp_fu_5541_p2 = esl_concat<16,12>(tmp_243_reg_7052.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5550_p1() {
    grp_fu_5550_p1 =  (sc_lv<10>) (ap_const_lv26_1A8);
}

void conv_layer1::thread_grp_fu_5550_p2() {
    grp_fu_5550_p2 = esl_concat<16,12>(tmp_244_fu_2903_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5559_p0() {
    grp_fu_5559_p0 =  (sc_lv<16>) (p_054_0_1_2_cast1_fu_2920_p1.read());
}

void conv_layer1::thread_grp_fu_5559_p1() {
    grp_fu_5559_p1 =  (sc_lv<11>) (ap_const_lv27_32F);
}

void conv_layer1::thread_grp_fu_5559_p2() {
    grp_fu_5559_p2 = esl_concat<16,12>(tmp_245_fu_2929_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5568_p1() {
    grp_fu_5568_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF73);
}

void conv_layer1::thread_grp_fu_5568_p2() {
    grp_fu_5568_p2 = esl_concat<16,12>(tmp_259_fu_3000_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5577_p0() {
    grp_fu_5577_p0 =  (sc_lv<16>) (p_054_0_1_2_cast1_fu_2920_p1.read());
}

void conv_layer1::thread_grp_fu_5577_p1() {
    grp_fu_5577_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFCFC);
}

void conv_layer1::thread_grp_fu_5577_p2() {
    grp_fu_5577_p2 = esl_concat<16,12>(tmp_260_fu_3018_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5586_p0() {
    grp_fu_5586_p0 =  (sc_lv<16>) (p_054_0_1_cast_fu_2884_p1.read());
}

void conv_layer1::thread_grp_fu_5586_p1() {
    grp_fu_5586_p1 =  (sc_lv<11>) (ap_const_lv27_342);
}

void conv_layer1::thread_grp_fu_5586_p2() {
    grp_fu_5586_p2 = esl_concat<16,12>(tmp_273_reg_7062.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5595_p0() {
    grp_fu_5595_p0 =  (sc_lv<16>) (p_054_0_1_1_cast_fu_2900_p1.read());
}

void conv_layer1::thread_grp_fu_5595_p1() {
    grp_fu_5595_p1 =  (sc_lv<11>) (ap_const_lv27_2ED);
}

void conv_layer1::thread_grp_fu_5595_p2() {
    grp_fu_5595_p2 = esl_concat<16,12>(tmp_274_fu_3051_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5604_p1() {
    grp_fu_5604_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE3A);
}

void conv_layer1::thread_grp_fu_5604_p2() {
    grp_fu_5604_p2 = esl_concat<16,12>(tmp_275_fu_3068_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5613_p0() {
    grp_fu_5613_p0 =  (sc_lv<16>) (p_054_0_1_1_cast_fu_2900_p1.read());
}

void conv_layer1::thread_grp_fu_5613_p1() {
    grp_fu_5613_p1 =  (sc_lv<11>) (ap_const_lv27_28C);
}

void conv_layer1::thread_grp_fu_5613_p2() {
    grp_fu_5613_p2 = esl_concat<16,12>(tmp_289_fu_3110_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5622_p0() {
    grp_fu_5622_p0 =  (sc_lv<16>) (p_054_0_1_2_cast1_fu_2920_p1.read());
}

void conv_layer1::thread_grp_fu_5622_p1() {
    grp_fu_5622_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFCC1);
}

void conv_layer1::thread_grp_fu_5622_p2() {
    grp_fu_5622_p2 = esl_concat<16,12>(tmp_290_fu_3128_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5631_p0() {
    grp_fu_5631_p0 =  (sc_lv<16>) (p_054_0_1_cast_fu_2884_p1.read());
}

void conv_layer1::thread_grp_fu_5631_p1() {
    grp_fu_5631_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD90);
}

void conv_layer1::thread_grp_fu_5631_p2() {
    grp_fu_5631_p2 = esl_concat<16,12>(tmp_303_reg_7072.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5640_p0() {
    grp_fu_5640_p0 =  (sc_lv<16>) (p_054_0_1_1_cast_fu_2900_p1.read());
}

void conv_layer1::thread_grp_fu_5640_p1() {
    grp_fu_5640_p1 =  (sc_lv<11>) (ap_const_lv27_2B9);
}

void conv_layer1::thread_grp_fu_5640_p2() {
    grp_fu_5640_p2 = esl_concat<16,12>(tmp_304_fu_3161_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5649_p1() {
    grp_fu_5649_p1 =  (sc_lv<9>) (ap_const_lv25_A8);
}

void conv_layer1::thread_grp_fu_5649_p2() {
    grp_fu_5649_p2 = esl_concat<16,12>(tmp_305_fu_3178_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5658_p0() {
    grp_fu_5658_p0 =  (sc_lv<16>) (p_054_0_0_3_cast2_reg_7046.read());
}

void conv_layer1::thread_grp_fu_5658_p1() {
    grp_fu_5658_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEFB);
}

void conv_layer1::thread_grp_fu_5658_p2() {
    grp_fu_5658_p2 = esl_concat<16,12>(tmp_317_reg_7077.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5666_p0() {
    grp_fu_5666_p0 =  (sc_lv<16>) (p_054_0_0_2_cast1_reg_7040.read());
}

void conv_layer1::thread_grp_fu_5666_p1() {
    grp_fu_5666_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE2E);
}

void conv_layer1::thread_grp_fu_5674_p1() {
    grp_fu_5674_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD9B);
}

void conv_layer1::thread_grp_fu_5674_p2() {
    grp_fu_5674_p2 = esl_concat<16,12>(tmp_246_reg_7113.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5683_p0() {
    grp_fu_5683_p0 =  (sc_lv<16>) (p_054_0_2_cast2_fu_3265_p1.read());
}

void conv_layer1::thread_grp_fu_5683_p1() {
    grp_fu_5683_p1 =  (sc_lv<11>) (ap_const_lv27_2E7);
}

void conv_layer1::thread_grp_fu_5683_p2() {
    grp_fu_5683_p2 = esl_concat<16,12>(tmp_247_fu_3268_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5692_p0() {
    grp_fu_5692_p0 =  (sc_lv<16>) (p_054_0_2_1_cast2_fu_3285_p1.read());
}

void conv_layer1::thread_grp_fu_5692_p1() {
    grp_fu_5692_p1 =  (sc_lv<11>) (ap_const_lv27_331);
}

void conv_layer1::thread_grp_fu_5692_p2() {
    grp_fu_5692_p2 = esl_concat<16,12>(tmp_248_fu_3291_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5701_p1() {
    grp_fu_5701_p1 =  (sc_lv<9>) (ap_const_lv25_B8);
}

void conv_layer1::thread_grp_fu_5701_p2() {
    grp_fu_5701_p2 = esl_concat<16,12>(tmp_261_reg_7118.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5710_p0() {
    grp_fu_5710_p0 =  (sc_lv<16>) (p_054_0_2_cast2_fu_3265_p1.read());
}

void conv_layer1::thread_grp_fu_5710_p1() {
    grp_fu_5710_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD0E);
}

void conv_layer1::thread_grp_fu_5710_p2() {
    grp_fu_5710_p2 = esl_concat<16,12>(tmp_262_fu_3324_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5719_p0() {
    grp_fu_5719_p0 =  (sc_lv<16>) (p_054_0_2_1_cast2_fu_3285_p1.read());
}

void conv_layer1::thread_grp_fu_5719_p1() {
    grp_fu_5719_p1 =  (sc_lv<11>) (ap_const_lv27_241);
}

void conv_layer1::thread_grp_fu_5719_p2() {
    grp_fu_5719_p2 = esl_concat<16,12>(tmp_263_fu_3341_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5728_p1() {
    grp_fu_5728_p1 =  (sc_lv<10>) (ap_const_lv26_151);
}

void conv_layer1::thread_grp_fu_5728_p2() {
    grp_fu_5728_p2 = esl_concat<16,12>(tmp_276_reg_7123.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5737_p0() {
    grp_fu_5737_p0 =  (sc_lv<16>) (p_054_0_2_cast2_fu_3265_p1.read());
}

void conv_layer1::thread_grp_fu_5737_p1() {
    grp_fu_5737_p1 =  (sc_lv<11>) (ap_const_lv27_288);
}

void conv_layer1::thread_grp_fu_5737_p2() {
    grp_fu_5737_p2 = esl_concat<16,12>(tmp_277_fu_3374_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5746_p0() {
    grp_fu_5746_p0 =  (sc_lv<16>) (p_054_0_2_1_cast3_fu_3288_p1.read());
}

void conv_layer1::thread_grp_fu_5746_p1() {
    grp_fu_5746_p1 =  (sc_lv<10>) (ap_const_lv26_1C1);
}

void conv_layer1::thread_grp_fu_5746_p2() {
    grp_fu_5746_p2 = esl_concat<16,12>(tmp_278_fu_3391_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5755_p1() {
    grp_fu_5755_p1 =  (sc_lv<8>) (ap_const_lv24_74);
}

void conv_layer1::thread_grp_fu_5755_p2() {
    grp_fu_5755_p2 = esl_concat<16,12>(tmp_291_reg_7133.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5764_p1() {
    grp_fu_5764_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE42);
}

void conv_layer1::thread_grp_fu_5764_p2() {
    grp_fu_5764_p2 = esl_concat<16,12>(tmp_292_fu_3424_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5773_p0() {
    grp_fu_5773_p0 =  (sc_lv<16>) (p_054_0_2_1_cast3_fu_3288_p1.read());
}

void conv_layer1::thread_grp_fu_5773_p1() {
    grp_fu_5773_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE9A);
}

void conv_layer1::thread_grp_fu_5773_p2() {
    grp_fu_5773_p2 = esl_concat<16,12>(tmp_293_fu_3441_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5782_p0() {
    grp_fu_5782_p0 =  (sc_lv<16>) (p_054_0_1_cast_reg_7091.read());
}

void conv_layer1::thread_grp_fu_5782_p1() {
    grp_fu_5782_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFDFB);
}

void conv_layer1::thread_grp_fu_5782_p2() {
    grp_fu_5782_p2 = esl_concat<16,12>(tmp_318_reg_7143.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5790_p0() {
    grp_fu_5790_p0 =  (sc_lv<16>) (p_054_0_1_1_cast2_reg_7096.read());
}

void conv_layer1::thread_grp_fu_5790_p1() {
    grp_fu_5790_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE7A);
}

void conv_layer1::thread_grp_fu_5790_p2() {
    grp_fu_5790_p2 = esl_concat<16,12>(tmp_319_fu_3474_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5798_p1() {
    grp_fu_5798_p1 =  (sc_lv<7>) (ap_const_lv23_25);
}

void conv_layer1::thread_grp_fu_5798_p2() {
    grp_fu_5798_p2 = esl_concat<16,12>(tmp_331_reg_7148.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5807_p1() {
    grp_fu_5807_p1 =  (sc_lv<10>) (ap_const_lv26_1A3);
}

void conv_layer1::thread_grp_fu_5807_p2() {
    grp_fu_5807_p2 = esl_concat<16,12>(tmp_249_reg_7181.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5816_p1() {
    grp_fu_5816_p1 =  (sc_lv<10>) (ap_const_lv26_127);
}

void conv_layer1::thread_grp_fu_5816_p2() {
    grp_fu_5816_p2 = esl_concat<16,12>(tmp_250_fu_3567_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5825_p1() {
    grp_fu_5825_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFDBD);
}

void conv_layer1::thread_grp_fu_5825_p2() {
    grp_fu_5825_p2 = esl_concat<16,12>(tmp_251_fu_3593_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5834_p0() {
    grp_fu_5834_p0 =  (sc_lv<16>) (p_054_0_2_2_cast_fu_3551_p1.read());
}

void conv_layer1::thread_grp_fu_5834_p1() {
    grp_fu_5834_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF45);
}

void conv_layer1::thread_grp_fu_5834_p2() {
    grp_fu_5834_p2 = esl_concat<16,12>(tmp_264_reg_7186.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5843_p0() {
    grp_fu_5843_p0 =  (sc_lv<16>) (p_054_0_2_3_cast3_fu_3561_p1.read());
}

void conv_layer1::thread_grp_fu_5843_p1() {
    grp_fu_5843_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD34);
}

void conv_layer1::thread_grp_fu_5843_p2() {
    grp_fu_5843_p2 = esl_concat<16,12>(tmp_265_fu_3626_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5852_p1() {
    grp_fu_5852_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFBB);
}

void conv_layer1::thread_grp_fu_5852_p2() {
    grp_fu_5852_p2 = esl_concat<16,12>(tmp_266_fu_3643_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5861_p0() {
    grp_fu_5861_p0 =  (sc_lv<16>) (p_054_0_2_2_cast_fu_3551_p1.read());
}

void conv_layer1::thread_grp_fu_5861_p1() {
    grp_fu_5861_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF16);
}

void conv_layer1::thread_grp_fu_5861_p2() {
    grp_fu_5861_p2 = esl_concat<16,12>(tmp_279_reg_7191.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5870_p0() {
    grp_fu_5870_p0 =  (sc_lv<16>) (p_054_0_2_3_cast3_fu_3561_p1.read());
}

void conv_layer1::thread_grp_fu_5870_p1() {
    grp_fu_5870_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD1B);
}

void conv_layer1::thread_grp_fu_5870_p2() {
    grp_fu_5870_p2 = esl_concat<16,12>(tmp_280_fu_3676_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5879_p1() {
    grp_fu_5879_p1 =  (sc_lv<10>) (ap_const_lv26_1AF);
}

void conv_layer1::thread_grp_fu_5879_p2() {
    grp_fu_5879_p2 = esl_concat<16,12>(tmp_281_fu_3693_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5888_p1() {
    grp_fu_5888_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFCC3);
}

void conv_layer1::thread_grp_fu_5888_p2() {
    grp_fu_5888_p2 = esl_concat<16,12>(tmp_294_reg_7196.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5897_p0() {
    grp_fu_5897_p0 =  (sc_lv<16>) (p_054_0_2_3_cast3_fu_3561_p1.read());
}

void conv_layer1::thread_grp_fu_5897_p1() {
    grp_fu_5897_p1 =  (sc_lv<11>) (ap_const_lv27_303);
}

void conv_layer1::thread_grp_fu_5897_p2() {
    grp_fu_5897_p2 = esl_concat<16,12>(tmp_295_fu_3726_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5906_p0() {
    grp_fu_5906_p0 =  (sc_lv<16>) (p_054_0_1_3_cast_reg_7159.read());
}

void conv_layer1::thread_grp_fu_5906_p1() {
    grp_fu_5906_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE6B);
}

void conv_layer1::thread_grp_fu_5906_p2() {
    grp_fu_5906_p2 = esl_concat<16,12>(tmp_306_reg_7138.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5914_p1() {
    grp_fu_5914_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFA2);
}

void conv_layer1::thread_grp_fu_5914_p2() {
    grp_fu_5914_p2 = esl_concat<16,12>(tmp_307_fu_3759_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5923_p1() {
    grp_fu_5923_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFCD);
}

void conv_layer1::thread_grp_fu_5923_p2() {
    grp_fu_5923_p2 = esl_concat<16,12>(tmp_308_fu_3776_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5932_p0() {
    grp_fu_5932_p0 =  (sc_lv<16>) (p_054_0_1_2_cast_reg_7107.read());
}

void conv_layer1::thread_grp_fu_5932_p1() {
    grp_fu_5932_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE60);
}

void conv_layer1::thread_grp_fu_5932_p2() {
    grp_fu_5932_p2 = esl_concat<16,12>(tmp_320_reg_7201.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5940_p1() {
    grp_fu_5940_p1 =  (sc_lv<9>) (ap_const_lv25_8D);
}

void conv_layer1::thread_grp_fu_5940_p2() {
    grp_fu_5940_p2 = esl_concat<16,12>(tmp_252_reg_7244.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5949_p0() {
    grp_fu_5949_p0 =  (sc_lv<16>) (p_054_0_3_2_cast2_fu_3840_p1.read());
}

void conv_layer1::thread_grp_fu_5949_p1() {
    grp_fu_5949_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE9B);
}

void conv_layer1::thread_grp_fu_5949_p2() {
    grp_fu_5949_p2 = esl_concat<16,12>(tmp_253_fu_3843_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5958_p1() {
    grp_fu_5958_p1 =  (sc_lv<11>) (ap_const_lv27_2E8);
}

void conv_layer1::thread_grp_fu_5958_p2() {
    grp_fu_5958_p2 = esl_concat<16,12>(tmp_254_fu_3866_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5968_p1() {
    grp_fu_5968_p1 =  (sc_lv<11>) (ap_const_lv27_214);
}

void conv_layer1::thread_grp_fu_5968_p2() {
    grp_fu_5968_p2 = esl_concat<16,12>(tmp_267_reg_7249.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5977_p1() {
    grp_fu_5977_p1 =  (sc_lv<11>) (ap_const_lv27_222);
}

void conv_layer1::thread_grp_fu_5977_p2() {
    grp_fu_5977_p2 = esl_concat<16,12>(tmp_268_fu_3908_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5986_p1() {
    grp_fu_5986_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE5B);
}

void conv_layer1::thread_grp_fu_5986_p2() {
    grp_fu_5986_p2 = esl_concat<16,12>(tmp_269_fu_3925_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_5996_p1() {
    grp_fu_5996_p1 =  (sc_lv<10>) (ap_const_lv26_1E7);
}

void conv_layer1::thread_grp_fu_5996_p2() {
    grp_fu_5996_p2 = esl_concat<16,12>(tmp_282_reg_7254.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6005_p0() {
    grp_fu_6005_p0 =  (sc_lv<16>) (p_054_0_3_2_cast2_fu_3840_p1.read());
}

void conv_layer1::thread_grp_fu_6005_p1() {
    grp_fu_6005_p1 =  (sc_lv<10>) (ap_const_lv26_10B);
}

void conv_layer1::thread_grp_fu_6005_p2() {
    grp_fu_6005_p2 = esl_concat<16,12>(tmp_283_fu_3967_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6014_p0() {
    grp_fu_6014_p0 =  (sc_lv<16>) (p_054_0_3_cast_reg_7237.read());
}

void conv_layer1::thread_grp_fu_6014_p1() {
    grp_fu_6014_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE66);
}

void conv_layer1::thread_grp_fu_6014_p2() {
    grp_fu_6014_p2 = esl_concat<16,12>(tmp_296_reg_7259.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6022_p0() {
    grp_fu_6022_p0 =  (sc_lv<16>) (p_054_0_1_3_cast3_reg_7153.read());
}

void conv_layer1::thread_grp_fu_6022_p1() {
    grp_fu_6022_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD5A);
}

void conv_layer1::thread_grp_fu_6022_p2() {
    grp_fu_6022_p2 = esl_concat<16,12>(tmp_321_reg_7269.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6030_p0() {
    grp_fu_6030_p0 =  (sc_lv<16>) (p_054_0_2_cast2_reg_7165.read());
}

void conv_layer1::thread_grp_fu_6030_p1() {
    grp_fu_6030_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD97);
}

void conv_layer1::thread_grp_fu_6030_p2() {
    grp_fu_6030_p2 = esl_concat<16,12>(tmp_322_fu_4139_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6038_p0() {
    grp_fu_6038_p0 =  (sc_lv<16>) (p_054_0_1_1_cast_reg_7101.read());
}

void conv_layer1::thread_grp_fu_6038_p1() {
    grp_fu_6038_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFDDF);
}

void conv_layer1::thread_grp_fu_6038_p2() {
    grp_fu_6038_p2 = esl_concat<16,12>(tmp_333_reg_7206.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6046_p1() {
    grp_fu_6046_p1 =  (sc_lv<8>) (ap_const_lv24_FFFFB7);
}

void conv_layer1::thread_grp_fu_6046_p2() {
    grp_fu_6046_p2 = esl_concat<16,12>(tmp_334_fu_4172_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6055_p0() {
    grp_fu_6055_p0 =  (sc_lv<16>) (p_054_0_0_2_cast1_reg_7040.read());
}

void conv_layer1::thread_grp_fu_6055_p1() {
    grp_fu_6055_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFED3);
}

void conv_layer1::thread_grp_fu_6055_p2() {
    grp_fu_6055_p2 = esl_concat<16,12>(tmp_345_reg_7082.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6063_p0() {
    grp_fu_6063_p0 =  (sc_lv<16>) (p_054_0_0_3_cast2_reg_7046.read());
}

void conv_layer1::thread_grp_fu_6063_p1() {
    grp_fu_6063_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEBB);
}

void conv_layer1::thread_grp_fu_6063_p2() {
    grp_fu_6063_p2 = esl_concat<16,12>(tmp_346_fu_4205_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6071_p0() {
    grp_fu_6071_p0 =  (sc_lv<16>) (p_054_0_3_2_cast2_reg_7286.read());
}

void conv_layer1::thread_grp_fu_6071_p1() {
    grp_fu_6071_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE36);
}

void conv_layer1::thread_grp_fu_6071_p2() {
    grp_fu_6071_p2 = esl_concat<16,12>(tmp_298_reg_7330.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6079_p0() {
    grp_fu_6079_p0 =  (sc_lv<16>) (p_054_0_3_3_cast_reg_7293.read());
}

void conv_layer1::thread_grp_fu_6079_p1() {
    grp_fu_6079_p1 =  (sc_lv<10>) (ap_const_lv26_176);
}

void conv_layer1::thread_grp_fu_6079_p2() {
    grp_fu_6079_p2 = esl_concat<16,12>(tmp_299_fu_4292_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6088_p1() {
    grp_fu_6088_p1 =  (sc_lv<7>) (ap_const_lv23_7FFFCA);
}

void conv_layer1::thread_grp_fu_6088_p2() {
    grp_fu_6088_p2 = esl_concat<16,12>(tmp_310_reg_7335.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6097_p0() {
    grp_fu_6097_p0 =  (sc_lv<16>) (p_054_0_3_cast2_reg_7231.read());
}

void conv_layer1::thread_grp_fu_6097_p1() {
    grp_fu_6097_p1 =  (sc_lv<11>) (ap_const_lv27_214);
}

void conv_layer1::thread_grp_fu_6097_p2() {
    grp_fu_6097_p2 = esl_concat<16,12>(tmp_311_fu_4346_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6105_p0() {
    grp_fu_6105_p0 =  (sc_lv<16>) (p_054_0_3_1_cast1_reg_7274.read());
}

void conv_layer1::thread_grp_fu_6105_p1() {
    grp_fu_6105_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFDC3);
}

void conv_layer1::thread_grp_fu_6105_p2() {
    grp_fu_6105_p2 = esl_concat<16,12>(tmp_312_fu_4363_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6113_p0() {
    grp_fu_6113_p0 =  (sc_lv<16>) (p_054_0_2_1_cast2_reg_7171.read());
}

void conv_layer1::thread_grp_fu_6113_p1() {
    grp_fu_6113_p1 =  (sc_lv<11>) (ap_const_lv27_236);
}

void conv_layer1::thread_grp_fu_6113_p2() {
    grp_fu_6113_p2 = esl_concat<16,12>(tmp_323_reg_7340.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6121_p0() {
    grp_fu_6121_p0 =  (sc_lv<16>) (p_054_0_2_2_cast1_reg_7215.read());
}

void conv_layer1::thread_grp_fu_6121_p1() {
    grp_fu_6121_p1 =  (sc_lv<11>) (ap_const_lv27_337);
}

void conv_layer1::thread_grp_fu_6121_p2() {
    grp_fu_6121_p2 = esl_concat<16,12>(tmp_324_fu_4396_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6129_p1() {
    grp_fu_6129_p1 =  (sc_lv<9>) (ap_const_lv25_F5);
}

void conv_layer1::thread_grp_fu_6129_p2() {
    grp_fu_6129_p2 = esl_concat<16,12>(tmp_325_fu_4413_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6138_p0() {
    grp_fu_6138_p0 =  (sc_lv<16>) (p_054_0_1_3_cast3_reg_7153.read());
}

void conv_layer1::thread_grp_fu_6138_p1() {
    grp_fu_6138_p1 =  (sc_lv<11>) (ap_const_lv27_307);
}

void conv_layer1::thread_grp_fu_6138_p2() {
    grp_fu_6138_p2 = esl_concat<16,12>(tmp_335_reg_7345.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6146_p0() {
    grp_fu_6146_p0 =  (sc_lv<16>) (p_054_0_2_cast2_reg_7165.read());
}

void conv_layer1::thread_grp_fu_6146_p1() {
    grp_fu_6146_p1 =  (sc_lv<11>) (ap_const_lv27_2C7);
}

void conv_layer1::thread_grp_fu_6146_p2() {
    grp_fu_6146_p2 = esl_concat<16,12>(tmp_336_fu_4446_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6154_p0() {
    grp_fu_6154_p0 =  (sc_lv<16>) (p_054_0_2_1_cast3_reg_7176.read());
}

void conv_layer1::thread_grp_fu_6154_p1() {
    grp_fu_6154_p1 =  (sc_lv<10>) (ap_const_lv26_1D0);
}

void conv_layer1::thread_grp_fu_6154_p2() {
    grp_fu_6154_p2 = esl_concat<16,12>(tmp_337_fu_4463_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6162_p0() {
    grp_fu_6162_p0 =  (sc_lv<16>) (p_054_0_1_cast1_reg_6902.read());
}

void conv_layer1::thread_grp_fu_6162_p1() {
    grp_fu_6162_p1 =  (sc_lv<10>) (ap_const_lv26_1B5);
}

void conv_layer1::thread_grp_fu_6162_p2() {
    grp_fu_6162_p2 = esl_concat<16,12>(tmp_347_reg_7350.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6170_p0() {
    grp_fu_6170_p0 =  (sc_lv<16>) (p_054_0_1_1_cast_reg_7101.read());
}

void conv_layer1::thread_grp_fu_6170_p1() {
    grp_fu_6170_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD08);
}

void conv_layer1::thread_grp_fu_6170_p2() {
    grp_fu_6170_p2 = esl_concat<16,12>(tmp_348_fu_4496_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6178_p0() {
    grp_fu_6178_p0 =  (sc_lv<16>) (p_054_0_1_2_cast_reg_7107.read());
}

void conv_layer1::thread_grp_fu_6178_p1() {
    grp_fu_6178_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE1B);
}

void conv_layer1::thread_grp_fu_6178_p2() {
    grp_fu_6178_p2 = esl_concat<16,12>(tmp_349_fu_4513_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6186_p0() {
    grp_fu_6186_p0 =  (sc_lv<16>) (p_054_0_3_3_cast_reg_7293.read());
}

void conv_layer1::thread_grp_fu_6186_p1() {
    grp_fu_6186_p1 =  (sc_lv<10>) (ap_const_lv26_1FB);
}

void conv_layer1::thread_grp_fu_6186_p2() {
    grp_fu_6186_p2 = esl_concat<16,12>(tmp_315_fu_4591_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6195_p0() {
    grp_fu_6195_p0 =  (sc_lv<16>) (p_054_0_3_cast_reg_7237.read());
}

void conv_layer1::thread_grp_fu_6195_p1() {
    grp_fu_6195_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE92);
}

void conv_layer1::thread_grp_fu_6195_p2() {
    grp_fu_6195_p2 = esl_concat<16,12>(tmp_326_reg_7384.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6203_p0() {
    grp_fu_6203_p0 =  (sc_lv<16>) (p_054_0_3_1_cast2_reg_7279.read());
}

void conv_layer1::thread_grp_fu_6203_p1() {
    grp_fu_6203_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE73);
}

void conv_layer1::thread_grp_fu_6203_p2() {
    grp_fu_6203_p2 = esl_concat<16,12>(tmp_327_fu_4634_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6211_p0() {
    grp_fu_6211_p0 =  (sc_lv<16>) (p_054_0_3_2_cast2_reg_7286.read());
}

void conv_layer1::thread_grp_fu_6211_p1() {
    grp_fu_6211_p1 =  (sc_lv<10>) (ap_const_lv26_1A7);
}

void conv_layer1::thread_grp_fu_6211_p2() {
    grp_fu_6211_p2 = esl_concat<16,12>(tmp_328_fu_4651_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6219_p0() {
    grp_fu_6219_p0 =  (sc_lv<16>) (p_054_0_2_2_cast2_reg_7220.read());
}

void conv_layer1::thread_grp_fu_6219_p1() {
    grp_fu_6219_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE66);
}

void conv_layer1::thread_grp_fu_6219_p2() {
    grp_fu_6219_p2 = esl_concat<16,12>(tmp_338_reg_7389.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6227_p0() {
    grp_fu_6227_p0 =  (sc_lv<16>) (p_054_0_3_cast2_reg_7231.read());
}

void conv_layer1::thread_grp_fu_6227_p1() {
    grp_fu_6227_p1 =  (sc_lv<11>) (ap_const_lv27_2AB);
}

void conv_layer1::thread_grp_fu_6227_p2() {
    grp_fu_6227_p2 = esl_concat<16,12>(tmp_340_fu_4739_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6235_p0() {
    grp_fu_6235_p0 =  (sc_lv<16>) (p_054_0_1_3_cast_reg_7159.read());
}

void conv_layer1::thread_grp_fu_6235_p1() {
    grp_fu_6235_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE1E);
}

void conv_layer1::thread_grp_fu_6235_p2() {
    grp_fu_6235_p2 = esl_concat<16,12>(tmp_350_reg_7394.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6243_p1() {
    grp_fu_6243_p1 =  (sc_lv<9>) (ap_const_lv25_1FFFF0F);
}

void conv_layer1::thread_grp_fu_6243_p2() {
    grp_fu_6243_p2 = esl_concat<16,12>(tmp_352_fu_4834_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6252_p0() {
    grp_fu_6252_p0 =  (sc_lv<16>) (p_054_0_3_3_cast_reg_7293.read());
}

void conv_layer1::thread_grp_fu_6252_p1() {
    grp_fu_6252_p1 =  (sc_lv<10>) (ap_const_lv26_122);
}

void conv_layer1::thread_grp_fu_6252_p2() {
    grp_fu_6252_p2 = esl_concat<16,12>(tmp_329_reg_7414.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6261_p0() {
    grp_fu_6261_p0 =  (sc_lv<16>) (p_054_0_3_1_cast2_reg_7279.read());
}

void conv_layer1::thread_grp_fu_6261_p1() {
    grp_fu_6261_p1 =  (sc_lv<10>) (ap_const_lv26_15B);
}

void conv_layer1::thread_grp_fu_6261_p2() {
    grp_fu_6261_p2 = esl_concat<16,12>(tmp_341_reg_7419.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6269_p0() {
    grp_fu_6269_p0 =  (sc_lv<16>) (p_054_0_2_2_cast2_reg_7220.read());
}

void conv_layer1::thread_grp_fu_6269_p1() {
    grp_fu_6269_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFEE5);
}

void conv_layer1::thread_grp_fu_6269_p2() {
    grp_fu_6269_p2 = esl_concat<16,12>(tmp_353_reg_7424.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6277_p0() {
    grp_fu_6277_p0 =  (sc_lv<16>) (p_054_0_2_3_cast3_reg_7226.read());
}

void conv_layer1::thread_grp_fu_6277_p1() {
    grp_fu_6277_p1 =  (sc_lv<11>) (ap_const_lv27_252);
}

void conv_layer1::thread_grp_fu_6277_p2() {
    grp_fu_6277_p2 = esl_concat<16,12>(tmp_354_fu_5160_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6285_p0() {
    grp_fu_6285_p0 =  (sc_lv<16>) (p_054_0_3_cast_reg_7237.read());
}

void conv_layer1::thread_grp_fu_6285_p1() {
    grp_fu_6285_p1 =  (sc_lv<10>) (ap_const_lv26_12C);
}

void conv_layer1::thread_grp_fu_6285_p2() {
    grp_fu_6285_p2 = esl_concat<16,12>(tmp_355_fu_5177_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6293_p0() {
    grp_fu_6293_p0 =  (sc_lv<16>) (ap_reg_pp0_iter1_p_054_0_3_1_cast2_reg_7279.read());
}

void conv_layer1::thread_grp_fu_6293_p1() {
    grp_fu_6293_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE85);
}

void conv_layer1::thread_grp_fu_6293_p2() {
    grp_fu_6293_p2 = esl_concat<16,12>(tmp_356_reg_7454.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6301_p0() {
    grp_fu_6301_p0 =  (sc_lv<16>) (ap_reg_pp0_iter1_p_054_0_3_2_cast2_reg_7286.read());
}

void conv_layer1::thread_grp_fu_6301_p1() {
    grp_fu_6301_p1 =  (sc_lv<10>) (ap_const_lv26_3FFFE66);
}

void conv_layer1::thread_grp_fu_6301_p2() {
    grp_fu_6301_p2 = esl_concat<16,12>(tmp_357_reg_7464.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_fu_6309_p0() {
    grp_fu_6309_p0 =  (sc_lv<16>) (ap_reg_pp0_iter1_p_054_0_3_3_cast1_reg_7300.read());
}

void conv_layer1::thread_grp_fu_6309_p1() {
    grp_fu_6309_p1 =  (sc_lv<11>) (ap_const_lv27_26D);
}

void conv_layer1::thread_grp_fu_6309_p2() {
    grp_fu_6309_p2 = esl_concat<16,12>(tmp_358_fu_5278_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_grp_nbreadreq_fu_834_p3() {
    grp_nbreadreq_fu_834_p3 =  (sc_lv<1>) (in_V_V_empty_n.read());
}

void conv_layer1::thread_i_1_mid2_fu_2261_p3() {
    i_1_mid2_fu_2261_p3 = (!exitcond2_fu_2247_p2.read()[0].is_01())? sc_lv<5>(): ((exitcond2_fu_2247_p2.read()[0].to_bool())? i_4_fu_2211_p2.read(): ap_phi_mux_i_1_phi_fu_2181_p4.read());
}

void conv_layer1::thread_i_4_fu_2211_p2() {
    i_4_fu_2211_p2 = (!ap_phi_mux_i_1_phi_fu_2181_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i_1_phi_fu_2181_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void conv_layer1::thread_i_5_fu_2205_p2() {
    i_5_fu_2205_p2 = (!i_reg_2155.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_reg_2155.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void conv_layer1::thread_i_5_mid1_fu_2235_p2() {
    i_5_mid1_fu_2235_p2 = (!ap_phi_mux_i_1_phi_fu_2181_p4.read().is_01() || !ap_const_lv5_2.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i_1_phi_fu_2181_p4.read()) + sc_biguint<5>(ap_const_lv5_2));
}

void conv_layer1::thread_in_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_6854.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_i4_reg_6862.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_reg_6854.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_reg_6840.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_13_reg_6858.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_reg_6854.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_reg_6840.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_1_reg_7087.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_reg_6854.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_reg_6840.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_2_reg_7211.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_reg_6854.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_reg_6840.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_3_reg_7355.read())))) {
        in_V_V_blk_n = in_V_V_empty_n.read();
    } else {
        in_V_V_blk_n = ap_const_logic_1;
    }
}

void conv_layer1::thread_in_V_V_read() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && 
          !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op795_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op981_read_state5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1477_read_state7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op1951_read_state9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op2441_read_state11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)))) {
        in_V_V_read = ap_const_logic_1;
    } else {
        in_V_V_read = ap_const_logic_0;
    }
}

void conv_layer1::thread_indvar_flatten_next_fu_2229_p2() {
    indvar_flatten_next_fu_2229_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_2170_p4.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(ap_phi_mux_indvar_flatten_phi_fu_2170_p4.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void conv_layer1::thread_j_5_fu_2275_p3() {
    j_5_fu_2275_p3 = (!exitcond2_fu_2247_p2.read()[0].is_01())? sc_lv<5>(): ((exitcond2_fu_2247_p2.read()[0].to_bool())? ap_const_lv5_1: j_op_fu_2269_p2.read());
}

void conv_layer1::thread_j_op_fu_2269_p2() {
    j_op_fu_2269_p2 = (!ap_phi_mux_j_phi_fu_2192_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_j_phi_fu_2192_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void conv_layer1::thread_out_V_V_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter2_exitcond_flatten_reg_6831.read())))) {
        out_V_V_blk_n = out_V_V_full_n.read();
    } else {
        out_V_V_blk_n = ap_const_logic_1;
    }
}

void conv_layer1::thread_out_V_V_din() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter2_exitcond_flatten_reg_6831.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_01001.read(), ap_const_boolean_0))) {
        out_V_V_din = tmp_V_3_fu_5337_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_01001.read(), ap_const_boolean_0))) {
        out_V_V_din = tmp_V_2_fu_5267_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_01001.read(), ap_const_boolean_0))) {
        out_V_V_din = tmp_V_1_fu_5247_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_01001.read(), ap_const_boolean_0))) {
        out_V_V_din = tmp_V_9_fu_5243_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_01001.read(), ap_const_boolean_0))) {
        out_V_V_din = tmp_V_8_fu_5239_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_01001.read(), ap_const_boolean_0))) {
        out_V_V_din = tmp_V_7_fu_5235_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_01001.read(), ap_const_boolean_0))) {
        out_V_V_din = tmp_V_6_fu_5231_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_01001.read(), ap_const_boolean_0))) {
        out_V_V_din = tmp_V_5_fu_5203_p1.read();
    } else {
        out_V_V_din = "XXXXXXXXXXXXXXXX";
    }
}

void conv_layer1::thread_out_V_V_write() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter2_exitcond_flatten_reg_6831.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        out_V_V_write = ap_const_logic_1;
    } else {
        out_V_V_write = ap_const_logic_0;
    }
}

void conv_layer1::thread_p_054_0_0_1_cast1_fu_2432_p1() {
    p_054_0_0_1_cast1_fu_2432_p1 = esl_sext<26,16>(conv_buff_val_1_V_l_26_reg_6871.read());
}

void conv_layer1::thread_p_054_0_0_1_cast_fu_2429_p1() {
    p_054_0_0_1_cast_fu_2429_p1 = esl_sext<27,16>(conv_buff_val_1_V_l_26_reg_6871.read());
}

void conv_layer1::thread_p_054_0_0_2_cast1_fu_2449_p1() {
    p_054_0_0_2_cast1_fu_2449_p1 = esl_sext<26,16>(conv_buff_val_2_V_l_26_reg_6879.read());
}

void conv_layer1::thread_p_054_0_0_2_cast_fu_2446_p1() {
    p_054_0_0_2_cast_fu_2446_p1 = esl_sext<27,16>(conv_buff_val_2_V_l_26_reg_6879.read());
}

void conv_layer1::thread_p_054_0_0_3_cast2_fu_2472_p1() {
    p_054_0_0_3_cast2_fu_2472_p1 = esl_sext<26,16>(conv_buff_val_3_V_l_26_reg_6887.read());
}

void conv_layer1::thread_p_054_0_0_3_cast_fu_2469_p1() {
    p_054_0_0_3_cast_fu_2469_p1 = esl_sext<27,16>(conv_buff_val_3_V_l_26_reg_6887.read());
}

void conv_layer1::thread_p_054_0_0_cast1_fu_2293_p1() {
    p_054_0_0_cast1_fu_2293_p1 = esl_sext<27,16>(conv_buff_val_0_V_q0.read());
}

void conv_layer1::thread_p_054_0_1_1_cast2_fu_2897_p1() {
    p_054_0_1_1_cast2_fu_2897_p1 = esl_sext<26,16>(conv_buff_val_33_V_27_reg_6907.read());
}

void conv_layer1::thread_p_054_0_1_1_cast_fu_2900_p1() {
    p_054_0_1_1_cast_fu_2900_p1 = esl_sext<27,16>(conv_buff_val_33_V_27_reg_6907.read());
}

void conv_layer1::thread_p_054_0_1_2_cast1_fu_2920_p1() {
    p_054_0_1_2_cast1_fu_2920_p1 = esl_sext<27,16>(conv_buff_val_34_V_27_reg_6914.read());
}

void conv_layer1::thread_p_054_0_1_2_cast_fu_2926_p1() {
    p_054_0_1_2_cast_fu_2926_p1 = esl_sext<26,16>(conv_buff_val_34_V_27_reg_6914.read());
}

void conv_layer1::thread_p_054_0_1_3_cast3_fu_3249_p1() {
    p_054_0_1_3_cast3_fu_3249_p1 = esl_sext<27,16>(conv_buff_val_35_V_27_reg_6922.read());
}

void conv_layer1::thread_p_054_0_1_3_cast_fu_3252_p1() {
    p_054_0_1_3_cast_fu_3252_p1 = esl_sext<26,16>(conv_buff_val_35_V_27_reg_6922.read());
}

void conv_layer1::thread_p_054_0_1_cast1_fu_2310_p1() {
    p_054_0_1_cast1_fu_2310_p1 = esl_sext<26,16>(conv_buff_val_32_V_q0.read());
}

void conv_layer1::thread_p_054_0_1_cast_fu_2884_p1() {
    p_054_0_1_cast_fu_2884_p1 = esl_sext<27,16>(conv_buff_val_32_V_27_reg_6895.read());
}

void conv_layer1::thread_p_054_0_2_1_cast2_fu_3285_p1() {
    p_054_0_2_1_cast2_fu_3285_p1 = esl_sext<27,16>(conv_buff_val_65_V_27_reg_6939.read());
}

void conv_layer1::thread_p_054_0_2_1_cast3_fu_3288_p1() {
    p_054_0_2_1_cast3_fu_3288_p1 = esl_sext<26,16>(conv_buff_val_65_V_27_reg_6939.read());
}

void conv_layer1::thread_p_054_0_2_2_cast1_fu_3545_p1() {
    p_054_0_2_2_cast1_fu_3545_p1 = esl_sext<27,16>(conv_buff_val_66_V_27_reg_6947.read());
}

void conv_layer1::thread_p_054_0_2_2_cast2_fu_3548_p1() {
    p_054_0_2_2_cast2_fu_3548_p1 = esl_sext<26,16>(conv_buff_val_66_V_27_reg_6947.read());
}

void conv_layer1::thread_p_054_0_2_2_cast_fu_3551_p1() {
    p_054_0_2_2_cast_fu_3551_p1 = esl_sext<25,16>(conv_buff_val_66_V_27_reg_6947.read());
}

void conv_layer1::thread_p_054_0_2_3_cast3_fu_3561_p1() {
    p_054_0_2_3_cast3_fu_3561_p1 = esl_sext<27,16>(conv_buff_val_67_V_27_reg_6956.read());
}

void conv_layer1::thread_p_054_0_2_cast2_fu_3265_p1() {
    p_054_0_2_cast2_fu_3265_p1 = esl_sext<27,16>(conv_buff_val_64_V_27_reg_6930.read());
}

void conv_layer1::thread_p_054_0_3_1_cast1_fu_3824_p1() {
    p_054_0_3_1_cast1_fu_3824_p1 = esl_sext<27,16>(conv_buff_val_97_V_27_reg_6973.read());
}

void conv_layer1::thread_p_054_0_3_1_cast2_fu_3827_p1() {
    p_054_0_3_1_cast2_fu_3827_p1 = esl_sext<26,16>(conv_buff_val_97_V_27_reg_6973.read());
}

void conv_layer1::thread_p_054_0_3_2_cast2_fu_3840_p1() {
    p_054_0_3_2_cast2_fu_3840_p1 = esl_sext<26,16>(conv_buff_val_98_V_27_reg_6982.read());
}

void conv_layer1::thread_p_054_0_3_2_cast_fu_4542_p1() {
    p_054_0_3_2_cast_fu_4542_p1 = esl_sext<23,16>(conv_buff_val_98_V_27_reg_6982.read());
}

void conv_layer1::thread_p_054_0_3_3_cast1_fu_3863_p1() {
    p_054_0_3_3_cast1_fu_3863_p1 = esl_sext<27,16>(conv_buff_val_99_V_27_reg_6991.read());
}

void conv_layer1::thread_p_054_0_3_3_cast_fu_3860_p1() {
    p_054_0_3_3_cast_fu_3860_p1 = esl_sext<26,16>(conv_buff_val_99_V_27_reg_6991.read());
}

void conv_layer1::thread_p_054_0_3_cast2_fu_3587_p1() {
    p_054_0_3_cast2_fu_3587_p1 = esl_sext<27,16>(conv_buff_val_96_V_27_reg_6966.read());
}

void conv_layer1::thread_p_054_0_3_cast_fu_3590_p1() {
    p_054_0_3_cast_fu_3590_p1 = esl_sext<26,16>(conv_buff_val_96_V_27_reg_6966.read());
}

void conv_layer1::thread_p_Val2_22_1_cast_fu_4266_p2() {
    p_Val2_22_1_cast_fu_4266_p2 = (!tmp_18_reg_7320.read().is_01() || !ap_const_lv15_77BD.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_18_reg_7320.read()) + sc_bigint<15>(ap_const_lv15_77BD));
}

void conv_layer1::thread_p_Val2_22_1_fu_4261_p2() {
    p_Val2_22_1_fu_4261_p2 = (!sum_V_1_3_3_reg_7315.read().is_01() || !ap_const_lv16_F7BD.is_01())? sc_lv<16>(): (sc_biguint<16>(sum_V_1_3_3_reg_7315.read()) + sc_bigint<16>(ap_const_lv16_F7BD));
}

void conv_layer1::thread_p_Val2_22_2_cast_fu_4932_p2() {
    p_Val2_22_2_cast_fu_4932_p2 = (!tmp_22_fu_4916_p4.read().is_01() || !ap_const_lv15_7AC.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_22_fu_4916_p4.read()) + sc_biguint<15>(ap_const_lv15_7AC));
}

void conv_layer1::thread_p_Val2_22_2_fu_4926_p2() {
    p_Val2_22_2_fu_4926_p2 = (!sum_V_2_3_3_fu_4906_p4.read().is_01() || !ap_const_lv16_7AC.is_01())? sc_lv<16>(): (sc_biguint<16>(sum_V_2_3_3_fu_4906_p4.read()) + sc_biguint<16>(ap_const_lv16_7AC));
}

void conv_layer1::thread_p_Val2_22_3_cast_fu_4545_p2() {
    p_Val2_22_3_cast_fu_4545_p2 = (!tmp_26_reg_7369.read().is_01() || !ap_const_lv15_7984.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_26_reg_7369.read()) + sc_bigint<15>(ap_const_lv15_7984));
}

void conv_layer1::thread_p_Val2_22_3_fu_4327_p2() {
    p_Val2_22_3_fu_4327_p2 = (!sum_V_3_3_3_fu_4309_p4.read().is_01() || !ap_const_lv16_F984.is_01())? sc_lv<16>(): (sc_biguint<16>(sum_V_3_3_3_fu_4309_p4.read()) + sc_bigint<16>(ap_const_lv16_F984));
}

void conv_layer1::thread_p_Val2_22_4_cast_fu_4957_p2() {
    p_Val2_22_4_cast_fu_4957_p2 = (!tmp_30_reg_7409.read().is_01() || !ap_const_lv15_7770.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_30_reg_7409.read()) + sc_bigint<15>(ap_const_lv15_7770));
}

void conv_layer1::thread_p_Val2_22_4_fu_4952_p2() {
    p_Val2_22_4_fu_4952_p2 = (!sum_V_4_3_3_reg_7404.read().is_01() || !ap_const_lv16_F770.is_01())? sc_lv<16>(): (sc_biguint<16>(sum_V_4_3_3_reg_7404.read()) + sc_bigint<16>(ap_const_lv16_F770));
}

void conv_layer1::thread_p_Val2_22_5_cast_fu_5007_p2() {
    p_Val2_22_5_cast_fu_5007_p2 = (!tmp_34_fu_4992_p4.read().is_01() || !ap_const_lv15_E3.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_34_fu_4992_p4.read()) + sc_biguint<15>(ap_const_lv15_E3));
}

void conv_layer1::thread_p_Val2_22_5_fu_5001_p2() {
    p_Val2_22_5_fu_5001_p2 = (!sum_V_5_3_3_fu_4983_p4.read().is_01() || !ap_const_lv16_E3.is_01())? sc_lv<16>(): (sc_biguint<16>(sum_V_5_3_3_fu_4983_p4.read()) + sc_biguint<16>(ap_const_lv16_E3));
}

void conv_layer1::thread_p_Val2_22_6_cast_fu_5212_p2() {
    p_Val2_22_6_cast_fu_5212_p2 = (!tmp_38_reg_7449.read().is_01() || !ap_const_lv15_12.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_38_reg_7449.read()) + sc_biguint<15>(ap_const_lv15_12));
}

void conv_layer1::thread_p_Val2_22_6_fu_5207_p2() {
    p_Val2_22_6_fu_5207_p2 = (!sum_V_6_3_3_reg_7444.read().is_01() || !ap_const_lv16_12.is_01())? sc_lv<16>(): (sc_biguint<16>(sum_V_6_3_3_reg_7444.read()) + sc_biguint<16>(ap_const_lv16_12));
}

void conv_layer1::thread_p_Val2_22_7_cast_fu_5325_p2() {
    p_Val2_22_7_cast_fu_5325_p2 = (!tmp_42_reg_7469.read().is_01() || !ap_const_lv15_853.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_42_reg_7469.read()) + sc_biguint<15>(ap_const_lv15_853));
}

void conv_layer1::thread_p_Val2_22_7_fu_5313_p2() {
    p_Val2_22_7_fu_5313_p2 = (!sum_V_7_3_3_fu_5295_p4.read().is_01() || !ap_const_lv16_853.is_01())? sc_lv<16>(): (sc_biguint<16>(sum_V_7_3_3_fu_5295_p4.read()) + sc_biguint<16>(ap_const_lv16_853));
}

void conv_layer1::thread_p_Val2_22_cast_fu_4242_p2() {
    p_Val2_22_cast_fu_4242_p2 = (!tmp_14_reg_7310.read().is_01() || !ap_const_lv15_620.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_14_reg_7310.read()) + sc_biguint<15>(ap_const_lv15_620));
}

void conv_layer1::thread_p_Val2_24_1_0_2_fu_2534_p2() {
    p_Val2_24_1_0_2_fu_2534_p2 = (!p_shl5_cast_fu_2519_p1.read().is_01() || !p_shl8_cast_fu_2530_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(p_shl5_cast_fu_2519_p1.read()) + sc_bigint<24>(p_shl8_cast_fu_2530_p1.read()));
}

void conv_layer1::thread_p_Val2_24_1_1_fu_2977_p2() {
    p_Val2_24_1_1_fu_2977_p2 = (!p_shl14_cast_fu_2962_p1.read().is_01() || !p_shl16_cast_fu_2973_p1.read().is_01())? sc_lv<26>(): (sc_bigint<26>(p_shl14_cast_fu_2962_p1.read()) - sc_bigint<26>(p_shl16_cast_fu_2973_p1.read()));
}

void conv_layer1::thread_p_Val2_24_1_fu_5349_p0() {
    p_Val2_24_1_fu_5349_p0 =  (sc_lv<16>) (p_054_0_0_cast1_fu_2293_p1.read());
}

void conv_layer1::thread_p_Val2_24_1_fu_5349_p1() {
    p_Val2_24_1_fu_5349_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD3F);
}

void conv_layer1::thread_p_Val2_24_2_3_3_fu_4883_p2() {
    p_Val2_24_2_3_3_fu_4883_p2 = (!p_shl19_cast_fu_4868_p1.read().is_01() || !p_shl22_cast_fu_4879_p1.read().is_01())? sc_lv<25>(): (sc_bigint<25>(p_shl19_cast_fu_4868_p1.read()) + sc_bigint<25>(p_shl22_cast_fu_4879_p1.read()));
}

void conv_layer1::thread_p_Val2_24_2_fu_5356_p0() {
    p_Val2_24_2_fu_5356_p0 =  (sc_lv<16>) (p_054_0_0_cast1_fu_2293_p1.read());
}

void conv_layer1::thread_p_Val2_24_2_fu_5356_p1() {
    p_Val2_24_2_fu_5356_p1 =  (sc_lv<11>) (ap_const_lv27_28E);
}

void conv_layer1::thread_p_Val2_24_3_0_3_fu_2687_p2() {
    p_Val2_24_3_0_3_fu_2687_p2 = (!ap_const_lv21_0.is_01() || !p_shl21_cast_fu_2683_p1.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_0) - sc_bigint<21>(p_shl21_cast_fu_2683_p1.read()));
}

void conv_layer1::thread_p_Val2_24_3_1_fu_5370_p1() {
    p_Val2_24_3_1_fu_5370_p1 =  (sc_lv<10>) (ap_const_lv26_10A);
}

void conv_layer1::thread_p_Val2_24_3_3_1_fu_4028_p2() {
    p_Val2_24_3_3_1_fu_4028_p2 = (!p_neg1_fu_4011_p2.read().is_01() || !p_shl20_cast_fu_4024_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(p_neg1_fu_4011_p2.read()) - sc_bigint<23>(p_shl20_cast_fu_4024_p1.read()));
}

void conv_layer1::thread_p_Val2_24_3_fu_5363_p0() {
    p_Val2_24_3_fu_5363_p0 =  (sc_lv<16>) (p_054_0_0_cast1_fu_2293_p1.read());
}

void conv_layer1::thread_p_Val2_24_3_fu_5363_p1() {
    p_Val2_24_3_fu_5363_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFDD6);
}

void conv_layer1::thread_p_Val2_24_4_2_2_fu_4099_p2() {
    p_Val2_24_4_2_2_fu_4099_p2 = (!p_neg2_fu_4082_p2.read().is_01() || !p_shl17_cast_fu_4095_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(p_neg2_fu_4082_p2.read()) - sc_bigint<26>(p_shl17_cast_fu_4095_p1.read()));
}

void conv_layer1::thread_p_Val2_24_4_3_2_fu_4568_p2() {
    p_Val2_24_4_3_2_fu_4568_p2 = (!p_054_0_3_2_cast_fu_4542_p1.read().is_01() || !p_shl21_fu_4564_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(p_054_0_3_2_cast_fu_4542_p1.read()) - sc_bigint<23>(p_shl21_fu_4564_p1.read()));
}

void conv_layer1::thread_p_Val2_24_4_fu_5376_p0() {
    p_Val2_24_4_fu_5376_p0 =  (sc_lv<16>) (p_054_0_0_cast1_fu_2293_p1.read());
}

void conv_layer1::thread_p_Val2_24_4_fu_5376_p1() {
    p_Val2_24_4_fu_5376_p1 =  (sc_lv<11>) (ap_const_lv27_7FFFD25);
}

void conv_layer1::thread_p_Val2_24_5_fu_5383_p1() {
    p_Val2_24_5_fu_5383_p1 =  (sc_lv<8>) (ap_const_lv24_4B);
}

void conv_layer1::thread_p_Val2_24_6_2_3_fu_4706_p2() {
    p_Val2_24_6_2_3_fu_4706_p2 = (!p_shl9_cast_fu_4691_p1.read().is_01() || !p_shl10_cast_fu_4702_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(p_shl9_cast_fu_4691_p1.read()) - sc_bigint<27>(p_shl10_cast_fu_4702_p1.read()));
}

void conv_layer1::thread_p_Val2_24_6_3_2_fu_5045_p2() {
    p_Val2_24_6_3_2_fu_5045_p2 = (!ap_const_lv24_0.is_01() || !p_shl7_cast_fu_5041_p1.read().is_01())? sc_lv<24>(): (sc_biguint<24>(ap_const_lv24_0) - sc_bigint<24>(p_shl7_cast_fu_5041_p1.read()));
}

void conv_layer1::thread_p_Val2_24_6_3_3_fu_5099_p2() {
    p_Val2_24_6_3_3_fu_5099_p2 = (!p_neg5_fu_5089_p2.read().is_01() || !p_shl6_cast_fu_5095_p1.read().is_01())? sc_lv<22>(): (sc_biguint<22>(p_neg5_fu_5089_p2.read()) - sc_bigint<22>(p_shl6_cast_fu_5095_p1.read()));
}

void conv_layer1::thread_p_Val2_24_6_fu_2383_p2() {
    p_Val2_24_6_fu_2383_p2 = (!p_shl11_cast_fu_2367_p1.read().is_01() || !p_shl12_cast_fu_2379_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(p_shl11_cast_fu_2367_p1.read()) - sc_bigint<20>(p_shl12_cast_fu_2379_p1.read()));
}

void conv_layer1::thread_p_Val2_24_7_0_1_fu_2847_p2() {
    p_Val2_24_7_0_1_fu_2847_p2 = (!p_shl2_cast_fu_2832_p1.read().is_01() || !p_shl3_cast_fu_2843_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(p_shl2_cast_fu_2832_p1.read()) - sc_bigint<24>(p_shl3_cast_fu_2843_p1.read()));
}

void conv_layer1::thread_p_Val2_24_7_2_fu_4801_p2() {
    p_Val2_24_7_2_fu_4801_p2 = (!p_neg_fu_4784_p2.read().is_01() || !p_shl1_cast_fu_4797_p1.read().is_01())? sc_lv<25>(): (sc_biguint<25>(p_neg_fu_4784_p2.read()) - sc_bigint<25>(p_shl1_cast_fu_4797_p1.read()));
}

void conv_layer1::thread_p_Val2_24_7_fu_5399_p0() {
    p_Val2_24_7_fu_5399_p0 =  (sc_lv<16>) (p_054_0_0_cast1_fu_2293_p1.read());
}

void conv_layer1::thread_p_Val2_24_7_fu_5399_p1() {
    p_Val2_24_7_fu_5399_p1 =  (sc_lv<11>) (ap_const_lv27_2C6);
}

void conv_layer1::thread_p_Val2_25_1_0_2_fu_2561_p2() {
    p_Val2_25_1_0_2_fu_2561_p2 = (!tmp_103_1_0_2_fu_2549_p3.read().is_01() || !tmp_1043_1_0_2_cast_fu_2557_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_1_0_2_fu_2549_p3.read()) + sc_bigint<28>(tmp_1043_1_0_2_cast_fu_2557_p1.read()));
}

void conv_layer1::thread_p_Val2_25_1_1_fu_2994_p2() {
    p_Val2_25_1_1_fu_2994_p2 = (!tmp_103_1_1_fu_2983_p3.read().is_01() || !tmp_1043_1_1_cast_fu_2990_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_1_1_fu_2983_p3.read()) + sc_bigint<28>(tmp_1043_1_1_cast_fu_2990_p1.read()));
}

void conv_layer1::thread_p_Val2_25_2_3_3_fu_4900_p2() {
    p_Val2_25_2_3_3_fu_4900_p2 = (!tmp_103_2_3_3_fu_4889_p3.read().is_01() || !tmp_1043_2_3_3_cast_fu_4896_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_2_3_3_fu_4889_p3.read()) + sc_bigint<28>(tmp_1043_2_3_3_cast_fu_4896_p1.read()));
}

void conv_layer1::thread_p_Val2_25_3_0_3_fu_2714_p2() {
    p_Val2_25_3_0_3_fu_2714_p2 = (!tmp_103_3_0_3_fu_2702_p3.read().is_01() || !tmp_1043_3_0_3_cast_fu_2710_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_3_0_3_fu_2702_p3.read()) + sc_bigint<28>(tmp_1043_3_0_3_cast_fu_2710_p1.read()));
}

void conv_layer1::thread_p_Val2_25_3_1_fu_3104_p2() {
    p_Val2_25_3_1_fu_3104_p2 = (!tmp_103_3_1_fu_3094_p3.read().is_01() || !tmp_1043_3_1_cast_fu_3101_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_3_1_fu_3094_p3.read()) + sc_bigint<28>(tmp_1043_3_1_cast_fu_3101_p1.read()));
}

void conv_layer1::thread_p_Val2_25_3_3_1_fu_4055_p2() {
    p_Val2_25_3_3_1_fu_4055_p2 = (!tmp_103_3_3_1_fu_4043_p3.read().is_01() || !tmp_1043_3_3_1_cast_fu_4051_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_3_3_1_fu_4043_p3.read()) + sc_bigint<28>(tmp_1043_3_3_1_cast_fu_4051_p1.read()));
}

void conv_layer1::thread_p_Val2_25_4_2_2_fu_4116_p2() {
    p_Val2_25_4_2_2_fu_4116_p2 = (!tmp_103_4_2_2_fu_4105_p3.read().is_01() || !tmp_1043_4_2_2_cast_fu_4112_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_4_2_2_fu_4105_p3.read()) + sc_bigint<28>(tmp_1043_4_2_2_cast_fu_4112_p1.read()));
}

void conv_layer1::thread_p_Val2_25_4_3_2_fu_4585_p2() {
    p_Val2_25_4_3_2_fu_4585_p2 = (!tmp_103_4_3_2_fu_4574_p3.read().is_01() || !tmp_1043_4_3_2_cast_fu_4581_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_4_3_2_fu_4574_p3.read()) + sc_bigint<28>(tmp_1043_4_3_2_cast_fu_4581_p1.read()));
}

void conv_layer1::thread_p_Val2_25_6_1_fu_3524_p2() {
    p_Val2_25_6_1_fu_3524_p2 = (!tmp_103_6_1_fu_3516_p3.read().is_01() || !tmp_1043_3_1_cast_reg_7128.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_6_1_fu_3516_p3.read()) + sc_bigint<28>(tmp_1043_3_1_cast_reg_7128.read()));
}

void conv_layer1::thread_p_Val2_25_6_2_3_fu_4733_p2() {
    p_Val2_25_6_2_3_fu_4733_p2 = (!tmp_103_6_2_3_fu_4721_p3.read().is_01() || !tmp_1043_6_2_3_cast_fu_4729_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_6_2_3_fu_4721_p3.read()) + sc_bigint<28>(tmp_1043_6_2_3_cast_fu_4729_p1.read()));
}

void conv_layer1::thread_p_Val2_25_6_3_2_fu_5072_p2() {
    p_Val2_25_6_3_2_fu_5072_p2 = (!tmp_103_6_3_2_fu_5060_p3.read().is_01() || !tmp_1043_6_3_2_cast_fu_5068_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_6_3_2_fu_5060_p3.read()) + sc_bigint<28>(tmp_1043_6_3_2_cast_fu_5068_p1.read()));
}

void conv_layer1::thread_p_Val2_25_6_3_3_fu_5127_p2() {
    p_Val2_25_6_3_3_fu_5127_p2 = (!tmp_103_6_3_3_fu_5115_p3.read().is_01() || !tmp_1043_6_3_3_cast_fu_5123_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_6_3_3_fu_5115_p3.read()) + sc_bigint<28>(tmp_1043_6_3_3_cast_fu_5123_p1.read()));
}

void conv_layer1::thread_p_Val2_25_7_0_1_fu_2868_p2() {
    p_Val2_25_7_0_1_fu_2868_p2 = (!tmp_103_7_0_1_fu_2860_p1.read().is_01() || !tmp_1043_7_0_1_cast_fu_2864_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(tmp_103_7_0_1_fu_2860_p1.read()) + sc_bigint<28>(tmp_1043_7_0_1_cast_fu_2864_p1.read()));
}

void conv_layer1::thread_p_Val2_25_7_2_fu_4828_p2() {
    p_Val2_25_7_2_fu_4828_p2 = (!tmp_103_7_2_fu_4816_p3.read().is_01() || !tmp_1043_7_2_cast_fu_4824_p1.read().is_01())? sc_lv<28>(): (sc_biguint<28>(tmp_103_7_2_fu_4816_p3.read()) + sc_bigint<28>(tmp_1043_7_2_cast_fu_4824_p1.read()));
}

void conv_layer1::thread_p_Val2_2_fu_5342_p0() {
    p_Val2_2_fu_5342_p0 =  (sc_lv<16>) (p_054_0_0_cast1_fu_2293_p1.read());
}

void conv_layer1::thread_p_Val2_2_fu_5342_p1() {
    p_Val2_2_fu_5342_p1 =  (sc_lv<11>) (ap_const_lv27_20A);
}

void conv_layer1::thread_p_Val2_s_fu_4237_p2() {
    p_Val2_s_fu_4237_p2 = (!sum_V_0_3_3_reg_7305.read().is_01() || !ap_const_lv16_620.is_01())? sc_lv<16>(): (sc_biguint<16>(sum_V_0_3_3_reg_7305.read()) + sc_biguint<16>(ap_const_lv16_620));
}

void conv_layer1::thread_p_neg1_fu_4011_p2() {
    p_neg1_fu_4011_p2 = (!ap_const_lv23_0.is_01() || !p_shl18_cast_fu_4007_p1.read().is_01())? sc_lv<23>(): (sc_biguint<23>(ap_const_lv23_0) - sc_bigint<23>(p_shl18_cast_fu_4007_p1.read()));
}

void conv_layer1::thread_p_neg2_fu_4082_p2() {
    p_neg2_fu_4082_p2 = (!ap_const_lv26_0.is_01() || !p_shl15_cast_fu_4078_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(ap_const_lv26_0) - sc_bigint<26>(p_shl15_cast_fu_4078_p1.read()));
}

void conv_layer1::thread_p_neg5_fu_5089_p2() {
    p_neg5_fu_5089_p2 = (!ap_const_lv22_0.is_01() || !p_shl4_cast_fu_5085_p1.read().is_01())? sc_lv<22>(): (sc_biguint<22>(ap_const_lv22_0) - sc_bigint<22>(p_shl4_cast_fu_5085_p1.read()));
}

void conv_layer1::thread_p_neg_fu_4784_p2() {
    p_neg_fu_4784_p2 = (!ap_const_lv25_0.is_01() || !p_shl_cast_fu_4780_p1.read().is_01())? sc_lv<25>(): (sc_biguint<25>(ap_const_lv25_0) - sc_bigint<25>(p_shl_cast_fu_4780_p1.read()));
}

void conv_layer1::thread_p_shl10_cast_fu_4702_p1() {
    p_shl10_cast_fu_4702_p1 = esl_sext<27,24>(p_shl10_fu_4695_p3.read());
}

void conv_layer1::thread_p_shl10_fu_4695_p3() {
    p_shl10_fu_4695_p3 = esl_concat<16,8>(conv_buff_val_67_V_27_reg_6956.read(), ap_const_lv8_0);
}

void conv_layer1::thread_p_shl11_cast_fu_2367_p1() {
    p_shl11_cast_fu_2367_p1 = esl_sext<20,19>(p_shl11_fu_2359_p3.read());
}

void conv_layer1::thread_p_shl11_fu_2359_p3() {
    p_shl11_fu_2359_p3 = esl_concat<16,3>(conv_buff_val_0_V_q0.read(), ap_const_lv3_0);
}

void conv_layer1::thread_p_shl12_cast_fu_2379_p1() {
    p_shl12_cast_fu_2379_p1 = esl_sext<20,17>(p_shl12_fu_2371_p3.read());
}

void conv_layer1::thread_p_shl12_fu_2371_p3() {
    p_shl12_fu_2371_p3 = esl_concat<16,1>(conv_buff_val_0_V_q0.read(), ap_const_lv1_0);
}

void conv_layer1::thread_p_shl13_fu_2966_p3() {
    p_shl13_fu_2966_p3 = esl_concat<16,3>(conv_buff_val_32_V_27_reg_6895.read(), ap_const_lv3_0);
}

void conv_layer1::thread_p_shl14_cast_fu_2962_p1() {
    p_shl14_cast_fu_2962_p1 = esl_sext<26,25>(p_shl6_fu_2955_p3.read());
}

void conv_layer1::thread_p_shl14_fu_4861_p3() {
    p_shl14_fu_4861_p3 = esl_concat<16,8>(conv_buff_val_99_V_27_reg_6991.read(), ap_const_lv8_0);
}

void conv_layer1::thread_p_shl15_cast_fu_4078_p1() {
    p_shl15_cast_fu_4078_p1 = esl_sext<26,25>(p_shl15_fu_4071_p3.read());
}

void conv_layer1::thread_p_shl15_fu_4071_p3() {
    p_shl15_fu_4071_p3 = esl_concat<16,9>(conv_buff_val_66_V_27_reg_6947.read(), ap_const_lv9_0);
}

void conv_layer1::thread_p_shl16_cast_fu_2973_p1() {
    p_shl16_cast_fu_2973_p1 = esl_sext<26,19>(p_shl13_fu_2966_p3.read());
}

void conv_layer1::thread_p_shl16_fu_4872_p3() {
    p_shl16_fu_4872_p3 = esl_concat<16,1>(conv_buff_val_99_V_27_reg_6991.read(), ap_const_lv1_0);
}

void conv_layer1::thread_p_shl17_cast_fu_4095_p1() {
    p_shl17_cast_fu_4095_p1 = esl_sext<26,21>(p_shl17_fu_4088_p3.read());
}

void conv_layer1::thread_p_shl17_fu_4088_p3() {
    p_shl17_fu_4088_p3 = esl_concat<16,5>(conv_buff_val_66_V_27_reg_6947.read(), ap_const_lv5_0);
}

void conv_layer1::thread_p_shl18_cast_fu_4007_p1() {
    p_shl18_cast_fu_4007_p1 = esl_sext<23,22>(p_shl18_fu_4000_p3.read());
}

void conv_layer1::thread_p_shl18_fu_4000_p3() {
    p_shl18_fu_4000_p3 = esl_concat<16,6>(conv_buff_val_97_V_27_reg_6973.read(), ap_const_lv6_0);
}

void conv_layer1::thread_p_shl19_cast_fu_4868_p1() {
    p_shl19_cast_fu_4868_p1 = esl_sext<25,24>(p_shl14_fu_4861_p3.read());
}

void conv_layer1::thread_p_shl19_fu_2676_p3() {
    p_shl19_fu_2676_p3 = esl_concat<16,4>(conv_buff_val_3_V_l_26_reg_6887.read(), ap_const_lv4_0);
}

void conv_layer1::thread_p_shl1_cast_fu_4797_p1() {
    p_shl1_cast_fu_4797_p1 = esl_sext<25,18>(p_shl1_fu_4790_p3.read());
}

void conv_layer1::thread_p_shl1_fu_4790_p3() {
    p_shl1_fu_4790_p3 = esl_concat<16,2>(conv_buff_val_64_V_27_reg_6930.read(), ap_const_lv2_0);
}

void conv_layer1::thread_p_shl20_cast_fu_4024_p1() {
    p_shl20_cast_fu_4024_p1 = esl_sext<23,20>(p_shl20_fu_4017_p3.read());
}

void conv_layer1::thread_p_shl20_fu_4017_p3() {
    p_shl20_fu_4017_p3 = esl_concat<16,4>(conv_buff_val_97_V_27_reg_6973.read(), ap_const_lv4_0);
}

void conv_layer1::thread_p_shl21_cast_fu_2683_p1() {
    p_shl21_cast_fu_2683_p1 = esl_sext<21,20>(p_shl19_fu_2676_p3.read());
}

void conv_layer1::thread_p_shl21_fu_4564_p1() {
    p_shl21_fu_4564_p1 = esl_sext<23,22>(tmp_313_fu_4557_p3.read());
}

void conv_layer1::thread_p_shl22_cast_fu_4879_p1() {
    p_shl22_cast_fu_4879_p1 = esl_sext<25,17>(p_shl16_fu_4872_p3.read());
}

void conv_layer1::thread_p_shl2_cast_fu_2832_p1() {
    p_shl2_cast_fu_2832_p1 = esl_sext<24,23>(p_shl2_fu_2825_p3.read());
}

void conv_layer1::thread_p_shl2_fu_2825_p3() {
    p_shl2_fu_2825_p3 = esl_concat<16,7>(conv_buff_val_1_V_l_26_reg_6871.read(), ap_const_lv7_0);
}

void conv_layer1::thread_p_shl3_cast_fu_2843_p1() {
    p_shl3_cast_fu_2843_p1 = esl_sext<24,17>(p_shl3_fu_2836_p3.read());
}

void conv_layer1::thread_p_shl3_fu_2836_p3() {
    p_shl3_fu_2836_p3 = esl_concat<16,1>(conv_buff_val_1_V_l_26_reg_6871.read(), ap_const_lv1_0);
}

void conv_layer1::thread_p_shl4_cast_fu_5085_p1() {
    p_shl4_cast_fu_5085_p1 = esl_sext<22,21>(p_shl4_fu_5078_p3.read());
}

void conv_layer1::thread_p_shl4_fu_5078_p3() {
    p_shl4_fu_5078_p3 = esl_concat<16,5>(conv_buff_val_99_V_27_reg_6991.read(), ap_const_lv5_0);
}

void conv_layer1::thread_p_shl5_cast_fu_2519_p1() {
    p_shl5_cast_fu_2519_p1 = esl_sext<24,23>(p_shl5_fu_2512_p3.read());
}

void conv_layer1::thread_p_shl5_fu_2512_p3() {
    p_shl5_fu_2512_p3 = esl_concat<16,7>(conv_buff_val_2_V_l_26_reg_6879.read(), ap_const_lv7_0);
}

void conv_layer1::thread_p_shl6_cast_fu_5095_p1() {
    p_shl6_cast_fu_5095_p1 = esl_sext<22,17>(p_shl16_fu_4872_p3.read());
}

void conv_layer1::thread_p_shl6_fu_2955_p3() {
    p_shl6_fu_2955_p3 = esl_concat<16,9>(conv_buff_val_32_V_27_reg_6895.read(), ap_const_lv9_0);
}

void conv_layer1::thread_p_shl7_cast_fu_5041_p1() {
    p_shl7_cast_fu_5041_p1 = esl_sext<24,23>(p_shl7_fu_5034_p3.read());
}

void conv_layer1::thread_p_shl7_fu_5034_p3() {
    p_shl7_fu_5034_p3 = esl_concat<16,7>(conv_buff_val_98_V_27_reg_6982.read(), ap_const_lv7_0);
}

void conv_layer1::thread_p_shl8_cast_fu_2530_p1() {
    p_shl8_cast_fu_2530_p1 = esl_sext<24,21>(p_shl8_fu_2523_p3.read());
}

void conv_layer1::thread_p_shl8_fu_2523_p3() {
    p_shl8_fu_2523_p3 = esl_concat<16,5>(conv_buff_val_2_V_l_26_reg_6879.read(), ap_const_lv5_0);
}

void conv_layer1::thread_p_shl9_cast_fu_4691_p1() {
    p_shl9_cast_fu_4691_p1 = esl_sext<27,26>(p_shl9_fu_4684_p3.read());
}

void conv_layer1::thread_p_shl9_fu_4684_p3() {
    p_shl9_fu_4684_p3 = esl_concat<16,10>(conv_buff_val_67_V_27_reg_6956.read(), ap_const_lv10_0);
}

void conv_layer1::thread_p_shl_cast_fu_4780_p1() {
    p_shl_cast_fu_4780_p1 = esl_sext<25,24>(p_shl_fu_4773_p3.read());
}

void conv_layer1::thread_p_shl_fu_4773_p3() {
    p_shl_fu_4773_p3 = esl_concat<16,8>(conv_buff_val_64_V_27_reg_6930.read(), ap_const_lv8_0);
}

void conv_layer1::thread_sum_V_2_3_3_fu_4906_p4() {
    sum_V_2_3_3_fu_4906_p4 = p_Val2_25_2_3_3_fu_4900_p2.read().range(27, 12);
}

void conv_layer1::thread_sum_V_3_3_3_fu_4309_p4() {
    sum_V_3_3_3_fu_4309_p4 = grp_fu_6079_p3.read().range(27, 12);
}

void conv_layer1::thread_sum_V_5_3_3_fu_4983_p4() {
    sum_V_5_3_3_fu_4983_p4 = grp_fu_6252_p3.read().range(27, 12);
}

void conv_layer1::thread_sum_V_7_3_3_fu_5295_p4() {
    sum_V_7_3_3_fu_5295_p4 = grp_fu_6309_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_103_1_0_2_fu_2549_p3() {
    tmp_103_1_0_2_fu_2549_p3 = esl_concat<16,12>(tmp_256_fu_2540_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_1_1_fu_2983_p3() {
    tmp_103_1_1_fu_2983_p3 = esl_concat<16,12>(tmp_258_reg_7057.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_2_3_3_fu_4889_p3() {
    tmp_103_2_3_3_fu_4889_p3 = esl_concat<16,12>(tmp_284_reg_7325.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_3_0_3_fu_2702_p3() {
    tmp_103_3_0_3_fu_2702_p3 = esl_concat<16,12>(tmp_287_fu_2693_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_3_1_fu_3094_p3() {
    tmp_103_3_1_fu_3094_p3 = esl_concat<16,12>(tmp_288_reg_7067.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_3_3_1_fu_4043_p3() {
    tmp_103_3_3_1_fu_4043_p3 = esl_concat<16,12>(tmp_297_fu_4034_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_4_2_2_fu_4105_p3() {
    tmp_103_4_2_2_fu_4105_p3 = esl_concat<16,12>(tmp_309_reg_7264.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_4_3_2_fu_4574_p3() {
    tmp_103_4_3_2_fu_4574_p3 = esl_concat<16,12>(tmp_314_reg_7379.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_6_1_fu_3516_p3() {
    tmp_103_6_1_fu_3516_p3 = esl_concat<16,12>(tmp_332_fu_3507_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_6_2_3_fu_4721_p3() {
    tmp_103_6_2_3_fu_4721_p3 = esl_concat<16,12>(tmp_339_fu_4712_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_6_3_2_fu_5060_p3() {
    tmp_103_6_3_2_fu_5060_p3 = esl_concat<16,12>(tmp_342_fu_5051_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_6_3_3_fu_5115_p3() {
    tmp_103_6_3_3_fu_5115_p3 = esl_concat<16,12>(tmp_343_fu_5105_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_103_7_0_1_fu_2860_p1() {
    tmp_103_7_0_1_fu_2860_p1 = esl_sext<28,27>(tmp_344_fu_2853_p3.read());
}

void conv_layer1::thread_tmp_103_7_2_fu_4816_p3() {
    tmp_103_7_2_fu_4816_p3 = esl_concat<16,12>(tmp_351_fu_4807_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_1043_1_0_2_cast_fu_2557_p1() {
    tmp_1043_1_0_2_cast_fu_2557_p1 = esl_sext<28,24>(p_Val2_24_1_0_2_fu_2534_p2.read());
}

void conv_layer1::thread_tmp_1043_1_1_cast_fu_2990_p1() {
    tmp_1043_1_1_cast_fu_2990_p1 = esl_sext<28,26>(p_Val2_24_1_1_fu_2977_p2.read());
}

void conv_layer1::thread_tmp_1043_2_3_3_cast_fu_4896_p1() {
    tmp_1043_2_3_3_cast_fu_4896_p1 = esl_sext<28,25>(p_Val2_24_2_3_3_fu_4883_p2.read());
}

void conv_layer1::thread_tmp_1043_3_0_3_cast_fu_2710_p1() {
    tmp_1043_3_0_3_cast_fu_2710_p1 = esl_sext<28,21>(p_Val2_24_3_0_3_fu_2687_p2.read());
}

void conv_layer1::thread_tmp_1043_3_1_cast_fu_3101_p1() {
    tmp_1043_3_1_cast_fu_3101_p1 = esl_sext<28,26>(p_Val2_24_3_1_reg_7015.read());
}

void conv_layer1::thread_tmp_1043_3_3_1_cast_fu_4051_p1() {
    tmp_1043_3_3_1_cast_fu_4051_p1 = esl_sext<28,23>(p_Val2_24_3_3_1_fu_4028_p2.read());
}

void conv_layer1::thread_tmp_1043_4_2_2_cast_fu_4112_p1() {
    tmp_1043_4_2_2_cast_fu_4112_p1 = esl_sext<28,26>(p_Val2_24_4_2_2_fu_4099_p2.read());
}

void conv_layer1::thread_tmp_1043_4_3_2_cast_fu_4581_p1() {
    tmp_1043_4_3_2_cast_fu_4581_p1 = esl_sext<28,23>(p_Val2_24_4_3_2_fu_4568_p2.read());
}

void conv_layer1::thread_tmp_1043_6_2_3_cast_fu_4729_p1() {
    tmp_1043_6_2_3_cast_fu_4729_p1 = esl_sext<28,27>(p_Val2_24_6_2_3_fu_4706_p2.read());
}

void conv_layer1::thread_tmp_1043_6_3_2_cast_fu_5068_p1() {
    tmp_1043_6_3_2_cast_fu_5068_p1 = esl_sext<28,24>(p_Val2_24_6_3_2_fu_5045_p2.read());
}

void conv_layer1::thread_tmp_1043_6_3_3_cast_fu_5123_p1() {
    tmp_1043_6_3_3_cast_fu_5123_p1 = esl_sext<28,22>(p_Val2_24_6_3_3_fu_5099_p2.read());
}

void conv_layer1::thread_tmp_1043_7_0_1_cast_fu_2864_p1() {
    tmp_1043_7_0_1_cast_fu_2864_p1 = esl_sext<28,24>(p_Val2_24_7_0_1_fu_2847_p2.read());
}

void conv_layer1::thread_tmp_1043_7_2_cast_fu_4824_p1() {
    tmp_1043_7_2_cast_fu_4824_p1 = esl_sext<28,25>(p_Val2_24_7_2_fu_4801_p2.read());
}

void conv_layer1::thread_tmp_15_fu_2795_p4() {
    tmp_15_fu_2795_p4 = grp_fu_5523_p3.read().range(25, 12);
}

void conv_layer1::thread_tmp_17_fu_2804_p3() {
    tmp_17_fu_2804_p3 = esl_concat<14,12>(tmp_15_fu_2795_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_21_fu_3220_p3() {
    tmp_21_fu_3220_p3 = esl_concat<12,12>(tmp_19_reg_7030.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_22_fu_4916_p4() {
    tmp_22_fu_4916_p4 = p_Val2_25_2_3_3_fu_4900_p2.read().range(26, 12);
}

void conv_layer1::thread_tmp_240_fu_2435_p3() {
    tmp_240_fu_2435_p3 = esl_concat<15,12>(tmp_11_reg_6866.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_241_fu_2452_p4() {
    tmp_241_fu_2452_p4 = grp_fu_5406_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_242_fu_2475_p4() {
    tmp_242_fu_2475_p4 = grp_fu_5415_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_244_fu_2903_p4() {
    tmp_244_fu_2903_p4 = grp_fu_5541_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_245_fu_2929_p4() {
    tmp_245_fu_2929_p4 = grp_fu_5550_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_247_fu_3268_p4() {
    tmp_247_fu_3268_p4 = grp_fu_5674_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_248_fu_3291_p4() {
    tmp_248_fu_3291_p4 = grp_fu_5683_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_250_fu_3567_p4() {
    tmp_250_fu_3567_p4 = grp_fu_5807_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_251_fu_3593_p4() {
    tmp_251_fu_3593_p4 = grp_fu_5816_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_253_fu_3843_p4() {
    tmp_253_fu_3843_p4 = grp_fu_5940_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_254_fu_3866_p4() {
    tmp_254_fu_3866_p4 = grp_fu_5949_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_255_fu_2501_p3() {
    tmp_255_fu_2501_p3 = esl_concat<15,12>(tmp_16_reg_7000.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_256_fu_2540_p4() {
    tmp_256_fu_2540_p4 = grp_fu_5433_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_257_fu_2567_p4() {
    tmp_257_fu_2567_p4 = p_Val2_25_1_0_2_fu_2561_p2.read().range(27, 12);
}

void conv_layer1::thread_tmp_259_fu_3000_p4() {
    tmp_259_fu_3000_p4 = p_Val2_25_1_1_fu_2994_p2.read().range(27, 12);
}

void conv_layer1::thread_tmp_260_fu_3018_p4() {
    tmp_260_fu_3018_p4 = grp_fu_5568_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_262_fu_3324_p4() {
    tmp_262_fu_3324_p4 = grp_fu_5701_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_263_fu_3341_p4() {
    tmp_263_fu_3341_p4 = grp_fu_5710_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_265_fu_3626_p4() {
    tmp_265_fu_3626_p4 = grp_fu_5834_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_266_fu_3643_p4() {
    tmp_266_fu_3643_p4 = grp_fu_5843_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_268_fu_3908_p4() {
    tmp_268_fu_3908_p4 = grp_fu_5968_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_269_fu_3925_p4() {
    tmp_269_fu_3925_p4 = grp_fu_5977_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_270_fu_2594_p3() {
    tmp_270_fu_2594_p3 = esl_concat<15,12>(tmp_20_reg_7005.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_271_fu_2605_p4() {
    tmp_271_fu_2605_p4 = grp_fu_5451_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_272_fu_2622_p4() {
    tmp_272_fu_2622_p4 = grp_fu_5460_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_274_fu_3051_p4() {
    tmp_274_fu_3051_p4 = grp_fu_5586_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_275_fu_3068_p4() {
    tmp_275_fu_3068_p4 = grp_fu_5595_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_277_fu_3374_p4() {
    tmp_277_fu_3374_p4 = grp_fu_5728_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_278_fu_3391_p4() {
    tmp_278_fu_3391_p4 = grp_fu_5737_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_280_fu_3676_p4() {
    tmp_280_fu_3676_p4 = grp_fu_5861_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_281_fu_3693_p4() {
    tmp_281_fu_3693_p4 = grp_fu_5870_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_283_fu_3967_p4() {
    tmp_283_fu_3967_p4 = grp_fu_5996_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_285_fu_2648_p3() {
    tmp_285_fu_2648_p3 = esl_concat<15,12>(tmp_24_reg_7010.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_286_fu_2659_p4() {
    tmp_286_fu_2659_p4 = grp_fu_5478_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_287_fu_2693_p4() {
    tmp_287_fu_2693_p4 = grp_fu_5487_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_289_fu_3110_p4() {
    tmp_289_fu_3110_p4 = p_Val2_25_3_1_fu_3104_p2.read().range(27, 12);
}

void conv_layer1::thread_tmp_290_fu_3128_p4() {
    tmp_290_fu_3128_p4 = grp_fu_5613_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_292_fu_3424_p4() {
    tmp_292_fu_3424_p4 = grp_fu_5755_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_293_fu_3441_p4() {
    tmp_293_fu_3441_p4 = grp_fu_5764_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_295_fu_3726_p4() {
    tmp_295_fu_3726_p4 = grp_fu_5888_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_297_fu_4034_p4() {
    tmp_297_fu_4034_p4 = grp_fu_6014_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_299_fu_4292_p4() {
    tmp_299_fu_4292_p4 = grp_fu_6071_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_300_fu_2730_p3() {
    tmp_300_fu_2730_p3 = esl_concat<15,12>(tmp_28_reg_7020.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_301_fu_2741_p4() {
    tmp_301_fu_2741_p4 = grp_fu_5496_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_302_fu_2758_p4() {
    tmp_302_fu_2758_p4 = grp_fu_5505_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_304_fu_3161_p4() {
    tmp_304_fu_3161_p4 = grp_fu_5631_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_305_fu_3178_p4() {
    tmp_305_fu_3178_p4 = grp_fu_5640_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_307_fu_3759_p4() {
    tmp_307_fu_3759_p4 = grp_fu_5906_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_308_fu_3776_p4() {
    tmp_308_fu_3776_p4 = grp_fu_5914_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_311_fu_4346_p4() {
    tmp_311_fu_4346_p4 = grp_fu_6088_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_312_fu_4363_p4() {
    tmp_312_fu_4363_p4 = grp_fu_6097_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_313_fu_4557_p3() {
    tmp_313_fu_4557_p3 = esl_concat<16,6>(conv_buff_val_98_V_27_reg_6982.read(), ap_const_lv6_0);
}

void conv_layer1::thread_tmp_315_fu_4591_p4() {
    tmp_315_fu_4591_p4 = p_Val2_25_4_3_2_fu_4585_p2.read().range(27, 12);
}

void conv_layer1::thread_tmp_316_fu_2784_p3() {
    tmp_316_fu_2784_p3 = esl_concat<12,12>(tmp_32_reg_7025.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_319_fu_3474_p4() {
    tmp_319_fu_3474_p4 = grp_fu_5782_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_322_fu_4139_p4() {
    tmp_322_fu_4139_p4 = grp_fu_6022_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_324_fu_4396_p4() {
    tmp_324_fu_4396_p4 = grp_fu_6113_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_325_fu_4413_p4() {
    tmp_325_fu_4413_p4 = grp_fu_6121_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_327_fu_4634_p4() {
    tmp_327_fu_4634_p4 = grp_fu_6195_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_328_fu_4651_p4() {
    tmp_328_fu_4651_p4 = grp_fu_6203_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_330_fu_2399_p3() {
    tmp_330_fu_2399_p3 = esl_concat<8,12>(tmp_36_fu_2389_p4.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_332_fu_3507_p4() {
    tmp_332_fu_3507_p4 = grp_fu_5798_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_334_fu_4172_p4() {
    tmp_334_fu_4172_p4 = grp_fu_6038_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_336_fu_4446_p4() {
    tmp_336_fu_4446_p4 = grp_fu_6138_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_337_fu_4463_p4() {
    tmp_337_fu_4463_p4 = grp_fu_6146_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_339_fu_4712_p4() {
    tmp_339_fu_4712_p4 = grp_fu_6219_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_340_fu_4739_p4() {
    tmp_340_fu_4739_p4 = p_Val2_25_6_2_3_fu_4733_p2.read().range(27, 12);
}

void conv_layer1::thread_tmp_342_fu_5051_p4() {
    tmp_342_fu_5051_p4 = grp_fu_6261_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_343_fu_5105_p4() {
    tmp_343_fu_5105_p4 = p_Val2_25_6_3_2_fu_5072_p2.read().range(27, 12);
}

void conv_layer1::thread_tmp_344_fu_2853_p3() {
    tmp_344_fu_2853_p3 = esl_concat<15,12>(tmp_40_reg_7035.read(), ap_const_lv12_0);
}

void conv_layer1::thread_tmp_346_fu_4205_p4() {
    tmp_346_fu_4205_p4 = grp_fu_6055_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_348_fu_4496_p4() {
    tmp_348_fu_4496_p4 = grp_fu_6162_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_349_fu_4513_p4() {
    tmp_349_fu_4513_p4 = grp_fu_6170_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_34_fu_4992_p4() {
    tmp_34_fu_4992_p4 = grp_fu_6252_p3.read().range(26, 12);
}

void conv_layer1::thread_tmp_351_fu_4807_p4() {
    tmp_351_fu_4807_p4 = grp_fu_6235_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_352_fu_4834_p4() {
    tmp_352_fu_4834_p4 = p_Val2_25_7_2_fu_4828_p2.read().range(27, 12);
}

void conv_layer1::thread_tmp_354_fu_5160_p4() {
    tmp_354_fu_5160_p4 = grp_fu_6269_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_355_fu_5177_p4() {
    tmp_355_fu_5177_p4 = grp_fu_6277_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_358_fu_5278_p4() {
    tmp_358_fu_5278_p4 = grp_fu_6301_p3.read().range(27, 12);
}

void conv_layer1::thread_tmp_36_fu_2389_p4() {
    tmp_36_fu_2389_p4 = p_Val2_24_6_fu_2383_p2.read().range(19, 12);
}

void conv_layer1::thread_tmp_3_fu_2283_p2() {
    tmp_3_fu_2283_p2 = (!j_5_fu_2275_p3.read().is_01() || !ap_const_lv5_1D.is_01())? sc_lv<1>(): (sc_biguint<5>(j_5_fu_2275_p3.read()) < sc_biguint<5>(ap_const_lv5_1D));
}

void conv_layer1::thread_tmp_V_1_fu_5247_p1() {
    tmp_V_1_fu_5247_p1 = esl_zext<16,15>(tmp_V_744_reg_7439.read());
}

void conv_layer1::thread_tmp_V_2_fu_5267_p1() {
    tmp_V_2_fu_5267_p1 = esl_zext<16,15>(tmp_V_745_reg_7459.read());
}

void conv_layer1::thread_tmp_V_3_fu_5337_p1() {
    tmp_V_3_fu_5337_p1 = esl_zext<16,15>(tmp_V_746_fu_5330_p3.read());
}

void conv_layer1::thread_tmp_V_5_fu_5203_p1() {
    tmp_V_5_fu_5203_p1 = esl_zext<16,15>(tmp_V_reg_7359.read());
}

void conv_layer1::thread_tmp_V_6_fu_5231_p1() {
    tmp_V_6_fu_5231_p1 = esl_zext<16,15>(tmp_V_740_reg_7364.read());
}

void conv_layer1::thread_tmp_V_740_fu_4277_p3() {
    tmp_V_740_fu_4277_p3 = (!tmp_i1_fu_4271_p2.read()[0].is_01())? sc_lv<15>(): ((tmp_i1_fu_4271_p2.read()[0].to_bool())? p_Val2_22_1_cast_fu_4266_p2.read(): ap_const_lv15_0);
}

void conv_layer1::thread_tmp_V_741_fu_4944_p3() {
    tmp_V_741_fu_4944_p3 = (!tmp_i2_fu_4938_p2.read()[0].is_01())? sc_lv<15>(): ((tmp_i2_fu_4938_p2.read()[0].to_bool())? p_Val2_22_2_cast_fu_4932_p2.read(): ap_const_lv15_0);
}

void conv_layer1::thread_tmp_V_742_fu_4550_p3() {
    tmp_V_742_fu_4550_p3 = (!tmp_i3_reg_7374.read()[0].is_01())? sc_lv<15>(): ((tmp_i3_reg_7374.read()[0].to_bool())? p_Val2_22_3_cast_fu_4545_p2.read(): ap_const_lv15_0);
}

void conv_layer1::thread_tmp_V_743_fu_4968_p3() {
    tmp_V_743_fu_4968_p3 = (!tmp_i5_fu_4962_p2.read()[0].is_01())? sc_lv<15>(): ((tmp_i5_fu_4962_p2.read()[0].to_bool())? p_Val2_22_4_cast_fu_4957_p2.read(): ap_const_lv15_0);
}

void conv_layer1::thread_tmp_V_744_fu_5019_p3() {
    tmp_V_744_fu_5019_p3 = (!tmp_i6_fu_5013_p2.read()[0].is_01())? sc_lv<15>(): ((tmp_i6_fu_5013_p2.read()[0].to_bool())? p_Val2_22_5_cast_fu_5007_p2.read(): ap_const_lv15_0);
}

void conv_layer1::thread_tmp_V_745_fu_5223_p3() {
    tmp_V_745_fu_5223_p3 = (!tmp_i7_fu_5217_p2.read()[0].is_01())? sc_lv<15>(): ((tmp_i7_fu_5217_p2.read()[0].to_bool())? p_Val2_22_6_cast_fu_5212_p2.read(): ap_const_lv15_0);
}

void conv_layer1::thread_tmp_V_746_fu_5330_p3() {
    tmp_V_746_fu_5330_p3 = (!tmp_i8_reg_7474.read()[0].is_01())? sc_lv<15>(): ((tmp_i8_reg_7474.read()[0].to_bool())? p_Val2_22_7_cast_fu_5325_p2.read(): ap_const_lv15_0);
}

void conv_layer1::thread_tmp_V_7_fu_5235_p1() {
    tmp_V_7_fu_5235_p1 = esl_zext<16,15>(tmp_V_741_reg_7429.read());
}

void conv_layer1::thread_tmp_V_8_fu_5239_p1() {
    tmp_V_8_fu_5239_p1 = esl_zext<16,15>(tmp_V_742_reg_7399.read());
}

void conv_layer1::thread_tmp_V_9_fu_5243_p1() {
    tmp_V_9_fu_5243_p1 = esl_zext<16,15>(tmp_V_743_reg_7434.read());
}

void conv_layer1::thread_tmp_V_fu_4253_p3() {
    tmp_V_fu_4253_p3 = (!tmp_i_fu_4247_p2.read()[0].is_01())? sc_lv<15>(): ((tmp_i_fu_4247_p2.read()[0].to_bool())? p_Val2_22_cast_fu_4242_p2.read(): ap_const_lv15_0);
}

void conv_layer1::thread_tmp_i1_fu_4271_p2() {
    tmp_i1_fu_4271_p2 = (!p_Val2_22_1_fu_4261_p2.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): (sc_bigint<16>(p_Val2_22_1_fu_4261_p2.read()) > sc_bigint<16>(ap_const_lv16_0));
}

void conv_layer1::thread_tmp_i2_fu_4938_p2() {
    tmp_i2_fu_4938_p2 = (!p_Val2_22_2_fu_4926_p2.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): (sc_bigint<16>(p_Val2_22_2_fu_4926_p2.read()) > sc_bigint<16>(ap_const_lv16_0));
}

void conv_layer1::thread_tmp_i3_fu_4333_p2() {
    tmp_i3_fu_4333_p2 = (!p_Val2_22_3_fu_4327_p2.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): (sc_bigint<16>(p_Val2_22_3_fu_4327_p2.read()) > sc_bigint<16>(ap_const_lv16_0));
}

void conv_layer1::thread_tmp_i5_fu_4962_p2() {
    tmp_i5_fu_4962_p2 = (!p_Val2_22_4_fu_4952_p2.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): (sc_bigint<16>(p_Val2_22_4_fu_4952_p2.read()) > sc_bigint<16>(ap_const_lv16_0));
}

void conv_layer1::thread_tmp_i6_fu_5013_p2() {
    tmp_i6_fu_5013_p2 = (!p_Val2_22_5_fu_5001_p2.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): (sc_bigint<16>(p_Val2_22_5_fu_5001_p2.read()) > sc_bigint<16>(ap_const_lv16_0));
}

void conv_layer1::thread_tmp_i7_fu_5217_p2() {
    tmp_i7_fu_5217_p2 = (!p_Val2_22_6_fu_5207_p2.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): (sc_bigint<16>(p_Val2_22_6_fu_5207_p2.read()) > sc_bigint<16>(ap_const_lv16_0));
}

void conv_layer1::thread_tmp_i8_fu_5319_p2() {
    tmp_i8_fu_5319_p2 = (!p_Val2_22_7_fu_5313_p2.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): (sc_bigint<16>(p_Val2_22_7_fu_5313_p2.read()) > sc_bigint<16>(ap_const_lv16_0));
}

void conv_layer1::thread_tmp_i_fu_4247_p2() {
    tmp_i_fu_4247_p2 = (!p_Val2_s_fu_4237_p2.read().is_01() || !ap_const_lv16_0.is_01())? sc_lv<1>(): (sc_bigint<16>(p_Val2_s_fu_4237_p2.read()) > sc_bigint<16>(ap_const_lv16_0));
}

void conv_layer1::thread_tmp_mid1_fu_2241_p2() {
    tmp_mid1_fu_2241_p2 = (!i_5_mid1_fu_2235_p2.read().is_01() || !ap_const_lv5_1D.is_01())? sc_lv<1>(): (sc_biguint<5>(i_5_mid1_fu_2235_p2.read()) < sc_biguint<5>(ap_const_lv5_1D));
}

void conv_layer1::thread_tmp_mid2_fu_2253_p3() {
    tmp_mid2_fu_2253_p3 = (!exitcond2_fu_2247_p2.read()[0].is_01())? sc_lv<1>(): ((exitcond2_fu_2247_p2.read()[0].to_bool())? tmp_mid1_fu_2241_p2.read(): tmp_s_fu_2217_p2.read());
}

void conv_layer1::thread_tmp_s_fu_2217_p2() {
    tmp_s_fu_2217_p2 = (!i_4_fu_2211_p2.read().is_01() || !ap_const_lv5_1D.is_01())? sc_lv<1>(): (sc_biguint<5>(i_4_fu_2211_p2.read()) < sc_biguint<5>(ap_const_lv5_1D));
}

}

