// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pool_layer1_HH_
#define _pool_layer1_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct pool_layer1 : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<11> > output_V_address0;
    sc_out< sc_logic > output_V_ce0;
    sc_out< sc_logic > output_V_we0;
    sc_out< sc_lv<24> > output_V_d0;
    sc_out< sc_lv<13> > image_V_address0;
    sc_out< sc_logic > image_V_ce0;
    sc_in< sc_lv<24> > image_V_q0;


    // Module declarations
    pool_layer1(sc_module_name name);
    SC_HAS_PROCESS(pool_layer1);

    ~pool_layer1();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > channel_2_fu_177_p2;
    sc_signal< sc_lv<4> > channel_2_reg_435;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<14> > tmp_cast2_fu_183_p1;
    sc_signal< sc_lv<14> > tmp_cast2_reg_440;
    sc_signal< sc_lv<1> > exitcond3_fu_171_p2;
    sc_signal< sc_lv<12> > tmp_cast_fu_187_p1;
    sc_signal< sc_lv<12> > tmp_cast_reg_445;
    sc_signal< sc_lv<10> > tmp_fu_201_p2;
    sc_signal< sc_lv<10> > tmp_reg_453;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_12_fu_191_p2;
    sc_signal< sc_lv<9> > tmp_23_fu_241_p2;
    sc_signal< sc_lv<9> > tmp_23_reg_458;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_14_fu_247_p2;
    sc_signal< sc_lv<5> > i_2_fu_285_p2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<2> > k_2_fu_301_p2;
    sc_signal< sc_lv<2> > k_2_reg_484;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<10> > tmp_31_fu_317_p2;
    sc_signal< sc_lv<10> > tmp_31_reg_489;
    sc_signal< sc_lv<1> > exitcond4_fu_295_p2;
    sc_signal< sc_lv<5> > j_2_fu_360_p2;
    sc_signal< sc_lv<2> > l_2_fu_376_p2;
    sc_signal< sc_lv<2> > l_2_reg_502;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<14> > tmp_34_fu_409_p2;
    sc_signal< sc_lv<14> > tmp_34_reg_507;
    sc_signal< sc_lv<1> > exitcond_fu_370_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<24> > max_V_2_fu_424_p3;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<4> > channel_reg_90;
    sc_signal< sc_lv<5> > i_reg_102;
    sc_signal< sc_lv<5> > j_reg_114;
    sc_signal< sc_lv<24> > max_V3_reg_126;
    sc_signal< sc_lv<2> > k_reg_137;
    sc_signal< sc_lv<24> > max_V_1_reg_148;
    sc_signal< sc_lv<2> > l_reg_160;
    sc_signal< sc_lv<64> > tmp_27_fu_280_p1;
    sc_signal< sc_lv<64> > tmp_45_cast_fu_355_p1;
    sc_signal< sc_lv<64> > tmp_50_cast_fu_414_p1;
    sc_signal< sc_lv<5> > tmp_fu_201_p0;
    sc_signal< sc_lv<4> > tmp_s_fu_207_p4;
    sc_signal< sc_lv<8> > tmp_20_fu_217_p3;
    sc_signal< sc_lv<5> > tmp_22_fu_229_p3;
    sc_signal< sc_lv<9> > p_shl_cast_fu_225_p1;
    sc_signal< sc_lv<9> > p_shl1_cast_fu_237_p1;
    sc_signal< sc_lv<10> > tmp_15_cast_fu_253_p1;
    sc_signal< sc_lv<10> > tmp_24_fu_257_p2;
    sc_signal< sc_lv<9> > tmp_25_fu_262_p4;
    sc_signal< sc_lv<13> > tmp_26_fu_272_p3;
    sc_signal< sc_lv<5> > k_cast2_fu_291_p1;
    sc_signal< sc_lv<5> > tmp_17_fu_307_p2;
    sc_signal< sc_lv<5> > tmp_31_fu_317_p0;
    sc_signal< sc_lv<4> > tmp_28_fu_323_p4;
    sc_signal< sc_lv<9> > tmp_16_cast_fu_333_p1;
    sc_signal< sc_lv<9> > tmp_29_fu_337_p2;
    sc_signal< sc_lv<12> > tmp_44_cast_fu_342_p3;
    sc_signal< sc_lv<12> > tmp_30_fu_350_p2;
    sc_signal< sc_lv<5> > l_cast1_fu_366_p1;
    sc_signal< sc_lv<5> > tmp_19_fu_382_p2;
    sc_signal< sc_lv<10> > tmp_20_cast_fu_388_p1;
    sc_signal< sc_lv<10> > tmp_32_fu_392_p2;
    sc_signal< sc_lv<13> > tmp_33_fu_397_p3;
    sc_signal< sc_lv<14> > tmp_49_cast_fu_405_p1;
    sc_signal< sc_lv<1> > tmp_21_fu_418_p2;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    sc_signal< sc_lv<10> > tmp_31_fu_317_p00;
    sc_signal< sc_lv<10> > tmp_fu_201_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_state4;
    static const sc_lv<9> ap_ST_fsm_state5;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_state9;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<5> ap_const_lv5_1C;
    static const sc_lv<10> ap_const_lv10_1D;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<5> ap_const_lv5_2;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
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
    void thread_channel_2_fu_177_p2();
    void thread_exitcond3_fu_171_p2();
    void thread_exitcond4_fu_295_p2();
    void thread_exitcond_fu_370_p2();
    void thread_i_2_fu_285_p2();
    void thread_image_V_address0();
    void thread_image_V_ce0();
    void thread_j_2_fu_360_p2();
    void thread_k_2_fu_301_p2();
    void thread_k_cast2_fu_291_p1();
    void thread_l_2_fu_376_p2();
    void thread_l_cast1_fu_366_p1();
    void thread_max_V_2_fu_424_p3();
    void thread_output_V_address0();
    void thread_output_V_ce0();
    void thread_output_V_d0();
    void thread_output_V_we0();
    void thread_p_shl1_cast_fu_237_p1();
    void thread_p_shl_cast_fu_225_p1();
    void thread_tmp_12_fu_191_p2();
    void thread_tmp_14_fu_247_p2();
    void thread_tmp_15_cast_fu_253_p1();
    void thread_tmp_16_cast_fu_333_p1();
    void thread_tmp_17_fu_307_p2();
    void thread_tmp_19_fu_382_p2();
    void thread_tmp_20_cast_fu_388_p1();
    void thread_tmp_20_fu_217_p3();
    void thread_tmp_21_fu_418_p2();
    void thread_tmp_22_fu_229_p3();
    void thread_tmp_23_fu_241_p2();
    void thread_tmp_24_fu_257_p2();
    void thread_tmp_25_fu_262_p4();
    void thread_tmp_26_fu_272_p3();
    void thread_tmp_27_fu_280_p1();
    void thread_tmp_28_fu_323_p4();
    void thread_tmp_29_fu_337_p2();
    void thread_tmp_30_fu_350_p2();
    void thread_tmp_31_fu_317_p0();
    void thread_tmp_31_fu_317_p00();
    void thread_tmp_31_fu_317_p2();
    void thread_tmp_32_fu_392_p2();
    void thread_tmp_33_fu_397_p3();
    void thread_tmp_34_fu_409_p2();
    void thread_tmp_44_cast_fu_342_p3();
    void thread_tmp_45_cast_fu_355_p1();
    void thread_tmp_49_cast_fu_405_p1();
    void thread_tmp_50_cast_fu_414_p1();
    void thread_tmp_cast2_fu_183_p1();
    void thread_tmp_cast_fu_187_p1();
    void thread_tmp_fu_201_p0();
    void thread_tmp_fu_201_p00();
    void thread_tmp_fu_201_p2();
    void thread_tmp_s_fu_207_p4();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
