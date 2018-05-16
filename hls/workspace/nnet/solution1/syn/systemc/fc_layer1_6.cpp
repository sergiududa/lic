#include "fc_layer1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void fc_layer1::thread_tmp_711_cast_fu_14176_p1() {
    tmp_711_cast_fu_14176_p1 = esl_zext<64,13>(tmp_711_cast1_fu_14172_p1.read());
}

void fc_layer1::thread_tmp_711_fu_15261_p2() {
    tmp_711_fu_15261_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2760.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2760));
}

void fc_layer1::thread_tmp_712_cast1_fu_14186_p1() {
    tmp_712_cast1_fu_14186_p1 = esl_sext<13,11>(tmp_689_fu_14181_p2.read());
}

void fc_layer1::thread_tmp_712_cast_fu_14190_p1() {
    tmp_712_cast_fu_14190_p1 = esl_zext<64,13>(tmp_712_cast1_fu_14186_p1.read());
}

void fc_layer1::thread_tmp_712_fu_15271_p2() {
    tmp_712_fu_15271_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_27D8.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_27D8));
}

void fc_layer1::thread_tmp_713_cast1_fu_14269_p1() {
    tmp_713_cast1_fu_14269_p1 = esl_sext<13,11>(tmp_690_fu_14264_p2.read());
}

void fc_layer1::thread_tmp_713_cast_fu_14273_p1() {
    tmp_713_cast_fu_14273_p1 = esl_zext<64,13>(tmp_713_cast1_fu_14269_p1.read());
}

void fc_layer1::thread_tmp_713_fu_15350_p2() {
    tmp_713_fu_15350_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2850.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2850));
}

void fc_layer1::thread_tmp_714_cast1_fu_14283_p1() {
    tmp_714_cast1_fu_14283_p1 = esl_sext<13,11>(tmp_691_fu_14278_p2.read());
}

void fc_layer1::thread_tmp_714_cast_fu_14287_p1() {
    tmp_714_cast_fu_14287_p1 = esl_zext<64,13>(tmp_714_cast1_fu_14283_p1.read());
}

void fc_layer1::thread_tmp_714_fu_15360_p2() {
    tmp_714_fu_15360_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_28C8.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_28C8));
}

void fc_layer1::thread_tmp_715_fu_15439_p2() {
    tmp_715_fu_15439_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2940.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2940));
}

void fc_layer1::thread_tmp_716_cast1_fu_14375_p1() {
    tmp_716_cast1_fu_14375_p1 = esl_sext<13,10>(tmp_693_fu_14370_p2.read());
}

void fc_layer1::thread_tmp_716_cast_fu_14379_p1() {
    tmp_716_cast_fu_14379_p1 = esl_zext<64,13>(tmp_716_cast1_fu_14375_p1.read());
}

void fc_layer1::thread_tmp_716_fu_15449_p2() {
    tmp_716_fu_15449_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_29B8.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_29B8));
}

void fc_layer1::thread_tmp_717_cast1_fu_14458_p1() {
    tmp_717_cast1_fu_14458_p1 = esl_sext<13,10>(tmp_694_fu_14453_p2.read());
}

void fc_layer1::thread_tmp_717_cast_fu_14462_p1() {
    tmp_717_cast_fu_14462_p1 = esl_zext<64,13>(tmp_717_cast1_fu_14458_p1.read());
}

void fc_layer1::thread_tmp_717_fu_15528_p2() {
    tmp_717_fu_15528_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2A30.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2A30));
}

void fc_layer1::thread_tmp_718_cast1_fu_14467_p1() {
    tmp_718_cast1_fu_14467_p1 = esl_sext<13,9>(tmp_631_reg_44466.read());
}

void fc_layer1::thread_tmp_718_cast_fu_14470_p1() {
    tmp_718_cast_fu_14470_p1 = esl_zext<64,13>(tmp_718_cast1_fu_14467_p1.read());
}

void fc_layer1::thread_tmp_718_fu_15538_p2() {
    tmp_718_fu_15538_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2AA8.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2AA8));
}

void fc_layer1::thread_tmp_719_cast_fu_14554_p1() {
    tmp_719_cast_fu_14554_p1 = esl_zext<64,14>(tmp_695_fu_14548_p2.read());
}

void fc_layer1::thread_tmp_719_fu_15617_p2() {
    tmp_719_fu_15617_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2B20.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2B20));
}

void fc_layer1::thread_tmp_720_cast_fu_14565_p1() {
    tmp_720_cast_fu_14565_p1 = esl_zext<64,14>(tmp_696_fu_14559_p2.read());
}

void fc_layer1::thread_tmp_720_fu_15627_p2() {
    tmp_720_fu_15627_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2B98.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2B98));
}

void fc_layer1::thread_tmp_721_cast_fu_14644_p1() {
    tmp_721_cast_fu_14644_p1 = esl_zext<64,14>(tmp_697_fu_14639_p2.read());
}

void fc_layer1::thread_tmp_721_fu_15706_p2() {
    tmp_721_fu_15706_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2C10.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2C10));
}

void fc_layer1::thread_tmp_722_cast_fu_14654_p1() {
    tmp_722_cast_fu_14654_p1 = esl_zext<64,14>(tmp_698_fu_14649_p2.read());
}

void fc_layer1::thread_tmp_722_fu_15716_p2() {
    tmp_722_fu_15716_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2C88.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2C88));
}

void fc_layer1::thread_tmp_723_cast_fu_14733_p1() {
    tmp_723_cast_fu_14733_p1 = esl_zext<64,14>(tmp_699_fu_14728_p2.read());
}

void fc_layer1::thread_tmp_723_fu_15795_p3() {
    tmp_723_fu_15795_p3 = esl_concat<57,7>(ap_const_lv57_5A, i_reg_11556.read());
}

void fc_layer1::thread_tmp_724_cast_fu_14743_p1() {
    tmp_724_cast_fu_14743_p1 = esl_zext<64,14>(tmp_700_fu_14738_p2.read());
}

void fc_layer1::thread_tmp_724_fu_15804_p2() {
    tmp_724_fu_15804_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2D78.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2D78));
}

void fc_layer1::thread_tmp_725_cast_fu_14822_p1() {
    tmp_725_cast_fu_14822_p1 = esl_zext<64,14>(tmp_701_fu_14817_p2.read());
}

void fc_layer1::thread_tmp_725_fu_15883_p2() {
    tmp_725_fu_15883_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2DF0.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2DF0));
}

void fc_layer1::thread_tmp_726_cast_fu_14832_p1() {
    tmp_726_cast_fu_14832_p1 = esl_zext<64,14>(tmp_702_fu_14827_p2.read());
}

void fc_layer1::thread_tmp_726_fu_15893_p2() {
    tmp_726_fu_15893_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2E68.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2E68));
}

void fc_layer1::thread_tmp_727_cast_fu_14911_p1() {
    tmp_727_cast_fu_14911_p1 = esl_zext<64,14>(tmp_703_fu_14906_p2.read());
}

void fc_layer1::thread_tmp_727_fu_15972_p2() {
    tmp_727_fu_15972_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2EE0.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2EE0));
}

void fc_layer1::thread_tmp_728_cast_fu_14921_p1() {
    tmp_728_cast_fu_14921_p1 = esl_zext<64,14>(tmp_704_fu_14916_p2.read());
}

void fc_layer1::thread_tmp_728_fu_15982_p2() {
    tmp_728_fu_15982_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2F58.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2F58));
}

void fc_layer1::thread_tmp_729_cast_fu_15000_p1() {
    tmp_729_cast_fu_15000_p1 = esl_zext<64,14>(tmp_705_fu_14995_p2.read());
}

void fc_layer1::thread_tmp_729_fu_16061_p2() {
    tmp_729_fu_16061_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2FD0.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2FD0));
}

void fc_layer1::thread_tmp_730_cast_fu_15010_p1() {
    tmp_730_cast_fu_15010_p1 = esl_zext<64,14>(tmp_706_fu_15005_p2.read());
}

void fc_layer1::thread_tmp_730_fu_16071_p2() {
    tmp_730_fu_16071_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1048.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1048));
}

void fc_layer1::thread_tmp_731_fu_16154_p2() {
    tmp_731_fu_16154_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_10C0.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_10C0));
}

void fc_layer1::thread_tmp_732_cast_fu_15098_p1() {
    tmp_732_cast_fu_15098_p1 = esl_zext<64,14>(tmp_708_fu_15093_p2.read());
}

void fc_layer1::thread_tmp_732_fu_16168_p2() {
    tmp_732_fu_16168_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1138.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1138));
}

void fc_layer1::thread_tmp_733_cast_fu_15177_p1() {
    tmp_733_cast_fu_15177_p1 = esl_zext<64,14>(tmp_709_fu_15172_p2.read());
}

void fc_layer1::thread_tmp_733_fu_16251_p2() {
    tmp_733_fu_16251_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_11B0.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_11B0));
}

void fc_layer1::thread_tmp_734_cast_fu_15187_p1() {
    tmp_734_cast_fu_15187_p1 = esl_zext<64,14>(tmp_710_fu_15182_p2.read());
}

void fc_layer1::thread_tmp_734_fu_16265_p2() {
    tmp_734_fu_16265_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1228.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1228));
}

void fc_layer1::thread_tmp_735_cast_fu_15266_p1() {
    tmp_735_cast_fu_15266_p1 = esl_zext<64,14>(tmp_711_fu_15261_p2.read());
}

void fc_layer1::thread_tmp_735_fu_16348_p2() {
    tmp_735_fu_16348_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_12A0.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_12A0));
}

void fc_layer1::thread_tmp_736_cast_fu_15276_p1() {
    tmp_736_cast_fu_15276_p1 = esl_zext<64,14>(tmp_712_fu_15271_p2.read());
}

void fc_layer1::thread_tmp_736_fu_16362_p2() {
    tmp_736_fu_16362_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1318.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1318));
}

void fc_layer1::thread_tmp_737_cast_fu_15355_p1() {
    tmp_737_cast_fu_15355_p1 = esl_zext<64,14>(tmp_713_fu_15350_p2.read());
}

void fc_layer1::thread_tmp_737_fu_16445_p2() {
    tmp_737_fu_16445_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1390.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1390));
}

void fc_layer1::thread_tmp_738_cast_fu_15365_p1() {
    tmp_738_cast_fu_15365_p1 = esl_zext<64,14>(tmp_714_fu_15360_p2.read());
}

void fc_layer1::thread_tmp_738_fu_16459_p2() {
    tmp_738_fu_16459_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1408.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1408));
}

void fc_layer1::thread_tmp_739_cast_fu_15444_p1() {
    tmp_739_cast_fu_15444_p1 = esl_zext<64,14>(tmp_715_fu_15439_p2.read());
}

void fc_layer1::thread_tmp_739_fu_16542_p3() {
    tmp_739_fu_16542_p3 = esl_concat<57,7>(ap_const_lv57_69, i_reg_11556.read());
}

void fc_layer1::thread_tmp_73_fu_11789_p3() {
    tmp_73_fu_11789_p3 = esl_concat<22,20>(tmp_72_reg_44537.read(), ap_const_lv20_0);
}

void fc_layer1::thread_tmp_740_cast_fu_15454_p1() {
    tmp_740_cast_fu_15454_p1 = esl_zext<64,14>(tmp_716_fu_15449_p2.read());
}

void fc_layer1::thread_tmp_740_fu_16551_p2() {
    tmp_740_fu_16551_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_14F8.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_14F8));
}

void fc_layer1::thread_tmp_741_cast_fu_15533_p1() {
    tmp_741_cast_fu_15533_p1 = esl_zext<64,14>(tmp_717_fu_15528_p2.read());
}

void fc_layer1::thread_tmp_741_fu_16634_p2() {
    tmp_741_fu_16634_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1570.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1570));
}

void fc_layer1::thread_tmp_742_cast_fu_15543_p1() {
    tmp_742_cast_fu_15543_p1 = esl_zext<64,14>(tmp_718_fu_15538_p2.read());
}

void fc_layer1::thread_tmp_742_fu_16648_p2() {
    tmp_742_fu_16648_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_15E8.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_15E8));
}

void fc_layer1::thread_tmp_743_cast_fu_15622_p1() {
    tmp_743_cast_fu_15622_p1 = esl_zext<64,14>(tmp_719_fu_15617_p2.read());
}

void fc_layer1::thread_tmp_743_fu_16731_p2() {
    tmp_743_fu_16731_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1660.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1660));
}

void fc_layer1::thread_tmp_744_cast_fu_15632_p1() {
    tmp_744_cast_fu_15632_p1 = esl_zext<64,14>(tmp_720_fu_15627_p2.read());
}

void fc_layer1::thread_tmp_744_fu_16745_p2() {
    tmp_744_fu_16745_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_16D8.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_16D8));
}

void fc_layer1::thread_tmp_745_cast_fu_15711_p1() {
    tmp_745_cast_fu_15711_p1 = esl_zext<64,14>(tmp_721_fu_15706_p2.read());
}

void fc_layer1::thread_tmp_745_fu_16828_p2() {
    tmp_745_fu_16828_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1750.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1750));
}

void fc_layer1::thread_tmp_746_cast_fu_15721_p1() {
    tmp_746_cast_fu_15721_p1 = esl_zext<64,14>(tmp_722_fu_15716_p2.read());
}

void fc_layer1::thread_tmp_746_fu_16842_p2() {
    tmp_746_fu_16842_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_17C8.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_17C8));
}

void fc_layer1::thread_tmp_747_fu_16925_p2() {
    tmp_747_fu_16925_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_840.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_840));
}

void fc_layer1::thread_tmp_748_cast_fu_15809_p1() {
    tmp_748_cast_fu_15809_p1 = esl_zext<64,14>(tmp_724_fu_15804_p2.read());
}

void fc_layer1::thread_tmp_748_fu_16939_p2() {
    tmp_748_fu_16939_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_8B8.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_8B8));
}

void fc_layer1::thread_tmp_749_cast_fu_15888_p1() {
    tmp_749_cast_fu_15888_p1 = esl_zext<64,14>(tmp_725_fu_15883_p2.read());
}

void fc_layer1::thread_tmp_749_fu_17022_p2() {
    tmp_749_fu_17022_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_930.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_930));
}

void fc_layer1::thread_tmp_750_cast_fu_15898_p1() {
    tmp_750_cast_fu_15898_p1 = esl_zext<64,14>(tmp_726_fu_15893_p2.read());
}

void fc_layer1::thread_tmp_750_fu_17036_p2() {
    tmp_750_fu_17036_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_9A8.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_9A8));
}

void fc_layer1::thread_tmp_751_cast_fu_15977_p1() {
    tmp_751_cast_fu_15977_p1 = esl_zext<64,14>(tmp_727_fu_15972_p2.read());
}

void fc_layer1::thread_tmp_751_fu_17119_p2() {
    tmp_751_fu_17119_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_A20.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_A20));
}

void fc_layer1::thread_tmp_752_cast_fu_15987_p1() {
    tmp_752_cast_fu_15987_p1 = esl_zext<64,14>(tmp_728_fu_15982_p2.read());
}

