#include "conv.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv::thread_tmp_438_fu_4990_p2() {
    tmp_438_fu_4990_p2 = (tmp_382_reg_7954.read() | ap_const_lv10_1C);
}

void conv::thread_tmp_439_fu_4995_p3() {
    tmp_439_fu_4995_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_438_fu_4990_p2.read());
}

void conv::thread_tmp_43_fu_5544_p2() {
    tmp_43_fu_5544_p2 = (tmp_41_fu_5538_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_440_fu_5004_p2() {
    tmp_440_fu_5004_p2 = (tmp_382_reg_7954.read() | ap_const_lv10_1D);
}

void conv::thread_tmp_441_fu_5009_p3() {
    tmp_441_fu_5009_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_440_fu_5004_p2.read());
}

void conv::thread_tmp_442_fu_5018_p2() {
    tmp_442_fu_5018_p2 = (tmp_382_reg_7954.read() | ap_const_lv10_1E);
}

void conv::thread_tmp_443_fu_5023_p3() {
    tmp_443_fu_5023_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_442_fu_5018_p2.read());
}

void conv::thread_tmp_444_fu_5032_p2() {
    tmp_444_fu_5032_p2 = (tmp_382_reg_7954.read() | ap_const_lv10_1F);
}

void conv::thread_tmp_445_fu_5037_p3() {
    tmp_445_fu_5037_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_444_fu_5032_p2.read());
}

void conv::thread_tmp_446_fu_5069_p1() {
    tmp_446_fu_5069_p1 = a_assign_to_int_fu_5055_p1.read().range(23-1, 0);
}

void conv::thread_tmp_447_fu_5132_p1() {
    tmp_447_fu_5132_p1 = a_assign_2_to_int_fu_5118_p1.read().range(23-1, 0);
}

void conv::thread_tmp_448_fu_5197_p1() {
    tmp_448_fu_5197_p1 = a_assign_4_to_int_fu_5183_p1.read().range(23-1, 0);
}

void conv::thread_tmp_449_fu_5262_p1() {
    tmp_449_fu_5262_p1 = a_assign_6_to_int_fu_5248_p1.read().range(23-1, 0);
}

void conv::thread_tmp_44_fu_5577_p4() {
    tmp_44_fu_5577_p4 = a_assign_16_to_int_fu_5573_p1.read().range(30, 23);
}

void conv::thread_tmp_450_fu_5327_p1() {
    tmp_450_fu_5327_p1 = a_assign_8_to_int_fu_5313_p1.read().range(23-1, 0);
}

void conv::thread_tmp_451_fu_5392_p1() {
    tmp_451_fu_5392_p1 = a_assign_10_to_int_fu_5378_p1.read().range(23-1, 0);
}

void conv::thread_tmp_452_fu_5457_p1() {
    tmp_452_fu_5457_p1 = a_assign_12_to_int_fu_5443_p1.read().range(23-1, 0);
}

void conv::thread_tmp_453_fu_5522_p1() {
    tmp_453_fu_5522_p1 = a_assign_14_to_int_fu_5508_p1.read().range(23-1, 0);
}

void conv::thread_tmp_454_fu_5587_p1() {
    tmp_454_fu_5587_p1 = a_assign_16_to_int_fu_5573_p1.read().range(23-1, 0);
}

void conv::thread_tmp_455_fu_5652_p1() {
    tmp_455_fu_5652_p1 = a_assign_18_to_int_fu_5638_p1.read().range(23-1, 0);
}

void conv::thread_tmp_456_fu_5717_p1() {
    tmp_456_fu_5717_p1 = a_assign_20_to_int_fu_5703_p1.read().range(23-1, 0);
}

void conv::thread_tmp_457_fu_5782_p1() {
    tmp_457_fu_5782_p1 = a_assign_22_to_int_fu_5768_p1.read().range(23-1, 0);
}

void conv::thread_tmp_458_fu_5847_p1() {
    tmp_458_fu_5847_p1 = a_assign_24_to_int_fu_5833_p1.read().range(23-1, 0);
}

void conv::thread_tmp_459_fu_5912_p1() {
    tmp_459_fu_5912_p1 = a_assign_26_to_int_fu_5898_p1.read().range(23-1, 0);
}

