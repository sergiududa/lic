// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _nnet_HH_
#define _nnet_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pool_layer2.h"
#include "conv_layer2.h"
#include "pool_layer1.h"
#include "conv_layer1.h"
#include "nnet_mul_mul_24s_4jc.h"
#include "nnet_mul_mul_24s_5jm.h"
#include "nnet_fc_layer1_we1iI.h"
#include "nnet_fc_layer2_we2iS.h"
#include "nnet_fc_layer3_we3i2.h"

namespace ap_rtl {

struct nnet : public sc_module {
    // Port declarations 55
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<13> > conv_layer1_out_V_address0;
    sc_out< sc_logic > conv_layer1_out_V_ce0;
    sc_out< sc_logic > conv_layer1_out_V_we0;
    sc_out< sc_lv<24> > conv_layer1_out_V_d0;
    sc_in< sc_lv<24> > conv_layer1_out_V_q0;
    sc_out< sc_lv<13> > conv_layer1_out_V_address1;
    sc_out< sc_logic > conv_layer1_out_V_ce1;
    sc_in< sc_lv<24> > conv_layer1_out_V_q1;
    sc_out< sc_lv<12> > conv_layer2_out_V_address0;
    sc_out< sc_logic > conv_layer2_out_V_ce0;
    sc_out< sc_logic > conv_layer2_out_V_we0;
    sc_out< sc_lv<24> > conv_layer2_out_V_d0;
    sc_in< sc_lv<24> > conv_layer2_out_V_q0;
    sc_out< sc_lv<12> > conv_layer2_out_V_address1;
    sc_out< sc_logic > conv_layer2_out_V_ce1;
    sc_in< sc_lv<24> > conv_layer2_out_V_q1;
    sc_out< sc_lv<11> > pool_layer1_out_V_address0;
    sc_out< sc_logic > pool_layer1_out_V_ce0;
    sc_out< sc_logic > pool_layer1_out_V_we0;
    sc_out< sc_lv<24> > pool_layer1_out_V_d0;
    sc_in< sc_lv<24> > pool_layer1_out_V_q0;
    sc_out< sc_lv<11> > pool_layer1_out_V_address1;
    sc_out< sc_logic > pool_layer1_out_V_ce1;
    sc_out< sc_logic > pool_layer1_out_V_we1;
    sc_out< sc_lv<24> > pool_layer1_out_V_d1;
    sc_in< sc_lv<24> > pool_layer1_out_V_q1;
    sc_out< sc_lv<10> > pool_layer2_out_V_address0;
    sc_out< sc_logic > pool_layer2_out_V_ce0;
    sc_out< sc_logic > pool_layer2_out_V_we0;
    sc_out< sc_lv<24> > pool_layer2_out_V_d0;
    sc_in< sc_lv<24> > pool_layer2_out_V_q0;
    sc_out< sc_lv<10> > pool_layer2_out_V_address1;
    sc_out< sc_logic > pool_layer2_out_V_ce1;
    sc_out< sc_logic > pool_layer2_out_V_we1;
    sc_out< sc_lv<24> > pool_layer2_out_V_d1;
    sc_out< sc_lv<7> > fc_layer1_out_V_address0;
    sc_out< sc_logic > fc_layer1_out_V_ce0;
    sc_out< sc_logic > fc_layer1_out_V_we0;
    sc_out< sc_lv<24> > fc_layer1_out_V_d0;
    sc_in< sc_lv<24> > fc_layer1_out_V_q0;
    sc_out< sc_lv<7> > fc_layer2_out_V_address0;
    sc_out< sc_logic > fc_layer2_out_V_ce0;
    sc_out< sc_logic > fc_layer2_out_V_we0;
    sc_out< sc_lv<24> > fc_layer2_out_V_d0;
    sc_in< sc_lv<24> > fc_layer2_out_V_q0;
    sc_out< sc_lv<4> > fc_layer3_out_V_address0;
    sc_out< sc_logic > fc_layer3_out_V_ce0;
    sc_out< sc_logic > fc_layer3_out_V_we0;
    sc_out< sc_lv<24> > fc_layer3_out_V_d0;


    // Module declarations
    nnet(sc_module_name name);
    SC_HAS_PROCESS(nnet);