void fc_layer1::thread_tmp_752_fu_17133_p2() {
    tmp_752_fu_17133_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_A98.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_A98));
}

void fc_layer1::thread_tmp_753_cast_fu_16066_p1() {
    tmp_753_cast_fu_16066_p1 = esl_zext<64,14>(tmp_729_fu_16061_p2.read());
}

void fc_layer1::thread_tmp_753_fu_17216_p2() {
    tmp_753_fu_17216_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_B10.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_B10));
}

void fc_layer1::thread_tmp_754_cast1_fu_16076_p1() {
    tmp_754_cast1_fu_16076_p1 = esl_sext<14,13>(tmp_730_fu_16071_p2.read());
}

void fc_layer1::thread_tmp_754_cast_fu_16080_p1() {
    tmp_754_cast_fu_16080_p1 = esl_zext<64,14>(tmp_754_cast1_fu_16076_p1.read());
}

void fc_layer1::thread_tmp_754_fu_17230_p2() {
    tmp_754_fu_17230_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_B88.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_B88));
}

void fc_layer1::thread_tmp_755_cast1_fu_16159_p1() {
    tmp_755_cast1_fu_16159_p1 = esl_sext<14,13>(tmp_731_fu_16154_p2.read());
}

void fc_layer1::thread_tmp_755_cast_fu_16163_p1() {
    tmp_755_cast_fu_16163_p1 = esl_zext<64,14>(tmp_755_cast1_fu_16159_p1.read());
}

void fc_layer1::thread_tmp_755_fu_17313_p3() {
    tmp_755_fu_17313_p3 = esl_concat<57,7>(ap_const_lv57_78, i_reg_11556.read());
}

void fc_layer1::thread_tmp_756_cast1_fu_16173_p1() {
    tmp_756_cast1_fu_16173_p1 = esl_sext<14,13>(tmp_732_fu_16168_p2.read());
}

void fc_layer1::thread_tmp_756_cast_fu_16177_p1() {
    tmp_756_cast_fu_16177_p1 = esl_zext<64,14>(tmp_756_cast1_fu_16173_p1.read());
}

void fc_layer1::thread_tmp_756_fu_17322_p2() {
    tmp_756_fu_17322_p2 = (!tmp_cast8_cast3_reg_44547.read().is_01() || !ap_const_lv11_478.is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_cast8_cast3_reg_44547.read()) + sc_bigint<11>(ap_const_lv11_478));
}

void fc_layer1::thread_tmp_757_cast1_fu_16256_p1() {
    tmp_757_cast1_fu_16256_p1 = esl_sext<14,13>(tmp_733_fu_16251_p2.read());
}

void fc_layer1::thread_tmp_757_cast_fu_16260_p1() {
    tmp_757_cast_fu_16260_p1 = esl_zext<64,14>(tmp_757_cast1_fu_16256_p1.read());
}

void fc_layer1::thread_tmp_757_fu_17405_p2() {
    tmp_757_fu_17405_p2 = (!tmp_cast8_cast3_reg_44547.read().is_01() || !ap_const_lv11_4F0.is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_cast8_cast3_reg_44547.read()) + sc_bigint<11>(ap_const_lv11_4F0));
}

void fc_layer1::thread_tmp_758_cast1_fu_16270_p1() {
    tmp_758_cast1_fu_16270_p1 = esl_sext<14,13>(tmp_734_fu_16265_p2.read());
}

void fc_layer1::thread_tmp_758_cast_fu_16274_p1() {
    tmp_758_cast_fu_16274_p1 = esl_zext<64,14>(tmp_758_cast1_fu_16270_p1.read());
}

void fc_layer1::thread_tmp_758_fu_17419_p2() {
    tmp_758_fu_17419_p2 = (!tmp_cast8_cast3_reg_44547.read().is_01() || !ap_const_lv11_568.is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_cast8_cast3_reg_44547.read()) + sc_bigint<11>(ap_const_lv11_568));
}

void fc_layer1::thread_tmp_759_cast1_fu_16353_p1() {
    tmp_759_cast1_fu_16353_p1 = esl_sext<14,13>(tmp_735_fu_16348_p2.read());
}

void fc_layer1::thread_tmp_759_cast_fu_16357_p1() {
    tmp_759_cast_fu_16357_p1 = esl_zext<64,14>(tmp_759_cast1_fu_16353_p1.read());
}

void fc_layer1::thread_tmp_759_fu_17502_p2() {
    tmp_759_fu_17502_p2 = (!tmp_cast8_cast3_reg_44547.read().is_01() || !ap_const_lv11_5E0.is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_cast8_cast3_reg_44547.read()) + sc_bigint<11>(ap_const_lv11_5E0));
}

void fc_layer1::thread_tmp_760_cast1_fu_16367_p1() {
    tmp_760_cast1_fu_16367_p1 = esl_sext<14,13>(tmp_736_fu_16362_p2.read());
}

void fc_layer1::thread_tmp_760_cast_fu_16371_p1() {
    tmp_760_cast_fu_16371_p1 = esl_zext<64,14>(tmp_760_cast1_fu_16367_p1.read());
}

void fc_layer1::thread_tmp_760_fu_17682_p2() {
    tmp_760_fu_17682_p2 = (!tmp_cast8_cast_fu_17678_p1.read().is_01() || !ap_const_lv15_3FC0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_fu_17678_p1.read()) + sc_biguint<15>(ap_const_lv15_3FC0));
}

void fc_layer1::thread_tmp_761_cast1_fu_16450_p1() {
    tmp_761_cast1_fu_16450_p1 = esl_sext<14,13>(tmp_737_fu_16445_p2.read());
}

void fc_layer1::thread_tmp_761_cast_fu_16454_p1() {
    tmp_761_cast_fu_16454_p1 = esl_zext<64,14>(tmp_761_cast1_fu_16450_p1.read());
}

void fc_layer1::thread_tmp_761_fu_17693_p2() {
    tmp_761_fu_17693_p2 = (!tmp_cast8_cast_fu_17678_p1.read().is_01() || !ap_const_lv15_4038.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_fu_17678_p1.read()) + sc_bigint<15>(ap_const_lv15_4038));
}

void fc_layer1::thread_tmp_762_cast1_fu_16464_p1() {
    tmp_762_cast1_fu_16464_p1 = esl_sext<14,13>(tmp_738_fu_16459_p2.read());
}

void fc_layer1::thread_tmp_762_cast_fu_16468_p1() {
    tmp_762_cast_fu_16468_p1 = esl_zext<64,14>(tmp_762_cast1_fu_16464_p1.read());
}

void fc_layer1::thread_tmp_762_fu_17773_p2() {
    tmp_762_fu_17773_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_40B0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_40B0));
}

void fc_layer1::thread_tmp_763_fu_17783_p2() {
    tmp_763_fu_17783_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4128.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4128));
}

void fc_layer1::thread_tmp_764_cast1_fu_16556_p1() {
    tmp_764_cast1_fu_16556_p1 = esl_sext<14,13>(tmp_740_fu_16551_p2.read());
}

void fc_layer1::thread_tmp_764_cast_fu_16560_p1() {
    tmp_764_cast_fu_16560_p1 = esl_zext<64,14>(tmp_764_cast1_fu_16556_p1.read());
}

void fc_layer1::thread_tmp_764_fu_17862_p2() {
    tmp_764_fu_17862_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_41A0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_41A0));
}

void fc_layer1::thread_tmp_765_cast1_fu_16639_p1() {
    tmp_765_cast1_fu_16639_p1 = esl_sext<14,13>(tmp_741_fu_16634_p2.read());
}

void fc_layer1::thread_tmp_765_cast_fu_16643_p1() {
    tmp_765_cast_fu_16643_p1 = esl_zext<64,14>(tmp_765_cast1_fu_16639_p1.read());
}

void fc_layer1::thread_tmp_765_fu_17872_p2() {
    tmp_765_fu_17872_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4218.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4218));
}

void fc_layer1::thread_tmp_766_cast1_fu_16653_p1() {
    tmp_766_cast1_fu_16653_p1 = esl_sext<14,13>(tmp_742_fu_16648_p2.read());
}

void fc_layer1::thread_tmp_766_cast_fu_16657_p1() {
    tmp_766_cast_fu_16657_p1 = esl_zext<64,14>(tmp_766_cast1_fu_16653_p1.read());
}

void fc_layer1::thread_tmp_766_fu_17951_p2() {
    tmp_766_fu_17951_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4290.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4290));
}

void fc_layer1::thread_tmp_767_cast1_fu_16736_p1() {
    tmp_767_cast1_fu_16736_p1 = esl_sext<14,13>(tmp_743_fu_16731_p2.read());
}

void fc_layer1::thread_tmp_767_cast_fu_16740_p1() {
    tmp_767_cast_fu_16740_p1 = esl_zext<64,14>(tmp_767_cast1_fu_16736_p1.read());
}

void fc_layer1::thread_tmp_767_fu_17961_p2() {
    tmp_767_fu_17961_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4308.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4308));
}

void fc_layer1::thread_tmp_768_cast1_fu_16750_p1() {
    tmp_768_cast1_fu_16750_p1 = esl_sext<14,13>(tmp_744_fu_16745_p2.read());
}

void fc_layer1::thread_tmp_768_cast_fu_16754_p1() {
    tmp_768_cast_fu_16754_p1 = esl_zext<64,14>(tmp_768_cast1_fu_16750_p1.read());
}

void fc_layer1::thread_tmp_768_fu_18040_p3() {
    tmp_768_fu_18040_p3 = esl_concat<57,7>(ap_const_lv57_87, i_reg_11556.read());
}

void fc_layer1::thread_tmp_769_cast1_fu_16833_p1() {
    tmp_769_cast1_fu_16833_p1 = esl_sext<14,13>(tmp_745_fu_16828_p2.read());
}

void fc_layer1::thread_tmp_769_cast_fu_16837_p1() {
    tmp_769_cast_fu_16837_p1 = esl_zext<64,14>(tmp_769_cast1_fu_16833_p1.read());
}

void fc_layer1::thread_tmp_769_fu_18049_p2() {
    tmp_769_fu_18049_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_43F8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_43F8));
}

void fc_layer1::thread_tmp_770_cast1_fu_16847_p1() {
    tmp_770_cast1_fu_16847_p1 = esl_sext<14,13>(tmp_746_fu_16842_p2.read());
}

void fc_layer1::thread_tmp_770_cast_fu_16851_p1() {
    tmp_770_cast_fu_16851_p1 = esl_zext<64,14>(tmp_770_cast1_fu_16847_p1.read());
}

void fc_layer1::thread_tmp_770_fu_18128_p2() {
    tmp_770_fu_18128_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4470.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4470));
}

void fc_layer1::thread_tmp_771_cast1_fu_16930_p1() {
    tmp_771_cast1_fu_16930_p1 = esl_sext<14,12>(tmp_747_fu_16925_p2.read());
}

void fc_layer1::thread_tmp_771_cast_fu_16934_p1() {
    tmp_771_cast_fu_16934_p1 = esl_zext<64,14>(tmp_771_cast1_fu_16930_p1.read());
}

void fc_layer1::thread_tmp_771_fu_18138_p2() {
    tmp_771_fu_18138_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_44E8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_44E8));
}

void fc_layer1::thread_tmp_772_cast1_fu_16944_p1() {
    tmp_772_cast1_fu_16944_p1 = esl_sext<14,12>(tmp_748_fu_16939_p2.read());
}

void fc_layer1::thread_tmp_772_cast_fu_16948_p1() {
    tmp_772_cast_fu_16948_p1 = esl_zext<64,14>(tmp_772_cast1_fu_16944_p1.read());
}

void fc_layer1::thread_tmp_772_fu_18217_p2() {
    tmp_772_fu_18217_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4560.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4560));
}

void fc_layer1::thread_tmp_773_cast1_fu_17027_p1() {
    tmp_773_cast1_fu_17027_p1 = esl_sext<14,12>(tmp_749_fu_17022_p2.read());
}

void fc_layer1::thread_tmp_773_cast_fu_17031_p1() {
    tmp_773_cast_fu_17031_p1 = esl_zext<64,14>(tmp_773_cast1_fu_17027_p1.read());
}

void fc_layer1::thread_tmp_773_fu_18227_p2() {
    tmp_773_fu_18227_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_45D8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_45D8));
}

void fc_layer1::thread_tmp_774_cast1_fu_17041_p1() {
    tmp_774_cast1_fu_17041_p1 = esl_sext<14,12>(tmp_750_fu_17036_p2.read());
}

void fc_layer1::thread_tmp_774_cast_fu_17045_p1() {
    tmp_774_cast_fu_17045_p1 = esl_zext<64,14>(tmp_774_cast1_fu_17041_p1.read());
}

void fc_layer1::thread_tmp_774_fu_18306_p2() {
    tmp_774_fu_18306_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4650.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4650));
}

void fc_layer1::thread_tmp_775_cast1_fu_17124_p1() {
    tmp_775_cast1_fu_17124_p1 = esl_sext<14,12>(tmp_751_fu_17119_p2.read());
}

void fc_layer1::thread_tmp_775_cast_fu_17128_p1() {
    tmp_775_cast_fu_17128_p1 = esl_zext<64,14>(tmp_775_cast1_fu_17124_p1.read());
}

void fc_layer1::thread_tmp_775_fu_18316_p2() {
    tmp_775_fu_18316_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_46C8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_46C8));
}

void fc_layer1::thread_tmp_776_cast1_fu_17138_p1() {
    tmp_776_cast1_fu_17138_p1 = esl_sext<14,12>(tmp_752_fu_17133_p2.read());
}

void fc_layer1::thread_tmp_776_cast_fu_17142_p1() {
    tmp_776_cast_fu_17142_p1 = esl_zext<64,14>(tmp_776_cast1_fu_17138_p1.read());
}

void fc_layer1::thread_tmp_776_fu_18395_p2() {
    tmp_776_fu_18395_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4740.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4740));
}

void fc_layer1::thread_tmp_777_cast1_fu_17221_p1() {
    tmp_777_cast1_fu_17221_p1 = esl_sext<14,12>(tmp_753_fu_17216_p2.read());
}

void fc_layer1::thread_tmp_777_cast_fu_17225_p1() {
    tmp_777_cast_fu_17225_p1 = esl_zext<64,14>(tmp_777_cast1_fu_17221_p1.read());
}

void fc_layer1::thread_tmp_777_fu_18405_p2() {
    tmp_777_fu_18405_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_47B8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_47B8));
}

void fc_layer1::thread_tmp_778_cast1_fu_17235_p1() {
    tmp_778_cast1_fu_17235_p1 = esl_sext<14,12>(tmp_754_fu_17230_p2.read());
}

void fc_layer1::thread_tmp_778_cast_fu_17239_p1() {
    tmp_778_cast_fu_17239_p1 = esl_zext<64,14>(tmp_778_cast1_fu_17235_p1.read());
}

void fc_layer1::thread_tmp_778_fu_18484_p2() {
    tmp_778_fu_18484_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4830.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4830));
}

void fc_layer1::thread_tmp_779_fu_18494_p2() {
    tmp_779_fu_18494_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_48A8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_48A8));
}