void conv::thread_tmp_45_fu_3499_p2() {
    tmp_45_fu_3499_p2 = (!ap_const_lv7_58.is_01() || !tmp_mid2_cast4_reg_7208.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_58) + sc_biguint<7>(tmp_mid2_cast4_reg_7208.read()));
}

void conv::thread_tmp_460_fu_5977_p1() {
    tmp_460_fu_5977_p1 = a_assign_28_to_int_fu_5963_p1.read().range(23-1, 0);
}

void conv::thread_tmp_461_fu_6042_p1() {
    tmp_461_fu_6042_p1 = a_assign_30_to_int_fu_6028_p1.read().range(23-1, 0);
}

void conv::thread_tmp_462_fu_6107_p1() {
    tmp_462_fu_6107_p1 = a_assign_32_to_int_fu_6093_p1.read().range(23-1, 0);
}

void conv::thread_tmp_463_fu_6172_p1() {
    tmp_463_fu_6172_p1 = a_assign_34_to_int_fu_6158_p1.read().range(23-1, 0);
}

void conv::thread_tmp_464_fu_6237_p1() {
    tmp_464_fu_6237_p1 = a_assign_36_to_int_fu_6223_p1.read().range(23-1, 0);
}

void conv::thread_tmp_465_fu_6302_p1() {
    tmp_465_fu_6302_p1 = a_assign_38_to_int_fu_6288_p1.read().range(23-1, 0);
}

void conv::thread_tmp_466_fu_6367_p1() {
    tmp_466_fu_6367_p1 = a_assign_40_to_int_fu_6353_p1.read().range(23-1, 0);
}

void conv::thread_tmp_467_fu_6432_p1() {
    tmp_467_fu_6432_p1 = a_assign_42_to_int_fu_6418_p1.read().range(23-1, 0);
}

void conv::thread_tmp_468_fu_6497_p1() {
    tmp_468_fu_6497_p1 = a_assign_44_to_int_fu_6483_p1.read().range(23-1, 0);
}

void conv::thread_tmp_469_fu_6562_p1() {
    tmp_469_fu_6562_p1 = a_assign_46_to_int_fu_6548_p1.read().range(23-1, 0);
}

void conv::thread_tmp_46_fu_5603_p2() {
    tmp_46_fu_5603_p2 = (notrhs8_fu_5597_p2.read() | notlhs8_fu_5591_p2.read());
}

void conv::thread_tmp_470_fu_6627_p1() {
    tmp_470_fu_6627_p1 = a_assign_48_to_int_fu_6613_p1.read().range(23-1, 0);
}

void conv::thread_tmp_471_fu_6692_p1() {
    tmp_471_fu_6692_p1 = a_assign_50_to_int_fu_6678_p1.read().range(23-1, 0);
}

void conv::thread_tmp_472_fu_6757_p1() {
    tmp_472_fu_6757_p1 = a_assign_52_to_int_fu_6743_p1.read().range(23-1, 0);
}

void conv::thread_tmp_473_fu_6822_p1() {
    tmp_473_fu_6822_p1 = a_assign_54_to_int_fu_6808_p1.read().range(23-1, 0);
}

void conv::thread_tmp_474_fu_6897_p1() {
    tmp_474_fu_6897_p1 = a_assign_56_to_int_fu_6883_p1.read().range(23-1, 0);
}

