// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_layer1_HH_
#define _conv_layer1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "nnet_fadd_32ns_32dEe.h"
#include "nnet_fmul_32ns_32eOg.h"
#include "nnet_fcmp_32ns_32fYi.h"
#include "conv_layer1_conv_bkb.h"
#include "conv_layer1_image_0.h"
#include "conv_layer1_conv_cud.h"

namespace ap_rtl {

struct conv_layer1 : public sc_module {
    // Port declarations 10
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<13> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_logic > output_r_we0;
    sc_out< sc_lv<32> > output_r_d0;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const1;
    sc_signal< sc_lv<5> > ap_var_for_const2;


    // Module declarations
    conv_layer1(sc_module_name name);
    SC_HAS_PROCESS(conv_layer1);

    ~conv_layer1();

    sc_trace_file* mVcdFile;

    conv_layer1_conv_bkb* conv_layer1_bias_U;
    conv_layer1_image_0* image_0_U;
    conv_layer1_conv_cud* conv_layer1_weights_s_U;
    nnet_fadd_32ns_32dEe<1,5,32,32,32>* nnet_fadd_32ns_32dEe_U1;
    nnet_fmul_32ns_32eOg<1,4,32,32,32>* nnet_fmul_32ns_32eOg_U2;
    nnet_fcmp_32ns_32fYi<1,1,32,32,1>* nnet_fcmp_32ns_32fYi_U3;
    sc_signal< sc_lv<23> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > conv_layer1_bias_address0;
    sc_signal< sc_logic > conv_layer1_bias_ce0;
    sc_signal< sc_lv<32> > conv_layer1_bias_q0;
    sc_signal< sc_lv<10> > image_0_address0;
    sc_signal< sc_logic > image_0_ce0;
    sc_signal< sc_lv<32> > image_0_q0;
    sc_signal< sc_lv<7> > conv_layer1_weights_s_address0;
    sc_signal< sc_logic > conv_layer1_weights_s_ce0;
    sc_signal< sc_lv<32> > conv_layer1_weights_s_q0;
    sc_signal< sc_lv<4> > filter_2_fu_225_p2;
    sc_signal< sc_lv<4> > filter_2_reg_451;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond5_fu_219_p2;
    sc_signal< sc_lv<9> > tmp_cast1_fu_236_p1;
    sc_signal< sc_lv<9> > tmp_cast1_reg_461;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<14> > tmp_cast_fu_240_p1;
    sc_signal< sc_lv<14> > tmp_cast_reg_466;
    sc_signal< sc_lv<32> > conv_layer1_bias_loa_reg_471;
    sc_signal< sc_lv<10> > next_mul_fu_244_p2;
    sc_signal< sc_lv<10> > next_mul_reg_476;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<5> > i_6_fu_256_p2;
    sc_signal< sc_lv<5> > i_6_reg_484;
    sc_signal< sc_lv<5> > j_6_fu_268_p2;
    sc_signal< sc_lv<5> > j_6_reg_492;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<3> > row_offset_2_fu_284_p2;
    sc_signal< sc_lv<3> > row_offset_2_reg_500;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<5> > tmp_29_fu_290_p2;
    sc_signal< sc_lv<5> > tmp_29_reg_505;
    sc_signal< sc_lv<1> > exitcond2_fu_278_p2;
    sc_signal< sc_lv<6> > tmp_103_cast_fu_304_p1;
    sc_signal< sc_lv<6> > tmp_103_cast_reg_510;
    sc_signal< sc_lv<14> > tmp_68_fu_330_p2;
    sc_signal< sc_lv<14> > tmp_68_reg_515;
    sc_signal< sc_lv<3> > col_offset_2_fu_345_p2;
    sc_signal< sc_lv<3> > col_offset_2_reg_523;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > exitcond1_fu_339_p2;
    sc_signal< sc_lv<32> > image_0_load_reg_538;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<32> > conv_layer1_weights_1_reg_543;
    sc_signal< sc_lv<32> > grp_fu_210_p2;
    sc_signal< sc_lv<32> > tmp_35_reg_548;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<32> > grp_fu_204_p2;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<32> > a_assign_reg_558;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<32> > a_assign_7_fu_437_p3;
    sc_signal< sc_lv<32> > a_assign_7_reg_565;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<4> > filter_reg_110;
    sc_signal< sc_lv<1> > exitcond4_fu_250_p2;
    sc_signal< sc_lv<5> > i_reg_122;
    sc_signal< sc_lv<1> > exitcond3_fu_262_p2;
    sc_signal< sc_lv<10> > phi_mul_reg_134;
    sc_signal< sc_lv<5> > j_reg_146;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<32> > sum_reg_158;
    sc_signal< sc_lv<3> > row_offset_reg_170;
    sc_signal< sc_lv<32> > sum_1_reg_181;
    sc_signal< sc_lv<3> > col_offset_reg_193;
    sc_signal< sc_lv<64> > tmp_fu_231_p1;
    sc_signal< sc_lv<64> > tmp_71_fu_364_p1;
    sc_signal< sc_lv<64> > tmp_109_cast_fu_391_p1;
    sc_signal< sc_lv<64> > tmp_101_cast_fu_444_p1;
    sc_signal< sc_lv<32> > grp_fu_204_p0;
    sc_signal< sc_lv<32> > grp_fu_204_p1;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<5> > row_offset_cast4_fu_274_p1;
    sc_signal< sc_lv<5> > tmp_69_fu_296_p3;
    sc_signal< sc_lv<10> > tmp_28_cast_fu_308_p1;
    sc_signal< sc_lv<10> > tmp_s_fu_312_p2;
    sc_signal< sc_lv<13> > tmp_54_fu_318_p3;
    sc_signal< sc_lv<14> > tmp_100_cast_fu_326_p1;
    sc_signal< sc_lv<5> > col_offset_cast2_fu_335_p1;
    sc_signal< sc_lv<5> > tmp_32_fu_351_p2;
    sc_signal< sc_lv<10> > tmp_70_fu_357_p3;
    sc_signal< sc_lv<6> > tmp_34_cast_fu_369_p1;
    sc_signal< sc_lv<6> > tmp_72_fu_373_p2;
    sc_signal< sc_lv<9> > tmp_108_cast_fu_378_p3;
    sc_signal< sc_lv<9> > tmp_73_fu_386_p2;
    sc_signal< sc_lv<32> > a_assign_to_int_fu_396_p1;
    sc_signal< sc_lv<8> > tmp_46_fu_399_p4;
    sc_signal< sc_lv<23> > tmp_53_fu_409_p1;
    sc_signal< sc_lv<1> > notrhs_fu_419_p2;
    sc_signal< sc_lv<1> > notlhs_fu_413_p2;
    sc_signal< sc_lv<1> > tmp_48_fu_425_p2;
    sc_signal< sc_lv<1> > tmp_49_fu_214_p2;
    sc_signal< sc_lv<1> > tmp_50_fu_431_p2;
    sc_signal< sc_lv<23> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<23> ap_ST_fsm_state1;
    static const sc_lv<23> ap_ST_fsm_state2;
    static const sc_lv<23> ap_ST_fsm_state3;
    static const sc_lv<23> ap_ST_fsm_state4;
    static const sc_lv<23> ap_ST_fsm_state5;
    static const sc_lv<23> ap_ST_fsm_state6;
    static const sc_lv<23> ap_ST_fsm_state7;
    static const sc_lv<23> ap_ST_fsm_state8;
    static const sc_lv<23> ap_ST_fsm_state9;
    static const sc_lv<23> ap_ST_fsm_state10;
    static const sc_lv<23> ap_ST_fsm_state11;
    static const sc_lv<23> ap_ST_fsm_state12;
    static const sc_lv<23> ap_ST_fsm_state13;
    static const sc_lv<23> ap_ST_fsm_state14;
    static const sc_lv<23> ap_ST_fsm_state15;
    static const sc_lv<23> ap_ST_fsm_state16;
    static const sc_lv<23> ap_ST_fsm_state17;
    static const sc_lv<23> ap_ST_fsm_state18;
    static const sc_lv<23> ap_ST_fsm_state19;
    static const sc_lv<23> ap_ST_fsm_state20;
    static const sc_lv<23> ap_ST_fsm_state21;
    static const sc_lv<23> ap_ST_fsm_state22;
    static const sc_lv<23> ap_ST_fsm_state23;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<10> ap_const_lv10_1D;
    static const sc_lv<5> ap_const_lv5_1D;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<5> ap_const_lv5_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_a_assign_7_fu_437_p3();
    void thread_a_assign_to_int_fu_396_p1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
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
    void thread_col_offset_2_fu_345_p2();
    void thread_col_offset_cast2_fu_335_p1();
    void thread_conv_layer1_bias_address0();
    void thread_conv_layer1_bias_ce0();
    void thread_conv_layer1_weights_s_address0();
    void thread_conv_layer1_weights_s_ce0();
    void thread_exitcond1_fu_339_p2();
    void thread_exitcond2_fu_278_p2();
    void thread_exitcond3_fu_262_p2();
    void thread_exitcond4_fu_250_p2();
    void thread_exitcond5_fu_219_p2();
    void thread_filter_2_fu_225_p2();
    void thread_grp_fu_204_p0();
    void thread_grp_fu_204_p1();
    void thread_i_6_fu_256_p2();
    void thread_image_0_address0();
    void thread_image_0_ce0();
    void thread_j_6_fu_268_p2();
    void thread_next_mul_fu_244_p2();
    void thread_notlhs_fu_413_p2();
    void thread_notrhs_fu_419_p2();
    void thread_output_r_address0();
    void thread_output_r_ce0();
    void thread_output_r_d0();
    void thread_output_r_we0();
    void thread_row_offset_2_fu_284_p2();
    void thread_row_offset_cast4_fu_274_p1();
    void thread_tmp_100_cast_fu_326_p1();
    void thread_tmp_101_cast_fu_444_p1();
    void thread_tmp_103_cast_fu_304_p1();
    void thread_tmp_108_cast_fu_378_p3();
    void thread_tmp_109_cast_fu_391_p1();
    void thread_tmp_28_cast_fu_308_p1();
    void thread_tmp_29_fu_290_p2();
    void thread_tmp_32_fu_351_p2();
    void thread_tmp_34_cast_fu_369_p1();
    void thread_tmp_46_fu_399_p4();
    void thread_tmp_48_fu_425_p2();
    void thread_tmp_50_fu_431_p2();
    void thread_tmp_53_fu_409_p1();
    void thread_tmp_54_fu_318_p3();
    void thread_tmp_68_fu_330_p2();
    void thread_tmp_69_fu_296_p3();
    void thread_tmp_70_fu_357_p3();
    void thread_tmp_71_fu_364_p1();
    void thread_tmp_72_fu_373_p2();
    void thread_tmp_73_fu_386_p2();
    void thread_tmp_cast1_fu_236_p1();
    void thread_tmp_cast_fu_240_p1();
    void thread_tmp_fu_231_p1();
    void thread_tmp_s_fu_312_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