void fc_layer1::thread_tmp_780_cast1_fu_17327_p1() {
    tmp_780_cast1_fu_17327_p1 = esl_sext<14,11>(tmp_756_fu_17322_p2.read());
}

void fc_layer1::thread_tmp_780_cast_fu_17331_p1() {
    tmp_780_cast_fu_17331_p1 = esl_zext<64,14>(tmp_780_cast1_fu_17327_p1.read());
}

void fc_layer1::thread_tmp_780_fu_18573_p2() {
    tmp_780_fu_18573_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4920.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4920));
}

void fc_layer1::thread_tmp_781_cast1_fu_17410_p1() {
    tmp_781_cast1_fu_17410_p1 = esl_sext<14,11>(tmp_757_fu_17405_p2.read());
}

void fc_layer1::thread_tmp_781_cast_fu_17414_p1() {
    tmp_781_cast_fu_17414_p1 = esl_zext<64,14>(tmp_781_cast1_fu_17410_p1.read());
}

void fc_layer1::thread_tmp_781_fu_18583_p2() {
    tmp_781_fu_18583_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4998.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4998));
}

void fc_layer1::thread_tmp_782_cast1_fu_17424_p1() {
    tmp_782_cast1_fu_17424_p1 = esl_sext<14,11>(tmp_758_fu_17419_p2.read());
}

void fc_layer1::thread_tmp_782_cast_fu_17428_p1() {
    tmp_782_cast_fu_17428_p1 = esl_zext<64,14>(tmp_782_cast1_fu_17424_p1.read());
}

void fc_layer1::thread_tmp_782_fu_18662_p2() {
    tmp_782_fu_18662_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4A10.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4A10));
}

void fc_layer1::thread_tmp_783_cast1_fu_17507_p1() {
    tmp_783_cast1_fu_17507_p1 = esl_sext<14,11>(tmp_759_fu_17502_p2.read());
}

void fc_layer1::thread_tmp_783_cast_fu_17511_p1() {
    tmp_783_cast_fu_17511_p1 = esl_zext<64,14>(tmp_783_cast1_fu_17507_p1.read());
}

void fc_layer1::thread_tmp_783_fu_18672_p2() {
    tmp_783_fu_18672_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4A88.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4A88));
}

void fc_layer1::thread_tmp_784_cast1_fu_17516_p1() {
    tmp_784_cast1_fu_17516_p1 = esl_sext<14,10>(tmp_633_reg_44492.read());
}

void fc_layer1::thread_tmp_784_cast_fu_17519_p1() {
    tmp_784_cast_fu_17519_p1 = esl_zext<64,14>(tmp_784_cast1_fu_17516_p1.read());
}

void fc_layer1::thread_tmp_784_fu_18751_p3() {
    tmp_784_fu_18751_p3 = esl_concat<57,7>(ap_const_lv57_96, i_reg_11556.read());
}

void fc_layer1::thread_tmp_785_cast1_fu_17593_p1() {
    tmp_785_cast1_fu_17593_p1 = esl_sext<14,10>(tmp_634_reg_44512.read());
}

void fc_layer1::thread_tmp_785_cast_fu_17596_p1() {
    tmp_785_cast_fu_17596_p1 = esl_zext<64,14>(tmp_785_cast1_fu_17593_p1.read());
}

void fc_layer1::thread_tmp_785_fu_18760_p2() {
    tmp_785_fu_18760_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4B78.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4B78));
}

void fc_layer1::thread_tmp_786_cast1_fu_17601_p1() {
    tmp_786_cast1_fu_17601_p1 = esl_sext<14,9>(tmp_635_reg_44522.read());
}

void fc_layer1::thread_tmp_786_cast_fu_17604_p1() {
    tmp_786_cast_fu_17604_p1 = esl_zext<64,14>(tmp_786_cast1_fu_17601_p1.read());
}

void fc_layer1::thread_tmp_786_fu_18839_p2() {
    tmp_786_fu_18839_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4BF0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4BF0));
}

void fc_layer1::thread_tmp_787_cast_fu_17688_p1() {
    tmp_787_cast_fu_17688_p1 = esl_zext<64,15>(tmp_760_fu_17682_p2.read());
}

void fc_layer1::thread_tmp_787_fu_18849_p2() {
    tmp_787_fu_18849_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4C68.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4C68));
}

void fc_layer1::thread_tmp_788_cast_fu_17699_p1() {
    tmp_788_cast_fu_17699_p1 = esl_zext<64,15>(tmp_761_fu_17693_p2.read());
}

void fc_layer1::thread_tmp_788_fu_18928_p2() {
    tmp_788_fu_18928_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4CE0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4CE0));
}

void fc_layer1::thread_tmp_789_cast_fu_17778_p1() {
    tmp_789_cast_fu_17778_p1 = esl_zext<64,15>(tmp_762_fu_17773_p2.read());
}

void fc_layer1::thread_tmp_789_fu_18938_p2() {
    tmp_789_fu_18938_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4D58.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4D58));
}

void fc_layer1::thread_tmp_790_cast_fu_17788_p1() {
    tmp_790_cast_fu_17788_p1 = esl_zext<64,15>(tmp_763_fu_17783_p2.read());
}

void fc_layer1::thread_tmp_790_fu_19017_p2() {
    tmp_790_fu_19017_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4DD0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4DD0));
}

void fc_layer1::thread_tmp_791_cast_fu_17867_p1() {
    tmp_791_cast_fu_17867_p1 = esl_zext<64,15>(tmp_764_fu_17862_p2.read());
}

void fc_layer1::thread_tmp_791_fu_19027_p2() {
    tmp_791_fu_19027_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4E48.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4E48));
}

void fc_layer1::thread_tmp_792_cast_fu_17877_p1() {
    tmp_792_cast_fu_17877_p1 = esl_zext<64,15>(tmp_765_fu_17872_p2.read());
}

void fc_layer1::thread_tmp_792_fu_19106_p2() {
    tmp_792_fu_19106_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4EC0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4EC0));
}

void fc_layer1::thread_tmp_793_cast_fu_17956_p1() {
    tmp_793_cast_fu_17956_p1 = esl_zext<64,15>(tmp_766_fu_17951_p2.read());
}

void fc_layer1::thread_tmp_793_fu_19116_p2() {
    tmp_793_fu_19116_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4F38.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4F38));
}

void fc_layer1::thread_tmp_794_cast_fu_17966_p1() {
    tmp_794_cast_fu_17966_p1 = esl_zext<64,15>(tmp_767_fu_17961_p2.read());
}

void fc_layer1::thread_tmp_794_fu_19195_p2() {
    tmp_794_fu_19195_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_4FB0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_4FB0));
}

void fc_layer1::thread_tmp_795_fu_19205_p2() {
    tmp_795_fu_19205_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5028.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5028));
}

void fc_layer1::thread_tmp_796_cast_fu_18054_p1() {
    tmp_796_cast_fu_18054_p1 = esl_zext<64,15>(tmp_769_fu_18049_p2.read());
}

void fc_layer1::thread_tmp_796_fu_19284_p2() {
    tmp_796_fu_19284_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_50A0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_50A0));
}

void fc_layer1::thread_tmp_797_cast_fu_18133_p1() {
    tmp_797_cast_fu_18133_p1 = esl_zext<64,15>(tmp_770_fu_18128_p2.read());
}

void fc_layer1::thread_tmp_797_fu_19294_p2() {
    tmp_797_fu_19294_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5118.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5118));
}

void fc_layer1::thread_tmp_798_cast_fu_18143_p1() {
    tmp_798_cast_fu_18143_p1 = esl_zext<64,15>(tmp_771_fu_18138_p2.read());
}

void fc_layer1::thread_tmp_798_fu_19373_p2() {
    tmp_798_fu_19373_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5190.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5190));
}

void fc_layer1::thread_tmp_799_cast_fu_18222_p1() {
    tmp_799_cast_fu_18222_p1 = esl_zext<64,15>(tmp_772_fu_18217_p2.read());
}

void fc_layer1::thread_tmp_799_fu_19383_p2() {
    tmp_799_fu_19383_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5208.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5208));
}

void fc_layer1::thread_tmp_800_cast_fu_18232_p1() {
    tmp_800_cast_fu_18232_p1 = esl_zext<64,15>(tmp_773_fu_18227_p2.read());
}

void fc_layer1::thread_tmp_800_fu_19462_p3() {
    tmp_800_fu_19462_p3 = esl_concat<57,7>(ap_const_lv57_A5, i_reg_11556.read());
}

void fc_layer1::thread_tmp_801_cast_fu_18311_p1() {
    tmp_801_cast_fu_18311_p1 = esl_zext<64,15>(tmp_774_fu_18306_p2.read());
}

void fc_layer1::thread_tmp_801_fu_19471_p2() {
    tmp_801_fu_19471_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_52F8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_52F8));
}

void fc_layer1::thread_tmp_802_cast_fu_18321_p1() {
    tmp_802_cast_fu_18321_p1 = esl_zext<64,15>(tmp_775_fu_18316_p2.read());
}

void fc_layer1::thread_tmp_802_fu_19550_p2() {
    tmp_802_fu_19550_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5370.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5370));
}

void fc_layer1::thread_tmp_803_cast_fu_18400_p1() {
    tmp_803_cast_fu_18400_p1 = esl_zext<64,15>(tmp_776_fu_18395_p2.read());
}

void fc_layer1::thread_tmp_803_fu_19560_p2() {
    tmp_803_fu_19560_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_53E8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_53E8));
}

void fc_layer1::thread_tmp_804_cast_fu_18410_p1() {
    tmp_804_cast_fu_18410_p1 = esl_zext<64,15>(tmp_777_fu_18405_p2.read());
}

void fc_layer1::thread_tmp_804_fu_19639_p2() {
    tmp_804_fu_19639_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5460.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5460));
}

void fc_layer1::thread_tmp_805_cast_fu_18489_p1() {
    tmp_805_cast_fu_18489_p1 = esl_zext<64,15>(tmp_778_fu_18484_p2.read());
}

void fc_layer1::thread_tmp_805_fu_19649_p2() {
    tmp_805_fu_19649_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_54D8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_54D8));
}

void fc_layer1::thread_tmp_806_cast_fu_18499_p1() {
    tmp_806_cast_fu_18499_p1 = esl_zext<64,15>(tmp_779_fu_18494_p2.read());
}

void fc_layer1::thread_tmp_806_fu_19728_p2() {
    tmp_806_fu_19728_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5550.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5550));
}

void fc_layer1::thread_tmp_807_cast_fu_18578_p1() {
    tmp_807_cast_fu_18578_p1 = esl_zext<64,15>(tmp_780_fu_18573_p2.read());
}

void fc_layer1::thread_tmp_807_fu_19738_p2() {
    tmp_807_fu_19738_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_55C8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_55C8));
}

void fc_layer1::thread_tmp_808_cast_fu_18588_p1() {
    tmp_808_cast_fu_18588_p1 = esl_zext<64,15>(tmp_781_fu_18583_p2.read());
}

void fc_layer1::thread_tmp_808_fu_19817_p2() {
    tmp_808_fu_19817_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5640.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5640));
}

void fc_layer1::thread_tmp_809_cast_fu_18667_p1() {
    tmp_809_cast_fu_18667_p1 = esl_zext<64,15>(tmp_782_fu_18662_p2.read());
}

void fc_layer1::thread_tmp_809_fu_19827_p2() {
    tmp_809_fu_19827_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_56B8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_56B8));
}

void fc_layer1::thread_tmp_810_cast_fu_18677_p1() {
    tmp_810_cast_fu_18677_p1 = esl_zext<64,15>(tmp_783_fu_18672_p2.read());
}

void fc_layer1::thread_tmp_810_fu_19906_p2() {
    tmp_810_fu_19906_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5730.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5730));
}

void fc_layer1::thread_tmp_811_fu_19916_p2() {
    tmp_811_fu_19916_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_57A8.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_57A8));
}

void fc_layer1::thread_tmp_812_cast_fu_18765_p1() {
    tmp_812_cast_fu_18765_p1 = esl_zext<64,15>(tmp_785_fu_18760_p2.read());
}

void fc_layer1::thread_tmp_812_fu_19995_p2() {
    tmp_812_fu_19995_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5820.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5820));
}

void fc_layer1::thread_tmp_813_cast_fu_18844_p1() {
    tmp_813_cast_fu_18844_p1 = esl_zext<64,15>(tmp_786_fu_18839_p2.read());
}

void fc_layer1::thread_tmp_813_fu_20005_p2() {
    tmp_813_fu_20005_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5898.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5898));
}

void fc_layer1::thread_tmp_814_cast_fu_18854_p1() {
    tmp_814_cast_fu_18854_p1 = esl_zext<64,15>(tmp_787_fu_18849_p2.read());
}

void fc_layer1::thread_tmp_814_fu_20084_p2() {
    tmp_814_fu_20084_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5910.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5910));
}

void fc_layer1::thread_tmp_815_cast_fu_18933_p1() {
    tmp_815_cast_fu_18933_p1 = esl_zext<64,15>(tmp_788_fu_18928_p2.read());
}

void fc_layer1::thread_tmp_815_fu_20094_p2() {
    tmp_815_fu_20094_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5988.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5988));
}

void fc_layer1::thread_tmp_816_cast_fu_18943_p1() {
    tmp_816_cast_fu_18943_p1 = esl_zext<64,15>(tmp_789_fu_18938_p2.read());
}

void fc_layer1::thread_tmp_816_fu_20173_p3() {
    tmp_816_fu_20173_p3 = esl_concat<57,7>(ap_const_lv57_B4, i_reg_11556.read());
}

void fc_layer1::thread_tmp_817_cast_fu_19022_p1() {
    tmp_817_cast_fu_19022_p1 = esl_zext<64,15>(tmp_790_fu_19017_p2.read());
}

void fc_layer1::thread_tmp_817_fu_20182_p2() {
    tmp_817_fu_20182_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5A78.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5A78));
}

void fc_layer1::thread_tmp_818_cast_fu_19032_p1() {
    tmp_818_cast_fu_19032_p1 = esl_zext<64,15>(tmp_791_fu_19027_p2.read());
}

void fc_layer1::thread_tmp_818_fu_20261_p2() {
    tmp_818_fu_20261_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5AF0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5AF0));
}

void fc_layer1::thread_tmp_819_cast_fu_19111_p1() {
    tmp_819_cast_fu_19111_p1 = esl_zext<64,15>(tmp_792_fu_19106_p2.read());
}

void fc_layer1::thread_tmp_819_fu_20271_p2() {
    tmp_819_fu_20271_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5B68.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5B68));
}

void fc_layer1::thread_tmp_820_cast_fu_19121_p1() {
    tmp_820_cast_fu_19121_p1 = esl_zext<64,15>(tmp_793_fu_19116_p2.read());
}

void fc_layer1::thread_tmp_820_fu_20350_p2() {
    tmp_820_fu_20350_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5BE0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5BE0));
}

void fc_layer1::thread_tmp_821_cast_fu_19200_p1() {
    tmp_821_cast_fu_19200_p1 = esl_zext<64,15>(tmp_794_fu_19195_p2.read());
}

void fc_layer1::thread_tmp_821_fu_20360_p2() {
    tmp_821_fu_20360_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5C58.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5C58));
}

void fc_layer1::thread_tmp_822_cast_fu_19210_p1() {
    tmp_822_cast_fu_19210_p1 = esl_zext<64,15>(tmp_795_fu_19205_p2.read());
}

void fc_layer1::thread_tmp_822_fu_20439_p2() {
    tmp_822_fu_20439_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5CD0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5CD0));
}

void fc_layer1::thread_tmp_823_cast_fu_19289_p1() {
    tmp_823_cast_fu_19289_p1 = esl_zext<64,15>(tmp_796_fu_19284_p2.read());
}

void fc_layer1::thread_tmp_823_fu_20449_p2() {
    tmp_823_fu_20449_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5D48.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5D48));
}

void fc_layer1::thread_tmp_824_cast_fu_19299_p1() {
    tmp_824_cast_fu_19299_p1 = esl_zext<64,15>(tmp_797_fu_19294_p2.read());
}

void fc_layer1::thread_tmp_824_fu_20528_p2() {
    tmp_824_fu_20528_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5DC0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5DC0));
}

void fc_layer1::thread_tmp_825_cast_fu_19378_p1() {
    tmp_825_cast_fu_19378_p1 = esl_zext<64,15>(tmp_798_fu_19373_p2.read());
}

void fc_layer1::thread_tmp_825_fu_20538_p2() {
    tmp_825_fu_20538_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5E38.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5E38));
}

void fc_layer1::thread_tmp_826_cast_fu_19388_p1() {
    tmp_826_cast_fu_19388_p1 = esl_zext<64,15>(tmp_799_fu_19383_p2.read());
}

void fc_layer1::thread_tmp_826_fu_20617_p2() {
    tmp_826_fu_20617_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5EB0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5EB0));
}

void fc_layer1::thread_tmp_827_fu_20627_p2() {
    tmp_827_fu_20627_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5F28.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5F28));
}

void fc_layer1::thread_tmp_828_cast_fu_19476_p1() {
    tmp_828_cast_fu_19476_p1 = esl_zext<64,15>(tmp_801_fu_19471_p2.read());
}

void fc_layer1::thread_tmp_828_fu_20706_p2() {
    tmp_828_fu_20706_p2 = (!tmp_cast8_cast_reg_46478.read().is_01() || !ap_const_lv15_5FA0.is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_cast8_cast_reg_46478.read()) + sc_bigint<15>(ap_const_lv15_5FA0));
}

void fc_layer1::thread_tmp_829_cast_fu_19555_p1() {
    tmp_829_cast_fu_19555_p1 = esl_zext<64,15>(tmp_802_fu_19550_p2.read());
}

void fc_layer1::thread_tmp_829_fu_20716_p2() {
    tmp_829_fu_20716_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2018.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2018));
}

void fc_layer1::thread_tmp_830_cast_fu_19565_p1() {
    tmp_830_cast_fu_19565_p1 = esl_zext<64,15>(tmp_803_fu_19560_p2.read());
}

void fc_layer1::thread_tmp_830_fu_20799_p2() {
    tmp_830_fu_20799_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2090.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2090));
}

void fc_layer1::thread_tmp_831_cast_fu_19644_p1() {
    tmp_831_cast_fu_19644_p1 = esl_zext<64,15>(tmp_804_fu_19639_p2.read());
}

void fc_layer1::thread_tmp_831_fu_20813_p2() {
    tmp_831_fu_20813_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2108.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2108));
}

void fc_layer1::thread_tmp_832_cast_fu_19654_p1() {
    tmp_832_cast_fu_19654_p1 = esl_zext<64,15>(tmp_805_fu_19649_p2.read());
}

void fc_layer1::thread_tmp_832_fu_20896_p3() {
    tmp_832_fu_20896_p3 = esl_concat<57,7>(ap_const_lv57_C3, i_reg_11556.read());
}

void fc_layer1::thread_tmp_833_cast_fu_19733_p1() {
    tmp_833_cast_fu_19733_p1 = esl_zext<64,15>(tmp_806_fu_19728_p2.read());
}

void fc_layer1::thread_tmp_833_fu_20905_p2() {
    tmp_833_fu_20905_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_21F8.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_21F8));
}

void fc_layer1::thread_tmp_834_cast_fu_19743_p1() {
    tmp_834_cast_fu_19743_p1 = esl_zext<64,15>(tmp_807_fu_19738_p2.read());
}

void fc_layer1::thread_tmp_834_fu_20988_p2() {
    tmp_834_fu_20988_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2270.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2270));
}

void fc_layer1::thread_tmp_835_cast_fu_19822_p1() {
    tmp_835_cast_fu_19822_p1 = esl_zext<64,15>(tmp_808_fu_19817_p2.read());
}

void fc_layer1::thread_tmp_835_fu_21002_p2() {
    tmp_835_fu_21002_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_22E8.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_22E8));
}

void fc_layer1::thread_tmp_836_cast_fu_19832_p1() {
    tmp_836_cast_fu_19832_p1 = esl_zext<64,15>(tmp_809_fu_19827_p2.read());
}

void fc_layer1::thread_tmp_836_fu_21085_p2() {
    tmp_836_fu_21085_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2360.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2360));
}

void fc_layer1::thread_tmp_837_cast_fu_19911_p1() {
    tmp_837_cast_fu_19911_p1 = esl_zext<64,15>(tmp_810_fu_19906_p2.read());
}

void fc_layer1::thread_tmp_837_fu_21099_p2() {
    tmp_837_fu_21099_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_23D8.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_23D8));
}

void fc_layer1::thread_tmp_838_cast_fu_19921_p1() {
    tmp_838_cast_fu_19921_p1 = esl_zext<64,15>(tmp_811_fu_19916_p2.read());
}

void fc_layer1::thread_tmp_838_fu_21182_p2() {
    tmp_838_fu_21182_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2450.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2450));
}

void fc_layer1::thread_tmp_839_cast_fu_20000_p1() {
    tmp_839_cast_fu_20000_p1 = esl_zext<64,15>(tmp_812_fu_19995_p2.read());
}

void fc_layer1::thread_tmp_839_fu_21196_p2() {
    tmp_839_fu_21196_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_24C8.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_24C8));
}

void fc_layer1::thread_tmp_840_cast_fu_20010_p1() {
    tmp_840_cast_fu_20010_p1 = esl_zext<64,15>(tmp_813_fu_20005_p2.read());
}

void fc_layer1::thread_tmp_840_fu_21279_p2() {
    tmp_840_fu_21279_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2540.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2540));
}

void fc_layer1::thread_tmp_841_cast_fu_20089_p1() {
    tmp_841_cast_fu_20089_p1 = esl_zext<64,15>(tmp_814_fu_20084_p2.read());
}

void fc_layer1::thread_tmp_841_fu_21293_p2() {
    tmp_841_fu_21293_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_25B8.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_25B8));
}

void fc_layer1::thread_tmp_842_cast_fu_20099_p1() {
    tmp_842_cast_fu_20099_p1 = esl_zext<64,15>(tmp_815_fu_20094_p2.read());
}

void fc_layer1::thread_tmp_842_fu_21376_p2() {
    tmp_842_fu_21376_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2630.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2630));
}

void fc_layer1::thread_tmp_843_fu_21390_p2() {
    tmp_843_fu_21390_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_26A8.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_26A8));
}

void fc_layer1::thread_tmp_844_cast_fu_20187_p1() {
    tmp_844_cast_fu_20187_p1 = esl_zext<64,15>(tmp_817_fu_20182_p2.read());
}

void fc_layer1::thread_tmp_844_fu_21473_p2() {
    tmp_844_fu_21473_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2720.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2720));
}

void fc_layer1::thread_tmp_845_cast_fu_20266_p1() {
    tmp_845_cast_fu_20266_p1 = esl_zext<64,15>(tmp_818_fu_20261_p2.read());
}

void fc_layer1::thread_tmp_845_fu_21487_p2() {
    tmp_845_fu_21487_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2798.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2798));
}

void fc_layer1::thread_tmp_846_cast_fu_20276_p1() {
    tmp_846_cast_fu_20276_p1 = esl_zext<64,15>(tmp_819_fu_20271_p2.read());
}

void fc_layer1::thread_tmp_846_fu_21570_p2() {
    tmp_846_fu_21570_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2810.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2810));
}

void fc_layer1::thread_tmp_847_cast_fu_20355_p1() {
    tmp_847_cast_fu_20355_p1 = esl_zext<64,15>(tmp_820_fu_20350_p2.read());
}

void fc_layer1::thread_tmp_847_fu_21584_p2() {
    tmp_847_fu_21584_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2888.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2888));
}

void fc_layer1::thread_tmp_848_cast_fu_20365_p1() {
    tmp_848_cast_fu_20365_p1 = esl_zext<64,15>(tmp_821_fu_20360_p2.read());
}

void fc_layer1::thread_tmp_848_fu_21667_p3() {
    tmp_848_fu_21667_p3 = esl_concat<57,7>(ap_const_lv57_D2, i_reg_11556.read());
}

void fc_layer1::thread_tmp_849_cast_fu_20444_p1() {
    tmp_849_cast_fu_20444_p1 = esl_zext<64,15>(tmp_822_fu_20439_p2.read());
}

void fc_layer1::thread_tmp_849_fu_21676_p2() {
    tmp_849_fu_21676_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2978.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2978));
}

void fc_layer1::thread_tmp_850_cast_fu_20454_p1() {
    tmp_850_cast_fu_20454_p1 = esl_zext<64,15>(tmp_823_fu_20449_p2.read());
}

void fc_layer1::thread_tmp_850_fu_21759_p2() {
    tmp_850_fu_21759_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_29F0.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_29F0));
}

void fc_layer1::thread_tmp_851_cast_fu_20533_p1() {
    tmp_851_cast_fu_20533_p1 = esl_zext<64,15>(tmp_824_fu_20528_p2.read());
}

void fc_layer1::thread_tmp_851_fu_21773_p2() {
    tmp_851_fu_21773_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2A68.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2A68));
}

void fc_layer1::thread_tmp_852_cast_fu_20543_p1() {
    tmp_852_cast_fu_20543_p1 = esl_zext<64,15>(tmp_825_fu_20538_p2.read());
}

void fc_layer1::thread_tmp_852_fu_21856_p2() {
    tmp_852_fu_21856_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2AE0.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2AE0));
}

void fc_layer1::thread_tmp_853_cast_fu_20622_p1() {
    tmp_853_cast_fu_20622_p1 = esl_zext<64,15>(tmp_826_fu_20617_p2.read());
}

void fc_layer1::thread_tmp_853_fu_21870_p2() {
    tmp_853_fu_21870_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2B58.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2B58));
}

void fc_layer1::thread_tmp_854_cast_fu_20632_p1() {
    tmp_854_cast_fu_20632_p1 = esl_zext<64,15>(tmp_827_fu_20627_p2.read());
}

void fc_layer1::thread_tmp_854_fu_21953_p2() {
    tmp_854_fu_21953_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2BD0.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2BD0));
}

void fc_layer1::thread_tmp_855_cast_fu_20711_p1() {
    tmp_855_cast_fu_20711_p1 = esl_zext<64,15>(tmp_828_fu_20706_p2.read());
}

void fc_layer1::thread_tmp_855_fu_21967_p2() {
    tmp_855_fu_21967_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2C48.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2C48));
}

void fc_layer1::thread_tmp_856_cast1_fu_20721_p1() {
    tmp_856_cast1_fu_20721_p1 = esl_sext<15,14>(tmp_829_fu_20716_p2.read());
}

void fc_layer1::thread_tmp_856_cast_fu_20725_p1() {
    tmp_856_cast_fu_20725_p1 = esl_zext<64,15>(tmp_856_cast1_fu_20721_p1.read());
}

void fc_layer1::thread_tmp_856_fu_22050_p2() {
    tmp_856_fu_22050_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2CC0.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2CC0));
}

void fc_layer1::thread_tmp_857_cast1_fu_20804_p1() {
    tmp_857_cast1_fu_20804_p1 = esl_sext<15,14>(tmp_830_fu_20799_p2.read());
}

void fc_layer1::thread_tmp_857_cast_fu_20808_p1() {
    tmp_857_cast_fu_20808_p1 = esl_zext<64,15>(tmp_857_cast1_fu_20804_p1.read());
}

void fc_layer1::thread_tmp_857_fu_22064_p2() {
    tmp_857_fu_22064_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2D38.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2D38));
}

void fc_layer1::thread_tmp_858_cast1_fu_20818_p1() {
    tmp_858_cast1_fu_20818_p1 = esl_sext<15,14>(tmp_831_fu_20813_p2.read());
}

void fc_layer1::thread_tmp_858_cast_fu_20822_p1() {
    tmp_858_cast_fu_20822_p1 = esl_zext<64,15>(tmp_858_cast1_fu_20818_p1.read());
}

void fc_layer1::thread_tmp_858_fu_22147_p2() {
    tmp_858_fu_22147_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2DB0.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2DB0));
}

void fc_layer1::thread_tmp_859_fu_22161_p2() {
    tmp_859_fu_22161_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2E28.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2E28));
}

void fc_layer1::thread_tmp_860_cast1_fu_20910_p1() {
    tmp_860_cast1_fu_20910_p1 = esl_sext<15,14>(tmp_833_fu_20905_p2.read());
}

void fc_layer1::thread_tmp_860_cast_fu_20914_p1() {
    tmp_860_cast_fu_20914_p1 = esl_zext<64,15>(tmp_860_cast1_fu_20910_p1.read());
}

void fc_layer1::thread_tmp_860_fu_22244_p2() {
    tmp_860_fu_22244_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2EA0.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2EA0));
}

void fc_layer1::thread_tmp_861_cast1_fu_20993_p1() {
    tmp_861_cast1_fu_20993_p1 = esl_sext<15,14>(tmp_834_fu_20988_p2.read());
}

void fc_layer1::thread_tmp_861_cast_fu_20997_p1() {
    tmp_861_cast_fu_20997_p1 = esl_zext<64,15>(tmp_861_cast1_fu_20993_p1.read());
}

void fc_layer1::thread_tmp_861_fu_22258_p2() {
    tmp_861_fu_22258_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2F18.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2F18));
}

void fc_layer1::thread_tmp_862_cast1_fu_21007_p1() {
    tmp_862_cast1_fu_21007_p1 = esl_sext<15,14>(tmp_835_fu_21002_p2.read());
}

void fc_layer1::thread_tmp_862_cast_fu_21011_p1() {
    tmp_862_cast_fu_21011_p1 = esl_zext<64,15>(tmp_862_cast1_fu_21007_p1.read());
}

void fc_layer1::thread_tmp_862_fu_22341_p2() {
    tmp_862_fu_22341_p2 = (!tmp_cast8_cast6_reg_45529.read().is_01() || !ap_const_lv14_2F90.is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_cast8_cast6_reg_45529.read()) + sc_bigint<14>(ap_const_lv14_2F90));
}