void conv::thread_tmp_48_fu_5609_p2() {
    tmp_48_fu_5609_p2 = (tmp_46_fu_5603_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_49_fu_5642_p4() {
    tmp_49_fu_5642_p4 = a_assign_18_to_int_fu_5638_p1.read().range(30, 23);
}

void conv::thread_tmp_4_fu_3198_p2() {
    tmp_4_fu_3198_p2 = (!ap_const_lv6_18.is_01() || !tmp_mid2_cast4_cast_fu_3195_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_18) + sc_biguint<6>(tmp_mid2_cast4_cast_fu_3195_p1.read()));
}

void conv::thread_tmp_50_fu_3537_p3() {
    tmp_50_fu_3537_p3 = esl_concat<60,4>(ap_const_lv60_6, tmp_mid2_v_reg_6954.read());
}

void conv::thread_tmp_51_fu_5668_p2() {
    tmp_51_fu_5668_p2 = (notrhs9_fu_5662_p2.read() | notlhs9_fu_5656_p2.read());
}

void conv::thread_tmp_53_fu_5674_p2() {
    tmp_53_fu_5674_p2 = (tmp_51_fu_5668_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_54_fu_5707_p4() {
    tmp_54_fu_5707_p4 = a_assign_20_to_int_fu_5703_p1.read().range(30, 23);
}

void conv::thread_tmp_55_fu_3609_p3() {
    tmp_55_fu_3609_p3 = esl_concat<60,4>(ap_const_lv60_7, tmp_mid2_v_reg_6954.read());
}

void conv::thread_tmp_56_fu_5733_p2() {
    tmp_56_fu_5733_p2 = (notrhs10_fu_5727_p2.read() | notlhs10_fu_5721_p2.read());
}

void conv::thread_tmp_58_fu_5739_p2() {
    tmp_58_fu_5739_p2 = (tmp_56_fu_5733_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_59_fu_5772_p4() {
    tmp_59_fu_5772_p4 = a_assign_22_to_int_fu_5768_p1.read().range(30, 23);
}

void conv::thread_tmp_5_fu_5085_p2() {
    tmp_5_fu_5085_p2 = (notrhs_fu_5079_p2.read() | notlhs_fu_5073_p2.read());
}

void conv::thread_tmp_60_fu_3648_p2() {
    tmp_60_fu_3648_p2 = (!ap_const_lv8_78.is_01() || !tmp_mid2_cast5_fu_3645_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_biguint<8>(tmp_mid2_cast5_fu_3645_p1.read()));
}

void conv::thread_tmp_61_fu_5798_p2() {
    tmp_61_fu_5798_p2 = (notrhs11_fu_5792_p2.read() | notlhs11_fu_5786_p2.read());
}

void conv::thread_tmp_63_fu_5804_p2() {
    tmp_63_fu_5804_p2 = (tmp_61_fu_5798_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_64_fu_5837_p4() {
    tmp_64_fu_5837_p4 = a_assign_24_to_int_fu_5833_p1.read().range(30, 23);
}

void conv::thread_tmp_65_fu_5049_p1() {
    tmp_65_fu_5049_p1 =  (sc_lv<5>) (tmp_65_fu_5049_p10.read());
}

void conv::thread_tmp_65_fu_5049_p10() {
    tmp_65_fu_5049_p10 = esl_zext<13,5>(ap_reg_pp0_iter1_i_mid2_reg_6946.read());
}

void conv::thread_tmp_65_fu_5049_p2() {
    tmp_65_fu_5049_p2 = (!ap_const_lv13_E8.is_01() || !tmp_65_fu_5049_p1.read().is_01())? sc_lv<13>(): sc_biguint<13>(ap_const_lv13_E8) * sc_biguint<5>(tmp_65_fu_5049_p1.read());
}

void conv::thread_tmp_66_fu_5863_p2() {
    tmp_66_fu_5863_p2 = (notrhs12_fu_5857_p2.read() | notlhs12_fu_5851_p2.read());
}

void conv::thread_tmp_68_fu_5869_p2() {
    tmp_68_fu_5869_p2 = (tmp_66_fu_5863_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_69_fu_5902_p4() {
    tmp_69_fu_5902_p4 = a_assign_26_to_int_fu_5898_p1.read().range(30, 23);
}

void conv::thread_tmp_70_fu_5108_p2() {
    tmp_70_fu_5108_p2 = (!tmp_mid2_cast6_fu_5105_p1.read().is_01() || !tmp_65_reg_8695.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_mid2_cast6_fu_5105_p1.read()) + sc_biguint<13>(tmp_65_reg_8695.read()));
}

void conv::thread_tmp_71_fu_5928_p2() {
    tmp_71_fu_5928_p2 = (notrhs13_fu_5922_p2.read() | notlhs13_fu_5916_p2.read());
}

void conv::thread_tmp_73_fu_5934_p2() {
    tmp_73_fu_5934_p2 = (tmp_71_fu_5928_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_74_fu_5967_p4() {
    tmp_74_fu_5967_p4 = a_assign_28_to_int_fu_5963_p1.read().range(30, 23);
}

void conv::thread_tmp_75_fu_5168_p2() {
    tmp_75_fu_5168_p2 = (!ap_const_lv13_8.is_01() || !tmp_65_reg_8695.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_8) + sc_biguint<13>(tmp_65_reg_8695.read()));
}

void conv::thread_tmp_76_fu_5993_p2() {
    tmp_76_fu_5993_p2 = (notrhs14_fu_5987_p2.read() | notlhs14_fu_5981_p2.read());
}

void conv::thread_tmp_78_fu_5999_p2() {
    tmp_78_fu_5999_p2 = (tmp_76_fu_5993_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_79_fu_6032_p4() {
    tmp_79_fu_6032_p4 = a_assign_30_to_int_fu_6028_p1.read().range(30, 23);
}

void conv::thread_tmp_7_fu_5091_p2() {
    tmp_7_fu_5091_p2 = (tmp_5_fu_5085_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_80_fu_5173_p2() {
    tmp_80_fu_5173_p2 = (!tmp_mid2_cast6_reg_8733.read().is_01() || !tmp_75_fu_5168_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_mid2_cast6_reg_8733.read()) + sc_biguint<13>(tmp_75_fu_5168_p2.read()));
}

void conv::thread_tmp_81_fu_6058_p2() {
    tmp_81_fu_6058_p2 = (notrhs15_fu_6052_p2.read() | notlhs15_fu_6046_p2.read());
}

void conv::thread_tmp_83_fu_6064_p2() {
    tmp_83_fu_6064_p2 = (tmp_81_fu_6058_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_84_fu_6097_p4() {
    tmp_84_fu_6097_p4 = a_assign_32_to_int_fu_6093_p1.read().range(30, 23);
}

void conv::thread_tmp_85_fu_5233_p2() {
    tmp_85_fu_5233_p2 = (!ap_const_lv13_10.is_01() || !tmp_65_reg_8695.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_10) + sc_biguint<13>(tmp_65_reg_8695.read()));
}

void conv::thread_tmp_86_fu_6123_p2() {
    tmp_86_fu_6123_p2 = (notrhs16_fu_6117_p2.read() | notlhs16_fu_6111_p2.read());
}

void conv::thread_tmp_88_fu_6129_p2() {
    tmp_88_fu_6129_p2 = (tmp_86_fu_6123_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_89_fu_6162_p4() {
    tmp_89_fu_6162_p4 = a_assign_34_to_int_fu_6158_p1.read().range(30, 23);
}

void conv::thread_tmp_8_fu_5122_p4() {
    tmp_8_fu_5122_p4 = a_assign_2_to_int_fu_5118_p1.read().range(30, 23);
}

void conv::thread_tmp_90_fu_5238_p2() {
    tmp_90_fu_5238_p2 = (!tmp_mid2_cast6_reg_8733.read().is_01() || !tmp_85_fu_5233_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_mid2_cast6_reg_8733.read()) + sc_biguint<13>(tmp_85_fu_5233_p2.read()));
}

void conv::thread_tmp_91_fu_6188_p2() {
    tmp_91_fu_6188_p2 = (notrhs17_fu_6182_p2.read() | notlhs17_fu_6176_p2.read());
}

void conv::thread_tmp_93_fu_6194_p2() {
    tmp_93_fu_6194_p2 = (tmp_91_fu_6188_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_94_fu_6227_p4() {
    tmp_94_fu_6227_p4 = a_assign_36_to_int_fu_6223_p1.read().range(30, 23);
}

void conv::thread_tmp_95_fu_5298_p2() {
    tmp_95_fu_5298_p2 = (!ap_const_lv13_18.is_01() || !tmp_65_reg_8695.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_18) + sc_biguint<13>(tmp_65_reg_8695.read()));
}

void conv::thread_tmp_96_fu_6253_p2() {
    tmp_96_fu_6253_p2 = (notrhs18_fu_6247_p2.read() | notlhs18_fu_6241_p2.read());
}

void conv::thread_tmp_98_fu_6259_p2() {
    tmp_98_fu_6259_p2 = (tmp_96_fu_6253_p2.read() & grp_fu_1760_p2.read());
}

void conv::thread_tmp_99_fu_6292_p4() {
    tmp_99_fu_6292_p4 = a_assign_38_to_int_fu_6288_p1.read().range(30, 23);
}

void conv::thread_tmp_9_0_2_fu_4140_p2() {
    tmp_9_0_2_fu_4140_p2 = (!ap_const_lv5_2.is_01() || !i_mid2_reg_6946.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_2) + sc_biguint<5>(i_mid2_reg_6946.read()));
}

void conv::thread_tmp_9_0_3_fu_4593_p2() {
    tmp_9_0_3_fu_4593_p2 = (!ap_const_lv5_3.is_01() || !i_mid2_reg_6946.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_3) + sc_biguint<5>(i_mid2_reg_6946.read()));
}

void conv::thread_tmp_9_fu_3237_p3() {
    tmp_9_fu_3237_p3 = esl_concat<60,4>(ap_const_lv60_2, tmp_mid2_v_reg_6954.read());
}

void conv::thread_tmp_cast_fu_3126_p1() {
    tmp_cast_fu_3126_p1 = esl_zext<64,5>(tmp_fu_3120_p2.read());
}

void conv::thread_tmp_fu_3120_p2() {
    tmp_fu_3120_p2 = (!ap_const_lv5_8.is_01() || !tmp_mid2_cast_fu_3117_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_8) + sc_biguint<5>(tmp_mid2_cast_fu_3117_p1.read()));
}

void conv::thread_tmp_mid2_cast4_cast_fu_3195_p1() {
    tmp_mid2_cast4_cast_fu_3195_p1 = esl_zext<6,4>(tmp_mid2_v_reg_6954.read());
}

void conv::thread_tmp_mid2_cast4_fu_3347_p1() {
    tmp_mid2_cast4_fu_3347_p1 = esl_zext<7,4>(tmp_mid2_v_reg_6954.read());
}

void conv::thread_tmp_mid2_cast5_fu_3645_p1() {
    tmp_mid2_cast5_fu_3645_p1 = esl_zext<8,4>(tmp_mid2_v_reg_6954.read());
}

void conv::thread_tmp_mid2_cast6_fu_5105_p1() {
    tmp_mid2_cast6_fu_5105_p1 = esl_zext<13,4>(ap_reg_pp0_iter1_tmp_mid2_v_reg_6954.read());
}

void conv::thread_tmp_mid2_cast_fu_3117_p1() {
    tmp_mid2_cast_fu_3117_p1 = esl_zext<5,4>(tmp_mid2_v_reg_6954.read());
}

void conv::thread_tmp_mid2_fu_3083_p1() {
    tmp_mid2_fu_3083_p1 = esl_zext<64,4>(tmp_mid2_v_fu_3075_p3.read());
}

void conv::thread_tmp_mid2_v_fu_3075_p3() {
    tmp_mid2_v_fu_3075_p3 = (!exitcond_fu_3061_p2.read()[0].is_01())? sc_lv<4>(): ((exitcond_fu_3061_p2.read()[0].to_bool())? filter_1_fu_3055_p2.read(): ap_phi_mux_filter_phi_fu_1672_p4.read());
}

void conv::thread_weight_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_163_cast_fu_3654_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_55_fu_3609_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_161_cast_fu_3576_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_50_fu_3537_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_159_cast_fu_3504_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_40_fu_3463_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_157_cast_fu_3430_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_30_fu_3389_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_155_cast_fu_3356_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_20_fu_3311_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_153_cast_fu_3278_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_9_fu_3237_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_151_cast_fu_3204_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_3_fu_3159_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_cast_fu_3126_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_address0 =  (sc_lv<7>) (tmp_mid2_fu_3083_p1.read());
        } else {
            weight_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        weight_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void conv::thread_weight_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage15.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_163_cast_fu_3654_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage14.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_55_fu_3609_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage13.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_161_cast_fu_3576_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage12.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_50_fu_3537_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage11.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_159_cast_fu_3504_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage10.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_40_fu_3463_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_157_cast_fu_3430_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_30_fu_3389_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_155_cast_fu_3356_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_20_fu_3311_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_153_cast_fu_3278_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_9_fu_3237_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_151_cast_fu_3204_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_3_fu_3159_p3.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_cast_fu_3126_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            weight_address1 =  (sc_lv<7>) (tmp_mid2_fu_3083_p1.read());
        } else {
            weight_address1 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        weight_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void conv::thread_weight_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_ce0 = ap_const_logic_1;
    } else {
        weight_ce0 = ap_const_logic_0;
    }
}

void conv::thread_weight_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_ce1 = ap_const_logic_1;
    } else {
        weight_ce1 = ap_const_logic_0;
    }
}

}

