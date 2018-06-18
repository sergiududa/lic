#include "conv_layer1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_layer1::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state4.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_2199_p2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0))) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state4.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state4.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)))) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_2199_p2.read()))) {
            ap_enable_reg_pp0_iter2 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_2199_p2.read()))) {
        i_1_reg_2177 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        i_1_reg_2177 = i_1_mid2_reg_6844.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())))) {
        i_reg_2155 = i_5_reg_6822.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        i_reg_2155 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_2199_p2.read()))) {
        indvar_flatten_reg_2166 = ap_const_lv10_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        indvar_flatten_reg_2166 = indvar_flatten_next_reg_6835.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_2199_p2.read()))) {
        j_reg_2188 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        j_reg_2188 = j_5_reg_6849.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        ap_reg_pp0_iter1_exitcond_flatten_reg_6831 = exitcond_flatten_reg_6831.read();
        ap_reg_pp0_iter2_exitcond_flatten_reg_6831 = ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read();
        exitcond_flatten_reg_6831 = exitcond_flatten_fu_2223_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0))) {
        ap_reg_pp0_iter1_p_069_0_3_1_cast2_reg_7279 = p_069_0_3_1_cast2_reg_7279.read();
        ap_reg_pp0_iter1_p_069_0_3_2_cast2_reg_7286 = p_069_0_3_2_cast2_reg_7286.read();
        ap_reg_pp0_iter1_p_069_0_3_3_cast1_reg_7300 = p_069_0_3_3_cast1_reg_7300.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        conv_buff_val_1_V_l_26_reg_6871 = conv_buff_val_1_V_q0.read();
        conv_buff_val_2_V_l_26_reg_6879 = conv_buff_val_2_V_q0.read();
        conv_buff_val_32_V_27_reg_6895 = conv_buff_val_32_V_q0.read();
        conv_buff_val_33_V_27_reg_6907 = conv_buff_val_33_V_q0.read();
        conv_buff_val_34_V_27_reg_6914 = conv_buff_val_34_V_q0.read();
        conv_buff_val_35_V_27_reg_6922 = conv_buff_val_35_V_q0.read();
        conv_buff_val_3_V_l_26_reg_6887 = conv_buff_val_3_V_q0.read();
        conv_buff_val_64_V_27_reg_6930 = conv_buff_val_64_V_q0.read();
        conv_buff_val_65_V_27_reg_6939 = conv_buff_val_65_V_q0.read();
        conv_buff_val_66_V_27_reg_6947 = conv_buff_val_66_V_q0.read();
        conv_buff_val_67_V_27_reg_6956 = conv_buff_val_67_V_q0.read();
        conv_buff_val_96_V_27_reg_6966 = conv_buff_val_96_V_q0.read();
        conv_buff_val_97_V_27_reg_6973 = conv_buff_val_97_V_q0.read();
        conv_buff_val_98_V_27_reg_6982 = conv_buff_val_98_V_q0.read();
        conv_buff_val_99_V_27_reg_6991 = conv_buff_val_99_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()))) {
        i_1_mid2_reg_6844 = i_1_mid2_fu_2261_p3.read();
        j_5_reg_6849 = j_5_fu_2275_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_5_reg_6822 = i_5_fu_2205_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        indvar_flatten_next_reg_6835 = indvar_flatten_next_fu_2229_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        p_069_0_0_2_cast1_reg_7040 = p_069_0_0_2_cast1_fu_2449_p1.read();
        p_069_0_0_3_cast2_reg_7046 = p_069_0_0_3_cast2_fu_2472_p1.read();
        tmp_105_reg_7067 = p_Val2_25_3_0_3_fu_2714_p2.read().range(27, 12);
        tmp_120_reg_7072 = grp_fu_5514_p3.read().range(27, 12);
        tmp_134_reg_7077 = grp_fu_5532_p3.read().range(27, 12);
        tmp_162_reg_7082 = p_Val2_25_7_0_1_fu_2868_p2.read().range(27, 12);
        tmp_60_reg_7052 = grp_fu_5424_p3.read().range(27, 12);
        tmp_75_reg_7057 = grp_fu_5442_p3.read().range(27, 12);
        tmp_90_reg_7062 = grp_fu_5469_p3.read().range(27, 12);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        p_069_0_1_1_cast2_reg_7096 = p_069_0_1_1_cast2_fu_2897_p1.read();
        p_069_0_1_1_cast_reg_7101 = p_069_0_1_1_cast_fu_2900_p1.read();
        p_069_0_1_2_cast_reg_7107 = p_069_0_1_2_cast_fu_2926_p1.read();
        p_069_0_1_cast_reg_7091 = p_069_0_1_cast_fu_2884_p1.read();
        tmp_1023_3_1_cast_reg_7128 = tmp_1023_3_1_cast_fu_3101_p1.read();
        tmp_108_reg_7133 = grp_fu_5622_p3.read().range(27, 12);
        tmp_123_reg_7138 = grp_fu_5649_p3.read().range(27, 12);
        tmp_135_reg_7143 = grp_fu_5658_p3.read().range(27, 12);
        tmp_148_reg_7148 = grp_fu_5666_p3.read().range(27, 12);
        tmp_63_reg_7113 = grp_fu_5559_p3.read().range(27, 12);
        tmp_78_reg_7118 = grp_fu_5577_p3.read().range(27, 12);
        tmp_93_reg_7123 = grp_fu_5604_p3.read().range(27, 12);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        p_069_0_1_3_cast3_reg_7153 = p_069_0_1_3_cast3_fu_3249_p1.read();
        p_069_0_1_3_cast_reg_7159 = p_069_0_1_3_cast_fu_3252_p1.read();
        p_069_0_2_1_cast2_reg_7171 = p_069_0_2_1_cast2_fu_3285_p1.read();
        p_069_0_2_1_cast3_reg_7176 = p_069_0_2_1_cast3_fu_3288_p1.read();
        p_069_0_2_cast2_reg_7165 = p_069_0_2_cast2_fu_3265_p1.read();
        tmp_111_reg_7196 = grp_fu_5773_p3.read().range(27, 12);
        tmp_137_reg_7201 = grp_fu_5790_p3.read().range(27, 12);
        tmp_150_reg_7206 = p_Val2_25_6_1_fu_3524_p2.read().range(27, 12);
        tmp_66_reg_7181 = grp_fu_5692_p3.read().range(27, 12);
        tmp_81_reg_7186 = grp_fu_5719_p3.read().range(27, 12);
        tmp_96_reg_7191 = grp_fu_5746_p3.read().range(27, 12);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        p_069_0_1_cast1_reg_6902 = p_069_0_1_cast1_fu_2310_p1.read();
        p_Val2_24_3_1_reg_7015 = p_Val2_24_3_1_fu_5370_p2.read();
        tmp_11_reg_6866 = p_Val2_2_fu_5342_p2.read().range(26, 12);
        tmp_15_reg_7000 = p_Val2_24_1_fu_5349_p2.read().range(26, 12);
        tmp_19_reg_7005 = p_Val2_24_2_fu_5356_p2.read().range(26, 12);
        tmp_23_reg_7010 = p_Val2_24_3_fu_5363_p2.read().range(26, 12);
        tmp_25_reg_7020 = p_Val2_24_4_fu_5376_p2.read().range(26, 12);
        tmp_27_reg_7025 = p_Val2_24_5_fu_5383_p2.read().range(23, 12);
        tmp_31_reg_7035 = p_Val2_24_7_fu_5399_p2.read().range(26, 12);
        tmp_34_reg_7030 = grp_fu_5390_p3.read().range(23, 12);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0))) {
        p_069_0_2_2_cast1_reg_7215 = p_069_0_2_2_cast1_fu_3545_p1.read();
        p_069_0_2_2_cast2_reg_7220 = p_069_0_2_2_cast2_fu_3548_p1.read();
        p_069_0_2_3_cast3_reg_7226 = p_069_0_2_3_cast3_fu_3561_p1.read();
        p_069_0_3_cast2_reg_7231 = p_069_0_3_cast2_fu_3587_p1.read();
        p_069_0_3_cast_reg_7237 = p_069_0_3_cast_fu_3590_p1.read();
        tmp_113_reg_7259 = grp_fu_5897_p3.read().range(27, 12);
        tmp_126_reg_7264 = grp_fu_5923_p3.read().range(27, 12);
        tmp_138_reg_7269 = grp_fu_5932_p3.read().range(27, 12);
        tmp_69_reg_7244 = grp_fu_5825_p3.read().range(27, 12);
        tmp_84_reg_7249 = grp_fu_5852_p3.read().range(27, 12);
        tmp_99_reg_7254 = grp_fu_5879_p3.read().range(27, 12);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0))) {
        p_069_0_3_1_cast1_reg_7274 = p_069_0_3_1_cast1_fu_3824_p1.read();
        p_069_0_3_1_cast2_reg_7279 = p_069_0_3_1_cast2_fu_3827_p1.read();
        p_069_0_3_2_cast2_reg_7286 = p_069_0_3_2_cast2_fu_3840_p1.read();
        p_069_0_3_3_cast1_reg_7300 = p_069_0_3_3_cast1_fu_3863_p1.read();
        p_069_0_3_3_cast_reg_7293 = p_069_0_3_3_cast_fu_3860_p1.read();
        sum_V_0_3_3_reg_7305 = grp_fu_5958_p3.read().range(27, 12);
        sum_V_1_3_3_reg_7315 = grp_fu_5986_p3.read().range(27, 12);
        tmp_101_reg_7325 = grp_fu_6005_p3.read().range(27, 12);
        tmp_115_reg_7330 = p_Val2_25_3_3_1_fu_4055_p2.read().range(27, 12);
        tmp_127_reg_7335 = p_Val2_25_4_2_2_fu_4116_p2.read().range(27, 12);
        tmp_13_reg_7310 = grp_fu_5958_p3.read().range(26, 12);
        tmp_140_reg_7340 = grp_fu_6030_p3.read().range(27, 12);
        tmp_152_reg_7345 = grp_fu_6046_p3.read().range(27, 12);
        tmp_164_reg_7350 = grp_fu_6063_p3.read().range(27, 12);
        tmp_17_reg_7320 = grp_fu_5986_p3.read().range(26, 12);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        sum_V_4_3_3_reg_7404 = grp_fu_6186_p3.read().range(27, 12);
        tmp_146_reg_7414 = grp_fu_6211_p3.read().range(27, 12);
        tmp_158_reg_7419 = grp_fu_6227_p3.read().range(27, 12);
        tmp_170_reg_7424 = grp_fu_6243_p3.read().range(27, 12);
        tmp_26_reg_7409 = grp_fu_6186_p3.read().range(26, 12);
        tmp_V_742_reg_7399 = tmp_V_742_fu_4550_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        sum_V_6_3_3_reg_7444 = p_Val2_25_6_3_3_fu_5127_p2.read().range(27, 12);
        tmp_173_reg_7454 = grp_fu_6285_p3.read().range(27, 12);
        tmp_30_reg_7449 = p_Val2_25_6_3_3_fu_5127_p2.read().range(26, 12);
        tmp_V_741_reg_7429 = tmp_V_741_fu_4944_p3.read();
        tmp_V_743_reg_7434 = tmp_V_743_fu_4968_p3.read();
        tmp_V_744_reg_7439 = tmp_V_744_fu_5019_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0))) {
        tmp_131_reg_7379 = grp_fu_6105_p3.read().range(27, 12);
        tmp_143_reg_7384 = grp_fu_6129_p3.read().range(27, 12);
        tmp_155_reg_7389 = grp_fu_6154_p3.read().range(27, 12);
        tmp_167_reg_7394 = grp_fu_6178_p3.read().range(27, 12);
        tmp_24_reg_7369 = grp_fu_6079_p3.read().range(26, 12);
        tmp_V_740_reg_7364 = tmp_V_740_fu_4277_p3.read();
        tmp_V_reg_7359 = tmp_V_fu_4253_p3.read();
        tmp_i3_reg_7374 = tmp_i3_fu_4333_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0))) {
        tmp_174_reg_7464 = grp_fu_6293_p3.read().range(27, 12);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_2283_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_fu_2253_p3.read()))) {
        tmp_21_reg_6858 =  (sc_lv<1>) (in_V_V_empty_n.read());
    }
    if ((esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_32_reg_7469 = grp_fu_6309_p3.read().range(26, 12);
        tmp_i8_reg_7474 = tmp_i8_fu_5319_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_reg_6854.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_reg_6840.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        tmp_3_1_reg_7087 =  (sc_lv<1>) (in_V_V_empty_n.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_reg_6854.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_reg_6840.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        tmp_3_2_reg_7211 =  (sc_lv<1>) (in_V_V_empty_n.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_reg_6854.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_mid2_reg_6840.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0))) {
        tmp_3_3_reg_7355 =  (sc_lv<1>) (in_V_V_empty_n.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()))) {
        tmp_3_reg_6854 = tmp_3_fu_2283_p2.read();
        tmp_mid2_reg_6840 = tmp_mid2_fu_2253_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_6831.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        tmp_V_745_reg_7459 = tmp_V_745_fu_5223_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_2223_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_2283_p2.read()))) {
        tmp_i4_reg_6862 =  (sc_lv<1>) (in_V_V_empty_n.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_2199_p2.read()))) {
        tmp_reg_6827 =  (sc_lv<1>) (in_V_V_empty_n.read());
    }
}

void conv_layer1::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_2199_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && !(esl_seteq<1,1,1>(tmp_reg_6827.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_fu_2223_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_fu_2223_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state22;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state22;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 32 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        case 64 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            }
            break;
        case 128 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            }
            break;
        case 256 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage5_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            }
            break;
        case 512 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage6_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            }
            break;
        case 1024 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            }
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<12>) ("XXXXXXXXXXXX");
            break;
    }
}

}