void fc_layer1::thread_tmp_863_cast1_fu_21090_p1() {
    tmp_863_cast1_fu_21090_p1 = esl_sext<15,14>(tmp_836_fu_21085_p2.read());
}

void fc_layer1::thread_tmp_863_cast_fu_21094_p1() {
    tmp_863_cast_fu_21094_p1 = esl_zext<64,15>(tmp_863_cast1_fu_21090_p1.read());
}

void fc_layer1::thread_tmp_863_fu_22355_p2() {
    tmp_863_fu_22355_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1008.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1008));
}

void fc_layer1::thread_tmp_864_cast1_fu_21104_p1() {
    tmp_864_cast1_fu_21104_p1 = esl_sext<15,14>(tmp_837_fu_21099_p2.read());
}

void fc_layer1::thread_tmp_864_cast_fu_21108_p1() {
    tmp_864_cast_fu_21108_p1 = esl_zext<64,15>(tmp_864_cast1_fu_21104_p1.read());
}

void fc_layer1::thread_tmp_864_fu_22438_p3() {
    tmp_864_fu_22438_p3 = esl_concat<57,7>(ap_const_lv57_E1, i_reg_11556.read());
}

void fc_layer1::thread_tmp_865_cast1_fu_21187_p1() {
    tmp_865_cast1_fu_21187_p1 = esl_sext<15,14>(tmp_838_fu_21182_p2.read());
}

void fc_layer1::thread_tmp_865_cast_fu_21191_p1() {
    tmp_865_cast_fu_21191_p1 = esl_zext<64,15>(tmp_865_cast1_fu_21187_p1.read());
}

void fc_layer1::thread_tmp_865_fu_22447_p2() {
    tmp_865_fu_22447_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_10F8.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_10F8));
}

void fc_layer1::thread_tmp_866_cast1_fu_21201_p1() {
    tmp_866_cast1_fu_21201_p1 = esl_sext<15,14>(tmp_839_fu_21196_p2.read());
}

void fc_layer1::thread_tmp_866_cast_fu_21205_p1() {
    tmp_866_cast_fu_21205_p1 = esl_zext<64,15>(tmp_866_cast1_fu_21201_p1.read());
}

void fc_layer1::thread_tmp_866_fu_22530_p2() {
    tmp_866_fu_22530_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1170.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1170));
}

void fc_layer1::thread_tmp_867_cast1_fu_21284_p1() {
    tmp_867_cast1_fu_21284_p1 = esl_sext<15,14>(tmp_840_fu_21279_p2.read());
}

void fc_layer1::thread_tmp_867_cast_fu_21288_p1() {
    tmp_867_cast_fu_21288_p1 = esl_zext<64,15>(tmp_867_cast1_fu_21284_p1.read());
}

void fc_layer1::thread_tmp_867_fu_22544_p2() {
    tmp_867_fu_22544_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_11E8.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_11E8));
}

void fc_layer1::thread_tmp_868_cast1_fu_21298_p1() {
    tmp_868_cast1_fu_21298_p1 = esl_sext<15,14>(tmp_841_fu_21293_p2.read());
}

void fc_layer1::thread_tmp_868_cast_fu_21302_p1() {
    tmp_868_cast_fu_21302_p1 = esl_zext<64,15>(tmp_868_cast1_fu_21298_p1.read());
}

void fc_layer1::thread_tmp_868_fu_22627_p2() {
    tmp_868_fu_22627_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1260.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1260));
}

void fc_layer1::thread_tmp_869_cast1_fu_21381_p1() {
    tmp_869_cast1_fu_21381_p1 = esl_sext<15,14>(tmp_842_fu_21376_p2.read());
}

void fc_layer1::thread_tmp_869_cast_fu_21385_p1() {
    tmp_869_cast_fu_21385_p1 = esl_zext<64,15>(tmp_869_cast1_fu_21381_p1.read());
}

void fc_layer1::thread_tmp_869_fu_22641_p2() {
    tmp_869_fu_22641_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_12D8.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_12D8));
}

void fc_layer1::thread_tmp_870_cast1_fu_21395_p1() {
    tmp_870_cast1_fu_21395_p1 = esl_sext<15,14>(tmp_843_fu_21390_p2.read());
}

void fc_layer1::thread_tmp_870_cast_fu_21399_p1() {
    tmp_870_cast_fu_21399_p1 = esl_zext<64,15>(tmp_870_cast1_fu_21395_p1.read());
}

void fc_layer1::thread_tmp_870_fu_22724_p2() {
    tmp_870_fu_22724_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1350.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1350));
}

void fc_layer1::thread_tmp_871_cast1_fu_21478_p1() {
    tmp_871_cast1_fu_21478_p1 = esl_sext<15,14>(tmp_844_fu_21473_p2.read());
}

void fc_layer1::thread_tmp_871_cast_fu_21482_p1() {
    tmp_871_cast_fu_21482_p1 = esl_zext<64,15>(tmp_871_cast1_fu_21478_p1.read());
}

void fc_layer1::thread_tmp_871_fu_22738_p2() {
    tmp_871_fu_22738_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_13C8.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_13C8));
}

void fc_layer1::thread_tmp_872_cast1_fu_21492_p1() {
    tmp_872_cast1_fu_21492_p1 = esl_sext<15,14>(tmp_845_fu_21487_p2.read());
}

void fc_layer1::thread_tmp_872_cast_fu_21496_p1() {
    tmp_872_cast_fu_21496_p1 = esl_zext<64,15>(tmp_872_cast1_fu_21492_p1.read());
}

void fc_layer1::thread_tmp_872_fu_22821_p2() {
    tmp_872_fu_22821_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1440.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1440));
}

void fc_layer1::thread_tmp_873_cast1_fu_21575_p1() {
    tmp_873_cast1_fu_21575_p1 = esl_sext<15,14>(tmp_846_fu_21570_p2.read());
}

void fc_layer1::thread_tmp_873_cast_fu_21579_p1() {
    tmp_873_cast_fu_21579_p1 = esl_zext<64,15>(tmp_873_cast1_fu_21575_p1.read());
}

void fc_layer1::thread_tmp_873_fu_22835_p2() {
    tmp_873_fu_22835_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_14B8.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_14B8));
}

void fc_layer1::thread_tmp_874_cast1_fu_21589_p1() {
    tmp_874_cast1_fu_21589_p1 = esl_sext<15,14>(tmp_847_fu_21584_p2.read());
}

void fc_layer1::thread_tmp_874_cast_fu_21593_p1() {
    tmp_874_cast_fu_21593_p1 = esl_zext<64,15>(tmp_874_cast1_fu_21589_p1.read());
}

void fc_layer1::thread_tmp_874_fu_22918_p2() {
    tmp_874_fu_22918_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1530.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1530));
}

void fc_layer1::thread_tmp_875_fu_22932_p2() {
    tmp_875_fu_22932_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_15A8.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_15A8));
}

void fc_layer1::thread_tmp_876_cast1_fu_21681_p1() {
    tmp_876_cast1_fu_21681_p1 = esl_sext<15,14>(tmp_849_fu_21676_p2.read());
}

void fc_layer1::thread_tmp_876_cast_fu_21685_p1() {
    tmp_876_cast_fu_21685_p1 = esl_zext<64,15>(tmp_876_cast1_fu_21681_p1.read());
}

void fc_layer1::thread_tmp_876_fu_23015_p2() {
    tmp_876_fu_23015_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1620.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1620));
}

void fc_layer1::thread_tmp_877_cast1_fu_21764_p1() {
    tmp_877_cast1_fu_21764_p1 = esl_sext<15,14>(tmp_850_fu_21759_p2.read());
}

void fc_layer1::thread_tmp_877_cast_fu_21768_p1() {
    tmp_877_cast_fu_21768_p1 = esl_zext<64,15>(tmp_877_cast1_fu_21764_p1.read());
}

void fc_layer1::thread_tmp_877_fu_23029_p2() {
    tmp_877_fu_23029_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1698.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1698));
}

void fc_layer1::thread_tmp_878_cast1_fu_21778_p1() {
    tmp_878_cast1_fu_21778_p1 = esl_sext<15,14>(tmp_851_fu_21773_p2.read());
}

void fc_layer1::thread_tmp_878_cast_fu_21782_p1() {
    tmp_878_cast_fu_21782_p1 = esl_zext<64,15>(tmp_878_cast1_fu_21778_p1.read());
}

void fc_layer1::thread_tmp_878_fu_23112_p2() {
    tmp_878_fu_23112_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1710.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1710));
}

void fc_layer1::thread_tmp_879_cast1_fu_21861_p1() {
    tmp_879_cast1_fu_21861_p1 = esl_sext<15,14>(tmp_852_fu_21856_p2.read());
}

void fc_layer1::thread_tmp_879_cast_fu_21865_p1() {
    tmp_879_cast_fu_21865_p1 = esl_zext<64,15>(tmp_879_cast1_fu_21861_p1.read());
}

void fc_layer1::thread_tmp_879_fu_23126_p2() {
    tmp_879_fu_23126_p2 = (!tmp_cast8_cast5_reg_45037.read().is_01() || !ap_const_lv13_1788.is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast8_cast5_reg_45037.read()) + sc_bigint<13>(ap_const_lv13_1788));
}

void fc_layer1::thread_tmp_880_cast1_fu_21875_p1() {
    tmp_880_cast1_fu_21875_p1 = esl_sext<15,14>(tmp_853_fu_21870_p2.read());
}

void fc_layer1::thread_tmp_880_cast_fu_21879_p1() {
    tmp_880_cast_fu_21879_p1 = esl_zext<64,15>(tmp_880_cast1_fu_21875_p1.read());
}

void fc_layer1::thread_tmp_880_fu_23209_p3() {
    tmp_880_fu_23209_p3 = esl_concat<57,7>(ap_const_lv57_F0, i_reg_11556.read());
}

void fc_layer1::thread_tmp_881_cast1_fu_21958_p1() {
    tmp_881_cast1_fu_21958_p1 = esl_sext<15,14>(tmp_854_fu_21953_p2.read());
}

void fc_layer1::thread_tmp_881_cast_fu_21962_p1() {
    tmp_881_cast_fu_21962_p1 = esl_zext<64,15>(tmp_881_cast1_fu_21958_p1.read());
}

void fc_layer1::thread_tmp_881_fu_23218_p2() {
    tmp_881_fu_23218_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_878.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_878));
}

void fc_layer1::thread_tmp_882_cast1_fu_21972_p1() {
    tmp_882_cast1_fu_21972_p1 = esl_sext<15,14>(tmp_855_fu_21967_p2.read());
}

void fc_layer1::thread_tmp_882_cast_fu_21976_p1() {
    tmp_882_cast_fu_21976_p1 = esl_zext<64,15>(tmp_882_cast1_fu_21972_p1.read());
}

void fc_layer1::thread_tmp_882_fu_23301_p2() {
    tmp_882_fu_23301_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_8F0.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_8F0));
}

void fc_layer1::thread_tmp_883_cast1_fu_22055_p1() {
    tmp_883_cast1_fu_22055_p1 = esl_sext<15,14>(tmp_856_fu_22050_p2.read());
}

void fc_layer1::thread_tmp_883_cast_fu_22059_p1() {
    tmp_883_cast_fu_22059_p1 = esl_zext<64,15>(tmp_883_cast1_fu_22055_p1.read());
}

void fc_layer1::thread_tmp_883_fu_23315_p2() {
    tmp_883_fu_23315_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_968.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_968));
}

void fc_layer1::thread_tmp_884_cast1_fu_22069_p1() {
    tmp_884_cast1_fu_22069_p1 = esl_sext<15,14>(tmp_857_fu_22064_p2.read());
}

void fc_layer1::thread_tmp_884_cast_fu_22073_p1() {
    tmp_884_cast_fu_22073_p1 = esl_zext<64,15>(tmp_884_cast1_fu_22069_p1.read());
}

void fc_layer1::thread_tmp_884_fu_23398_p2() {
    tmp_884_fu_23398_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_9E0.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_9E0));
}

void fc_layer1::thread_tmp_885_cast1_fu_22152_p1() {
    tmp_885_cast1_fu_22152_p1 = esl_sext<15,14>(tmp_858_fu_22147_p2.read());
}

void fc_layer1::thread_tmp_885_cast_fu_22156_p1() {
    tmp_885_cast_fu_22156_p1 = esl_zext<64,15>(tmp_885_cast1_fu_22152_p1.read());
}

void fc_layer1::thread_tmp_885_fu_23412_p2() {
    tmp_885_fu_23412_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_A58.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_A58));
}

void fc_layer1::thread_tmp_886_cast1_fu_22166_p1() {
    tmp_886_cast1_fu_22166_p1 = esl_sext<15,14>(tmp_859_fu_22161_p2.read());
}

void fc_layer1::thread_tmp_886_cast_fu_22170_p1() {
    tmp_886_cast_fu_22170_p1 = esl_zext<64,15>(tmp_886_cast1_fu_22166_p1.read());
}

void fc_layer1::thread_tmp_886_fu_23495_p2() {
    tmp_886_fu_23495_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_AD0.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_AD0));
}

void fc_layer1::thread_tmp_887_cast1_fu_22249_p1() {
    tmp_887_cast1_fu_22249_p1 = esl_sext<15,14>(tmp_860_fu_22244_p2.read());
}

void fc_layer1::thread_tmp_887_cast_fu_22253_p1() {
    tmp_887_cast_fu_22253_p1 = esl_zext<64,15>(tmp_887_cast1_fu_22249_p1.read());
}

void fc_layer1::thread_tmp_887_fu_23509_p2() {
    tmp_887_fu_23509_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_B48.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_B48));
}

void fc_layer1::thread_tmp_888_cast1_fu_22263_p1() {
    tmp_888_cast1_fu_22263_p1 = esl_sext<15,14>(tmp_861_fu_22258_p2.read());
}

void fc_layer1::thread_tmp_888_cast_fu_22267_p1() {
    tmp_888_cast_fu_22267_p1 = esl_zext<64,15>(tmp_888_cast1_fu_22263_p1.read());
}

void fc_layer1::thread_tmp_888_fu_23592_p2() {
    tmp_888_fu_23592_p2 = (!tmp_cast8_cast4_reg_44701.read().is_01() || !ap_const_lv12_BC0.is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast8_cast4_reg_44701.read()) + sc_bigint<12>(ap_const_lv12_BC0));
}

void fc_layer1::thread_tmp_889_cast1_fu_22346_p1() {
    tmp_889_cast1_fu_22346_p1 = esl_sext<15,14>(tmp_862_fu_22341_p2.read());
}

void fc_layer1::thread_tmp_889_cast_fu_22350_p1() {
    tmp_889_cast_fu_22350_p1 = esl_zext<64,15>(tmp_889_cast1_fu_22346_p1.read());
}

void fc_layer1::thread_tmp_889_fu_23942_p3() {
    tmp_889_fu_23942_p3 = esl_concat<57,7>(ap_const_lv57_FF, i_reg_11556.read());
}

void fc_layer1::thread_tmp_890_cast1_fu_22360_p1() {
    tmp_890_cast1_fu_22360_p1 = esl_sext<15,13>(tmp_863_fu_22355_p2.read());
}