    ~nnet();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    nnet_fc_layer1_we1iI* fc_layer1_weights_V_U;
    nnet_fc_layer2_we2iS* fc_layer2_weights_V_U;
    nnet_fc_layer3_we3i2* fc_layer3_weights_V_U;
    pool_layer2* grp_pool_layer2_fu_429;
    conv_layer2* grp_conv_layer2_fu_437;
    pool_layer1* grp_pool_layer1_fu_511;
    conv_layer1* grp_conv_layer1_fu_519;
    nnet_mul_mul_24s_4jc<1,1,24,18,41>* nnet_mul_mul_24s_4jc_U109;
    nnet_mul_mul_24s_5jm<1,1,24,19,42>* nnet_mul_mul_24s_5jm_U110;
    sc_signal< sc_lv<26> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<17> > fc_layer1_weights_V_address0;
    sc_signal< sc_logic > fc_layer1_weights_V_ce0;
    sc_signal< sc_lv<18> > fc_layer1_weights_V_q0;
    sc_signal< sc_lv<14> > fc_layer2_weights_V_address0;
    sc_signal< sc_logic > fc_layer2_weights_V_ce0;
    sc_signal< sc_lv<19> > fc_layer2_weights_V_q0;
    sc_signal< sc_lv<10> > fc_layer3_weights_V_address0;
    sc_signal< sc_logic > fc_layer3_weights_V_ce0;
    sc_signal< sc_lv<20> > fc_layer3_weights_V_q0;
    sc_signal< sc_lv<7> > i_fu_567_p2;
    sc_signal< sc_lv<7> > i_reg_960;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<18> > tmp_i_cast_fu_578_p1;
    sc_signal< sc_lv<18> > tmp_i_cast_reg_965;
    sc_signal< sc_lv<1> > exitcond7_i_fu_561_p2;
    sc_signal< sc_lv<7> > fc_layer1_out_V_addr_reg_970;
    sc_signal< sc_lv<10> > j_fu_588_p2;
    sc_signal< sc_lv<10> > j_reg_978;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<1> > exitcond_i_fu_582_p2;
    sc_signal< sc_lv<18> > fc_layer1_weights_V_1_reg_993;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<24> > pool_layer2_out_V_lo_reg_998;
    sc_signal< sc_lv<41> > p_Val2_1_fu_945_p2;
    sc_signal< sc_lv<41> > p_Val2_1_reg_1003;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<7> > i_3_fu_701_p2;
    sc_signal< sc_lv<7> > i_3_reg_1016;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<14> > tmp_i9_cast_fu_712_p1;
    sc_signal< sc_lv<14> > tmp_i9_cast_reg_1021;
    sc_signal< sc_lv<1> > exitcond6_i_fu_695_p2;
    sc_signal< sc_lv<7> > fc_layer2_out_V_addr_reg_1026;
    sc_signal< sc_lv<7> > j_3_fu_722_p2;
    sc_signal< sc_lv<7> > j_3_reg_1034;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<14> > next_mul_fu_733_p2;
    sc_signal< sc_lv<14> > next_mul_reg_1039;
    sc_signal< sc_lv<1> > exitcond_i1_fu_716_p2;
    sc_signal< sc_lv<19> > fc_layer2_weights_V_1_reg_1054;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<24> > fc_layer1_out_V_load_reg_1059;
    sc_signal< sc_lv<42> > p_Val2_4_fu_951_p2;
    sc_signal< sc_lv<42> > p_Val2_4_reg_1064;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<4> > i_4_fu_811_p2;
    sc_signal< sc_lv<4> > i_4_reg_1077;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<11> > tmp_i1_cast_fu_822_p1;
    sc_signal< sc_lv<11> > tmp_i1_cast_reg_1082;
    sc_signal< sc_lv<1> > exitcond5_i_fu_805_p2;
    sc_signal< sc_lv<4> > fc_layer3_out_V_addr_reg_1087;
    sc_signal< sc_lv<7> > j_4_fu_832_p2;
    sc_signal< sc_lv<7> > j_4_reg_1095;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<1> > exitcond_i2_fu_826_p2;
    sc_signal< sc_lv<20> > fc_layer3_weights_V_1_reg_1110;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<24> > fc_layer2_out_V_load_reg_1115;
    sc_signal< sc_lv<43> > p_Val2_7_fu_889_p2;
    sc_signal< sc_lv<43> > p_Val2_7_reg_1120;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_logic > grp_pool_layer2_fu_429_ap_start;
    sc_signal< sc_logic > grp_pool_layer2_fu_429_ap_done;
    sc_signal< sc_logic > grp_pool_layer2_fu_429_ap_idle;
    sc_signal< sc_logic > grp_pool_layer2_fu_429_ap_ready;
    sc_signal< sc_lv<10> > grp_pool_layer2_fu_429_output_V_address0;
    sc_signal< sc_logic > grp_pool_layer2_fu_429_output_V_ce0;
    sc_signal< sc_logic > grp_pool_layer2_fu_429_output_V_we0;
    sc_signal< sc_lv<24> > grp_pool_layer2_fu_429_output_V_d0;
    sc_signal< sc_lv<10> > grp_pool_layer2_fu_429_output_V_address1;
    sc_signal< sc_logic > grp_pool_layer2_fu_429_output_V_ce1;
    sc_signal< sc_logic > grp_pool_layer2_fu_429_output_V_we1;
    sc_signal< sc_lv<24> > grp_pool_layer2_fu_429_output_V_d1;
    sc_signal< sc_lv<12> > grp_pool_layer2_fu_429_image_V_address0;
    sc_signal< sc_logic > grp_pool_layer2_fu_429_image_V_ce0;
    sc_signal< sc_lv<12> > grp_pool_layer2_fu_429_image_V_address1;
    sc_signal< sc_logic > grp_pool_layer2_fu_429_image_V_ce1;
    sc_signal< sc_logic > grp_conv_layer2_fu_437_ap_start;
    sc_signal< sc_logic > grp_conv_layer2_fu_437_ap_done;
    sc_signal< sc_logic > grp_conv_layer2_fu_437_ap_idle;
    sc_signal< sc_logic > grp_conv_layer2_fu_437_ap_ready;
    sc_signal< sc_lv<12> > grp_conv_layer2_fu_437_output_V_address0;
    sc_signal< sc_logic > grp_conv_layer2_fu_437_output_V_ce0;
    sc_signal< sc_logic > grp_conv_layer2_fu_437_output_V_we0;
    sc_signal< sc_lv<24> > grp_conv_layer2_fu_437_output_V_d0;
    sc_signal< sc_lv<11> > grp_conv_layer2_fu_437_image_V_address0;
    sc_signal< sc_logic > grp_conv_layer2_fu_437_image_V_ce0;
    sc_signal< sc_lv<11> > grp_conv_layer2_fu_437_image_V_address1;
    sc_signal< sc_logic > grp_conv_layer2_fu_437_image_V_ce1;
    sc_signal< sc_logic > grp_pool_layer1_fu_511_ap_start;
    sc_signal< sc_logic > grp_pool_layer1_fu_511_ap_done;
    sc_signal< sc_logic > grp_pool_layer1_fu_511_ap_idle;
    sc_signal< sc_logic > grp_pool_layer1_fu_511_ap_ready;
    sc_signal< sc_lv<11> > grp_pool_layer1_fu_511_output_V_address0;
    sc_signal< sc_logic > grp_pool_layer1_fu_511_output_V_ce0;
    sc_signal< sc_logic > grp_pool_layer1_fu_511_output_V_we0;
    sc_signal< sc_lv<24> > grp_pool_layer1_fu_511_output_V_d0;
    sc_signal< sc_lv<11> > grp_pool_layer1_fu_511_output_V_address1;
    sc_signal< sc_logic > grp_pool_layer1_fu_511_output_V_ce1;
    sc_signal< sc_logic > grp_pool_layer1_fu_511_output_V_we1;
    sc_signal< sc_lv<24> > grp_pool_layer1_fu_511_output_V_d1;
    sc_signal< sc_lv<13> > grp_pool_layer1_fu_511_image_V_address0;
    sc_signal< sc_logic > grp_pool_layer1_fu_511_image_V_ce0;
    sc_signal< sc_lv<13> > grp_pool_layer1_fu_511_image_V_address1;
    sc_signal< sc_logic > grp_pool_layer1_fu_511_image_V_ce1;
    sc_signal< sc_logic > grp_conv_layer1_fu_519_ap_start;
    sc_signal< sc_logic > grp_conv_layer1_fu_519_ap_done;
    sc_signal< sc_logic > grp_conv_layer1_fu_519_ap_idle;
    sc_signal< sc_logic > grp_conv_layer1_fu_519_ap_ready;
    sc_signal< sc_lv<13> > grp_conv_layer1_fu_519_output_V_address0;
    sc_signal< sc_logic > grp_conv_layer1_fu_519_output_V_ce0;
    sc_signal< sc_logic > grp_conv_layer1_fu_519_output_V_we0;
    sc_signal< sc_lv<24> > grp_conv_layer1_fu_519_output_V_d0;
    sc_signal< sc_lv<7> > i_i_reg_313;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<24> > p_Val2_s_reg_324;
    sc_signal< sc_lv<10> > j_i_reg_337;
    sc_signal< sc_lv<7> > i_i7_reg_348;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<24> > p_Val2_3_reg_359;
    sc_signal< sc_lv<7> > j_i1_reg_372;
    sc_signal< sc_lv<14> > phi_mul_reg_383;
    sc_signal< sc_lv<4> > i_i1_reg_394;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<24> > p_Val2_6_reg_405;
    sc_signal< sc_lv<7> > j_i2_reg_418;
    sc_signal< sc_logic > ap_reg_grp_pool_layer2_fu_429_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_reg_grp_conv_layer2_fu_437_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_reg_grp_pool_layer1_fu_511_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_reg_grp_conv_layer1_fu_519_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > tmp_i_fu_573_p1;
    sc_signal< sc_lv<64> > tmp_3_cast_fu_634_p1;
    sc_signal< sc_lv<64> > tmp_i_21_fu_594_p1;
    sc_signal< sc_lv<64> > tmp_i9_fu_707_p1;
    sc_signal< sc_lv<64> > tmp_5_cast_fu_744_p1;
    sc_signal< sc_lv<64> > tmp_i1_fu_728_p1;
    sc_signal< sc_lv<64> > tmp_i1_27_fu_817_p1;
    sc_signal< sc_lv<64> > tmp_9_cast_fu_878_p1;
    sc_signal< sc_lv<64> > tmp_i2_fu_838_p1;
    sc_signal< sc_lv<24> > a_V_i_i_cast_fu_690_p1;
    sc_signal< sc_lv<24> > a_V_i_i1_cast_fu_800_p1;
    sc_signal< sc_lv<24> > a_V_i_i2_cast_fu_940_p1;
    sc_signal< sc_lv<17> > tmp_fu_599_p3;
    sc_signal< sc_lv<13> > tmp_1_fu_611_p3;
    sc_signal< sc_lv<18> > p_shl_cast_fu_607_p1;
    sc_signal< sc_lv<18> > p_shl1_cast_fu_619_p1;
    sc_signal< sc_lv<18> > tmp_2_fu_623_p2;
    sc_signal< sc_lv<18> > tmp_3_fu_629_p2;
    sc_signal< sc_lv<44> > tmp_18_i_cast_fu_653_p1;
    sc_signal< sc_lv<44> > tmp_17_i_fu_645_p3;
    sc_signal< sc_lv<44> > p_Val2_2_fu_656_p2;
    sc_signal< sc_lv<1> > tmp_i_i_fu_676_p2;
    sc_signal< sc_lv<23> > tmp_4_fu_672_p1;
    sc_signal< sc_lv<23> > a_V_i_i_fu_682_p3;
    sc_signal< sc_lv<14> > tmp_5_fu_739_p2;
    sc_signal< sc_lv<44> > tmp_13_i_cast_fu_763_p1;
    sc_signal< sc_lv<44> > tmp_12_i_fu_755_p3;
    sc_signal< sc_lv<44> > p_Val2_5_fu_766_p2;
    sc_signal< sc_lv<1> > tmp_i_i1_fu_786_p2;
    sc_signal< sc_lv<23> > tmp_10_fu_782_p1;
    sc_signal< sc_lv<23> > a_V_i_i1_fu_792_p3;
    sc_signal< sc_lv<10> > tmp_6_fu_843_p3;
    sc_signal< sc_lv<8> > tmp_7_fu_855_p3;
    sc_signal< sc_lv<11> > p_shl3_cast_fu_863_p1;
    sc_signal< sc_lv<11> > p_shl2_cast_fu_851_p1;
    sc_signal< sc_lv<11> > tmp_8_fu_867_p2;
    sc_signal< sc_lv<11> > tmp_9_fu_873_p2;
    sc_signal< sc_lv<24> > p_Val2_7_fu_889_p0;
    sc_signal< sc_lv<20> > p_Val2_7_fu_889_p1;
    sc_signal< sc_lv<44> > tmp_8_i_cast_fu_903_p1;
    sc_signal< sc_lv<44> > tmp_7_i_fu_895_p3;
    sc_signal< sc_lv<44> > p_Val2_8_fu_906_p2;
    sc_signal< sc_lv<1> > tmp_i_i2_fu_926_p2;
    sc_signal< sc_lv<23> > tmp_11_fu_922_p1;
    sc_signal< sc_lv<23> > a_V_i_i2_fu_932_p3;
    sc_signal< sc_lv<26> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<26> ap_ST_fsm_state1;
    static const sc_lv<26> ap_ST_fsm_state2;
    static const sc_lv<26> ap_ST_fsm_state3;
    static const sc_lv<26> ap_ST_fsm_state4;
    static const sc_lv<26> ap_ST_fsm_state5;
    static const sc_lv<26> ap_ST_fsm_state6;
    static const sc_lv<26> ap_ST_fsm_state7;
    static const sc_lv<26> ap_ST_fsm_state8;
    static const sc_lv<26> ap_ST_fsm_state9;
    static const sc_lv<26> ap_ST_fsm_state10;
    static const sc_lv<26> ap_ST_fsm_state11;
    static const sc_lv<26> ap_ST_fsm_state12;
    static const sc_lv<26> ap_ST_fsm_state13;
    static const sc_lv<26> ap_ST_fsm_state14;
    static const sc_lv<26> ap_ST_fsm_state15;
    static const sc_lv<26> ap_ST_fsm_state16;
    static const sc_lv<26> ap_ST_fsm_state17;
    static const sc_lv<26> ap_ST_fsm_state18;
    static const sc_lv<26> ap_ST_fsm_state19;
    static const sc_lv<26> ap_ST_fsm_state20;
    static const sc_lv<26> ap_ST_fsm_state21;
    static const sc_lv<26> ap_ST_fsm_state22;
    static const sc_lv<26> ap_ST_fsm_state23;
    static const sc_lv<26> ap_ST_fsm_state24;
    static const sc_lv<26> ap_ST_fsm_state25;
    static const sc_lv<26> ap_ST_fsm_state26;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<24> ap_const_lv24_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<7> ap_const_lv7_78;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<10> ap_const_lv10_240;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<20> ap_const_lv20_0;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<7> ap_const_lv7_54;
    static const sc_lv<14> ap_const_lv14_54;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_V_i_i1_cast_fu_800_p1();
    void thread_a_V_i_i1_fu_792_p3();
    void thread_a_V_i_i2_cast_fu_940_p1();
    void thread_a_V_i_i2_fu_932_p3();
    void thread_a_V_i_i_cast_fu_690_p1();
    void thread_a_V_i_i_fu_682_p3();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_conv_layer1_out_V_address0();
    void thread_conv_layer1_out_V_address1();
    void thread_conv_layer1_out_V_ce0();
    void thread_conv_layer1_out_V_ce1();
    void thread_conv_layer1_out_V_d0();
    void thread_conv_layer1_out_V_we0();
    void thread_conv_layer2_out_V_address0();
    void thread_conv_layer2_out_V_address1();
    void thread_conv_layer2_out_V_ce0();
    void thread_conv_layer2_out_V_ce1();
    void thread_conv_layer2_out_V_d0();
    void thread_conv_layer2_out_V_we0();
    void thread_exitcond5_i_fu_805_p2();
    void thread_exitcond6_i_fu_695_p2();
    void thread_exitcond7_i_fu_561_p2();
    void thread_exitcond_i1_fu_716_p2();
    void thread_exitcond_i2_fu_826_p2();
    void thread_exitcond_i_fu_582_p2();
    void thread_fc_layer1_out_V_address0();
    void thread_fc_layer1_out_V_ce0();
    void thread_fc_layer1_out_V_d0();
    void thread_fc_layer1_out_V_we0();
    void thread_fc_layer1_weights_V_address0();
    void thread_fc_layer1_weights_V_ce0();
    void thread_fc_layer2_out_V_address0();
    void thread_fc_layer2_out_V_ce0();
    void thread_fc_layer2_out_V_d0();
    void thread_fc_layer2_out_V_we0();
    void thread_fc_layer2_weights_V_address0();
    void thread_fc_layer2_weights_V_ce0();
    void thread_fc_layer3_out_V_address0();
    void thread_fc_layer3_out_V_ce0();
    void thread_fc_layer3_out_V_d0();
    void thread_fc_layer3_out_V_we0();
    void thread_fc_layer3_weights_V_address0();
    void thread_fc_layer3_weights_V_ce0();
    void thread_grp_conv_layer1_fu_519_ap_start();
    void thread_grp_conv_layer2_fu_437_ap_start();
    void thread_grp_pool_layer1_fu_511_ap_start();
    void thread_grp_pool_layer2_fu_429_ap_start();
    void thread_i_3_fu_701_p2();
    void thread_i_4_fu_811_p2();
    void thread_i_fu_567_p2();
    void thread_j_3_fu_722_p2();
    void thread_j_4_fu_832_p2();
    void thread_j_fu_588_p2();
    void thread_next_mul_fu_733_p2();
    void thread_p_Val2_2_fu_656_p2();
    void thread_p_Val2_5_fu_766_p2();
    void thread_p_Val2_7_fu_889_p0();
    void thread_p_Val2_7_fu_889_p1();
    void thread_p_Val2_7_fu_889_p2();
    void thread_p_Val2_8_fu_906_p2();
    void thread_p_shl1_cast_fu_619_p1();
    void thread_p_shl2_cast_fu_851_p1();
    void thread_p_shl3_cast_fu_863_p1();
    void thread_p_shl_cast_fu_607_p1();
    void thread_pool_layer1_out_V_address0();
    void thread_pool_layer1_out_V_address1();
    void thread_pool_layer1_out_V_ce0();
    void thread_pool_layer1_out_V_ce1();
    void thread_pool_layer1_out_V_d0();
    void thread_pool_layer1_out_V_d1();
    void thread_pool_layer1_out_V_we0();
    void thread_pool_layer1_out_V_we1();
    void thread_pool_layer2_out_V_address0();
    void thread_pool_layer2_out_V_address1();
    void thread_pool_layer2_out_V_ce0();
    void thread_pool_layer2_out_V_ce1();
    void thread_pool_layer2_out_V_d0();
    void thread_pool_layer2_out_V_d1();
    void thread_pool_layer2_out_V_we0();
    void thread_pool_layer2_out_V_we1();
    void thread_tmp_10_fu_782_p1();
    void thread_tmp_11_fu_922_p1();
    void thread_tmp_12_i_fu_755_p3();
    void thread_tmp_13_i_cast_fu_763_p1();
    void thread_tmp_17_i_fu_645_p3();
    void thread_tmp_18_i_cast_fu_653_p1();
    void thread_tmp_1_fu_611_p3();
    void thread_tmp_2_fu_623_p2();
    void thread_tmp_3_cast_fu_634_p1();
    void thread_tmp_3_fu_629_p2();
    void thread_tmp_4_fu_672_p1();
    void thread_tmp_5_cast_fu_744_p1();
    void thread_tmp_5_fu_739_p2();
    void thread_tmp_6_fu_843_p3();
    void thread_tmp_7_fu_855_p3();
    void thread_tmp_7_i_fu_895_p3();
    void thread_tmp_8_fu_867_p2();
    void thread_tmp_8_i_cast_fu_903_p1();
    void thread_tmp_9_cast_fu_878_p1();
    void thread_tmp_9_fu_873_p2();
    void thread_tmp_fu_599_p3();
    void thread_tmp_i1_27_fu_817_p1();
    void thread_tmp_i1_cast_fu_822_p1();
    void thread_tmp_i1_fu_728_p1();
    void thread_tmp_i2_fu_838_p1();
    void thread_tmp_i9_cast_fu_712_p1();
    void thread_tmp_i9_fu_707_p1();
    void thread_tmp_i_21_fu_594_p1();
    void thread_tmp_i_cast_fu_578_p1();
    void thread_tmp_i_fu_573_p1();
    void thread_tmp_i_i1_fu_786_p2();
    void thread_tmp_i_i2_fu_926_p2();
    void thread_tmp_i_i_fu_676_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif