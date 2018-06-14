#include "pool_layer1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pool_layer1::thread_pool_buff_val_56_V_address0() {
    pool_buff_val_56_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage119.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage119_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage121.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage121_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_56_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_56_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_56_V_d0() {
    pool_buff_val_56_V_d0 = (!tmp_22_7_1_fu_3958_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_fu_3958_p2.read()[0].to_bool())? storemerge_7_fu_3951_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_56_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage121.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage121_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_56_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_56_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_57_V_address0() {
    pool_buff_val_57_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage120.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage120_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage122.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage122_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_57_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_57_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_57_V_d0() {
    pool_buff_val_57_V_d0 = (!tmp_22_7_1_1_fu_3993_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_1_fu_3993_p2.read()[0].to_bool())? storemerge_7_0_1_fu_3986_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_57_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage122.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage122_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_57_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_57_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_58_V_address0() {
    pool_buff_val_58_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage121.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage121_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage123.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage123_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_58_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_58_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_58_V_d0() {
    pool_buff_val_58_V_d0 = (!tmp_22_7_1_2_fu_4028_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_2_fu_4028_p2.read()[0].to_bool())? storemerge_7_0_2_fu_4021_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_58_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage123.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage123_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_58_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_58_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_59_V_address0() {
    pool_buff_val_59_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage122.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage122_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage124.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage124_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_59_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_59_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_59_V_d0() {
    pool_buff_val_59_V_d0 = (!tmp_22_7_1_3_fu_4063_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_3_fu_4063_p2.read()[0].to_bool())? storemerge_7_0_3_fu_4056_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_59_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage124.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage124_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_59_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_59_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_5_V_address0() {
    pool_buff_val_5_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_5_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_5_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_5_V_d0() {
    pool_buff_val_5_V_d0 = (!tmp_22_0_1_5_fu_2215_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_1_5_fu_2215_p2.read()[0].to_bool())? storemerge_0_0_5_fu_2166_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_5_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_5_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_60_V_address0() {
    pool_buff_val_60_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage123.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage123_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage125.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage125_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_60_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_60_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_60_V_d0() {
    pool_buff_val_60_V_d0 = (!tmp_22_7_1_4_fu_4098_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_4_fu_4098_p2.read()[0].to_bool())? storemerge_7_0_4_fu_4091_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_60_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage125.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage125_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_60_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_60_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_61_V_address0() {
    pool_buff_val_61_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage124.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage124_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage126.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage126_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_61_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_61_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_61_V_d0() {
    pool_buff_val_61_V_d0 = (!tmp_22_7_1_5_fu_4175_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_5_fu_4175_p2.read()[0].to_bool())? storemerge_7_0_5_fu_4126_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_61_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage126.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage126_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_61_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_61_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_62_V_address0() {
    pool_buff_val_62_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage125.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage125_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage127.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage127_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_62_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_62_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_62_V_d0() {
    pool_buff_val_62_V_d0 = (!tmp_22_7_1_6_fu_4191_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_6_fu_4191_p2.read()[0].to_bool())? storemerge_7_0_6_reg_6971.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_62_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage127.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage127_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_62_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_62_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_63_V_address0() {
    pool_buff_val_63_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage125.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage125_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage128.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage128_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_63_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_63_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_63_V_d0() {
    pool_buff_val_63_V_d0 = (!tmp_22_7_1_7_fu_4205_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_7_fu_4205_p2.read()[0].to_bool())? storemerge_7_0_7_reg_6977.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_63_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage128.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage128_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_63_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_63_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_64_V_address0() {
    pool_buff_val_64_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_64_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage135.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage135_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage137.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage137_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_64_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_64_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_64_V_d0() {
    pool_buff_val_64_V_d0 = (!tmp_22_8_1_fu_4238_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_fu_4238_p2.read()[0].to_bool())? storemerge_8_fu_4231_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_64_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage137.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage137_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_64_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_64_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_65_V_address0() {
    pool_buff_val_65_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_65_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage136.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage136_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage138.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage138_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_65_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_65_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_65_V_d0() {
    pool_buff_val_65_V_d0 = (!tmp_22_8_1_1_fu_4273_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_1_fu_4273_p2.read()[0].to_bool())? storemerge_8_0_1_fu_4266_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_65_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage138.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage138_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_65_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_65_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_66_V_address0() {
    pool_buff_val_66_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_66_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage137.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage137_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage139.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage139_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_66_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_66_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_66_V_d0() {
    pool_buff_val_66_V_d0 = (!tmp_22_8_1_2_fu_4308_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_2_fu_4308_p2.read()[0].to_bool())? storemerge_8_0_2_fu_4301_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_66_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage139.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage139_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_66_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_66_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_67_V_address0() {
    pool_buff_val_67_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_67_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage138.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage138_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage140.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage140_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_67_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_67_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_67_V_d0() {
    pool_buff_val_67_V_d0 = (!tmp_22_8_1_3_fu_4343_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_3_fu_4343_p2.read()[0].to_bool())? storemerge_8_0_3_fu_4336_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_67_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage140.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage140_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_67_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_67_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_68_V_address0() {
    pool_buff_val_68_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_68_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage139.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage139_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage141.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage141_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_68_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_68_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_68_V_d0() {
    pool_buff_val_68_V_d0 = (!tmp_22_8_1_4_fu_4378_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_4_fu_4378_p2.read()[0].to_bool())? storemerge_8_0_4_fu_4371_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_68_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage141.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage141_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_68_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_68_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_69_V_address0() {
    pool_buff_val_69_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_69_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage140.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage140_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage142.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage142_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_69_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_69_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_69_V_d0() {
    pool_buff_val_69_V_d0 = (!tmp_22_8_1_5_fu_4455_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_5_fu_4455_p2.read()[0].to_bool())? storemerge_8_0_5_fu_4406_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_69_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage142.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage142_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_69_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_69_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_6_V_address0() {
    pool_buff_val_6_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_6_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_6_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_6_V_d0() {
    pool_buff_val_6_V_d0 = (!tmp_22_0_1_6_fu_2231_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_1_6_fu_2231_p2.read()[0].to_bool())? storemerge_0_0_6_reg_6635.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_6_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_6_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_70_V_address0() {
    pool_buff_val_70_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_70_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage141.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage141_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage143.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage143_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_70_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_70_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_70_V_d0() {
    pool_buff_val_70_V_d0 = (!tmp_22_8_1_6_fu_4471_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_6_fu_4471_p2.read()[0].to_bool())? storemerge_8_0_6_reg_7019.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_70_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage143.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage143_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_70_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_70_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_71_V_address0() {
    pool_buff_val_71_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_71_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage141.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage141_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage144.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage144_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_71_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_71_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_71_V_d0() {
    pool_buff_val_71_V_d0 = (!tmp_22_8_1_7_fu_4485_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_7_fu_4485_p2.read()[0].to_bool())? storemerge_8_0_7_reg_7025.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_71_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage144.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage144_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_71_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_71_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_72_V_address0() {
    pool_buff_val_72_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_72_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage151.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage151_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage153.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage153_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_72_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_72_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_72_V_d0() {
    pool_buff_val_72_V_d0 = (!tmp_22_9_1_fu_4518_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_fu_4518_p2.read()[0].to_bool())? storemerge_9_fu_4511_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_72_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage153.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage153_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_72_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_72_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_73_V_address0() {
    pool_buff_val_73_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_73_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage152.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage152_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage154.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage154_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_73_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_73_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_73_V_d0() {
    pool_buff_val_73_V_d0 = (!tmp_22_9_1_1_fu_4553_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_1_fu_4553_p2.read()[0].to_bool())? storemerge_9_0_1_fu_4546_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_73_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage154.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage154_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_73_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_73_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_74_V_address0() {
    pool_buff_val_74_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_74_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage153.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage153_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage155.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage155_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_74_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_74_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_74_V_d0() {
    pool_buff_val_74_V_d0 = (!tmp_22_9_1_2_fu_4588_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_2_fu_4588_p2.read()[0].to_bool())? storemerge_9_0_2_fu_4581_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_74_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage155.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage155_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_74_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_74_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_75_V_address0() {
    pool_buff_val_75_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_75_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage154.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage154_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage156.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage156_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_75_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_75_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_75_V_d0() {
    pool_buff_val_75_V_d0 = (!tmp_22_9_1_3_fu_4623_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_3_fu_4623_p2.read()[0].to_bool())? storemerge_9_0_3_fu_4616_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_75_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage156.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage156_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_75_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_75_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_76_V_address0() {
    pool_buff_val_76_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_76_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage155.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage155_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage157.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage157_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_76_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_76_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_76_V_d0() {
    pool_buff_val_76_V_d0 = (!tmp_22_9_1_4_fu_4658_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_4_fu_4658_p2.read()[0].to_bool())? storemerge_9_0_4_fu_4651_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_76_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage157.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage157_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_76_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_76_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_77_V_address0() {
    pool_buff_val_77_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_77_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage156.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage156_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage158.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage158_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_77_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_77_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_77_V_d0() {
    pool_buff_val_77_V_d0 = (!tmp_22_9_1_5_fu_4735_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_5_fu_4735_p2.read()[0].to_bool())? storemerge_9_0_5_fu_4686_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_77_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage158.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage158_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_77_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_77_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_78_V_address0() {
    pool_buff_val_78_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_78_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage157.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage157_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage159.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage159_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_78_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_78_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_78_V_d0() {
    pool_buff_val_78_V_d0 = (!tmp_22_9_1_6_fu_4751_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_6_fu_4751_p2.read()[0].to_bool())? storemerge_9_0_6_reg_7067.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_78_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage159.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage159_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_78_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_78_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_79_V_address0() {
    pool_buff_val_79_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_79_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage157.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage157_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage160.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage160_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_79_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_79_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_79_V_d0() {
    pool_buff_val_79_V_d0 = (!tmp_22_9_1_7_fu_4765_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_7_fu_4765_p2.read()[0].to_bool())? storemerge_9_0_7_reg_7073.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_79_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage160.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage160_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_79_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_79_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_7_V_address0() {
    pool_buff_val_7_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_7_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_7_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_7_V_d0() {
    pool_buff_val_7_V_d0 = (!tmp_22_0_1_7_fu_2245_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_1_7_fu_2245_p2.read()[0].to_bool())? storemerge_0_0_7_reg_6641.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage16_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_7_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_7_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_80_V_address0() {
    pool_buff_val_80_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_80_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage167.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage167_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage169.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage169_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_80_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_80_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_80_V_d0() {
    pool_buff_val_80_V_d0 = (!tmp_22_10_1_fu_4798_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_fu_4798_p2.read()[0].to_bool())? storemerge_s_fu_4791_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_80_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage169.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage169_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_80_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_80_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_81_V_address0() {
    pool_buff_val_81_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_81_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage168.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage168_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage170.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage170_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_81_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_81_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_81_V_d0() {
    pool_buff_val_81_V_d0 = (!tmp_22_10_1_1_fu_4833_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_1_fu_4833_p2.read()[0].to_bool())? storemerge_10_0_1_fu_4826_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_81_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage170.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage170_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_81_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_81_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_82_V_address0() {
    pool_buff_val_82_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_82_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage169.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage169_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage171.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage171_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_82_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_82_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_82_V_d0() {
    pool_buff_val_82_V_d0 = (!tmp_22_10_1_2_fu_4868_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_2_fu_4868_p2.read()[0].to_bool())? storemerge_10_0_2_fu_4861_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_82_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage171.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage171_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_82_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_82_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_83_V_address0() {
    pool_buff_val_83_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_83_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage170.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage170_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage172.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage172_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_83_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_83_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_83_V_d0() {
    pool_buff_val_83_V_d0 = (!tmp_22_10_1_3_fu_4903_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_3_fu_4903_p2.read()[0].to_bool())? storemerge_10_0_3_fu_4896_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_83_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage172.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage172_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_83_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_83_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_84_V_address0() {
    pool_buff_val_84_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_84_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage171.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage171_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage173.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage173_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_84_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_84_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_84_V_d0() {
    pool_buff_val_84_V_d0 = (!tmp_22_10_1_4_fu_4938_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_4_fu_4938_p2.read()[0].to_bool())? storemerge_10_0_4_fu_4931_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_84_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage173.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage173_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_84_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_84_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_85_V_address0() {
    pool_buff_val_85_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_85_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage172.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage172_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage174.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage174_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_85_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_85_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_85_V_d0() {
    pool_buff_val_85_V_d0 = (!tmp_22_10_1_5_fu_5015_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_5_fu_5015_p2.read()[0].to_bool())? storemerge_10_0_5_fu_4966_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_85_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage174.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage174_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_85_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_85_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_86_V_address0() {
    pool_buff_val_86_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_86_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage173.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage173_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage175.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage175_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_86_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_86_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_86_V_d0() {
    pool_buff_val_86_V_d0 = (!tmp_22_10_1_6_fu_5031_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_6_fu_5031_p2.read()[0].to_bool())? storemerge_10_0_6_reg_7115.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_86_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage175.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage175_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_86_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_86_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_87_V_address0() {
    pool_buff_val_87_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_87_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage173.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage173_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage176.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage176_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_87_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_87_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_87_V_d0() {
    pool_buff_val_87_V_d0 = (!tmp_22_10_1_7_fu_5045_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_7_fu_5045_p2.read()[0].to_bool())? storemerge_10_0_7_reg_7121.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_87_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage176.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage176_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_87_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_87_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_88_V_address0() {
    pool_buff_val_88_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_88_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage183.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage183_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage185.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage185_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_88_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_88_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_88_V_d0() {
    pool_buff_val_88_V_d0 = (!tmp_22_11_1_fu_5078_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_fu_5078_p2.read()[0].to_bool())? storemerge_10_fu_5071_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_88_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage185.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage185_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_88_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_88_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_89_V_address0() {
    pool_buff_val_89_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_89_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage184.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage184_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage186.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage186_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_89_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_89_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_89_V_d0() {
    pool_buff_val_89_V_d0 = (!tmp_22_11_1_1_fu_5113_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_1_fu_5113_p2.read()[0].to_bool())? storemerge_11_0_1_fu_5106_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_89_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage186.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage186_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_89_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_89_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_8_V_address0() {
    pool_buff_val_8_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_8_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_8_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_8_V_d0() {
    pool_buff_val_8_V_d0 = (!tmp_22_1_1_fu_2278_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_1_fu_2278_p2.read()[0].to_bool())? storemerge_1_fu_2271_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage25_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_8_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_8_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_90_V_address0() {
    pool_buff_val_90_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_90_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage185.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage185_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage187.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage187_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_90_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_90_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_90_V_d0() {
    pool_buff_val_90_V_d0 = (!tmp_22_11_1_2_fu_5148_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_2_fu_5148_p2.read()[0].to_bool())? storemerge_11_0_2_fu_5141_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_90_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage187.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage187_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_90_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_90_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_91_V_address0() {
    pool_buff_val_91_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_91_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage186.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage186_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage188.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage188_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_91_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_91_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_91_V_d0() {
    pool_buff_val_91_V_d0 = (!tmp_22_11_1_3_fu_5183_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_3_fu_5183_p2.read()[0].to_bool())? storemerge_11_0_3_fu_5176_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_91_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage188.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage188_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_91_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_91_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_92_V_address0() {
    pool_buff_val_92_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_92_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage187.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage187_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage189.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage189_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_92_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_92_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_92_V_d0() {
    pool_buff_val_92_V_d0 = (!tmp_22_11_1_4_fu_5218_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_4_fu_5218_p2.read()[0].to_bool())? storemerge_11_0_4_fu_5211_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_92_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage189.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage189_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_92_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_92_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_93_V_address0() {
    pool_buff_val_93_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_93_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage188.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage188_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage190.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage190_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_93_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_93_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_93_V_d0() {
    pool_buff_val_93_V_d0 = (!tmp_22_11_1_5_fu_5295_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_5_fu_5295_p2.read()[0].to_bool())? storemerge_11_0_5_fu_5246_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_93_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage190.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage190_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_93_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_93_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_94_V_address0() {
    pool_buff_val_94_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_94_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage189.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage189_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage191.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage191_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_94_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_94_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_94_V_d0() {
    pool_buff_val_94_V_d0 = (!tmp_22_11_1_6_fu_5311_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_6_fu_5311_p2.read()[0].to_bool())? storemerge_11_0_6_reg_7163.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_94_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage191.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage191_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_94_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_94_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_95_V_address0() {
    pool_buff_val_95_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_95_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage189.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage189_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage192.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage192_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_95_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_95_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_95_V_d0() {
    pool_buff_val_95_V_d0 = (!tmp_22_11_1_7_fu_5325_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_7_fu_5325_p2.read()[0].to_bool())? storemerge_11_0_7_reg_7169.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_95_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage192.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage192_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_95_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_95_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_96_V_address0() {
    pool_buff_val_96_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_96_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage199.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage199_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage201.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage201_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_96_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_96_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_96_V_d0() {
    pool_buff_val_96_V_d0 = (!tmp_22_12_1_fu_5358_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_fu_5358_p2.read()[0].to_bool())? storemerge_11_fu_5351_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_96_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage201.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage201_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_96_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_96_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_97_V_address0() {
    pool_buff_val_97_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_97_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage200.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage200_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage202.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage202_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_97_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_97_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_97_V_d0() {
    pool_buff_val_97_V_d0 = (!tmp_22_12_1_1_fu_5393_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_1_fu_5393_p2.read()[0].to_bool())? storemerge_12_0_1_fu_5386_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_97_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage202.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage202_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_97_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_97_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_98_V_address0() {
    pool_buff_val_98_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_98_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage201.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage201_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage203.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage203_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_98_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_98_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_98_V_d0() {
    pool_buff_val_98_V_d0 = (!tmp_22_12_1_2_fu_5428_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_2_fu_5428_p2.read()[0].to_bool())? storemerge_12_0_2_fu_5421_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_98_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage203.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage203_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_98_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_98_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_99_V_address0() {
    pool_buff_val_99_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_99_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage202.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage202_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage204.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage204_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_99_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_99_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_99_V_d0() {
    pool_buff_val_99_V_d0 = (!tmp_22_12_1_3_fu_5463_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_3_fu_5463_p2.read()[0].to_bool())? storemerge_12_0_3_fu_5456_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_99_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage204.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage204_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_99_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_99_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_9_V_address0() {
    pool_buff_val_9_V_address0 =  (sc_lv<1>) (ap_const_lv64_0);
}

void pool_layer1::thread_pool_buff_val_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0)))) {
        pool_buff_val_9_V_ce0 = ap_const_logic_1;
    } else {
        pool_buff_val_9_V_ce0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_9_V_d0() {
    pool_buff_val_9_V_d0 = (!tmp_22_1_1_1_fu_2313_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_1_1_fu_2313_p2.read()[0].to_bool())? storemerge_1_0_1_fu_2306_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_pool_buff_val_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_6464.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage26.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage26_11001.read(), ap_const_boolean_0))) {
        pool_buff_val_9_V_we0 = ap_const_logic_1;
    } else {
        pool_buff_val_9_V_we0 = ap_const_logic_0;
    }
}

void pool_layer1::thread_pool_buff_val_V_load_100_fu_2439_p3() {
    pool_buff_val_V_load_100_fu_2439_p3 = (!tmp_22_1_0_5_fu_2434_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_0_5_fu_2434_p2.read()[0].to_bool())? pool_buff_val_13_V_2_reg_6677.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_101_fu_2459_p3() {
    pool_buff_val_V_load_101_fu_2459_p3 = (!tmp_22_1_0_6_fu_2453_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_0_6_fu_2453_p2.read()[0].to_bool())? pool_buff_val_14_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_102_fu_2480_p3() {
    pool_buff_val_V_load_102_fu_2480_p3 = (!tmp_22_1_0_7_fu_2474_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_0_7_fu_2474_p2.read()[0].to_bool())? pool_buff_val_15_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_103_fu_2544_p3() {
    pool_buff_val_V_load_103_fu_2544_p3 = (!tmp_22_2_fu_2539_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_fu_2539_p2.read()[0].to_bool())? pool_buff_val_16_V_2_reg_6695.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_104_fu_2579_p3() {
    pool_buff_val_V_load_104_fu_2579_p3 = (!tmp_22_2_0_1_fu_2574_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_0_1_fu_2574_p2.read()[0].to_bool())? pool_buff_val_17_V_2_reg_6701.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_105_fu_2614_p3() {
    pool_buff_val_V_load_105_fu_2614_p3 = (!tmp_22_2_0_2_fu_2609_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_0_2_fu_2609_p2.read()[0].to_bool())? pool_buff_val_18_V_2_reg_6707.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_106_fu_2649_p3() {
    pool_buff_val_V_load_106_fu_2649_p3 = (!tmp_22_2_0_3_fu_2644_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_0_3_fu_2644_p2.read()[0].to_bool())? pool_buff_val_19_V_2_reg_6713.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_107_fu_2684_p3() {
    pool_buff_val_V_load_107_fu_2684_p3 = (!tmp_22_2_0_4_fu_2679_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_0_4_fu_2679_p2.read()[0].to_bool())? pool_buff_val_20_V_2_reg_6719.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_108_fu_2719_p3() {
    pool_buff_val_V_load_108_fu_2719_p3 = (!tmp_22_2_0_5_fu_2714_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_0_5_fu_2714_p2.read()[0].to_bool())? pool_buff_val_21_V_2_reg_6725.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_109_fu_2739_p3() {
    pool_buff_val_V_load_109_fu_2739_p3 = (!tmp_22_2_0_6_fu_2733_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_0_6_fu_2733_p2.read()[0].to_bool())? pool_buff_val_22_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_110_fu_2760_p3() {
    pool_buff_val_V_load_110_fu_2760_p3 = (!tmp_22_2_0_7_fu_2754_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_0_7_fu_2754_p2.read()[0].to_bool())? pool_buff_val_23_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_111_fu_2824_p3() {
    pool_buff_val_V_load_111_fu_2824_p3 = (!tmp_22_3_fu_2819_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_fu_2819_p2.read()[0].to_bool())? pool_buff_val_24_V_2_reg_6743.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_112_fu_2859_p3() {
    pool_buff_val_V_load_112_fu_2859_p3 = (!tmp_22_3_0_1_fu_2854_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_0_1_fu_2854_p2.read()[0].to_bool())? pool_buff_val_25_V_2_reg_6749.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_113_fu_2894_p3() {
    pool_buff_val_V_load_113_fu_2894_p3 = (!tmp_22_3_0_2_fu_2889_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_0_2_fu_2889_p2.read()[0].to_bool())? pool_buff_val_26_V_2_reg_6755.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_114_fu_2929_p3() {
    pool_buff_val_V_load_114_fu_2929_p3 = (!tmp_22_3_0_3_fu_2924_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_0_3_fu_2924_p2.read()[0].to_bool())? pool_buff_val_27_V_2_reg_6761.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_115_fu_2964_p3() {
    pool_buff_val_V_load_115_fu_2964_p3 = (!tmp_22_3_0_4_fu_2959_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_0_4_fu_2959_p2.read()[0].to_bool())? pool_buff_val_28_V_2_reg_6767.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_116_fu_2999_p3() {
    pool_buff_val_V_load_116_fu_2999_p3 = (!tmp_22_3_0_5_fu_2994_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_0_5_fu_2994_p2.read()[0].to_bool())? pool_buff_val_29_V_2_reg_6773.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_117_fu_3019_p3() {
    pool_buff_val_V_load_117_fu_3019_p3 = (!tmp_22_3_0_6_fu_3013_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_0_6_fu_3013_p2.read()[0].to_bool())? pool_buff_val_30_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_118_fu_3040_p3() {
    pool_buff_val_V_load_118_fu_3040_p3 = (!tmp_22_3_0_7_fu_3034_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_0_7_fu_3034_p2.read()[0].to_bool())? pool_buff_val_31_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_119_fu_3104_p3() {
    pool_buff_val_V_load_119_fu_3104_p3 = (!tmp_22_4_fu_3099_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_fu_3099_p2.read()[0].to_bool())? pool_buff_val_32_V_2_reg_6791.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_120_fu_3139_p3() {
    pool_buff_val_V_load_120_fu_3139_p3 = (!tmp_22_4_0_1_fu_3134_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_0_1_fu_3134_p2.read()[0].to_bool())? pool_buff_val_33_V_2_reg_6797.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_121_fu_3174_p3() {
    pool_buff_val_V_load_121_fu_3174_p3 = (!tmp_22_4_0_2_fu_3169_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_0_2_fu_3169_p2.read()[0].to_bool())? pool_buff_val_34_V_2_reg_6803.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_122_fu_3209_p3() {
    pool_buff_val_V_load_122_fu_3209_p3 = (!tmp_22_4_0_3_fu_3204_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_0_3_fu_3204_p2.read()[0].to_bool())? pool_buff_val_35_V_2_reg_6809.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_123_fu_3244_p3() {
    pool_buff_val_V_load_123_fu_3244_p3 = (!tmp_22_4_0_4_fu_3239_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_0_4_fu_3239_p2.read()[0].to_bool())? pool_buff_val_36_V_2_reg_6815.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_124_fu_3279_p3() {
    pool_buff_val_V_load_124_fu_3279_p3 = (!tmp_22_4_0_5_fu_3274_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_0_5_fu_3274_p2.read()[0].to_bool())? pool_buff_val_37_V_2_reg_6821.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_125_fu_3299_p3() {
    pool_buff_val_V_load_125_fu_3299_p3 = (!tmp_22_4_0_6_fu_3293_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_0_6_fu_3293_p2.read()[0].to_bool())? pool_buff_val_38_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_126_fu_3320_p3() {
    pool_buff_val_V_load_126_fu_3320_p3 = (!tmp_22_4_0_7_fu_3314_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_0_7_fu_3314_p2.read()[0].to_bool())? pool_buff_val_39_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_127_fu_3384_p3() {
    pool_buff_val_V_load_127_fu_3384_p3 = (!tmp_22_5_fu_3379_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_fu_3379_p2.read()[0].to_bool())? pool_buff_val_40_V_2_reg_6839.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_128_fu_3419_p3() {
    pool_buff_val_V_load_128_fu_3419_p3 = (!tmp_22_5_0_1_fu_3414_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_0_1_fu_3414_p2.read()[0].to_bool())? pool_buff_val_41_V_2_reg_6845.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_129_fu_3454_p3() {
    pool_buff_val_V_load_129_fu_3454_p3 = (!tmp_22_5_0_2_fu_3449_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_0_2_fu_3449_p2.read()[0].to_bool())? pool_buff_val_42_V_2_reg_6851.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_130_fu_3489_p3() {
    pool_buff_val_V_load_130_fu_3489_p3 = (!tmp_22_5_0_3_fu_3484_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_0_3_fu_3484_p2.read()[0].to_bool())? pool_buff_val_43_V_2_reg_6857.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_131_fu_3524_p3() {
    pool_buff_val_V_load_131_fu_3524_p3 = (!tmp_22_5_0_4_fu_3519_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_0_4_fu_3519_p2.read()[0].to_bool())? pool_buff_val_44_V_2_reg_6863.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_132_fu_3559_p3() {
    pool_buff_val_V_load_132_fu_3559_p3 = (!tmp_22_5_0_5_fu_3554_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_0_5_fu_3554_p2.read()[0].to_bool())? pool_buff_val_45_V_2_reg_6869.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_133_fu_3579_p3() {
    pool_buff_val_V_load_133_fu_3579_p3 = (!tmp_22_5_0_6_fu_3573_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_0_6_fu_3573_p2.read()[0].to_bool())? pool_buff_val_46_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_134_fu_3600_p3() {
    pool_buff_val_V_load_134_fu_3600_p3 = (!tmp_22_5_0_7_fu_3594_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_0_7_fu_3594_p2.read()[0].to_bool())? pool_buff_val_47_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_135_fu_3664_p3() {
    pool_buff_val_V_load_135_fu_3664_p3 = (!tmp_22_6_fu_3659_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_fu_3659_p2.read()[0].to_bool())? pool_buff_val_48_V_2_reg_6887.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_136_fu_3699_p3() {
    pool_buff_val_V_load_136_fu_3699_p3 = (!tmp_22_6_0_1_fu_3694_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_0_1_fu_3694_p2.read()[0].to_bool())? pool_buff_val_49_V_2_reg_6893.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_137_fu_3734_p3() {
    pool_buff_val_V_load_137_fu_3734_p3 = (!tmp_22_6_0_2_fu_3729_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_0_2_fu_3729_p2.read()[0].to_bool())? pool_buff_val_50_V_2_reg_6899.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_138_fu_3769_p3() {
    pool_buff_val_V_load_138_fu_3769_p3 = (!tmp_22_6_0_3_fu_3764_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_0_3_fu_3764_p2.read()[0].to_bool())? pool_buff_val_51_V_2_reg_6905.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_139_fu_3804_p3() {
    pool_buff_val_V_load_139_fu_3804_p3 = (!tmp_22_6_0_4_fu_3799_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_0_4_fu_3799_p2.read()[0].to_bool())? pool_buff_val_52_V_2_reg_6911.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_140_fu_3839_p3() {
    pool_buff_val_V_load_140_fu_3839_p3 = (!tmp_22_6_0_5_fu_3834_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_0_5_fu_3834_p2.read()[0].to_bool())? pool_buff_val_53_V_2_reg_6917.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_141_fu_3859_p3() {
    pool_buff_val_V_load_141_fu_3859_p3 = (!tmp_22_6_0_6_fu_3853_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_0_6_fu_3853_p2.read()[0].to_bool())? pool_buff_val_54_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_142_fu_3880_p3() {
    pool_buff_val_V_load_142_fu_3880_p3 = (!tmp_22_6_0_7_fu_3874_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_0_7_fu_3874_p2.read()[0].to_bool())? pool_buff_val_55_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_143_fu_3944_p3() {
    pool_buff_val_V_load_143_fu_3944_p3 = (!tmp_22_7_fu_3939_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_fu_3939_p2.read()[0].to_bool())? pool_buff_val_56_V_2_reg_6935.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_144_fu_3979_p3() {
    pool_buff_val_V_load_144_fu_3979_p3 = (!tmp_22_7_0_1_fu_3974_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_0_1_fu_3974_p2.read()[0].to_bool())? pool_buff_val_57_V_2_reg_6941.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_145_fu_4014_p3() {
    pool_buff_val_V_load_145_fu_4014_p3 = (!tmp_22_7_0_2_fu_4009_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_0_2_fu_4009_p2.read()[0].to_bool())? pool_buff_val_58_V_2_reg_6947.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_146_fu_4049_p3() {
    pool_buff_val_V_load_146_fu_4049_p3 = (!tmp_22_7_0_3_fu_4044_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_0_3_fu_4044_p2.read()[0].to_bool())? pool_buff_val_59_V_2_reg_6953.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_147_fu_4084_p3() {
    pool_buff_val_V_load_147_fu_4084_p3 = (!tmp_22_7_0_4_fu_4079_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_0_4_fu_4079_p2.read()[0].to_bool())? pool_buff_val_60_V_2_reg_6959.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_148_fu_4119_p3() {
    pool_buff_val_V_load_148_fu_4119_p3 = (!tmp_22_7_0_5_fu_4114_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_0_5_fu_4114_p2.read()[0].to_bool())? pool_buff_val_61_V_2_reg_6965.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_149_fu_4139_p3() {
    pool_buff_val_V_load_149_fu_4139_p3 = (!tmp_22_7_0_6_fu_4133_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_0_6_fu_4133_p2.read()[0].to_bool())? pool_buff_val_62_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_150_fu_4160_p3() {
    pool_buff_val_V_load_150_fu_4160_p3 = (!tmp_22_7_0_7_fu_4154_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_0_7_fu_4154_p2.read()[0].to_bool())? pool_buff_val_63_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_151_fu_4224_p3() {
    pool_buff_val_V_load_151_fu_4224_p3 = (!tmp_22_8_fu_4219_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_fu_4219_p2.read()[0].to_bool())? pool_buff_val_64_V_2_reg_6983.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_152_fu_4259_p3() {
    pool_buff_val_V_load_152_fu_4259_p3 = (!tmp_22_8_0_1_fu_4254_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_0_1_fu_4254_p2.read()[0].to_bool())? pool_buff_val_65_V_2_reg_6989.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_153_fu_4294_p3() {
    pool_buff_val_V_load_153_fu_4294_p3 = (!tmp_22_8_0_2_fu_4289_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_0_2_fu_4289_p2.read()[0].to_bool())? pool_buff_val_66_V_2_reg_6995.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_154_fu_4329_p3() {
    pool_buff_val_V_load_154_fu_4329_p3 = (!tmp_22_8_0_3_fu_4324_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_0_3_fu_4324_p2.read()[0].to_bool())? pool_buff_val_67_V_2_reg_7001.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_155_fu_4364_p3() {
    pool_buff_val_V_load_155_fu_4364_p3 = (!tmp_22_8_0_4_fu_4359_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_0_4_fu_4359_p2.read()[0].to_bool())? pool_buff_val_68_V_2_reg_7007.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_156_fu_4399_p3() {
    pool_buff_val_V_load_156_fu_4399_p3 = (!tmp_22_8_0_5_fu_4394_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_0_5_fu_4394_p2.read()[0].to_bool())? pool_buff_val_69_V_2_reg_7013.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_157_fu_4419_p3() {
    pool_buff_val_V_load_157_fu_4419_p3 = (!tmp_22_8_0_6_fu_4413_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_0_6_fu_4413_p2.read()[0].to_bool())? pool_buff_val_70_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_158_fu_4440_p3() {
    pool_buff_val_V_load_158_fu_4440_p3 = (!tmp_22_8_0_7_fu_4434_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_0_7_fu_4434_p2.read()[0].to_bool())? pool_buff_val_71_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_159_fu_4504_p3() {
    pool_buff_val_V_load_159_fu_4504_p3 = (!tmp_22_9_fu_4499_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_fu_4499_p2.read()[0].to_bool())? pool_buff_val_72_V_2_reg_7031.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_160_fu_4539_p3() {
    pool_buff_val_V_load_160_fu_4539_p3 = (!tmp_22_9_0_1_fu_4534_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_0_1_fu_4534_p2.read()[0].to_bool())? pool_buff_val_73_V_2_reg_7037.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_161_fu_4574_p3() {
    pool_buff_val_V_load_161_fu_4574_p3 = (!tmp_22_9_0_2_fu_4569_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_0_2_fu_4569_p2.read()[0].to_bool())? pool_buff_val_74_V_2_reg_7043.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_162_fu_4609_p3() {
    pool_buff_val_V_load_162_fu_4609_p3 = (!tmp_22_9_0_3_fu_4604_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_0_3_fu_4604_p2.read()[0].to_bool())? pool_buff_val_75_V_2_reg_7049.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_163_fu_4644_p3() {
    pool_buff_val_V_load_163_fu_4644_p3 = (!tmp_22_9_0_4_fu_4639_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_0_4_fu_4639_p2.read()[0].to_bool())? pool_buff_val_76_V_2_reg_7055.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_164_fu_4679_p3() {
    pool_buff_val_V_load_164_fu_4679_p3 = (!tmp_22_9_0_5_fu_4674_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_0_5_fu_4674_p2.read()[0].to_bool())? pool_buff_val_77_V_2_reg_7061.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_165_fu_4699_p3() {
    pool_buff_val_V_load_165_fu_4699_p3 = (!tmp_22_9_0_6_fu_4693_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_0_6_fu_4693_p2.read()[0].to_bool())? pool_buff_val_78_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_166_fu_4720_p3() {
    pool_buff_val_V_load_166_fu_4720_p3 = (!tmp_22_9_0_7_fu_4714_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_0_7_fu_4714_p2.read()[0].to_bool())? pool_buff_val_79_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_167_fu_4784_p3() {
    pool_buff_val_V_load_167_fu_4784_p3 = (!tmp_22_s_fu_4779_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_s_fu_4779_p2.read()[0].to_bool())? pool_buff_val_80_V_2_reg_7079.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_168_fu_4819_p3() {
    pool_buff_val_V_load_168_fu_4819_p3 = (!tmp_22_10_0_1_fu_4814_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_0_1_fu_4814_p2.read()[0].to_bool())? pool_buff_val_81_V_2_reg_7085.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_169_fu_4854_p3() {
    pool_buff_val_V_load_169_fu_4854_p3 = (!tmp_22_10_0_2_fu_4849_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_0_2_fu_4849_p2.read()[0].to_bool())? pool_buff_val_82_V_2_reg_7091.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_170_fu_4889_p3() {
    pool_buff_val_V_load_170_fu_4889_p3 = (!tmp_22_10_0_3_fu_4884_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_0_3_fu_4884_p2.read()[0].to_bool())? pool_buff_val_83_V_2_reg_7097.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_171_fu_4924_p3() {
    pool_buff_val_V_load_171_fu_4924_p3 = (!tmp_22_10_0_4_fu_4919_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_0_4_fu_4919_p2.read()[0].to_bool())? pool_buff_val_84_V_2_reg_7103.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_172_fu_4959_p3() {
    pool_buff_val_V_load_172_fu_4959_p3 = (!tmp_22_10_0_5_fu_4954_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_0_5_fu_4954_p2.read()[0].to_bool())? pool_buff_val_85_V_2_reg_7109.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_173_fu_4979_p3() {
    pool_buff_val_V_load_173_fu_4979_p3 = (!tmp_22_10_0_6_fu_4973_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_0_6_fu_4973_p2.read()[0].to_bool())? pool_buff_val_86_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_174_fu_5000_p3() {
    pool_buff_val_V_load_174_fu_5000_p3 = (!tmp_22_10_0_7_fu_4994_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_0_7_fu_4994_p2.read()[0].to_bool())? pool_buff_val_87_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_175_fu_5064_p3() {
    pool_buff_val_V_load_175_fu_5064_p3 = (!tmp_22_10_fu_5059_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_fu_5059_p2.read()[0].to_bool())? pool_buff_val_88_V_2_reg_7127.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_176_fu_5099_p3() {
    pool_buff_val_V_load_176_fu_5099_p3 = (!tmp_22_11_0_1_fu_5094_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_0_1_fu_5094_p2.read()[0].to_bool())? pool_buff_val_89_V_2_reg_7133.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_177_fu_5134_p3() {
    pool_buff_val_V_load_177_fu_5134_p3 = (!tmp_22_11_0_2_fu_5129_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_0_2_fu_5129_p2.read()[0].to_bool())? pool_buff_val_90_V_2_reg_7139.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_178_fu_5169_p3() {
    pool_buff_val_V_load_178_fu_5169_p3 = (!tmp_22_11_0_3_fu_5164_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_0_3_fu_5164_p2.read()[0].to_bool())? pool_buff_val_91_V_2_reg_7145.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_179_fu_5204_p3() {
    pool_buff_val_V_load_179_fu_5204_p3 = (!tmp_22_11_0_4_fu_5199_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_0_4_fu_5199_p2.read()[0].to_bool())? pool_buff_val_92_V_2_reg_7151.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_180_fu_5239_p3() {
    pool_buff_val_V_load_180_fu_5239_p3 = (!tmp_22_11_0_5_fu_5234_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_0_5_fu_5234_p2.read()[0].to_bool())? pool_buff_val_93_V_2_reg_7157.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_181_fu_5259_p3() {
    pool_buff_val_V_load_181_fu_5259_p3 = (!tmp_22_11_0_6_fu_5253_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_0_6_fu_5253_p2.read()[0].to_bool())? pool_buff_val_94_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_182_fu_5280_p3() {
    pool_buff_val_V_load_182_fu_5280_p3 = (!tmp_22_11_0_7_fu_5274_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_0_7_fu_5274_p2.read()[0].to_bool())? pool_buff_val_95_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_183_fu_5344_p3() {
    pool_buff_val_V_load_183_fu_5344_p3 = (!tmp_22_11_fu_5339_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_fu_5339_p2.read()[0].to_bool())? pool_buff_val_96_V_1_reg_7175.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_184_fu_5379_p3() {
    pool_buff_val_V_load_184_fu_5379_p3 = (!tmp_22_12_0_1_fu_5374_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_0_1_fu_5374_p2.read()[0].to_bool())? pool_buff_val_97_V_1_reg_7181.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_185_fu_5414_p3() {
    pool_buff_val_V_load_185_fu_5414_p3 = (!tmp_22_12_0_2_fu_5409_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_0_2_fu_5409_p2.read()[0].to_bool())? pool_buff_val_98_V_1_reg_7187.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_186_fu_5449_p3() {
    pool_buff_val_V_load_186_fu_5449_p3 = (!tmp_22_12_0_3_fu_5444_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_0_3_fu_5444_p2.read()[0].to_bool())? pool_buff_val_99_V_1_reg_7193.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_187_fu_5484_p3() {
    pool_buff_val_V_load_187_fu_5484_p3 = (!tmp_22_12_0_4_fu_5479_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_0_4_fu_5479_p2.read()[0].to_bool())? pool_buff_val_100_V_2_reg_7199.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_188_fu_5519_p3() {
    pool_buff_val_V_load_188_fu_5519_p3 = (!tmp_22_12_0_5_fu_5514_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_0_5_fu_5514_p2.read()[0].to_bool())? pool_buff_val_101_V_2_reg_7205.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_189_fu_5539_p3() {
    pool_buff_val_V_load_189_fu_5539_p3 = (!tmp_22_12_0_6_fu_5533_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_0_6_fu_5533_p2.read()[0].to_bool())? pool_buff_val_102_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_190_fu_5560_p3() {
    pool_buff_val_V_load_190_fu_5560_p3 = (!tmp_22_12_0_7_fu_5554_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_0_7_fu_5554_p2.read()[0].to_bool())? pool_buff_val_103_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_191_fu_5624_p3() {
    pool_buff_val_V_load_191_fu_5624_p3 = (!tmp_22_12_fu_5619_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_fu_5619_p2.read()[0].to_bool())? pool_buff_val_104_V_2_reg_7223.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_192_fu_5659_p3() {
    pool_buff_val_V_load_192_fu_5659_p3 = (!tmp_22_13_0_1_fu_5654_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_0_1_fu_5654_p2.read()[0].to_bool())? pool_buff_val_105_V_2_reg_7229.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_193_fu_5694_p3() {
    pool_buff_val_V_load_193_fu_5694_p3 = (!tmp_22_13_0_2_fu_5689_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_0_2_fu_5689_p2.read()[0].to_bool())? pool_buff_val_106_V_2_reg_7235.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_194_fu_5729_p3() {
    pool_buff_val_V_load_194_fu_5729_p3 = (!tmp_22_13_0_3_fu_5724_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_0_3_fu_5724_p2.read()[0].to_bool())? pool_buff_val_107_V_2_reg_7241.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_195_fu_5764_p3() {
    pool_buff_val_V_load_195_fu_5764_p3 = (!tmp_22_13_0_4_fu_5759_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_0_4_fu_5759_p2.read()[0].to_bool())? pool_buff_val_108_V_2_reg_7247.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_196_fu_5799_p3() {
    pool_buff_val_V_load_196_fu_5799_p3 = (!tmp_22_13_0_5_fu_5794_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_0_5_fu_5794_p2.read()[0].to_bool())? pool_buff_val_109_V_2_reg_7253.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_197_fu_5819_p3() {
    pool_buff_val_V_load_197_fu_5819_p3 = (!tmp_22_13_0_6_fu_5813_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_0_6_fu_5813_p2.read()[0].to_bool())? pool_buff_val_110_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_198_fu_5840_p3() {
    pool_buff_val_V_load_198_fu_5840_p3 = (!tmp_22_13_0_7_fu_5834_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_0_7_fu_5834_p2.read()[0].to_bool())? pool_buff_val_111_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_199_fu_2054_p3() {
    pool_buff_val_V_load_199_fu_2054_p3 = (!tmp_22_0_0_2_fu_2049_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_0_2_fu_2049_p2.read()[0].to_bool())? pool_buff_val_2_V_l_reg_6611.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_200_fu_2089_p3() {
    pool_buff_val_V_load_200_fu_2089_p3 = (!tmp_22_0_0_3_fu_2084_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_0_3_fu_2084_p2.read()[0].to_bool())? pool_buff_val_3_V_l_reg_6617.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_201_fu_2124_p3() {
    pool_buff_val_V_load_201_fu_2124_p3 = (!tmp_22_0_0_4_fu_2119_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_0_4_fu_2119_p2.read()[0].to_bool())? pool_buff_val_4_V_l_reg_6623.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_202_fu_2159_p3() {
    pool_buff_val_V_load_202_fu_2159_p3 = (!tmp_22_0_0_5_fu_2154_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_0_5_fu_2154_p2.read()[0].to_bool())? pool_buff_val_5_V_l_reg_6629.read(): reg_1930.read());
}

void pool_layer1::thread_pool_buff_val_V_load_203_fu_2179_p3() {
    pool_buff_val_V_load_203_fu_2179_p3 = (!tmp_22_0_0_6_fu_2173_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_0_6_fu_2173_p2.read()[0].to_bool())? pool_buff_val_6_V_q0.read(): reg_1934.read());
}

void pool_layer1::thread_pool_buff_val_V_load_204_fu_2200_p3() {
    pool_buff_val_V_load_204_fu_2200_p3 = (!tmp_22_0_0_7_fu_2194_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_0_7_fu_2194_p2.read()[0].to_bool())? pool_buff_val_7_V_q0.read(): reg_1938.read());
}

void pool_layer1::thread_pool_buff_val_V_load_205_fu_1983_p3() {
    pool_buff_val_V_load_205_fu_1983_p3 = (!tmp_2_fu_1978_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_2_fu_1978_p2.read()[0].to_bool())? pool_buff_val_0_V_l_reg_6484.read(): reg_1910.read());
}

void pool_layer1::thread_pool_buff_val_V_load_95_fu_2019_p3() {
    pool_buff_val_V_load_95_fu_2019_p3 = (!tmp_22_0_0_1_fu_2014_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_0_1_fu_2014_p2.read()[0].to_bool())? pool_buff_val_1_V_l_reg_6605.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_96_fu_2299_p3() {
    pool_buff_val_V_load_96_fu_2299_p3 = (!tmp_22_1_0_1_fu_2294_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_0_1_fu_2294_p2.read()[0].to_bool())? pool_buff_val_9_V_l_reg_6653.read(): reg_1914.read());
}

void pool_layer1::thread_pool_buff_val_V_load_97_fu_2334_p3() {
    pool_buff_val_V_load_97_fu_2334_p3 = (!tmp_22_1_0_2_fu_2329_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_0_2_fu_2329_p2.read()[0].to_bool())? pool_buff_val_10_V_2_reg_6659.read(): reg_1918.read());
}

void pool_layer1::thread_pool_buff_val_V_load_98_fu_2369_p3() {
    pool_buff_val_V_load_98_fu_2369_p3 = (!tmp_22_1_0_3_fu_2364_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_0_3_fu_2364_p2.read()[0].to_bool())? pool_buff_val_11_V_2_reg_6665.read(): reg_1922.read());
}

void pool_layer1::thread_pool_buff_val_V_load_99_fu_2404_p3() {
    pool_buff_val_V_load_99_fu_2404_p3 = (!tmp_22_1_0_4_fu_2399_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_0_4_fu_2399_p2.read()[0].to_bool())? pool_buff_val_12_V_2_reg_6671.read(): reg_1926.read());
}

void pool_layer1::thread_pool_buff_val_V_load_fu_2264_p3() {
    pool_buff_val_V_load_fu_2264_p3 = (!tmp_22_1_fu_2259_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_fu_2259_p2.read()[0].to_bool())? pool_buff_val_8_V_l_reg_6647.read(): reg_1910.read());
}

void pool_layer1::thread_storemerge_0_0_1_fu_2026_p3() {
    storemerge_0_0_1_fu_2026_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_95_fu_2019_p3.read());
}

void pool_layer1::thread_storemerge_0_0_2_fu_2061_p3() {
    storemerge_0_0_2_fu_2061_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_199_fu_2054_p3.read());
}

void pool_layer1::thread_storemerge_0_0_3_fu_2096_p3() {
    storemerge_0_0_3_fu_2096_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_200_fu_2089_p3.read());
}

void pool_layer1::thread_storemerge_0_0_4_fu_2131_p3() {
    storemerge_0_0_4_fu_2131_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_201_fu_2124_p3.read());
}

void pool_layer1::thread_storemerge_0_0_5_fu_2166_p3() {
    storemerge_0_0_5_fu_2166_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_202_fu_2159_p3.read());
}

void pool_layer1::thread_storemerge_0_0_6_fu_2187_p3() {
    storemerge_0_0_6_fu_2187_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_203_fu_2179_p3.read());
}

void pool_layer1::thread_storemerge_0_0_7_fu_2208_p3() {
    storemerge_0_0_7_fu_2208_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_204_fu_2200_p3.read());
}

void pool_layer1::thread_storemerge_10_0_1_fu_4826_p3() {
    storemerge_10_0_1_fu_4826_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_168_fu_4819_p3.read());
}

void pool_layer1::thread_storemerge_10_0_2_fu_4861_p3() {
    storemerge_10_0_2_fu_4861_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_169_fu_4854_p3.read());
}

void pool_layer1::thread_storemerge_10_0_3_fu_4896_p3() {
    storemerge_10_0_3_fu_4896_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_170_fu_4889_p3.read());
}

void pool_layer1::thread_storemerge_10_0_4_fu_4931_p3() {
    storemerge_10_0_4_fu_4931_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_171_fu_4924_p3.read());
}

void pool_layer1::thread_storemerge_10_0_5_fu_4966_p3() {
    storemerge_10_0_5_fu_4966_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_172_fu_4959_p3.read());
}

void pool_layer1::thread_storemerge_10_0_6_fu_4987_p3() {
    storemerge_10_0_6_fu_4987_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_173_fu_4979_p3.read());
}

void pool_layer1::thread_storemerge_10_0_7_fu_5008_p3() {
    storemerge_10_0_7_fu_5008_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_174_fu_5000_p3.read());
}

void pool_layer1::thread_storemerge_10_fu_5071_p3() {
    storemerge_10_fu_5071_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_175_fu_5064_p3.read());
}

void pool_layer1::thread_storemerge_11_0_1_fu_5106_p3() {
    storemerge_11_0_1_fu_5106_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_176_fu_5099_p3.read());
}

void pool_layer1::thread_storemerge_11_0_2_fu_5141_p3() {
    storemerge_11_0_2_fu_5141_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_177_fu_5134_p3.read());
}

void pool_layer1::thread_storemerge_11_0_3_fu_5176_p3() {
    storemerge_11_0_3_fu_5176_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_178_fu_5169_p3.read());
}

void pool_layer1::thread_storemerge_11_0_4_fu_5211_p3() {
    storemerge_11_0_4_fu_5211_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_179_fu_5204_p3.read());
}

void pool_layer1::thread_storemerge_11_0_5_fu_5246_p3() {
    storemerge_11_0_5_fu_5246_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_180_fu_5239_p3.read());
}

void pool_layer1::thread_storemerge_11_0_6_fu_5267_p3() {
    storemerge_11_0_6_fu_5267_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_181_fu_5259_p3.read());
}

void pool_layer1::thread_storemerge_11_0_7_fu_5288_p3() {
    storemerge_11_0_7_fu_5288_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_182_fu_5280_p3.read());
}

void pool_layer1::thread_storemerge_11_fu_5351_p3() {
    storemerge_11_fu_5351_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_183_fu_5344_p3.read());
}

void pool_layer1::thread_storemerge_12_0_1_fu_5386_p3() {
    storemerge_12_0_1_fu_5386_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_184_fu_5379_p3.read());
}

void pool_layer1::thread_storemerge_12_0_2_fu_5421_p3() {
    storemerge_12_0_2_fu_5421_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_185_fu_5414_p3.read());
}

void pool_layer1::thread_storemerge_12_0_3_fu_5456_p3() {
    storemerge_12_0_3_fu_5456_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_186_fu_5449_p3.read());
}

void pool_layer1::thread_storemerge_12_0_4_fu_5491_p3() {
    storemerge_12_0_4_fu_5491_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_187_fu_5484_p3.read());
}

void pool_layer1::thread_storemerge_12_0_5_fu_5526_p3() {
    storemerge_12_0_5_fu_5526_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_188_fu_5519_p3.read());
}

void pool_layer1::thread_storemerge_12_0_6_fu_5547_p3() {
    storemerge_12_0_6_fu_5547_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_189_fu_5539_p3.read());
}

void pool_layer1::thread_storemerge_12_0_7_fu_5568_p3() {
    storemerge_12_0_7_fu_5568_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_190_fu_5560_p3.read());
}

void pool_layer1::thread_storemerge_12_fu_5631_p3() {
    storemerge_12_fu_5631_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_191_fu_5624_p3.read());
}

void pool_layer1::thread_storemerge_13_0_1_fu_5666_p3() {
    storemerge_13_0_1_fu_5666_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_192_fu_5659_p3.read());
}

void pool_layer1::thread_storemerge_13_0_2_fu_5701_p3() {
    storemerge_13_0_2_fu_5701_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_193_fu_5694_p3.read());
}

void pool_layer1::thread_storemerge_13_0_3_fu_5736_p3() {
    storemerge_13_0_3_fu_5736_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_194_fu_5729_p3.read());
}

void pool_layer1::thread_storemerge_13_0_4_fu_5771_p3() {
    storemerge_13_0_4_fu_5771_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_195_fu_5764_p3.read());
}

void pool_layer1::thread_storemerge_13_0_5_fu_5806_p3() {
    storemerge_13_0_5_fu_5806_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_196_fu_5799_p3.read());
}

void pool_layer1::thread_storemerge_13_0_6_fu_5827_p3() {
    storemerge_13_0_6_fu_5827_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_197_fu_5819_p3.read());
}

void pool_layer1::thread_storemerge_13_0_7_fu_5848_p3() {
    storemerge_13_0_7_fu_5848_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_198_fu_5840_p3.read());
}

void pool_layer1::thread_storemerge_1_0_1_fu_2306_p3() {
    storemerge_1_0_1_fu_2306_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_96_fu_2299_p3.read());
}

void pool_layer1::thread_storemerge_1_0_2_fu_2341_p3() {
    storemerge_1_0_2_fu_2341_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_97_fu_2334_p3.read());
}

void pool_layer1::thread_storemerge_1_0_3_fu_2376_p3() {
    storemerge_1_0_3_fu_2376_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_98_fu_2369_p3.read());
}

void pool_layer1::thread_storemerge_1_0_4_fu_2411_p3() {
    storemerge_1_0_4_fu_2411_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_99_fu_2404_p3.read());
}

void pool_layer1::thread_storemerge_1_0_5_fu_2446_p3() {
    storemerge_1_0_5_fu_2446_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_100_fu_2439_p3.read());
}

void pool_layer1::thread_storemerge_1_0_6_fu_2467_p3() {
    storemerge_1_0_6_fu_2467_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_101_fu_2459_p3.read());
}

void pool_layer1::thread_storemerge_1_0_7_fu_2488_p3() {
    storemerge_1_0_7_fu_2488_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_102_fu_2480_p3.read());
}

void pool_layer1::thread_storemerge_1_fu_2271_p3() {
    storemerge_1_fu_2271_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_fu_2264_p3.read());
}

void pool_layer1::thread_storemerge_2_0_1_fu_2586_p3() {
    storemerge_2_0_1_fu_2586_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_104_fu_2579_p3.read());
}

void pool_layer1::thread_storemerge_2_0_2_fu_2621_p3() {
    storemerge_2_0_2_fu_2621_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_105_fu_2614_p3.read());
}

void pool_layer1::thread_storemerge_2_0_3_fu_2656_p3() {
    storemerge_2_0_3_fu_2656_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_106_fu_2649_p3.read());
}

void pool_layer1::thread_storemerge_2_0_4_fu_2691_p3() {
    storemerge_2_0_4_fu_2691_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_107_fu_2684_p3.read());
}

void pool_layer1::thread_storemerge_2_0_5_fu_2726_p3() {
    storemerge_2_0_5_fu_2726_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_108_fu_2719_p3.read());
}

void pool_layer1::thread_storemerge_2_0_6_fu_2747_p3() {
    storemerge_2_0_6_fu_2747_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_109_fu_2739_p3.read());
}

void pool_layer1::thread_storemerge_2_0_7_fu_2768_p3() {
    storemerge_2_0_7_fu_2768_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_110_fu_2760_p3.read());
}

void pool_layer1::thread_storemerge_2_fu_2551_p3() {
    storemerge_2_fu_2551_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_103_fu_2544_p3.read());
}

void pool_layer1::thread_storemerge_3_0_1_fu_2866_p3() {
    storemerge_3_0_1_fu_2866_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_112_fu_2859_p3.read());
}

void pool_layer1::thread_storemerge_3_0_2_fu_2901_p3() {
    storemerge_3_0_2_fu_2901_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_113_fu_2894_p3.read());
}

void pool_layer1::thread_storemerge_3_0_3_fu_2936_p3() {
    storemerge_3_0_3_fu_2936_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_114_fu_2929_p3.read());
}

void pool_layer1::thread_storemerge_3_0_4_fu_2971_p3() {
    storemerge_3_0_4_fu_2971_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_115_fu_2964_p3.read());
}

void pool_layer1::thread_storemerge_3_0_5_fu_3006_p3() {
    storemerge_3_0_5_fu_3006_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_116_fu_2999_p3.read());
}

void pool_layer1::thread_storemerge_3_0_6_fu_3027_p3() {
    storemerge_3_0_6_fu_3027_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_117_fu_3019_p3.read());
}

void pool_layer1::thread_storemerge_3_0_7_fu_3048_p3() {
    storemerge_3_0_7_fu_3048_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_118_fu_3040_p3.read());
}

void pool_layer1::thread_storemerge_3_fu_2831_p3() {
    storemerge_3_fu_2831_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_111_fu_2824_p3.read());
}

void pool_layer1::thread_storemerge_4_0_1_fu_3146_p3() {
    storemerge_4_0_1_fu_3146_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_120_fu_3139_p3.read());
}

void pool_layer1::thread_storemerge_4_0_2_fu_3181_p3() {
    storemerge_4_0_2_fu_3181_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_121_fu_3174_p3.read());
}

void pool_layer1::thread_storemerge_4_0_3_fu_3216_p3() {
    storemerge_4_0_3_fu_3216_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_122_fu_3209_p3.read());
}

void pool_layer1::thread_storemerge_4_0_4_fu_3251_p3() {
    storemerge_4_0_4_fu_3251_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_123_fu_3244_p3.read());
}

void pool_layer1::thread_storemerge_4_0_5_fu_3286_p3() {
    storemerge_4_0_5_fu_3286_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_124_fu_3279_p3.read());
}

void pool_layer1::thread_storemerge_4_0_6_fu_3307_p3() {
    storemerge_4_0_6_fu_3307_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_125_fu_3299_p3.read());
}

void pool_layer1::thread_storemerge_4_0_7_fu_3328_p3() {
    storemerge_4_0_7_fu_3328_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_126_fu_3320_p3.read());
}

void pool_layer1::thread_storemerge_4_fu_3111_p3() {
    storemerge_4_fu_3111_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_119_fu_3104_p3.read());
}

void pool_layer1::thread_storemerge_5_0_1_fu_3426_p3() {
    storemerge_5_0_1_fu_3426_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_128_fu_3419_p3.read());
}

void pool_layer1::thread_storemerge_5_0_2_fu_3461_p3() {
    storemerge_5_0_2_fu_3461_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_129_fu_3454_p3.read());
}

void pool_layer1::thread_storemerge_5_0_3_fu_3496_p3() {
    storemerge_5_0_3_fu_3496_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_130_fu_3489_p3.read());
}

void pool_layer1::thread_storemerge_5_0_4_fu_3531_p3() {
    storemerge_5_0_4_fu_3531_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_131_fu_3524_p3.read());
}

void pool_layer1::thread_storemerge_5_0_5_fu_3566_p3() {
    storemerge_5_0_5_fu_3566_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_132_fu_3559_p3.read());
}

void pool_layer1::thread_storemerge_5_0_6_fu_3587_p3() {
    storemerge_5_0_6_fu_3587_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_133_fu_3579_p3.read());
}

void pool_layer1::thread_storemerge_5_0_7_fu_3608_p3() {
    storemerge_5_0_7_fu_3608_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_134_fu_3600_p3.read());
}

void pool_layer1::thread_storemerge_5_fu_3391_p3() {
    storemerge_5_fu_3391_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_127_fu_3384_p3.read());
}

void pool_layer1::thread_storemerge_6_0_1_fu_3706_p3() {
    storemerge_6_0_1_fu_3706_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_136_fu_3699_p3.read());
}

void pool_layer1::thread_storemerge_6_0_2_fu_3741_p3() {
    storemerge_6_0_2_fu_3741_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_137_fu_3734_p3.read());
}

void pool_layer1::thread_storemerge_6_0_3_fu_3776_p3() {
    storemerge_6_0_3_fu_3776_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_138_fu_3769_p3.read());
}

void pool_layer1::thread_storemerge_6_0_4_fu_3811_p3() {
    storemerge_6_0_4_fu_3811_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_139_fu_3804_p3.read());
}

void pool_layer1::thread_storemerge_6_0_5_fu_3846_p3() {
    storemerge_6_0_5_fu_3846_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_140_fu_3839_p3.read());
}

void pool_layer1::thread_storemerge_6_0_6_fu_3867_p3() {
    storemerge_6_0_6_fu_3867_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_141_fu_3859_p3.read());
}

void pool_layer1::thread_storemerge_6_0_7_fu_3888_p3() {
    storemerge_6_0_7_fu_3888_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_142_fu_3880_p3.read());
}

void pool_layer1::thread_storemerge_6_fu_3671_p3() {
    storemerge_6_fu_3671_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_135_fu_3664_p3.read());
}

void pool_layer1::thread_storemerge_7_0_1_fu_3986_p3() {
    storemerge_7_0_1_fu_3986_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_144_fu_3979_p3.read());
}

void pool_layer1::thread_storemerge_7_0_2_fu_4021_p3() {
    storemerge_7_0_2_fu_4021_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_145_fu_4014_p3.read());
}

void pool_layer1::thread_storemerge_7_0_3_fu_4056_p3() {
    storemerge_7_0_3_fu_4056_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_146_fu_4049_p3.read());
}

void pool_layer1::thread_storemerge_7_0_4_fu_4091_p3() {
    storemerge_7_0_4_fu_4091_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_147_fu_4084_p3.read());
}

void pool_layer1::thread_storemerge_7_0_5_fu_4126_p3() {
    storemerge_7_0_5_fu_4126_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_148_fu_4119_p3.read());
}

void pool_layer1::thread_storemerge_7_0_6_fu_4147_p3() {
    storemerge_7_0_6_fu_4147_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_149_fu_4139_p3.read());
}

void pool_layer1::thread_storemerge_7_0_7_fu_4168_p3() {
    storemerge_7_0_7_fu_4168_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_150_fu_4160_p3.read());
}

void pool_layer1::thread_storemerge_7_fu_3951_p3() {
    storemerge_7_fu_3951_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_143_fu_3944_p3.read());
}

void pool_layer1::thread_storemerge_8_0_1_fu_4266_p3() {
    storemerge_8_0_1_fu_4266_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_152_fu_4259_p3.read());
}

void pool_layer1::thread_storemerge_8_0_2_fu_4301_p3() {
    storemerge_8_0_2_fu_4301_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_153_fu_4294_p3.read());
}

void pool_layer1::thread_storemerge_8_0_3_fu_4336_p3() {
    storemerge_8_0_3_fu_4336_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_154_fu_4329_p3.read());
}

void pool_layer1::thread_storemerge_8_0_4_fu_4371_p3() {
    storemerge_8_0_4_fu_4371_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_155_fu_4364_p3.read());
}

void pool_layer1::thread_storemerge_8_0_5_fu_4406_p3() {
    storemerge_8_0_5_fu_4406_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_156_fu_4399_p3.read());
}

void pool_layer1::thread_storemerge_8_0_6_fu_4427_p3() {
    storemerge_8_0_6_fu_4427_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_157_fu_4419_p3.read());
}

void pool_layer1::thread_storemerge_8_0_7_fu_4448_p3() {
    storemerge_8_0_7_fu_4448_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_158_fu_4440_p3.read());
}

void pool_layer1::thread_storemerge_8_fu_4231_p3() {
    storemerge_8_fu_4231_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_151_fu_4224_p3.read());
}

void pool_layer1::thread_storemerge_9_0_1_fu_4546_p3() {
    storemerge_9_0_1_fu_4546_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1914.read(): pool_buff_val_V_load_160_fu_4539_p3.read());
}

void pool_layer1::thread_storemerge_9_0_2_fu_4581_p3() {
    storemerge_9_0_2_fu_4581_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1918.read(): pool_buff_val_V_load_161_fu_4574_p3.read());
}

void pool_layer1::thread_storemerge_9_0_3_fu_4616_p3() {
    storemerge_9_0_3_fu_4616_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1922.read(): pool_buff_val_V_load_162_fu_4609_p3.read());
}

void pool_layer1::thread_storemerge_9_0_4_fu_4651_p3() {
    storemerge_9_0_4_fu_4651_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1926.read(): pool_buff_val_V_load_163_fu_4644_p3.read());
}

void pool_layer1::thread_storemerge_9_0_5_fu_4686_p3() {
    storemerge_9_0_5_fu_4686_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1930.read(): pool_buff_val_V_load_164_fu_4679_p3.read());
}

void pool_layer1::thread_storemerge_9_0_6_fu_4707_p3() {
    storemerge_9_0_6_fu_4707_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1934.read(): pool_buff_val_V_load_165_fu_4699_p3.read());
}

void pool_layer1::thread_storemerge_9_0_7_fu_4728_p3() {
    storemerge_9_0_7_fu_4728_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1938.read(): pool_buff_val_V_load_166_fu_4720_p3.read());
}

void pool_layer1::thread_storemerge_9_fu_4511_p3() {
    storemerge_9_fu_4511_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_159_fu_4504_p3.read());
}

void pool_layer1::thread_storemerge_fu_1990_p3() {
    storemerge_fu_1990_p3 = (!tmp_1_fu_1973_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_1_fu_1973_p2.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_205_fu_1983_p3.read());
}

void pool_layer1::thread_storemerge_s_fu_4791_p3() {
    storemerge_s_fu_4791_p3 = (!tmp_1_reg_6490.read()[0].is_01())? sc_lv<16>(): ((tmp_1_reg_6490.read()[0].to_bool())? reg_1910.read(): pool_buff_val_V_load_167_fu_4784_p3.read());
}

void pool_layer1::thread_tmp_1_fu_1973_p2() {
    tmp_1_fu_1973_p2 = (!l_mid2_reg_6473.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(l_mid2_reg_6473.read() == ap_const_lv2_0);
}

void pool_layer1::thread_tmp_22_0_0_1_fu_2014_p2() {
    tmp_22_0_0_1_fu_2014_p2 = (!pool_buff_val_1_V_l_reg_6605.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_1_V_l_reg_6605.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_0_0_2_fu_2049_p2() {
    tmp_22_0_0_2_fu_2049_p2 = (!pool_buff_val_2_V_l_reg_6611.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_2_V_l_reg_6611.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_0_0_3_fu_2084_p2() {
    tmp_22_0_0_3_fu_2084_p2 = (!pool_buff_val_3_V_l_reg_6617.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_3_V_l_reg_6617.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_0_0_4_fu_2119_p2() {
    tmp_22_0_0_4_fu_2119_p2 = (!pool_buff_val_4_V_l_reg_6623.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_4_V_l_reg_6623.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_0_0_5_fu_2154_p2() {
    tmp_22_0_0_5_fu_2154_p2 = (!pool_buff_val_5_V_l_reg_6629.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_5_V_l_reg_6629.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_0_0_6_fu_2173_p2() {
    tmp_22_0_0_6_fu_2173_p2 = (!pool_buff_val_6_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_6_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_0_0_7_fu_2194_p2() {
    tmp_22_0_0_7_fu_2194_p2 = (!pool_buff_val_7_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_7_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_0_1_1_fu_2033_p2() {
    tmp_22_0_1_1_fu_2033_p2 = (!storemerge_0_0_1_fu_2026_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_0_0_1_fu_2026_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_0_1_2_fu_2068_p2() {
    tmp_22_0_1_2_fu_2068_p2 = (!storemerge_0_0_2_fu_2061_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_0_0_2_fu_2061_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_0_1_3_fu_2103_p2() {
    tmp_22_0_1_3_fu_2103_p2 = (!storemerge_0_0_3_fu_2096_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_0_0_3_fu_2096_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_0_1_4_fu_2138_p2() {
    tmp_22_0_1_4_fu_2138_p2 = (!storemerge_0_0_4_fu_2131_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_0_0_4_fu_2131_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_0_1_5_fu_2215_p2() {
    tmp_22_0_1_5_fu_2215_p2 = (!storemerge_0_0_5_fu_2166_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_0_0_5_fu_2166_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_0_1_6_fu_2231_p2() {
    tmp_22_0_1_6_fu_2231_p2 = (!storemerge_0_0_6_reg_6635.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_0_0_6_reg_6635.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_0_1_7_fu_2245_p2() {
    tmp_22_0_1_7_fu_2245_p2 = (!storemerge_0_0_7_reg_6641.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_0_0_7_reg_6641.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_0_1_fu_1998_p2() {
    tmp_22_0_1_fu_1998_p2 = (!storemerge_fu_1990_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_fu_1990_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_10_0_1_fu_4814_p2() {
    tmp_22_10_0_1_fu_4814_p2 = (!pool_buff_val_81_V_2_reg_7085.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_81_V_2_reg_7085.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_10_0_2_fu_4849_p2() {
    tmp_22_10_0_2_fu_4849_p2 = (!pool_buff_val_82_V_2_reg_7091.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_82_V_2_reg_7091.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_10_0_3_fu_4884_p2() {
    tmp_22_10_0_3_fu_4884_p2 = (!pool_buff_val_83_V_2_reg_7097.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_83_V_2_reg_7097.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_10_0_4_fu_4919_p2() {
    tmp_22_10_0_4_fu_4919_p2 = (!pool_buff_val_84_V_2_reg_7103.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_84_V_2_reg_7103.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_10_0_5_fu_4954_p2() {
    tmp_22_10_0_5_fu_4954_p2 = (!pool_buff_val_85_V_2_reg_7109.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_85_V_2_reg_7109.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_10_0_6_fu_4973_p2() {
    tmp_22_10_0_6_fu_4973_p2 = (!pool_buff_val_86_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_86_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_10_0_7_fu_4994_p2() {
    tmp_22_10_0_7_fu_4994_p2 = (!pool_buff_val_87_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_87_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_10_1_1_fu_4833_p2() {
    tmp_22_10_1_1_fu_4833_p2 = (!storemerge_10_0_1_fu_4826_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_10_0_1_fu_4826_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_10_1_2_fu_4868_p2() {
    tmp_22_10_1_2_fu_4868_p2 = (!storemerge_10_0_2_fu_4861_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_10_0_2_fu_4861_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_10_1_3_fu_4903_p2() {
    tmp_22_10_1_3_fu_4903_p2 = (!storemerge_10_0_3_fu_4896_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_10_0_3_fu_4896_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_10_1_4_fu_4938_p2() {
    tmp_22_10_1_4_fu_4938_p2 = (!storemerge_10_0_4_fu_4931_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_10_0_4_fu_4931_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_10_1_5_fu_5015_p2() {
    tmp_22_10_1_5_fu_5015_p2 = (!storemerge_10_0_5_fu_4966_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_10_0_5_fu_4966_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_10_1_6_fu_5031_p2() {
    tmp_22_10_1_6_fu_5031_p2 = (!storemerge_10_0_6_reg_7115.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_10_0_6_reg_7115.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_10_1_7_fu_5045_p2() {
    tmp_22_10_1_7_fu_5045_p2 = (!storemerge_10_0_7_reg_7121.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_10_0_7_reg_7121.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_10_1_fu_4798_p2() {
    tmp_22_10_1_fu_4798_p2 = (!storemerge_s_fu_4791_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_s_fu_4791_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_10_fu_5059_p2() {
    tmp_22_10_fu_5059_p2 = (!pool_buff_val_88_V_2_reg_7127.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_88_V_2_reg_7127.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_11_0_1_fu_5094_p2() {
    tmp_22_11_0_1_fu_5094_p2 = (!pool_buff_val_89_V_2_reg_7133.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_89_V_2_reg_7133.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_11_0_2_fu_5129_p2() {
    tmp_22_11_0_2_fu_5129_p2 = (!pool_buff_val_90_V_2_reg_7139.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_90_V_2_reg_7139.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_11_0_3_fu_5164_p2() {
    tmp_22_11_0_3_fu_5164_p2 = (!pool_buff_val_91_V_2_reg_7145.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_91_V_2_reg_7145.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_11_0_4_fu_5199_p2() {
    tmp_22_11_0_4_fu_5199_p2 = (!pool_buff_val_92_V_2_reg_7151.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_92_V_2_reg_7151.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_11_0_5_fu_5234_p2() {
    tmp_22_11_0_5_fu_5234_p2 = (!pool_buff_val_93_V_2_reg_7157.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_93_V_2_reg_7157.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_11_0_6_fu_5253_p2() {
    tmp_22_11_0_6_fu_5253_p2 = (!pool_buff_val_94_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_94_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_11_0_7_fu_5274_p2() {
    tmp_22_11_0_7_fu_5274_p2 = (!pool_buff_val_95_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_95_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_11_1_1_fu_5113_p2() {
    tmp_22_11_1_1_fu_5113_p2 = (!storemerge_11_0_1_fu_5106_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_11_0_1_fu_5106_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_11_1_2_fu_5148_p2() {
    tmp_22_11_1_2_fu_5148_p2 = (!storemerge_11_0_2_fu_5141_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_11_0_2_fu_5141_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_11_1_3_fu_5183_p2() {
    tmp_22_11_1_3_fu_5183_p2 = (!storemerge_11_0_3_fu_5176_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_11_0_3_fu_5176_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_11_1_4_fu_5218_p2() {
    tmp_22_11_1_4_fu_5218_p2 = (!storemerge_11_0_4_fu_5211_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_11_0_4_fu_5211_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_11_1_5_fu_5295_p2() {
    tmp_22_11_1_5_fu_5295_p2 = (!storemerge_11_0_5_fu_5246_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_11_0_5_fu_5246_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_11_1_6_fu_5311_p2() {
    tmp_22_11_1_6_fu_5311_p2 = (!storemerge_11_0_6_reg_7163.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_11_0_6_reg_7163.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_11_1_7_fu_5325_p2() {
    tmp_22_11_1_7_fu_5325_p2 = (!storemerge_11_0_7_reg_7169.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_11_0_7_reg_7169.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_11_1_fu_5078_p2() {
    tmp_22_11_1_fu_5078_p2 = (!storemerge_10_fu_5071_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_10_fu_5071_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_11_fu_5339_p2() {
    tmp_22_11_fu_5339_p2 = (!pool_buff_val_96_V_1_reg_7175.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_96_V_1_reg_7175.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_12_0_1_fu_5374_p2() {
    tmp_22_12_0_1_fu_5374_p2 = (!pool_buff_val_97_V_1_reg_7181.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_97_V_1_reg_7181.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_12_0_2_fu_5409_p2() {
    tmp_22_12_0_2_fu_5409_p2 = (!pool_buff_val_98_V_1_reg_7187.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_98_V_1_reg_7187.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_12_0_3_fu_5444_p2() {
    tmp_22_12_0_3_fu_5444_p2 = (!pool_buff_val_99_V_1_reg_7193.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_99_V_1_reg_7193.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_12_0_4_fu_5479_p2() {
    tmp_22_12_0_4_fu_5479_p2 = (!pool_buff_val_100_V_2_reg_7199.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_100_V_2_reg_7199.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_12_0_5_fu_5514_p2() {
    tmp_22_12_0_5_fu_5514_p2 = (!pool_buff_val_101_V_2_reg_7205.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_101_V_2_reg_7205.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_12_0_6_fu_5533_p2() {
    tmp_22_12_0_6_fu_5533_p2 = (!pool_buff_val_102_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_102_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_12_0_7_fu_5554_p2() {
    tmp_22_12_0_7_fu_5554_p2 = (!pool_buff_val_103_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_103_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_12_1_1_fu_5393_p2() {
    tmp_22_12_1_1_fu_5393_p2 = (!storemerge_12_0_1_fu_5386_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_12_0_1_fu_5386_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_12_1_2_fu_5428_p2() {
    tmp_22_12_1_2_fu_5428_p2 = (!storemerge_12_0_2_fu_5421_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_12_0_2_fu_5421_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_12_1_3_fu_5463_p2() {
    tmp_22_12_1_3_fu_5463_p2 = (!storemerge_12_0_3_fu_5456_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_12_0_3_fu_5456_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_12_1_4_fu_5498_p2() {
    tmp_22_12_1_4_fu_5498_p2 = (!storemerge_12_0_4_fu_5491_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_12_0_4_fu_5491_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_12_1_5_fu_5575_p2() {
    tmp_22_12_1_5_fu_5575_p2 = (!storemerge_12_0_5_fu_5526_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_12_0_5_fu_5526_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_12_1_6_fu_5591_p2() {
    tmp_22_12_1_6_fu_5591_p2 = (!storemerge_12_0_6_reg_7211.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_12_0_6_reg_7211.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_12_1_7_fu_5605_p2() {
    tmp_22_12_1_7_fu_5605_p2 = (!storemerge_12_0_7_reg_7217.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_12_0_7_reg_7217.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_12_1_fu_5358_p2() {
    tmp_22_12_1_fu_5358_p2 = (!storemerge_11_fu_5351_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_11_fu_5351_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_12_fu_5619_p2() {
    tmp_22_12_fu_5619_p2 = (!pool_buff_val_104_V_2_reg_7223.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_104_V_2_reg_7223.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_13_0_1_fu_5654_p2() {
    tmp_22_13_0_1_fu_5654_p2 = (!pool_buff_val_105_V_2_reg_7229.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_105_V_2_reg_7229.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_13_0_2_fu_5689_p2() {
    tmp_22_13_0_2_fu_5689_p2 = (!pool_buff_val_106_V_2_reg_7235.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_106_V_2_reg_7235.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_13_0_3_fu_5724_p2() {
    tmp_22_13_0_3_fu_5724_p2 = (!pool_buff_val_107_V_2_reg_7241.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_107_V_2_reg_7241.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_13_0_4_fu_5759_p2() {
    tmp_22_13_0_4_fu_5759_p2 = (!pool_buff_val_108_V_2_reg_7247.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_108_V_2_reg_7247.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_13_0_5_fu_5794_p2() {
    tmp_22_13_0_5_fu_5794_p2 = (!pool_buff_val_109_V_2_reg_7253.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_109_V_2_reg_7253.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_13_0_6_fu_5813_p2() {
    tmp_22_13_0_6_fu_5813_p2 = (!pool_buff_val_110_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_110_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_13_0_7_fu_5834_p2() {
    tmp_22_13_0_7_fu_5834_p2 = (!pool_buff_val_111_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_111_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_13_1_1_fu_5673_p2() {
    tmp_22_13_1_1_fu_5673_p2 = (!storemerge_13_0_1_fu_5666_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_13_0_1_fu_5666_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_13_1_2_fu_5708_p2() {
    tmp_22_13_1_2_fu_5708_p2 = (!storemerge_13_0_2_fu_5701_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_13_0_2_fu_5701_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_13_1_3_fu_5743_p2() {
    tmp_22_13_1_3_fu_5743_p2 = (!storemerge_13_0_3_fu_5736_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_13_0_3_fu_5736_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_13_1_4_fu_5778_p2() {
    tmp_22_13_1_4_fu_5778_p2 = (!storemerge_13_0_4_fu_5771_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_13_0_4_fu_5771_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_13_1_5_fu_5855_p2() {
    tmp_22_13_1_5_fu_5855_p2 = (!storemerge_13_0_5_fu_5806_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_13_0_5_fu_5806_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_13_1_6_fu_5871_p2() {
    tmp_22_13_1_6_fu_5871_p2 = (!storemerge_13_0_6_reg_7259.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_13_0_6_reg_7259.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_13_1_7_fu_5885_p2() {
    tmp_22_13_1_7_fu_5885_p2 = (!storemerge_13_0_7_reg_7265.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_13_0_7_reg_7265.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_13_1_fu_5638_p2() {
    tmp_22_13_1_fu_5638_p2 = (!storemerge_12_fu_5631_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_12_fu_5631_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_1_0_1_fu_2294_p2() {
    tmp_22_1_0_1_fu_2294_p2 = (!pool_buff_val_9_V_l_reg_6653.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_9_V_l_reg_6653.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_1_0_2_fu_2329_p2() {
    tmp_22_1_0_2_fu_2329_p2 = (!pool_buff_val_10_V_2_reg_6659.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_10_V_2_reg_6659.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_1_0_3_fu_2364_p2() {
    tmp_22_1_0_3_fu_2364_p2 = (!pool_buff_val_11_V_2_reg_6665.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_11_V_2_reg_6665.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_1_0_4_fu_2399_p2() {
    tmp_22_1_0_4_fu_2399_p2 = (!pool_buff_val_12_V_2_reg_6671.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_12_V_2_reg_6671.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_1_0_5_fu_2434_p2() {
    tmp_22_1_0_5_fu_2434_p2 = (!pool_buff_val_13_V_2_reg_6677.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_13_V_2_reg_6677.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_1_0_6_fu_2453_p2() {
    tmp_22_1_0_6_fu_2453_p2 = (!pool_buff_val_14_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_14_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_1_0_7_fu_2474_p2() {
    tmp_22_1_0_7_fu_2474_p2 = (!pool_buff_val_15_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_15_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_1_1_1_fu_2313_p2() {
    tmp_22_1_1_1_fu_2313_p2 = (!storemerge_1_0_1_fu_2306_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_1_0_1_fu_2306_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_1_1_2_fu_2348_p2() {
    tmp_22_1_1_2_fu_2348_p2 = (!storemerge_1_0_2_fu_2341_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_1_0_2_fu_2341_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_1_1_3_fu_2383_p2() {
    tmp_22_1_1_3_fu_2383_p2 = (!storemerge_1_0_3_fu_2376_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_1_0_3_fu_2376_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_1_1_4_fu_2418_p2() {
    tmp_22_1_1_4_fu_2418_p2 = (!storemerge_1_0_4_fu_2411_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_1_0_4_fu_2411_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_1_1_5_fu_2495_p2() {
    tmp_22_1_1_5_fu_2495_p2 = (!storemerge_1_0_5_fu_2446_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_1_0_5_fu_2446_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_1_1_6_fu_2511_p2() {
    tmp_22_1_1_6_fu_2511_p2 = (!storemerge_1_0_6_reg_6683.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_1_0_6_reg_6683.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_1_1_7_fu_2525_p2() {
    tmp_22_1_1_7_fu_2525_p2 = (!storemerge_1_0_7_reg_6689.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_1_0_7_reg_6689.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_1_1_fu_2278_p2() {
    tmp_22_1_1_fu_2278_p2 = (!storemerge_1_fu_2271_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_1_fu_2271_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_1_fu_2259_p2() {
    tmp_22_1_fu_2259_p2 = (!pool_buff_val_8_V_l_reg_6647.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_8_V_l_reg_6647.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_2_0_1_fu_2574_p2() {
    tmp_22_2_0_1_fu_2574_p2 = (!pool_buff_val_17_V_2_reg_6701.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_17_V_2_reg_6701.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_2_0_2_fu_2609_p2() {
    tmp_22_2_0_2_fu_2609_p2 = (!pool_buff_val_18_V_2_reg_6707.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_18_V_2_reg_6707.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_2_0_3_fu_2644_p2() {
    tmp_22_2_0_3_fu_2644_p2 = (!pool_buff_val_19_V_2_reg_6713.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_19_V_2_reg_6713.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_2_0_4_fu_2679_p2() {
    tmp_22_2_0_4_fu_2679_p2 = (!pool_buff_val_20_V_2_reg_6719.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_20_V_2_reg_6719.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_2_0_5_fu_2714_p2() {
    tmp_22_2_0_5_fu_2714_p2 = (!pool_buff_val_21_V_2_reg_6725.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_21_V_2_reg_6725.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_2_0_6_fu_2733_p2() {
    tmp_22_2_0_6_fu_2733_p2 = (!pool_buff_val_22_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_22_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_2_0_7_fu_2754_p2() {
    tmp_22_2_0_7_fu_2754_p2 = (!pool_buff_val_23_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_23_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_2_1_1_fu_2593_p2() {
    tmp_22_2_1_1_fu_2593_p2 = (!storemerge_2_0_1_fu_2586_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_2_0_1_fu_2586_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_2_1_2_fu_2628_p2() {
    tmp_22_2_1_2_fu_2628_p2 = (!storemerge_2_0_2_fu_2621_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_2_0_2_fu_2621_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_2_1_3_fu_2663_p2() {
    tmp_22_2_1_3_fu_2663_p2 = (!storemerge_2_0_3_fu_2656_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_2_0_3_fu_2656_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_2_1_4_fu_2698_p2() {
    tmp_22_2_1_4_fu_2698_p2 = (!storemerge_2_0_4_fu_2691_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_2_0_4_fu_2691_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_2_1_5_fu_2775_p2() {
    tmp_22_2_1_5_fu_2775_p2 = (!storemerge_2_0_5_fu_2726_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_2_0_5_fu_2726_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_2_1_6_fu_2791_p2() {
    tmp_22_2_1_6_fu_2791_p2 = (!storemerge_2_0_6_reg_6731.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_2_0_6_reg_6731.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_2_1_7_fu_2805_p2() {
    tmp_22_2_1_7_fu_2805_p2 = (!storemerge_2_0_7_reg_6737.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_2_0_7_reg_6737.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_2_1_fu_2558_p2() {
    tmp_22_2_1_fu_2558_p2 = (!storemerge_2_fu_2551_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_2_fu_2551_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_2_fu_2539_p2() {
    tmp_22_2_fu_2539_p2 = (!pool_buff_val_16_V_2_reg_6695.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_16_V_2_reg_6695.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_3_0_1_fu_2854_p2() {
    tmp_22_3_0_1_fu_2854_p2 = (!pool_buff_val_25_V_2_reg_6749.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_25_V_2_reg_6749.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_3_0_2_fu_2889_p2() {
    tmp_22_3_0_2_fu_2889_p2 = (!pool_buff_val_26_V_2_reg_6755.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_26_V_2_reg_6755.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_3_0_3_fu_2924_p2() {
    tmp_22_3_0_3_fu_2924_p2 = (!pool_buff_val_27_V_2_reg_6761.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_27_V_2_reg_6761.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_3_0_4_fu_2959_p2() {
    tmp_22_3_0_4_fu_2959_p2 = (!pool_buff_val_28_V_2_reg_6767.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_28_V_2_reg_6767.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_3_0_5_fu_2994_p2() {
    tmp_22_3_0_5_fu_2994_p2 = (!pool_buff_val_29_V_2_reg_6773.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_29_V_2_reg_6773.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_3_0_6_fu_3013_p2() {
    tmp_22_3_0_6_fu_3013_p2 = (!pool_buff_val_30_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_30_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_3_0_7_fu_3034_p2() {
    tmp_22_3_0_7_fu_3034_p2 = (!pool_buff_val_31_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_31_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_3_1_1_fu_2873_p2() {
    tmp_22_3_1_1_fu_2873_p2 = (!storemerge_3_0_1_fu_2866_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_3_0_1_fu_2866_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_3_1_2_fu_2908_p2() {
    tmp_22_3_1_2_fu_2908_p2 = (!storemerge_3_0_2_fu_2901_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_3_0_2_fu_2901_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_3_1_3_fu_2943_p2() {
    tmp_22_3_1_3_fu_2943_p2 = (!storemerge_3_0_3_fu_2936_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_3_0_3_fu_2936_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_3_1_4_fu_2978_p2() {
    tmp_22_3_1_4_fu_2978_p2 = (!storemerge_3_0_4_fu_2971_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_3_0_4_fu_2971_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_3_1_5_fu_3055_p2() {
    tmp_22_3_1_5_fu_3055_p2 = (!storemerge_3_0_5_fu_3006_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_3_0_5_fu_3006_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_3_1_6_fu_3071_p2() {
    tmp_22_3_1_6_fu_3071_p2 = (!storemerge_3_0_6_reg_6779.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_3_0_6_reg_6779.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_3_1_7_fu_3085_p2() {
    tmp_22_3_1_7_fu_3085_p2 = (!storemerge_3_0_7_reg_6785.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_3_0_7_reg_6785.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_3_1_fu_2838_p2() {
    tmp_22_3_1_fu_2838_p2 = (!storemerge_3_fu_2831_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_3_fu_2831_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_3_fu_2819_p2() {
    tmp_22_3_fu_2819_p2 = (!pool_buff_val_24_V_2_reg_6743.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_24_V_2_reg_6743.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_4_0_1_fu_3134_p2() {
    tmp_22_4_0_1_fu_3134_p2 = (!pool_buff_val_33_V_2_reg_6797.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_33_V_2_reg_6797.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_4_0_2_fu_3169_p2() {
    tmp_22_4_0_2_fu_3169_p2 = (!pool_buff_val_34_V_2_reg_6803.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_34_V_2_reg_6803.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_4_0_3_fu_3204_p2() {
    tmp_22_4_0_3_fu_3204_p2 = (!pool_buff_val_35_V_2_reg_6809.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_35_V_2_reg_6809.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_4_0_4_fu_3239_p2() {
    tmp_22_4_0_4_fu_3239_p2 = (!pool_buff_val_36_V_2_reg_6815.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_36_V_2_reg_6815.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_4_0_5_fu_3274_p2() {
    tmp_22_4_0_5_fu_3274_p2 = (!pool_buff_val_37_V_2_reg_6821.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_37_V_2_reg_6821.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_4_0_6_fu_3293_p2() {
    tmp_22_4_0_6_fu_3293_p2 = (!pool_buff_val_38_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_38_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_4_0_7_fu_3314_p2() {
    tmp_22_4_0_7_fu_3314_p2 = (!pool_buff_val_39_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_39_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_4_1_1_fu_3153_p2() {
    tmp_22_4_1_1_fu_3153_p2 = (!storemerge_4_0_1_fu_3146_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_4_0_1_fu_3146_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_4_1_2_fu_3188_p2() {
    tmp_22_4_1_2_fu_3188_p2 = (!storemerge_4_0_2_fu_3181_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_4_0_2_fu_3181_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_4_1_3_fu_3223_p2() {
    tmp_22_4_1_3_fu_3223_p2 = (!storemerge_4_0_3_fu_3216_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_4_0_3_fu_3216_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_4_1_4_fu_3258_p2() {
    tmp_22_4_1_4_fu_3258_p2 = (!storemerge_4_0_4_fu_3251_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_4_0_4_fu_3251_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_4_1_5_fu_3335_p2() {
    tmp_22_4_1_5_fu_3335_p2 = (!storemerge_4_0_5_fu_3286_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_4_0_5_fu_3286_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_4_1_6_fu_3351_p2() {
    tmp_22_4_1_6_fu_3351_p2 = (!storemerge_4_0_6_reg_6827.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_4_0_6_reg_6827.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_4_1_7_fu_3365_p2() {
    tmp_22_4_1_7_fu_3365_p2 = (!storemerge_4_0_7_reg_6833.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_4_0_7_reg_6833.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_4_1_fu_3118_p2() {
    tmp_22_4_1_fu_3118_p2 = (!storemerge_4_fu_3111_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_4_fu_3111_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_4_fu_3099_p2() {
    tmp_22_4_fu_3099_p2 = (!pool_buff_val_32_V_2_reg_6791.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_32_V_2_reg_6791.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_5_0_1_fu_3414_p2() {
    tmp_22_5_0_1_fu_3414_p2 = (!pool_buff_val_41_V_2_reg_6845.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_41_V_2_reg_6845.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_5_0_2_fu_3449_p2() {
    tmp_22_5_0_2_fu_3449_p2 = (!pool_buff_val_42_V_2_reg_6851.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_42_V_2_reg_6851.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_5_0_3_fu_3484_p2() {
    tmp_22_5_0_3_fu_3484_p2 = (!pool_buff_val_43_V_2_reg_6857.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_43_V_2_reg_6857.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_5_0_4_fu_3519_p2() {
    tmp_22_5_0_4_fu_3519_p2 = (!pool_buff_val_44_V_2_reg_6863.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_44_V_2_reg_6863.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_5_0_5_fu_3554_p2() {
    tmp_22_5_0_5_fu_3554_p2 = (!pool_buff_val_45_V_2_reg_6869.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_45_V_2_reg_6869.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_5_0_6_fu_3573_p2() {
    tmp_22_5_0_6_fu_3573_p2 = (!pool_buff_val_46_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_46_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_5_0_7_fu_3594_p2() {
    tmp_22_5_0_7_fu_3594_p2 = (!pool_buff_val_47_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_47_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_5_1_1_fu_3433_p2() {
    tmp_22_5_1_1_fu_3433_p2 = (!storemerge_5_0_1_fu_3426_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_5_0_1_fu_3426_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_5_1_2_fu_3468_p2() {
    tmp_22_5_1_2_fu_3468_p2 = (!storemerge_5_0_2_fu_3461_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_5_0_2_fu_3461_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_5_1_3_fu_3503_p2() {
    tmp_22_5_1_3_fu_3503_p2 = (!storemerge_5_0_3_fu_3496_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_5_0_3_fu_3496_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_5_1_4_fu_3538_p2() {
    tmp_22_5_1_4_fu_3538_p2 = (!storemerge_5_0_4_fu_3531_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_5_0_4_fu_3531_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_5_1_5_fu_3615_p2() {
    tmp_22_5_1_5_fu_3615_p2 = (!storemerge_5_0_5_fu_3566_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_5_0_5_fu_3566_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_5_1_6_fu_3631_p2() {
    tmp_22_5_1_6_fu_3631_p2 = (!storemerge_5_0_6_reg_6875.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_5_0_6_reg_6875.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_5_1_7_fu_3645_p2() {
    tmp_22_5_1_7_fu_3645_p2 = (!storemerge_5_0_7_reg_6881.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_5_0_7_reg_6881.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_5_1_fu_3398_p2() {
    tmp_22_5_1_fu_3398_p2 = (!storemerge_5_fu_3391_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_5_fu_3391_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_5_fu_3379_p2() {
    tmp_22_5_fu_3379_p2 = (!pool_buff_val_40_V_2_reg_6839.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_40_V_2_reg_6839.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_6_0_1_fu_3694_p2() {
    tmp_22_6_0_1_fu_3694_p2 = (!pool_buff_val_49_V_2_reg_6893.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_49_V_2_reg_6893.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_6_0_2_fu_3729_p2() {
    tmp_22_6_0_2_fu_3729_p2 = (!pool_buff_val_50_V_2_reg_6899.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_50_V_2_reg_6899.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_6_0_3_fu_3764_p2() {
    tmp_22_6_0_3_fu_3764_p2 = (!pool_buff_val_51_V_2_reg_6905.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_51_V_2_reg_6905.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_6_0_4_fu_3799_p2() {
    tmp_22_6_0_4_fu_3799_p2 = (!pool_buff_val_52_V_2_reg_6911.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_52_V_2_reg_6911.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_6_0_5_fu_3834_p2() {
    tmp_22_6_0_5_fu_3834_p2 = (!pool_buff_val_53_V_2_reg_6917.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_53_V_2_reg_6917.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_6_0_6_fu_3853_p2() {
    tmp_22_6_0_6_fu_3853_p2 = (!pool_buff_val_54_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_54_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_6_0_7_fu_3874_p2() {
    tmp_22_6_0_7_fu_3874_p2 = (!pool_buff_val_55_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_55_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_6_1_1_fu_3713_p2() {
    tmp_22_6_1_1_fu_3713_p2 = (!storemerge_6_0_1_fu_3706_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_6_0_1_fu_3706_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_6_1_2_fu_3748_p2() {
    tmp_22_6_1_2_fu_3748_p2 = (!storemerge_6_0_2_fu_3741_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_6_0_2_fu_3741_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_6_1_3_fu_3783_p2() {
    tmp_22_6_1_3_fu_3783_p2 = (!storemerge_6_0_3_fu_3776_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_6_0_3_fu_3776_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_6_1_4_fu_3818_p2() {
    tmp_22_6_1_4_fu_3818_p2 = (!storemerge_6_0_4_fu_3811_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_6_0_4_fu_3811_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_6_1_5_fu_3895_p2() {
    tmp_22_6_1_5_fu_3895_p2 = (!storemerge_6_0_5_fu_3846_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_6_0_5_fu_3846_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_6_1_6_fu_3911_p2() {
    tmp_22_6_1_6_fu_3911_p2 = (!storemerge_6_0_6_reg_6923.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_6_0_6_reg_6923.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_6_1_7_fu_3925_p2() {
    tmp_22_6_1_7_fu_3925_p2 = (!storemerge_6_0_7_reg_6929.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_6_0_7_reg_6929.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_6_1_fu_3678_p2() {
    tmp_22_6_1_fu_3678_p2 = (!storemerge_6_fu_3671_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_6_fu_3671_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_6_fu_3659_p2() {
    tmp_22_6_fu_3659_p2 = (!pool_buff_val_48_V_2_reg_6887.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_48_V_2_reg_6887.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_7_0_1_fu_3974_p2() {
    tmp_22_7_0_1_fu_3974_p2 = (!pool_buff_val_57_V_2_reg_6941.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_57_V_2_reg_6941.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_7_0_2_fu_4009_p2() {
    tmp_22_7_0_2_fu_4009_p2 = (!pool_buff_val_58_V_2_reg_6947.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_58_V_2_reg_6947.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_7_0_3_fu_4044_p2() {
    tmp_22_7_0_3_fu_4044_p2 = (!pool_buff_val_59_V_2_reg_6953.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_59_V_2_reg_6953.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_7_0_4_fu_4079_p2() {
    tmp_22_7_0_4_fu_4079_p2 = (!pool_buff_val_60_V_2_reg_6959.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_60_V_2_reg_6959.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_7_0_5_fu_4114_p2() {
    tmp_22_7_0_5_fu_4114_p2 = (!pool_buff_val_61_V_2_reg_6965.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_61_V_2_reg_6965.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_7_0_6_fu_4133_p2() {
    tmp_22_7_0_6_fu_4133_p2 = (!pool_buff_val_62_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_62_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_7_0_7_fu_4154_p2() {
    tmp_22_7_0_7_fu_4154_p2 = (!pool_buff_val_63_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_63_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_7_1_1_fu_3993_p2() {
    tmp_22_7_1_1_fu_3993_p2 = (!storemerge_7_0_1_fu_3986_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_7_0_1_fu_3986_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_7_1_2_fu_4028_p2() {
    tmp_22_7_1_2_fu_4028_p2 = (!storemerge_7_0_2_fu_4021_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_7_0_2_fu_4021_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_7_1_3_fu_4063_p2() {
    tmp_22_7_1_3_fu_4063_p2 = (!storemerge_7_0_3_fu_4056_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_7_0_3_fu_4056_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_7_1_4_fu_4098_p2() {
    tmp_22_7_1_4_fu_4098_p2 = (!storemerge_7_0_4_fu_4091_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_7_0_4_fu_4091_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_7_1_5_fu_4175_p2() {
    tmp_22_7_1_5_fu_4175_p2 = (!storemerge_7_0_5_fu_4126_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_7_0_5_fu_4126_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_7_1_6_fu_4191_p2() {
    tmp_22_7_1_6_fu_4191_p2 = (!storemerge_7_0_6_reg_6971.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_7_0_6_reg_6971.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_7_1_7_fu_4205_p2() {
    tmp_22_7_1_7_fu_4205_p2 = (!storemerge_7_0_7_reg_6977.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_7_0_7_reg_6977.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_7_1_fu_3958_p2() {
    tmp_22_7_1_fu_3958_p2 = (!storemerge_7_fu_3951_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_7_fu_3951_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_7_fu_3939_p2() {
    tmp_22_7_fu_3939_p2 = (!pool_buff_val_56_V_2_reg_6935.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_56_V_2_reg_6935.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_8_0_1_fu_4254_p2() {
    tmp_22_8_0_1_fu_4254_p2 = (!pool_buff_val_65_V_2_reg_6989.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_65_V_2_reg_6989.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_8_0_2_fu_4289_p2() {
    tmp_22_8_0_2_fu_4289_p2 = (!pool_buff_val_66_V_2_reg_6995.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_66_V_2_reg_6995.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_8_0_3_fu_4324_p2() {
    tmp_22_8_0_3_fu_4324_p2 = (!pool_buff_val_67_V_2_reg_7001.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_67_V_2_reg_7001.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_8_0_4_fu_4359_p2() {
    tmp_22_8_0_4_fu_4359_p2 = (!pool_buff_val_68_V_2_reg_7007.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_68_V_2_reg_7007.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_8_0_5_fu_4394_p2() {
    tmp_22_8_0_5_fu_4394_p2 = (!pool_buff_val_69_V_2_reg_7013.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_69_V_2_reg_7013.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_8_0_6_fu_4413_p2() {
    tmp_22_8_0_6_fu_4413_p2 = (!pool_buff_val_70_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_70_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_8_0_7_fu_4434_p2() {
    tmp_22_8_0_7_fu_4434_p2 = (!pool_buff_val_71_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_71_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_8_1_1_fu_4273_p2() {
    tmp_22_8_1_1_fu_4273_p2 = (!storemerge_8_0_1_fu_4266_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_8_0_1_fu_4266_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_8_1_2_fu_4308_p2() {
    tmp_22_8_1_2_fu_4308_p2 = (!storemerge_8_0_2_fu_4301_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_8_0_2_fu_4301_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_8_1_3_fu_4343_p2() {
    tmp_22_8_1_3_fu_4343_p2 = (!storemerge_8_0_3_fu_4336_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_8_0_3_fu_4336_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_8_1_4_fu_4378_p2() {
    tmp_22_8_1_4_fu_4378_p2 = (!storemerge_8_0_4_fu_4371_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_8_0_4_fu_4371_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_8_1_5_fu_4455_p2() {
    tmp_22_8_1_5_fu_4455_p2 = (!storemerge_8_0_5_fu_4406_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_8_0_5_fu_4406_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_8_1_6_fu_4471_p2() {
    tmp_22_8_1_6_fu_4471_p2 = (!storemerge_8_0_6_reg_7019.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_8_0_6_reg_7019.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_8_1_7_fu_4485_p2() {
    tmp_22_8_1_7_fu_4485_p2 = (!storemerge_8_0_7_reg_7025.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_8_0_7_reg_7025.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_8_1_fu_4238_p2() {
    tmp_22_8_1_fu_4238_p2 = (!storemerge_8_fu_4231_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_8_fu_4231_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_8_fu_4219_p2() {
    tmp_22_8_fu_4219_p2 = (!pool_buff_val_64_V_2_reg_6983.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_64_V_2_reg_6983.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_9_0_1_fu_4534_p2() {
    tmp_22_9_0_1_fu_4534_p2 = (!pool_buff_val_73_V_2_reg_7037.read().is_01() || !reg_1914.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_73_V_2_reg_7037.read()) > sc_bigint<16>(reg_1914.read()));
}

void pool_layer1::thread_tmp_22_9_0_2_fu_4569_p2() {
    tmp_22_9_0_2_fu_4569_p2 = (!pool_buff_val_74_V_2_reg_7043.read().is_01() || !reg_1918.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_74_V_2_reg_7043.read()) > sc_bigint<16>(reg_1918.read()));
}

void pool_layer1::thread_tmp_22_9_0_3_fu_4604_p2() {
    tmp_22_9_0_3_fu_4604_p2 = (!pool_buff_val_75_V_2_reg_7049.read().is_01() || !reg_1922.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_75_V_2_reg_7049.read()) > sc_bigint<16>(reg_1922.read()));
}

void pool_layer1::thread_tmp_22_9_0_4_fu_4639_p2() {
    tmp_22_9_0_4_fu_4639_p2 = (!pool_buff_val_76_V_2_reg_7055.read().is_01() || !reg_1926.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_76_V_2_reg_7055.read()) > sc_bigint<16>(reg_1926.read()));
}

void pool_layer1::thread_tmp_22_9_0_5_fu_4674_p2() {
    tmp_22_9_0_5_fu_4674_p2 = (!pool_buff_val_77_V_2_reg_7061.read().is_01() || !reg_1930.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_77_V_2_reg_7061.read()) > sc_bigint<16>(reg_1930.read()));
}

void pool_layer1::thread_tmp_22_9_0_6_fu_4693_p2() {
    tmp_22_9_0_6_fu_4693_p2 = (!pool_buff_val_78_V_q0.read().is_01() || !reg_1934.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_78_V_q0.read()) > sc_bigint<16>(reg_1934.read()));
}

void pool_layer1::thread_tmp_22_9_0_7_fu_4714_p2() {
    tmp_22_9_0_7_fu_4714_p2 = (!pool_buff_val_79_V_q0.read().is_01() || !reg_1938.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_79_V_q0.read()) > sc_bigint<16>(reg_1938.read()));
}

void pool_layer1::thread_tmp_22_9_1_1_fu_4553_p2() {
    tmp_22_9_1_1_fu_4553_p2 = (!storemerge_9_0_1_fu_4546_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_9_0_1_fu_4546_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_9_1_2_fu_4588_p2() {
    tmp_22_9_1_2_fu_4588_p2 = (!storemerge_9_0_2_fu_4581_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_9_0_2_fu_4581_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_9_1_3_fu_4623_p2() {
    tmp_22_9_1_3_fu_4623_p2 = (!storemerge_9_0_3_fu_4616_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_9_0_3_fu_4616_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_9_1_4_fu_4658_p2() {
    tmp_22_9_1_4_fu_4658_p2 = (!storemerge_9_0_4_fu_4651_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_9_0_4_fu_4651_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_9_1_5_fu_4735_p2() {
    tmp_22_9_1_5_fu_4735_p2 = (!storemerge_9_0_5_fu_4686_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_9_0_5_fu_4686_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_9_1_6_fu_4751_p2() {
    tmp_22_9_1_6_fu_4751_p2 = (!storemerge_9_0_6_reg_7067.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_9_0_6_reg_7067.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_9_1_7_fu_4765_p2() {
    tmp_22_9_1_7_fu_4765_p2 = (!storemerge_9_0_7_reg_7073.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_9_0_7_reg_7073.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_9_1_fu_4518_p2() {
    tmp_22_9_1_fu_4518_p2 = (!storemerge_9_fu_4511_p3.read().is_01() || !in_V_V_dout.read().is_01())? sc_lv<1>(): (sc_bigint<16>(storemerge_9_fu_4511_p3.read()) > sc_bigint<16>(in_V_V_dout.read()));
}

void pool_layer1::thread_tmp_22_9_fu_4499_p2() {
    tmp_22_9_fu_4499_p2 = (!pool_buff_val_72_V_2_reg_7031.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_72_V_2_reg_7031.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_22_s_fu_4779_p2() {
    tmp_22_s_fu_4779_p2 = (!pool_buff_val_80_V_2_reg_7079.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_80_V_2_reg_7079.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_2_fu_1978_p2() {
    tmp_2_fu_1978_p2 = (!pool_buff_val_0_V_l_reg_6484.read().is_01() || !reg_1910.read().is_01())? sc_lv<1>(): (sc_bigint<16>(pool_buff_val_0_V_l_reg_6484.read()) > sc_bigint<16>(reg_1910.read()));
}

void pool_layer1::thread_tmp_V_385_fu_2004_p3() {
    tmp_V_385_fu_2004_p3 = (!tmp_22_0_1_fu_1998_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_1_fu_1998_p2.read()[0].to_bool())? storemerge_fu_1990_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_387_fu_2039_p3() {
    tmp_V_387_fu_2039_p3 = (!tmp_22_0_1_1_fu_2033_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_1_1_fu_2033_p2.read()[0].to_bool())? storemerge_0_0_1_fu_2026_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_389_fu_2074_p3() {
    tmp_V_389_fu_2074_p3 = (!tmp_22_0_1_2_fu_2068_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_1_2_fu_2068_p2.read()[0].to_bool())? storemerge_0_0_2_fu_2061_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_391_fu_2109_p3() {
    tmp_V_391_fu_2109_p3 = (!tmp_22_0_1_3_fu_2103_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_1_3_fu_2103_p2.read()[0].to_bool())? storemerge_0_0_3_fu_2096_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_393_fu_2144_p3() {
    tmp_V_393_fu_2144_p3 = (!tmp_22_0_1_4_fu_2138_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_1_4_fu_2138_p2.read()[0].to_bool())? storemerge_0_0_4_fu_2131_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_395_fu_2221_p3() {
    tmp_V_395_fu_2221_p3 = (!tmp_22_0_1_5_fu_2215_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_1_5_fu_2215_p2.read()[0].to_bool())? storemerge_0_0_5_fu_2166_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_397_fu_2236_p3() {
    tmp_V_397_fu_2236_p3 = (!tmp_22_0_1_6_fu_2231_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_1_6_fu_2231_p2.read()[0].to_bool())? storemerge_0_0_6_reg_6635.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_399_fu_2250_p3() {
    tmp_V_399_fu_2250_p3 = (!tmp_22_0_1_7_fu_2245_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_0_1_7_fu_2245_p2.read()[0].to_bool())? storemerge_0_0_7_reg_6641.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_409_fu_2284_p3() {
    tmp_V_409_fu_2284_p3 = (!tmp_22_1_1_fu_2278_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_1_fu_2278_p2.read()[0].to_bool())? storemerge_1_fu_2271_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_411_fu_2319_p3() {
    tmp_V_411_fu_2319_p3 = (!tmp_22_1_1_1_fu_2313_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_1_1_fu_2313_p2.read()[0].to_bool())? storemerge_1_0_1_fu_2306_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_413_fu_2354_p3() {
    tmp_V_413_fu_2354_p3 = (!tmp_22_1_1_2_fu_2348_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_1_2_fu_2348_p2.read()[0].to_bool())? storemerge_1_0_2_fu_2341_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_415_fu_2389_p3() {
    tmp_V_415_fu_2389_p3 = (!tmp_22_1_1_3_fu_2383_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_1_3_fu_2383_p2.read()[0].to_bool())? storemerge_1_0_3_fu_2376_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_417_fu_2424_p3() {
    tmp_V_417_fu_2424_p3 = (!tmp_22_1_1_4_fu_2418_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_1_4_fu_2418_p2.read()[0].to_bool())? storemerge_1_0_4_fu_2411_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_419_fu_2501_p3() {
    tmp_V_419_fu_2501_p3 = (!tmp_22_1_1_5_fu_2495_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_1_5_fu_2495_p2.read()[0].to_bool())? storemerge_1_0_5_fu_2446_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_421_fu_2516_p3() {
    tmp_V_421_fu_2516_p3 = (!tmp_22_1_1_6_fu_2511_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_1_6_fu_2511_p2.read()[0].to_bool())? storemerge_1_0_6_reg_6683.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_423_fu_2530_p3() {
    tmp_V_423_fu_2530_p3 = (!tmp_22_1_1_7_fu_2525_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_1_1_7_fu_2525_p2.read()[0].to_bool())? storemerge_1_0_7_reg_6689.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_433_fu_2564_p3() {
    tmp_V_433_fu_2564_p3 = (!tmp_22_2_1_fu_2558_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_1_fu_2558_p2.read()[0].to_bool())? storemerge_2_fu_2551_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_435_fu_2599_p3() {
    tmp_V_435_fu_2599_p3 = (!tmp_22_2_1_1_fu_2593_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_1_1_fu_2593_p2.read()[0].to_bool())? storemerge_2_0_1_fu_2586_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_437_fu_2634_p3() {
    tmp_V_437_fu_2634_p3 = (!tmp_22_2_1_2_fu_2628_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_1_2_fu_2628_p2.read()[0].to_bool())? storemerge_2_0_2_fu_2621_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_439_fu_2669_p3() {
    tmp_V_439_fu_2669_p3 = (!tmp_22_2_1_3_fu_2663_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_1_3_fu_2663_p2.read()[0].to_bool())? storemerge_2_0_3_fu_2656_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_441_fu_2704_p3() {
    tmp_V_441_fu_2704_p3 = (!tmp_22_2_1_4_fu_2698_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_1_4_fu_2698_p2.read()[0].to_bool())? storemerge_2_0_4_fu_2691_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_443_fu_2781_p3() {
    tmp_V_443_fu_2781_p3 = (!tmp_22_2_1_5_fu_2775_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_1_5_fu_2775_p2.read()[0].to_bool())? storemerge_2_0_5_fu_2726_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_445_fu_2796_p3() {
    tmp_V_445_fu_2796_p3 = (!tmp_22_2_1_6_fu_2791_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_1_6_fu_2791_p2.read()[0].to_bool())? storemerge_2_0_6_reg_6731.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_447_fu_2810_p3() {
    tmp_V_447_fu_2810_p3 = (!tmp_22_2_1_7_fu_2805_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_2_1_7_fu_2805_p2.read()[0].to_bool())? storemerge_2_0_7_reg_6737.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_457_fu_2844_p3() {
    tmp_V_457_fu_2844_p3 = (!tmp_22_3_1_fu_2838_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_1_fu_2838_p2.read()[0].to_bool())? storemerge_3_fu_2831_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_459_fu_2879_p3() {
    tmp_V_459_fu_2879_p3 = (!tmp_22_3_1_1_fu_2873_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_1_1_fu_2873_p2.read()[0].to_bool())? storemerge_3_0_1_fu_2866_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_461_fu_2914_p3() {
    tmp_V_461_fu_2914_p3 = (!tmp_22_3_1_2_fu_2908_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_1_2_fu_2908_p2.read()[0].to_bool())? storemerge_3_0_2_fu_2901_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_463_fu_2949_p3() {
    tmp_V_463_fu_2949_p3 = (!tmp_22_3_1_3_fu_2943_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_1_3_fu_2943_p2.read()[0].to_bool())? storemerge_3_0_3_fu_2936_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_465_fu_2984_p3() {
    tmp_V_465_fu_2984_p3 = (!tmp_22_3_1_4_fu_2978_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_1_4_fu_2978_p2.read()[0].to_bool())? storemerge_3_0_4_fu_2971_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_467_fu_3061_p3() {
    tmp_V_467_fu_3061_p3 = (!tmp_22_3_1_5_fu_3055_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_1_5_fu_3055_p2.read()[0].to_bool())? storemerge_3_0_5_fu_3006_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_469_fu_3076_p3() {
    tmp_V_469_fu_3076_p3 = (!tmp_22_3_1_6_fu_3071_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_1_6_fu_3071_p2.read()[0].to_bool())? storemerge_3_0_6_reg_6779.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_471_fu_3090_p3() {
    tmp_V_471_fu_3090_p3 = (!tmp_22_3_1_7_fu_3085_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_3_1_7_fu_3085_p2.read()[0].to_bool())? storemerge_3_0_7_reg_6785.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_481_fu_3124_p3() {
    tmp_V_481_fu_3124_p3 = (!tmp_22_4_1_fu_3118_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_1_fu_3118_p2.read()[0].to_bool())? storemerge_4_fu_3111_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_483_fu_3159_p3() {
    tmp_V_483_fu_3159_p3 = (!tmp_22_4_1_1_fu_3153_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_1_1_fu_3153_p2.read()[0].to_bool())? storemerge_4_0_1_fu_3146_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_485_fu_3194_p3() {
    tmp_V_485_fu_3194_p3 = (!tmp_22_4_1_2_fu_3188_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_1_2_fu_3188_p2.read()[0].to_bool())? storemerge_4_0_2_fu_3181_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_487_fu_3229_p3() {
    tmp_V_487_fu_3229_p3 = (!tmp_22_4_1_3_fu_3223_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_1_3_fu_3223_p2.read()[0].to_bool())? storemerge_4_0_3_fu_3216_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_489_fu_3264_p3() {
    tmp_V_489_fu_3264_p3 = (!tmp_22_4_1_4_fu_3258_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_1_4_fu_3258_p2.read()[0].to_bool())? storemerge_4_0_4_fu_3251_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_491_fu_3341_p3() {
    tmp_V_491_fu_3341_p3 = (!tmp_22_4_1_5_fu_3335_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_1_5_fu_3335_p2.read()[0].to_bool())? storemerge_4_0_5_fu_3286_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_493_fu_3356_p3() {
    tmp_V_493_fu_3356_p3 = (!tmp_22_4_1_6_fu_3351_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_1_6_fu_3351_p2.read()[0].to_bool())? storemerge_4_0_6_reg_6827.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_495_fu_3370_p3() {
    tmp_V_495_fu_3370_p3 = (!tmp_22_4_1_7_fu_3365_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_4_1_7_fu_3365_p2.read()[0].to_bool())? storemerge_4_0_7_reg_6833.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_505_fu_3404_p3() {
    tmp_V_505_fu_3404_p3 = (!tmp_22_5_1_fu_3398_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_1_fu_3398_p2.read()[0].to_bool())? storemerge_5_fu_3391_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_507_fu_3439_p3() {
    tmp_V_507_fu_3439_p3 = (!tmp_22_5_1_1_fu_3433_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_1_1_fu_3433_p2.read()[0].to_bool())? storemerge_5_0_1_fu_3426_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_509_fu_3474_p3() {
    tmp_V_509_fu_3474_p3 = (!tmp_22_5_1_2_fu_3468_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_1_2_fu_3468_p2.read()[0].to_bool())? storemerge_5_0_2_fu_3461_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_511_fu_3509_p3() {
    tmp_V_511_fu_3509_p3 = (!tmp_22_5_1_3_fu_3503_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_1_3_fu_3503_p2.read()[0].to_bool())? storemerge_5_0_3_fu_3496_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_513_fu_3544_p3() {
    tmp_V_513_fu_3544_p3 = (!tmp_22_5_1_4_fu_3538_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_1_4_fu_3538_p2.read()[0].to_bool())? storemerge_5_0_4_fu_3531_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_515_fu_3621_p3() {
    tmp_V_515_fu_3621_p3 = (!tmp_22_5_1_5_fu_3615_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_1_5_fu_3615_p2.read()[0].to_bool())? storemerge_5_0_5_fu_3566_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_517_fu_3636_p3() {
    tmp_V_517_fu_3636_p3 = (!tmp_22_5_1_6_fu_3631_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_1_6_fu_3631_p2.read()[0].to_bool())? storemerge_5_0_6_reg_6875.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_519_fu_3650_p3() {
    tmp_V_519_fu_3650_p3 = (!tmp_22_5_1_7_fu_3645_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_5_1_7_fu_3645_p2.read()[0].to_bool())? storemerge_5_0_7_reg_6881.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_529_fu_3684_p3() {
    tmp_V_529_fu_3684_p3 = (!tmp_22_6_1_fu_3678_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_1_fu_3678_p2.read()[0].to_bool())? storemerge_6_fu_3671_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_531_fu_3719_p3() {
    tmp_V_531_fu_3719_p3 = (!tmp_22_6_1_1_fu_3713_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_1_1_fu_3713_p2.read()[0].to_bool())? storemerge_6_0_1_fu_3706_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_533_fu_3754_p3() {
    tmp_V_533_fu_3754_p3 = (!tmp_22_6_1_2_fu_3748_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_1_2_fu_3748_p2.read()[0].to_bool())? storemerge_6_0_2_fu_3741_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_535_fu_3789_p3() {
    tmp_V_535_fu_3789_p3 = (!tmp_22_6_1_3_fu_3783_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_1_3_fu_3783_p2.read()[0].to_bool())? storemerge_6_0_3_fu_3776_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_537_fu_3824_p3() {
    tmp_V_537_fu_3824_p3 = (!tmp_22_6_1_4_fu_3818_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_1_4_fu_3818_p2.read()[0].to_bool())? storemerge_6_0_4_fu_3811_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_539_fu_3901_p3() {
    tmp_V_539_fu_3901_p3 = (!tmp_22_6_1_5_fu_3895_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_1_5_fu_3895_p2.read()[0].to_bool())? storemerge_6_0_5_fu_3846_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_541_fu_3916_p3() {
    tmp_V_541_fu_3916_p3 = (!tmp_22_6_1_6_fu_3911_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_1_6_fu_3911_p2.read()[0].to_bool())? storemerge_6_0_6_reg_6923.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_543_fu_3930_p3() {
    tmp_V_543_fu_3930_p3 = (!tmp_22_6_1_7_fu_3925_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_6_1_7_fu_3925_p2.read()[0].to_bool())? storemerge_6_0_7_reg_6929.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_553_fu_3964_p3() {
    tmp_V_553_fu_3964_p3 = (!tmp_22_7_1_fu_3958_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_fu_3958_p2.read()[0].to_bool())? storemerge_7_fu_3951_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_555_fu_3999_p3() {
    tmp_V_555_fu_3999_p3 = (!tmp_22_7_1_1_fu_3993_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_1_fu_3993_p2.read()[0].to_bool())? storemerge_7_0_1_fu_3986_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_557_fu_4034_p3() {
    tmp_V_557_fu_4034_p3 = (!tmp_22_7_1_2_fu_4028_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_2_fu_4028_p2.read()[0].to_bool())? storemerge_7_0_2_fu_4021_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_559_fu_4069_p3() {
    tmp_V_559_fu_4069_p3 = (!tmp_22_7_1_3_fu_4063_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_3_fu_4063_p2.read()[0].to_bool())? storemerge_7_0_3_fu_4056_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_561_fu_4104_p3() {
    tmp_V_561_fu_4104_p3 = (!tmp_22_7_1_4_fu_4098_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_4_fu_4098_p2.read()[0].to_bool())? storemerge_7_0_4_fu_4091_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_563_fu_4181_p3() {
    tmp_V_563_fu_4181_p3 = (!tmp_22_7_1_5_fu_4175_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_5_fu_4175_p2.read()[0].to_bool())? storemerge_7_0_5_fu_4126_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_565_fu_4196_p3() {
    tmp_V_565_fu_4196_p3 = (!tmp_22_7_1_6_fu_4191_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_6_fu_4191_p2.read()[0].to_bool())? storemerge_7_0_6_reg_6971.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_567_fu_4210_p3() {
    tmp_V_567_fu_4210_p3 = (!tmp_22_7_1_7_fu_4205_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_7_1_7_fu_4205_p2.read()[0].to_bool())? storemerge_7_0_7_reg_6977.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_577_fu_4244_p3() {
    tmp_V_577_fu_4244_p3 = (!tmp_22_8_1_fu_4238_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_fu_4238_p2.read()[0].to_bool())? storemerge_8_fu_4231_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_579_fu_4279_p3() {
    tmp_V_579_fu_4279_p3 = (!tmp_22_8_1_1_fu_4273_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_1_fu_4273_p2.read()[0].to_bool())? storemerge_8_0_1_fu_4266_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_581_fu_4314_p3() {
    tmp_V_581_fu_4314_p3 = (!tmp_22_8_1_2_fu_4308_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_2_fu_4308_p2.read()[0].to_bool())? storemerge_8_0_2_fu_4301_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_583_fu_4349_p3() {
    tmp_V_583_fu_4349_p3 = (!tmp_22_8_1_3_fu_4343_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_3_fu_4343_p2.read()[0].to_bool())? storemerge_8_0_3_fu_4336_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_585_fu_4384_p3() {
    tmp_V_585_fu_4384_p3 = (!tmp_22_8_1_4_fu_4378_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_4_fu_4378_p2.read()[0].to_bool())? storemerge_8_0_4_fu_4371_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_587_fu_4461_p3() {
    tmp_V_587_fu_4461_p3 = (!tmp_22_8_1_5_fu_4455_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_5_fu_4455_p2.read()[0].to_bool())? storemerge_8_0_5_fu_4406_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_589_fu_4476_p3() {
    tmp_V_589_fu_4476_p3 = (!tmp_22_8_1_6_fu_4471_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_6_fu_4471_p2.read()[0].to_bool())? storemerge_8_0_6_reg_7019.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_591_fu_4490_p3() {
    tmp_V_591_fu_4490_p3 = (!tmp_22_8_1_7_fu_4485_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_8_1_7_fu_4485_p2.read()[0].to_bool())? storemerge_8_0_7_reg_7025.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_601_fu_4524_p3() {
    tmp_V_601_fu_4524_p3 = (!tmp_22_9_1_fu_4518_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_fu_4518_p2.read()[0].to_bool())? storemerge_9_fu_4511_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_603_fu_4559_p3() {
    tmp_V_603_fu_4559_p3 = (!tmp_22_9_1_1_fu_4553_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_1_fu_4553_p2.read()[0].to_bool())? storemerge_9_0_1_fu_4546_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_605_fu_4594_p3() {
    tmp_V_605_fu_4594_p3 = (!tmp_22_9_1_2_fu_4588_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_2_fu_4588_p2.read()[0].to_bool())? storemerge_9_0_2_fu_4581_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_607_fu_4629_p3() {
    tmp_V_607_fu_4629_p3 = (!tmp_22_9_1_3_fu_4623_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_3_fu_4623_p2.read()[0].to_bool())? storemerge_9_0_3_fu_4616_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_609_fu_4664_p3() {
    tmp_V_609_fu_4664_p3 = (!tmp_22_9_1_4_fu_4658_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_4_fu_4658_p2.read()[0].to_bool())? storemerge_9_0_4_fu_4651_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_611_fu_4741_p3() {
    tmp_V_611_fu_4741_p3 = (!tmp_22_9_1_5_fu_4735_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_5_fu_4735_p2.read()[0].to_bool())? storemerge_9_0_5_fu_4686_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_613_fu_4756_p3() {
    tmp_V_613_fu_4756_p3 = (!tmp_22_9_1_6_fu_4751_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_6_fu_4751_p2.read()[0].to_bool())? storemerge_9_0_6_reg_7067.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_615_fu_4770_p3() {
    tmp_V_615_fu_4770_p3 = (!tmp_22_9_1_7_fu_4765_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_9_1_7_fu_4765_p2.read()[0].to_bool())? storemerge_9_0_7_reg_7073.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_625_fu_4804_p3() {
    tmp_V_625_fu_4804_p3 = (!tmp_22_10_1_fu_4798_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_fu_4798_p2.read()[0].to_bool())? storemerge_s_fu_4791_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_627_fu_4839_p3() {
    tmp_V_627_fu_4839_p3 = (!tmp_22_10_1_1_fu_4833_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_1_fu_4833_p2.read()[0].to_bool())? storemerge_10_0_1_fu_4826_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_629_fu_4874_p3() {
    tmp_V_629_fu_4874_p3 = (!tmp_22_10_1_2_fu_4868_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_2_fu_4868_p2.read()[0].to_bool())? storemerge_10_0_2_fu_4861_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_631_fu_4909_p3() {
    tmp_V_631_fu_4909_p3 = (!tmp_22_10_1_3_fu_4903_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_3_fu_4903_p2.read()[0].to_bool())? storemerge_10_0_3_fu_4896_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_633_fu_4944_p3() {
    tmp_V_633_fu_4944_p3 = (!tmp_22_10_1_4_fu_4938_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_4_fu_4938_p2.read()[0].to_bool())? storemerge_10_0_4_fu_4931_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_635_fu_5021_p3() {
    tmp_V_635_fu_5021_p3 = (!tmp_22_10_1_5_fu_5015_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_5_fu_5015_p2.read()[0].to_bool())? storemerge_10_0_5_fu_4966_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_637_fu_5036_p3() {
    tmp_V_637_fu_5036_p3 = (!tmp_22_10_1_6_fu_5031_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_6_fu_5031_p2.read()[0].to_bool())? storemerge_10_0_6_reg_7115.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_639_fu_5050_p3() {
    tmp_V_639_fu_5050_p3 = (!tmp_22_10_1_7_fu_5045_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_10_1_7_fu_5045_p2.read()[0].to_bool())? storemerge_10_0_7_reg_7121.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_649_fu_5084_p3() {
    tmp_V_649_fu_5084_p3 = (!tmp_22_11_1_fu_5078_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_fu_5078_p2.read()[0].to_bool())? storemerge_10_fu_5071_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_651_fu_5119_p3() {
    tmp_V_651_fu_5119_p3 = (!tmp_22_11_1_1_fu_5113_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_1_fu_5113_p2.read()[0].to_bool())? storemerge_11_0_1_fu_5106_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_653_fu_5154_p3() {
    tmp_V_653_fu_5154_p3 = (!tmp_22_11_1_2_fu_5148_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_2_fu_5148_p2.read()[0].to_bool())? storemerge_11_0_2_fu_5141_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_655_fu_5189_p3() {
    tmp_V_655_fu_5189_p3 = (!tmp_22_11_1_3_fu_5183_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_3_fu_5183_p2.read()[0].to_bool())? storemerge_11_0_3_fu_5176_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_657_fu_5224_p3() {
    tmp_V_657_fu_5224_p3 = (!tmp_22_11_1_4_fu_5218_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_4_fu_5218_p2.read()[0].to_bool())? storemerge_11_0_4_fu_5211_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_659_fu_5301_p3() {
    tmp_V_659_fu_5301_p3 = (!tmp_22_11_1_5_fu_5295_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_5_fu_5295_p2.read()[0].to_bool())? storemerge_11_0_5_fu_5246_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_661_fu_5316_p3() {
    tmp_V_661_fu_5316_p3 = (!tmp_22_11_1_6_fu_5311_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_6_fu_5311_p2.read()[0].to_bool())? storemerge_11_0_6_reg_7163.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_663_fu_5330_p3() {
    tmp_V_663_fu_5330_p3 = (!tmp_22_11_1_7_fu_5325_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_11_1_7_fu_5325_p2.read()[0].to_bool())? storemerge_11_0_7_reg_7169.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_673_fu_5364_p3() {
    tmp_V_673_fu_5364_p3 = (!tmp_22_12_1_fu_5358_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_fu_5358_p2.read()[0].to_bool())? storemerge_11_fu_5351_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_675_fu_5399_p3() {
    tmp_V_675_fu_5399_p3 = (!tmp_22_12_1_1_fu_5393_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_1_fu_5393_p2.read()[0].to_bool())? storemerge_12_0_1_fu_5386_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_677_fu_5434_p3() {
    tmp_V_677_fu_5434_p3 = (!tmp_22_12_1_2_fu_5428_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_2_fu_5428_p2.read()[0].to_bool())? storemerge_12_0_2_fu_5421_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_679_fu_5469_p3() {
    tmp_V_679_fu_5469_p3 = (!tmp_22_12_1_3_fu_5463_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_3_fu_5463_p2.read()[0].to_bool())? storemerge_12_0_3_fu_5456_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_681_fu_5504_p3() {
    tmp_V_681_fu_5504_p3 = (!tmp_22_12_1_4_fu_5498_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_4_fu_5498_p2.read()[0].to_bool())? storemerge_12_0_4_fu_5491_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_683_fu_5581_p3() {
    tmp_V_683_fu_5581_p3 = (!tmp_22_12_1_5_fu_5575_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_5_fu_5575_p2.read()[0].to_bool())? storemerge_12_0_5_fu_5526_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_685_fu_5596_p3() {
    tmp_V_685_fu_5596_p3 = (!tmp_22_12_1_6_fu_5591_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_6_fu_5591_p2.read()[0].to_bool())? storemerge_12_0_6_reg_7211.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_687_fu_5610_p3() {
    tmp_V_687_fu_5610_p3 = (!tmp_22_12_1_7_fu_5605_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_12_1_7_fu_5605_p2.read()[0].to_bool())? storemerge_12_0_7_reg_7217.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_697_fu_5644_p3() {
    tmp_V_697_fu_5644_p3 = (!tmp_22_13_1_fu_5638_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_1_fu_5638_p2.read()[0].to_bool())? storemerge_12_fu_5631_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_699_fu_5679_p3() {
    tmp_V_699_fu_5679_p3 = (!tmp_22_13_1_1_fu_5673_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_1_1_fu_5673_p2.read()[0].to_bool())? storemerge_13_0_1_fu_5666_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_701_fu_5714_p3() {
    tmp_V_701_fu_5714_p3 = (!tmp_22_13_1_2_fu_5708_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_1_2_fu_5708_p2.read()[0].to_bool())? storemerge_13_0_2_fu_5701_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_703_fu_5749_p3() {
    tmp_V_703_fu_5749_p3 = (!tmp_22_13_1_3_fu_5743_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_1_3_fu_5743_p2.read()[0].to_bool())? storemerge_13_0_3_fu_5736_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_705_fu_5784_p3() {
    tmp_V_705_fu_5784_p3 = (!tmp_22_13_1_4_fu_5778_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_1_4_fu_5778_p2.read()[0].to_bool())? storemerge_13_0_4_fu_5771_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_707_fu_5861_p3() {
    tmp_V_707_fu_5861_p3 = (!tmp_22_13_1_5_fu_5855_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_1_5_fu_5855_p2.read()[0].to_bool())? storemerge_13_0_5_fu_5806_p3.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_709_fu_5876_p3() {
    tmp_V_709_fu_5876_p3 = (!tmp_22_13_1_6_fu_5871_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_1_6_fu_5871_p2.read()[0].to_bool())? storemerge_13_0_6_reg_7259.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_V_711_fu_5890_p3() {
    tmp_V_711_fu_5890_p3 = (!tmp_22_13_1_7_fu_5885_p2.read()[0].is_01())? sc_lv<16>(): ((tmp_22_13_1_7_fu_5885_p2.read()[0].to_bool())? storemerge_13_0_7_reg_7265.read(): in_V_V_dout.read());
}

void pool_layer1::thread_tmp_s_fu_1968_p2() {
    tmp_s_fu_1968_p2 = (!l_mid2_reg_6473.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(l_mid2_reg_6473.read() == ap_const_lv2_1);
}

}