void fc_layer1::thread_tmp_890_cast_fu_22364_p1() {
    tmp_890_cast_fu_22364_p1 = esl_zext<64,15>(tmp_890_cast1_fu_22360_p1.read());
}

void fc_layer1::thread_tmp_890_fu_23951_p2() {
    tmp_890_fu_23951_p2 = (!tmp_cast8_fu_23938_p1.read().is_01() || !ap_const_lv16_7FF8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_fu_23938_p1.read()) + sc_biguint<16>(ap_const_lv16_7FF8));
}

void fc_layer1::thread_tmp_891_fu_24031_p2() {
    tmp_891_fu_24031_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8070.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8070));
}

void fc_layer1::thread_tmp_892_cast1_fu_22452_p1() {
    tmp_892_cast1_fu_22452_p1 = esl_sext<15,13>(tmp_865_fu_22447_p2.read());
}

void fc_layer1::thread_tmp_892_cast_fu_22456_p1() {
    tmp_892_cast_fu_22456_p1 = esl_zext<64,15>(tmp_892_cast1_fu_22452_p1.read());
}

void fc_layer1::thread_tmp_892_fu_24041_p2() {
    tmp_892_fu_24041_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_80E8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_80E8));
}

void fc_layer1::thread_tmp_893_cast1_fu_22535_p1() {
    tmp_893_cast1_fu_22535_p1 = esl_sext<15,13>(tmp_866_fu_22530_p2.read());
}

void fc_layer1::thread_tmp_893_cast_fu_22539_p1() {
    tmp_893_cast_fu_22539_p1 = esl_zext<64,15>(tmp_893_cast1_fu_22535_p1.read());
}

void fc_layer1::thread_tmp_893_fu_24120_p2() {
    tmp_893_fu_24120_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8160.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8160));
}

void fc_layer1::thread_tmp_894_cast1_fu_22549_p1() {
    tmp_894_cast1_fu_22549_p1 = esl_sext<15,13>(tmp_867_fu_22544_p2.read());
}

void fc_layer1::thread_tmp_894_cast_fu_22553_p1() {
    tmp_894_cast_fu_22553_p1 = esl_zext<64,15>(tmp_894_cast1_fu_22549_p1.read());
}

void fc_layer1::thread_tmp_894_fu_24130_p2() {
    tmp_894_fu_24130_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_81D8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_81D8));
}

void fc_layer1::thread_tmp_895_cast1_fu_22632_p1() {
    tmp_895_cast1_fu_22632_p1 = esl_sext<15,13>(tmp_868_fu_22627_p2.read());
}

void fc_layer1::thread_tmp_895_cast_fu_22636_p1() {
    tmp_895_cast_fu_22636_p1 = esl_zext<64,15>(tmp_895_cast1_fu_22632_p1.read());
}

void fc_layer1::thread_tmp_895_fu_24209_p2() {
    tmp_895_fu_24209_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8250.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8250));
}

void fc_layer1::thread_tmp_896_cast1_fu_22646_p1() {
    tmp_896_cast1_fu_22646_p1 = esl_sext<15,13>(tmp_869_fu_22641_p2.read());
}

void fc_layer1::thread_tmp_896_cast_fu_22650_p1() {
    tmp_896_cast_fu_22650_p1 = esl_zext<64,15>(tmp_896_cast1_fu_22646_p1.read());
}

void fc_layer1::thread_tmp_896_fu_24219_p2() {
    tmp_896_fu_24219_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_82C8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_82C8));
}

void fc_layer1::thread_tmp_897_cast1_fu_22729_p1() {
    tmp_897_cast1_fu_22729_p1 = esl_sext<15,13>(tmp_870_fu_22724_p2.read());
}

void fc_layer1::thread_tmp_897_cast_fu_22733_p1() {
    tmp_897_cast_fu_22733_p1 = esl_zext<64,15>(tmp_897_cast1_fu_22729_p1.read());
}

void fc_layer1::thread_tmp_897_fu_24298_p2() {
    tmp_897_fu_24298_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8340.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8340));
}

void fc_layer1::thread_tmp_898_cast1_fu_22743_p1() {
    tmp_898_cast1_fu_22743_p1 = esl_sext<15,13>(tmp_871_fu_22738_p2.read());
}

void fc_layer1::thread_tmp_898_cast_fu_22747_p1() {
    tmp_898_cast_fu_22747_p1 = esl_zext<64,15>(tmp_898_cast1_fu_22743_p1.read());
}

void fc_layer1::thread_tmp_898_fu_24308_p2() {
    tmp_898_fu_24308_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_83B8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_83B8));
}

void fc_layer1::thread_tmp_899_cast1_fu_22826_p1() {
    tmp_899_cast1_fu_22826_p1 = esl_sext<15,13>(tmp_872_fu_22821_p2.read());
}

void fc_layer1::thread_tmp_899_cast_fu_22830_p1() {
    tmp_899_cast_fu_22830_p1 = esl_zext<64,15>(tmp_899_cast1_fu_22826_p1.read());
}

void fc_layer1::thread_tmp_899_fu_24387_p2() {
    tmp_899_fu_24387_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8430.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8430));
}

void fc_layer1::thread_tmp_900_cast1_fu_22840_p1() {
    tmp_900_cast1_fu_22840_p1 = esl_sext<15,13>(tmp_873_fu_22835_p2.read());
}

void fc_layer1::thread_tmp_900_cast_fu_22844_p1() {
    tmp_900_cast_fu_22844_p1 = esl_zext<64,15>(tmp_900_cast1_fu_22840_p1.read());
}

void fc_layer1::thread_tmp_900_fu_24397_p2() {
    tmp_900_fu_24397_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_84A8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_84A8));
}

void fc_layer1::thread_tmp_901_cast1_fu_22923_p1() {
    tmp_901_cast1_fu_22923_p1 = esl_sext<15,13>(tmp_874_fu_22918_p2.read());
}

void fc_layer1::thread_tmp_901_cast_fu_22927_p1() {
    tmp_901_cast_fu_22927_p1 = esl_zext<64,15>(tmp_901_cast1_fu_22923_p1.read());
}

void fc_layer1::thread_tmp_901_fu_24476_p2() {
    tmp_901_fu_24476_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8520.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8520));
}

void fc_layer1::thread_tmp_902_cast1_fu_22937_p1() {
    tmp_902_cast1_fu_22937_p1 = esl_sext<15,13>(tmp_875_fu_22932_p2.read());
}

void fc_layer1::thread_tmp_902_cast_fu_22941_p1() {
    tmp_902_cast_fu_22941_p1 = esl_zext<64,15>(tmp_902_cast1_fu_22937_p1.read());
}

void fc_layer1::thread_tmp_902_fu_24486_p2() {
    tmp_902_fu_24486_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8598.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8598));
}

void fc_layer1::thread_tmp_903_cast1_fu_23020_p1() {
    tmp_903_cast1_fu_23020_p1 = esl_sext<15,13>(tmp_876_fu_23015_p2.read());
}

void fc_layer1::thread_tmp_903_cast_fu_23024_p1() {
    tmp_903_cast_fu_23024_p1 = esl_zext<64,15>(tmp_903_cast1_fu_23020_p1.read());
}

void fc_layer1::thread_tmp_903_fu_24565_p2() {
    tmp_903_fu_24565_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8610.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8610));
}

void fc_layer1::thread_tmp_904_cast1_fu_23034_p1() {
    tmp_904_cast1_fu_23034_p1 = esl_sext<15,13>(tmp_877_fu_23029_p2.read());
}

void fc_layer1::thread_tmp_904_cast_fu_23038_p1() {
    tmp_904_cast_fu_23038_p1 = esl_zext<64,15>(tmp_904_cast1_fu_23034_p1.read());
}

void fc_layer1::thread_tmp_904_fu_24575_p2() {
    tmp_904_fu_24575_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8688.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8688));
}

void fc_layer1::thread_tmp_905_cast1_fu_23117_p1() {
    tmp_905_cast1_fu_23117_p1 = esl_sext<15,13>(tmp_878_fu_23112_p2.read());
}

void fc_layer1::thread_tmp_905_cast_fu_23121_p1() {
    tmp_905_cast_fu_23121_p1 = esl_zext<64,15>(tmp_905_cast1_fu_23117_p1.read());
}

void fc_layer1::thread_tmp_905_fu_24654_p3() {
    tmp_905_fu_24654_p3 = esl_concat<57,7>(ap_const_lv57_10E, i_reg_11556.read());
}

void fc_layer1::thread_tmp_906_cast1_fu_23131_p1() {
    tmp_906_cast1_fu_23131_p1 = esl_sext<15,13>(tmp_879_fu_23126_p2.read());
}

void fc_layer1::thread_tmp_906_cast_fu_23135_p1() {
    tmp_906_cast_fu_23135_p1 = esl_zext<64,15>(tmp_906_cast1_fu_23131_p1.read());
}

void fc_layer1::thread_tmp_906_fu_24663_p2() {
    tmp_906_fu_24663_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8778.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8778));
}

void fc_layer1::thread_tmp_907_fu_24742_p2() {
    tmp_907_fu_24742_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_87F0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_87F0));
}

void fc_layer1::thread_tmp_908_cast1_fu_23223_p1() {
    tmp_908_cast1_fu_23223_p1 = esl_sext<15,12>(tmp_881_fu_23218_p2.read());
}

void fc_layer1::thread_tmp_908_cast_fu_23227_p1() {
    tmp_908_cast_fu_23227_p1 = esl_zext<64,15>(tmp_908_cast1_fu_23223_p1.read());
}

void fc_layer1::thread_tmp_908_fu_24752_p2() {
    tmp_908_fu_24752_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8868.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8868));
}

void fc_layer1::thread_tmp_909_cast1_fu_23306_p1() {
    tmp_909_cast1_fu_23306_p1 = esl_sext<15,12>(tmp_882_fu_23301_p2.read());
}

void fc_layer1::thread_tmp_909_cast_fu_23310_p1() {
    tmp_909_cast_fu_23310_p1 = esl_zext<64,15>(tmp_909_cast1_fu_23306_p1.read());
}

void fc_layer1::thread_tmp_909_fu_24831_p2() {
    tmp_909_fu_24831_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_88E0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_88E0));
}

void fc_layer1::thread_tmp_910_cast1_fu_23320_p1() {
    tmp_910_cast1_fu_23320_p1 = esl_sext<15,12>(tmp_883_fu_23315_p2.read());
}

void fc_layer1::thread_tmp_910_cast_fu_23324_p1() {
    tmp_910_cast_fu_23324_p1 = esl_zext<64,15>(tmp_910_cast1_fu_23320_p1.read());
}

void fc_layer1::thread_tmp_910_fu_24841_p2() {
    tmp_910_fu_24841_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8958.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8958));
}

void fc_layer1::thread_tmp_911_cast1_fu_23403_p1() {
    tmp_911_cast1_fu_23403_p1 = esl_sext<15,12>(tmp_884_fu_23398_p2.read());
}

void fc_layer1::thread_tmp_911_cast_fu_23407_p1() {
    tmp_911_cast_fu_23407_p1 = esl_zext<64,15>(tmp_911_cast1_fu_23403_p1.read());
}

void fc_layer1::thread_tmp_911_fu_24920_p2() {
    tmp_911_fu_24920_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_89D0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_89D0));
}

void fc_layer1::thread_tmp_912_cast1_fu_23417_p1() {
    tmp_912_cast1_fu_23417_p1 = esl_sext<15,12>(tmp_885_fu_23412_p2.read());
}

void fc_layer1::thread_tmp_912_cast_fu_23421_p1() {
    tmp_912_cast_fu_23421_p1 = esl_zext<64,15>(tmp_912_cast1_fu_23417_p1.read());
}

void fc_layer1::thread_tmp_912_fu_24930_p2() {
    tmp_912_fu_24930_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8A48.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8A48));
}

void fc_layer1::thread_tmp_913_cast1_fu_23500_p1() {
    tmp_913_cast1_fu_23500_p1 = esl_sext<15,12>(tmp_886_fu_23495_p2.read());
}

void fc_layer1::thread_tmp_913_cast_fu_23504_p1() {
    tmp_913_cast_fu_23504_p1 = esl_zext<64,15>(tmp_913_cast1_fu_23500_p1.read());
}

void fc_layer1::thread_tmp_913_fu_25009_p2() {
    tmp_913_fu_25009_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8AC0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8AC0));
}

void fc_layer1::thread_tmp_914_cast1_fu_23514_p1() {
    tmp_914_cast1_fu_23514_p1 = esl_sext<15,12>(tmp_887_fu_23509_p2.read());
}

void fc_layer1::thread_tmp_914_cast_fu_23518_p1() {
    tmp_914_cast_fu_23518_p1 = esl_zext<64,15>(tmp_914_cast1_fu_23514_p1.read());
}

void fc_layer1::thread_tmp_914_fu_25019_p2() {
    tmp_914_fu_25019_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8B38.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8B38));
}

void fc_layer1::thread_tmp_915_cast1_fu_23597_p1() {
    tmp_915_cast1_fu_23597_p1 = esl_sext<15,12>(tmp_888_fu_23592_p2.read());
}

void fc_layer1::thread_tmp_915_cast_fu_23601_p1() {
    tmp_915_cast_fu_23601_p1 = esl_zext<64,15>(tmp_915_cast1_fu_23597_p1.read());
}

void fc_layer1::thread_tmp_915_fu_25098_p2() {
    tmp_915_fu_25098_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8BB0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8BB0));
}

void fc_layer1::thread_tmp_916_cast1_fu_23606_p1() {
    tmp_916_cast1_fu_23606_p1 = esl_sext<15,11>(tmp_637_reg_44571.read());
}

void fc_layer1::thread_tmp_916_cast_fu_23609_p1() {
    tmp_916_cast_fu_23609_p1 = esl_zext<64,15>(tmp_916_cast1_fu_23606_p1.read());
}

void fc_layer1::thread_tmp_916_fu_25108_p2() {
    tmp_916_fu_25108_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8C28.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8C28));
}

void fc_layer1::thread_tmp_917_cast1_fu_23683_p1() {
    tmp_917_cast1_fu_23683_p1 = esl_sext<15,11>(tmp_638_reg_44596.read());
}

void fc_layer1::thread_tmp_917_cast_fu_23686_p1() {
    tmp_917_cast_fu_23686_p1 = esl_zext<64,15>(tmp_917_cast1_fu_23683_p1.read());
}

void fc_layer1::thread_tmp_917_fu_25187_p2() {
    tmp_917_fu_25187_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8CA0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8CA0));
}

void fc_layer1::thread_tmp_918_cast1_fu_23691_p1() {
    tmp_918_cast1_fu_23691_p1 = esl_sext<15,11>(tmp_639_reg_44606.read());
}

void fc_layer1::thread_tmp_918_cast_fu_23694_p1() {
    tmp_918_cast_fu_23694_p1 = esl_zext<64,15>(tmp_918_cast1_fu_23691_p1.read());
}

void fc_layer1::thread_tmp_918_fu_25197_p2() {
    tmp_918_fu_25197_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8D18.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8D18));
}

void fc_layer1::thread_tmp_919_cast1_fu_23768_p1() {
    tmp_919_cast1_fu_23768_p1 = esl_sext<15,11>(tmp_640_reg_44631.read());
}

void fc_layer1::thread_tmp_919_cast_fu_23771_p1() {
    tmp_919_cast_fu_23771_p1 = esl_zext<64,15>(tmp_919_cast1_fu_23768_p1.read());
}

void fc_layer1::thread_tmp_919_fu_25276_p2() {
    tmp_919_fu_25276_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8D90.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8D90));
}

void fc_layer1::thread_tmp_920_cast1_fu_23776_p1() {
    tmp_920_cast1_fu_23776_p1 = esl_sext<15,10>(tmp_641_reg_44641.read());
}

void fc_layer1::thread_tmp_920_cast_fu_23779_p1() {
    tmp_920_cast_fu_23779_p1 = esl_zext<64,15>(tmp_920_cast1_fu_23776_p1.read());
}

void fc_layer1::thread_tmp_920_fu_25286_p2() {
    tmp_920_fu_25286_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8E08.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8E08));
}

void fc_layer1::thread_tmp_921_cast1_fu_23853_p1() {
    tmp_921_cast1_fu_23853_p1 = esl_sext<15,10>(tmp_642_reg_44666.read());
}

void fc_layer1::thread_tmp_921_cast_fu_23856_p1() {
    tmp_921_cast_fu_23856_p1 = esl_zext<64,15>(tmp_921_cast1_fu_23853_p1.read());
}

void fc_layer1::thread_tmp_921_fu_25365_p3() {
    tmp_921_fu_25365_p3 = esl_concat<57,7>(ap_const_lv57_11D, i_reg_11556.read());
}

void fc_layer1::thread_tmp_922_cast1_fu_23861_p1() {
    tmp_922_cast1_fu_23861_p1 = esl_sext<15,9>(tmp_643_reg_44676.read());
}

void fc_layer1::thread_tmp_922_cast_fu_23864_p1() {
    tmp_922_cast_fu_23864_p1 = esl_zext<64,15>(tmp_922_cast1_fu_23861_p1.read());
}

void fc_layer1::thread_tmp_922_fu_25374_p2() {
    tmp_922_fu_25374_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8EF8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8EF8));
}

void fc_layer1::thread_tmp_923_fu_25453_p2() {
    tmp_923_fu_25453_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8F70.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8F70));
}

void fc_layer1::thread_tmp_924_cast_fu_23957_p1() {
    tmp_924_cast_fu_23957_p1 = esl_zext<64,16>(tmp_890_fu_23951_p2.read());
}

void fc_layer1::thread_tmp_924_fu_25463_p2() {
    tmp_924_fu_25463_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_8FE8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_8FE8));
}

void fc_layer1::thread_tmp_925_cast_fu_24036_p1() {
    tmp_925_cast_fu_24036_p1 = esl_zext<64,16>(tmp_891_fu_24031_p2.read());
}

void fc_layer1::thread_tmp_925_fu_25542_p2() {
    tmp_925_fu_25542_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9060.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9060));
}

void fc_layer1::thread_tmp_926_cast_fu_24046_p1() {
    tmp_926_cast_fu_24046_p1 = esl_zext<64,16>(tmp_892_fu_24041_p2.read());
}

void fc_layer1::thread_tmp_926_fu_25552_p2() {
    tmp_926_fu_25552_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_90D8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_90D8));
}

void fc_layer1::thread_tmp_927_cast_fu_24125_p1() {
    tmp_927_cast_fu_24125_p1 = esl_zext<64,16>(tmp_893_fu_24120_p2.read());
}

void fc_layer1::thread_tmp_927_fu_25631_p2() {
    tmp_927_fu_25631_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9150.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9150));
}

void fc_layer1::thread_tmp_928_cast_fu_24135_p1() {
    tmp_928_cast_fu_24135_p1 = esl_zext<64,16>(tmp_894_fu_24130_p2.read());
}

void fc_layer1::thread_tmp_928_fu_25641_p2() {
    tmp_928_fu_25641_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_91C8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_91C8));
}

void fc_layer1::thread_tmp_929_cast_fu_24214_p1() {
    tmp_929_cast_fu_24214_p1 = esl_zext<64,16>(tmp_895_fu_24209_p2.read());
}

void fc_layer1::thread_tmp_929_fu_25720_p2() {
    tmp_929_fu_25720_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9240.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9240));
}

void fc_layer1::thread_tmp_930_cast_fu_24224_p1() {
    tmp_930_cast_fu_24224_p1 = esl_zext<64,16>(tmp_896_fu_24219_p2.read());
}

void fc_layer1::thread_tmp_930_fu_25730_p2() {
    tmp_930_fu_25730_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_92B8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_92B8));
}

void fc_layer1::thread_tmp_931_cast_fu_24303_p1() {
    tmp_931_cast_fu_24303_p1 = esl_zext<64,16>(tmp_897_fu_24298_p2.read());
}

void fc_layer1::thread_tmp_931_fu_25809_p2() {
    tmp_931_fu_25809_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9330.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9330));
}

void fc_layer1::thread_tmp_932_cast_fu_24313_p1() {
    tmp_932_cast_fu_24313_p1 = esl_zext<64,16>(tmp_898_fu_24308_p2.read());
}

void fc_layer1::thread_tmp_932_fu_25819_p2() {
    tmp_932_fu_25819_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_93A8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_93A8));
}

void fc_layer1::thread_tmp_933_cast_fu_24392_p1() {
    tmp_933_cast_fu_24392_p1 = esl_zext<64,16>(tmp_899_fu_24387_p2.read());
}

void fc_layer1::thread_tmp_933_fu_25898_p2() {
    tmp_933_fu_25898_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9420.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9420));
}

void fc_layer1::thread_tmp_934_cast_fu_24402_p1() {
    tmp_934_cast_fu_24402_p1 = esl_zext<64,16>(tmp_900_fu_24397_p2.read());
}

void fc_layer1::thread_tmp_934_fu_25908_p2() {
    tmp_934_fu_25908_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9498.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9498));
}

void fc_layer1::thread_tmp_935_cast_fu_24481_p1() {
    tmp_935_cast_fu_24481_p1 = esl_zext<64,16>(tmp_901_fu_24476_p2.read());
}

void fc_layer1::thread_tmp_935_fu_25987_p2() {
    tmp_935_fu_25987_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9510.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9510));
}

void fc_layer1::thread_tmp_936_cast_fu_24491_p1() {
    tmp_936_cast_fu_24491_p1 = esl_zext<64,16>(tmp_902_fu_24486_p2.read());
}

void fc_layer1::thread_tmp_936_fu_25997_p2() {
    tmp_936_fu_25997_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9588.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9588));
}

void fc_layer1::thread_tmp_937_cast_fu_24570_p1() {
    tmp_937_cast_fu_24570_p1 = esl_zext<64,16>(tmp_903_fu_24565_p2.read());
}

void fc_layer1::thread_tmp_937_fu_26076_p3() {
    tmp_937_fu_26076_p3 = esl_concat<57,7>(ap_const_lv57_12C, i_reg_11556.read());
}

void fc_layer1::thread_tmp_938_cast_fu_24580_p1() {
    tmp_938_cast_fu_24580_p1 = esl_zext<64,16>(tmp_904_fu_24575_p2.read());
}

void fc_layer1::thread_tmp_938_fu_26085_p2() {
    tmp_938_fu_26085_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9678.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9678));
}

void fc_layer1::thread_tmp_939_fu_26164_p2() {
    tmp_939_fu_26164_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_96F0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_96F0));
}

void fc_layer1::thread_tmp_940_cast_fu_24668_p1() {
    tmp_940_cast_fu_24668_p1 = esl_zext<64,16>(tmp_906_fu_24663_p2.read());
}

void fc_layer1::thread_tmp_940_fu_26174_p2() {
    tmp_940_fu_26174_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9768.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9768));
}

void fc_layer1::thread_tmp_941_cast_fu_24747_p1() {
    tmp_941_cast_fu_24747_p1 = esl_zext<64,16>(tmp_907_fu_24742_p2.read());
}

void fc_layer1::thread_tmp_941_fu_26253_p2() {
    tmp_941_fu_26253_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_97E0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_97E0));
}

void fc_layer1::thread_tmp_942_cast_fu_24757_p1() {
    tmp_942_cast_fu_24757_p1 = esl_zext<64,16>(tmp_908_fu_24752_p2.read());
}

void fc_layer1::thread_tmp_942_fu_26263_p2() {
    tmp_942_fu_26263_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9858.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9858));
}

void fc_layer1::thread_tmp_943_cast_fu_24836_p1() {
    tmp_943_cast_fu_24836_p1 = esl_zext<64,16>(tmp_909_fu_24831_p2.read());
}

void fc_layer1::thread_tmp_943_fu_26342_p2() {
    tmp_943_fu_26342_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_98D0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_98D0));
}

void fc_layer1::thread_tmp_944_cast_fu_24846_p1() {
    tmp_944_cast_fu_24846_p1 = esl_zext<64,16>(tmp_910_fu_24841_p2.read());
}

void fc_layer1::thread_tmp_944_fu_26352_p2() {
    tmp_944_fu_26352_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9948.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9948));
}

void fc_layer1::thread_tmp_945_cast_fu_24925_p1() {
    tmp_945_cast_fu_24925_p1 = esl_zext<64,16>(tmp_911_fu_24920_p2.read());
}

void fc_layer1::thread_tmp_945_fu_26431_p2() {
    tmp_945_fu_26431_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_99C0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_99C0));
}

void fc_layer1::thread_tmp_946_cast_fu_24935_p1() {
    tmp_946_cast_fu_24935_p1 = esl_zext<64,16>(tmp_912_fu_24930_p2.read());
}

void fc_layer1::thread_tmp_946_fu_26441_p2() {
    tmp_946_fu_26441_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9A38.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9A38));
}

void fc_layer1::thread_tmp_947_cast_fu_25014_p1() {
    tmp_947_cast_fu_25014_p1 = esl_zext<64,16>(tmp_913_fu_25009_p2.read());
}

void fc_layer1::thread_tmp_947_fu_26520_p2() {
    tmp_947_fu_26520_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9AB0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9AB0));
}

void fc_layer1::thread_tmp_948_cast_fu_25024_p1() {
    tmp_948_cast_fu_25024_p1 = esl_zext<64,16>(tmp_914_fu_25019_p2.read());
}

void fc_layer1::thread_tmp_948_fu_26530_p2() {
    tmp_948_fu_26530_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9B28.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9B28));
}

void fc_layer1::thread_tmp_949_cast_fu_25103_p1() {
    tmp_949_cast_fu_25103_p1 = esl_zext<64,16>(tmp_915_fu_25098_p2.read());
}

void fc_layer1::thread_tmp_949_fu_26609_p2() {
    tmp_949_fu_26609_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9BA0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9BA0));
}

void fc_layer1::thread_tmp_950_cast_fu_25113_p1() {
    tmp_950_cast_fu_25113_p1 = esl_zext<64,16>(tmp_916_fu_25108_p2.read());
}

void fc_layer1::thread_tmp_950_fu_26619_p2() {
    tmp_950_fu_26619_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9C18.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9C18));
}

void fc_layer1::thread_tmp_951_cast_fu_25192_p1() {
    tmp_951_cast_fu_25192_p1 = esl_zext<64,16>(tmp_917_fu_25187_p2.read());
}

void fc_layer1::thread_tmp_951_fu_26698_p2() {
    tmp_951_fu_26698_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9C90.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9C90));
}

void fc_layer1::thread_tmp_952_cast_fu_25202_p1() {
    tmp_952_cast_fu_25202_p1 = esl_zext<64,16>(tmp_918_fu_25197_p2.read());
}

void fc_layer1::thread_tmp_952_fu_26708_p2() {
    tmp_952_fu_26708_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9D08.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9D08));
}

void fc_layer1::thread_tmp_953_cast_fu_25281_p1() {
    tmp_953_cast_fu_25281_p1 = esl_zext<64,16>(tmp_919_fu_25276_p2.read());
}

void fc_layer1::thread_tmp_953_fu_26787_p3() {
    tmp_953_fu_26787_p3 = esl_concat<57,7>(ap_const_lv57_13B, i_reg_11556.read());
}

void fc_layer1::thread_tmp_954_cast_fu_25291_p1() {
    tmp_954_cast_fu_25291_p1 = esl_zext<64,16>(tmp_920_fu_25286_p2.read());
}

void fc_layer1::thread_tmp_954_fu_26796_p2() {
    tmp_954_fu_26796_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9DF8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9DF8));
}

void fc_layer1::thread_tmp_955_fu_26875_p2() {
    tmp_955_fu_26875_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9E70.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9E70));
}

void fc_layer1::thread_tmp_956_cast_fu_25379_p1() {
    tmp_956_cast_fu_25379_p1 = esl_zext<64,16>(tmp_922_fu_25374_p2.read());
}

void fc_layer1::thread_tmp_956_fu_26885_p2() {
    tmp_956_fu_26885_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9EE8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9EE8));
}

void fc_layer1::thread_tmp_957_cast_fu_25458_p1() {
    tmp_957_cast_fu_25458_p1 = esl_zext<64,16>(tmp_923_fu_25453_p2.read());
}

void fc_layer1::thread_tmp_957_fu_26964_p2() {
    tmp_957_fu_26964_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9F60.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9F60));
}

void fc_layer1::thread_tmp_958_cast_fu_25468_p1() {
    tmp_958_cast_fu_25468_p1 = esl_zext<64,16>(tmp_924_fu_25463_p2.read());
}

void fc_layer1::thread_tmp_958_fu_26974_p2() {
    tmp_958_fu_26974_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_9FD8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_9FD8));
}

void fc_layer1::thread_tmp_959_cast_fu_25547_p1() {
    tmp_959_cast_fu_25547_p1 = esl_zext<64,16>(tmp_925_fu_25542_p2.read());
}

void fc_layer1::thread_tmp_959_fu_27053_p2() {
    tmp_959_fu_27053_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A050.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A050));
}

void fc_layer1::thread_tmp_960_cast_fu_25557_p1() {
    tmp_960_cast_fu_25557_p1 = esl_zext<64,16>(tmp_926_fu_25552_p2.read());
}

void fc_layer1::thread_tmp_960_fu_27063_p2() {
    tmp_960_fu_27063_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A0C8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A0C8));
}

void fc_layer1::thread_tmp_961_cast_fu_25636_p1() {
    tmp_961_cast_fu_25636_p1 = esl_zext<64,16>(tmp_927_fu_25631_p2.read());
}

void fc_layer1::thread_tmp_961_fu_27142_p2() {
    tmp_961_fu_27142_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A140.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A140));
}

void fc_layer1::thread_tmp_962_cast_fu_25646_p1() {
    tmp_962_cast_fu_25646_p1 = esl_zext<64,16>(tmp_928_fu_25641_p2.read());
}

void fc_layer1::thread_tmp_962_fu_27152_p2() {
    tmp_962_fu_27152_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A1B8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A1B8));
}

void fc_layer1::thread_tmp_963_cast_fu_25725_p1() {
    tmp_963_cast_fu_25725_p1 = esl_zext<64,16>(tmp_929_fu_25720_p2.read());
}

void fc_layer1::thread_tmp_963_fu_27231_p2() {
    tmp_963_fu_27231_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A230.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A230));
}

void fc_layer1::thread_tmp_964_cast_fu_25735_p1() {
    tmp_964_cast_fu_25735_p1 = esl_zext<64,16>(tmp_930_fu_25730_p2.read());
}

void fc_layer1::thread_tmp_964_fu_27241_p2() {
    tmp_964_fu_27241_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A2A8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A2A8));
}

void fc_layer1::thread_tmp_965_cast_fu_25814_p1() {
    tmp_965_cast_fu_25814_p1 = esl_zext<64,16>(tmp_931_fu_25809_p2.read());
}

void fc_layer1::thread_tmp_965_fu_27320_p2() {
    tmp_965_fu_27320_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A320.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A320));
}

void fc_layer1::thread_tmp_966_cast_fu_25824_p1() {
    tmp_966_cast_fu_25824_p1 = esl_zext<64,16>(tmp_932_fu_25819_p2.read());
}

void fc_layer1::thread_tmp_966_fu_27330_p2() {
    tmp_966_fu_27330_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A398.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A398));
}

void fc_layer1::thread_tmp_967_cast_fu_25903_p1() {
    tmp_967_cast_fu_25903_p1 = esl_zext<64,16>(tmp_933_fu_25898_p2.read());
}

void fc_layer1::thread_tmp_967_fu_27409_p2() {
    tmp_967_fu_27409_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A410.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A410));
}

void fc_layer1::thread_tmp_968_cast_fu_25913_p1() {
    tmp_968_cast_fu_25913_p1 = esl_zext<64,16>(tmp_934_fu_25908_p2.read());
}

void fc_layer1::thread_tmp_968_fu_27419_p2() {
    tmp_968_fu_27419_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A488.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A488));
}

void fc_layer1::thread_tmp_969_cast_fu_25992_p1() {
    tmp_969_cast_fu_25992_p1 = esl_zext<64,16>(tmp_935_fu_25987_p2.read());
}

void fc_layer1::thread_tmp_969_fu_27498_p3() {
    tmp_969_fu_27498_p3 = esl_concat<57,7>(ap_const_lv57_14A, i_reg_11556.read());
}

void fc_layer1::thread_tmp_970_cast_fu_26002_p1() {
    tmp_970_cast_fu_26002_p1 = esl_zext<64,16>(tmp_936_fu_25997_p2.read());
}

void fc_layer1::thread_tmp_970_fu_27507_p2() {
    tmp_970_fu_27507_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A578.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A578));
}

void fc_layer1::thread_tmp_971_fu_27586_p2() {
    tmp_971_fu_27586_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A5F0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A5F0));
}

void fc_layer1::thread_tmp_972_cast_fu_26090_p1() {
    tmp_972_cast_fu_26090_p1 = esl_zext<64,16>(tmp_938_fu_26085_p2.read());
}

void fc_layer1::thread_tmp_972_fu_27596_p2() {
    tmp_972_fu_27596_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A668.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A668));
}

void fc_layer1::thread_tmp_973_cast_fu_26169_p1() {
    tmp_973_cast_fu_26169_p1 = esl_zext<64,16>(tmp_939_fu_26164_p2.read());
}

void fc_layer1::thread_tmp_973_fu_27675_p2() {
    tmp_973_fu_27675_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A6E0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A6E0));
}

void fc_layer1::thread_tmp_974_cast_fu_26179_p1() {
    tmp_974_cast_fu_26179_p1 = esl_zext<64,16>(tmp_940_fu_26174_p2.read());
}

void fc_layer1::thread_tmp_974_fu_27685_p2() {
    tmp_974_fu_27685_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A758.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A758));
}

void fc_layer1::thread_tmp_975_cast_fu_26258_p1() {
    tmp_975_cast_fu_26258_p1 = esl_zext<64,16>(tmp_941_fu_26253_p2.read());
}

void fc_layer1::thread_tmp_975_fu_27764_p2() {
    tmp_975_fu_27764_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A7D0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A7D0));
}

void fc_layer1::thread_tmp_976_cast_fu_26268_p1() {
    tmp_976_cast_fu_26268_p1 = esl_zext<64,16>(tmp_942_fu_26263_p2.read());
}

void fc_layer1::thread_tmp_976_fu_27774_p2() {
    tmp_976_fu_27774_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A848.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A848));
}

void fc_layer1::thread_tmp_977_cast_fu_26347_p1() {
    tmp_977_cast_fu_26347_p1 = esl_zext<64,16>(tmp_943_fu_26342_p2.read());
}

void fc_layer1::thread_tmp_977_fu_27853_p2() {
    tmp_977_fu_27853_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A8C0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A8C0));
}

void fc_layer1::thread_tmp_978_cast_fu_26357_p1() {
    tmp_978_cast_fu_26357_p1 = esl_zext<64,16>(tmp_944_fu_26352_p2.read());
}

void fc_layer1::thread_tmp_978_fu_27863_p2() {
    tmp_978_fu_27863_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A938.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A938));
}

void fc_layer1::thread_tmp_979_cast_fu_26436_p1() {
    tmp_979_cast_fu_26436_p1 = esl_zext<64,16>(tmp_945_fu_26431_p2.read());
}

void fc_layer1::thread_tmp_979_fu_27942_p2() {
    tmp_979_fu_27942_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_A9B0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_A9B0));
}

void fc_layer1::thread_tmp_980_cast_fu_26446_p1() {
    tmp_980_cast_fu_26446_p1 = esl_zext<64,16>(tmp_946_fu_26441_p2.read());
}

void fc_layer1::thread_tmp_980_fu_27952_p2() {
    tmp_980_fu_27952_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_AA28.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_AA28));
}

void fc_layer1::thread_tmp_981_cast_fu_26525_p1() {
    tmp_981_cast_fu_26525_p1 = esl_zext<64,16>(tmp_947_fu_26520_p2.read());
}

void fc_layer1::thread_tmp_981_fu_28031_p2() {
    tmp_981_fu_28031_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_AAA0.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_AAA0));
}

void fc_layer1::thread_tmp_982_cast_fu_26535_p1() {
    tmp_982_cast_fu_26535_p1 = esl_zext<64,16>(tmp_948_fu_26530_p2.read());
}

void fc_layer1::thread_tmp_982_fu_28041_p2() {
    tmp_982_fu_28041_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_AB18.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_AB18));
}

void fc_layer1::thread_tmp_983_cast_fu_26614_p1() {
    tmp_983_cast_fu_26614_p1 = esl_zext<64,16>(tmp_949_fu_26609_p2.read());
}

void fc_layer1::thread_tmp_983_fu_28120_p2() {
    tmp_983_fu_28120_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_AB90.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_AB90));
}

void fc_layer1::thread_tmp_984_cast_fu_26624_p1() {
    tmp_984_cast_fu_26624_p1 = esl_zext<64,16>(tmp_950_fu_26619_p2.read());
}

void fc_layer1::thread_tmp_984_fu_28130_p2() {
    tmp_984_fu_28130_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_AC08.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_AC08));
}

void fc_layer1::thread_tmp_985_cast_fu_26703_p1() {
    tmp_985_cast_fu_26703_p1 = esl_zext<64,16>(tmp_951_fu_26698_p2.read());
}

void fc_layer1::thread_tmp_985_fu_28209_p3() {
    tmp_985_fu_28209_p3 = esl_concat<57,7>(ap_const_lv57_159, i_reg_11556.read());
}

void fc_layer1::thread_tmp_986_cast_fu_26713_p1() {
    tmp_986_cast_fu_26713_p1 = esl_zext<64,16>(tmp_952_fu_26708_p2.read());
}

void fc_layer1::thread_tmp_986_fu_28218_p2() {
    tmp_986_fu_28218_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_ACF8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_ACF8));
}

void fc_layer1::thread_tmp_987_fu_28297_p2() {
    tmp_987_fu_28297_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_AD70.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_AD70));
}

void fc_layer1::thread_tmp_988_cast_fu_26801_p1() {
    tmp_988_cast_fu_26801_p1 = esl_zext<64,16>(tmp_954_fu_26796_p2.read());
}

void fc_layer1::thread_tmp_988_fu_28307_p2() {
    tmp_988_fu_28307_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_ADE8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_ADE8));
}

void fc_layer1::thread_tmp_989_cast_fu_26880_p1() {
    tmp_989_cast_fu_26880_p1 = esl_zext<64,16>(tmp_955_fu_26875_p2.read());
}

void fc_layer1::thread_tmp_989_fu_28386_p2() {
    tmp_989_fu_28386_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_AE60.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_AE60));
}

void fc_layer1::thread_tmp_990_cast_fu_26890_p1() {
    tmp_990_cast_fu_26890_p1 = esl_zext<64,16>(tmp_956_fu_26885_p2.read());
}

void fc_layer1::thread_tmp_990_fu_28396_p2() {
    tmp_990_fu_28396_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_AED8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_AED8));
}

void fc_layer1::thread_tmp_991_cast_fu_26969_p1() {
    tmp_991_cast_fu_26969_p1 = esl_zext<64,16>(tmp_957_fu_26964_p2.read());
}

void fc_layer1::thread_tmp_991_fu_28475_p2() {
    tmp_991_fu_28475_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_AF50.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_AF50));
}

void fc_layer1::thread_tmp_992_cast_fu_26979_p1() {
    tmp_992_cast_fu_26979_p1 = esl_zext<64,16>(tmp_958_fu_26974_p2.read());
}

void fc_layer1::thread_tmp_992_fu_28485_p2() {
    tmp_992_fu_28485_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_AFC8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_AFC8));
}

void fc_layer1::thread_tmp_993_cast_fu_27058_p1() {
    tmp_993_cast_fu_27058_p1 = esl_zext<64,16>(tmp_959_fu_27053_p2.read());
}

void fc_layer1::thread_tmp_993_fu_28564_p2() {
    tmp_993_fu_28564_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_B040.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_B040));
}

void fc_layer1::thread_tmp_994_cast_fu_27068_p1() {
    tmp_994_cast_fu_27068_p1 = esl_zext<64,16>(tmp_960_fu_27063_p2.read());
}

void fc_layer1::thread_tmp_994_fu_28574_p2() {
    tmp_994_fu_28574_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_B0B8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_B0B8));
}

void fc_layer1::thread_tmp_995_cast_fu_27147_p1() {
    tmp_995_cast_fu_27147_p1 = esl_zext<64,16>(tmp_961_fu_27142_p2.read());
}

void fc_layer1::thread_tmp_995_fu_28653_p2() {
    tmp_995_fu_28653_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_B130.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_B130));
}

void fc_layer1::thread_tmp_996_cast_fu_27157_p1() {
    tmp_996_cast_fu_27157_p1 = esl_zext<64,16>(tmp_962_fu_27152_p2.read());
}

void fc_layer1::thread_tmp_996_fu_28663_p2() {
    tmp_996_fu_28663_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_B1A8.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_B1A8));
}

void fc_layer1::thread_tmp_997_cast_fu_27236_p1() {
    tmp_997_cast_fu_27236_p1 = esl_zext<64,16>(tmp_963_fu_27231_p2.read());
}

void fc_layer1::thread_tmp_997_fu_28742_p2() {
    tmp_997_fu_28742_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_B220.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_B220));
}

void fc_layer1::thread_tmp_998_cast_fu_27246_p1() {
    tmp_998_cast_fu_27246_p1 = esl_zext<64,16>(tmp_964_fu_27241_p2.read());
}

void fc_layer1::thread_tmp_998_fu_28752_p2() {
    tmp_998_fu_28752_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_B298.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_B298));
}

void fc_layer1::thread_tmp_999_cast_fu_27325_p1() {
    tmp_999_cast_fu_27325_p1 = esl_zext<64,16>(tmp_965_fu_27320_p2.read());
}

void fc_layer1::thread_tmp_999_fu_28831_p2() {
    tmp_999_fu_28831_p2 = (!tmp_cast8_reg_48309.read().is_01() || !ap_const_lv16_B310.is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_cast8_reg_48309.read()) + sc_bigint<16>(ap_const_lv16_B310));
}

void fc_layer1::thread_tmp_cast8_cast1_fu_11616_p1() {
    tmp_cast8_cast1_fu_11616_p1 = esl_zext<9,7>(i_reg_11556.read());
}

void fc_layer1::thread_tmp_cast8_cast2_fu_11642_p1() {
    tmp_cast8_cast2_fu_11642_p1 = esl_zext<10,7>(i_reg_11556.read());
}

void fc_layer1::thread_tmp_cast8_cast3_fu_11763_p1() {
    tmp_cast8_cast3_fu_11763_p1 = esl_zext<11,7>(i_reg_11556.read());
}

void fc_layer1::thread_tmp_cast8_cast4_fu_12141_p1() {
    tmp_cast8_cast4_fu_12141_p1 = esl_zext<12,7>(i_reg_11556.read());
}

void fc_layer1::thread_tmp_cast8_cast5_fu_12973_p1() {
    tmp_cast8_cast5_fu_12973_p1 = esl_zext<13,7>(i_reg_11556.read());
}

void fc_layer1::thread_tmp_cast8_cast6_fu_14544_p1() {
    tmp_cast8_cast6_fu_14544_p1 = esl_zext<14,7>(i_reg_11556.read());
}

void fc_layer1::thread_tmp_cast8_cast_fu_17678_p1() {
    tmp_cast8_cast_fu_17678_p1 = esl_zext<15,7>(i_reg_11556.read());
}

void fc_layer1::thread_tmp_cast8_fu_23938_p1() {
    tmp_cast8_fu_23938_p1 = esl_zext<16,7>(i_reg_11556.read());
}

void fc_layer1::thread_tmp_cast9_fu_36536_p1() {
    tmp_cast9_fu_36536_p1 = esl_zext<17,7>(i_reg_11556.read());
}

void fc_layer1::thread_tmp_cast_fu_11601_p1() {
    tmp_cast_fu_11601_p1 = esl_zext<8,7>(i_reg_11556.read());
}

void fc_layer1::thread_tmp_fu_11596_p1() {
    tmp_fu_11596_p1 = esl_zext<64,7>(i_reg_11556.read());
}

void fc_layer1::thread_tmp_i_fu_38077_p2() {
    tmp_i_fu_38077_p2 = (!p_Val2_s_32_fu_38057_p4.read().is_01() || !ap_const_lv24_0.is_01())? sc_lv<1>(): (sc_bigint<24>(p_Val2_s_32_fu_38057_p4.read()) > sc_bigint<24>(ap_const_lv24_0));
}

void fc_layer1::thread_tmp_s_fu_11605_p2() {
    tmp_s_fu_11605_p2 = (!tmp_cast_fu_11601_p1.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_cast_fu_11601_p1.read()) + sc_biguint<8>(ap_const_lv8_78));
}

}

