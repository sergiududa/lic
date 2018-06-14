# This script segment is generated automatically by AutoPilot

set id 425
set name nnet_mac_muladd_1ijb
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 12
set in0_signed 1
set in1_width 16
set in1_signed 1
set in2_width 28
set in2_signed 0
set out_width 28
set exp i0*i1+i2
set arg_lists {i0 {12 1 +} i1 {16 1 +} m {28 1 +} i2 {28 0 +} p {28 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 428
set name nnet_mac_muladd_1ikb
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 11
set in0_signed 1
set in1_width 16
set in1_signed 1
set in2_width 28
set in2_signed 0
set out_width 28
set exp i0*i1+i2
set arg_lists {i0 {11 1 +} i1 {16 1 +} m {27 1 +} i2 {28 0 +} p {28 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 437
set MemName fc_layer3_fc_layeh9b
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 12
set AddrRange 84
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "001100110110" "001000100110" "111010110100" "111101010110" "000011100001" "000111101111" "101111110101" "001111110110" "001111010110" "000110000010" "000010101001" "111111010010" "111010010101" "110110101010" "000100001101" "111110111011" "110000110100" "001101001100" "000001001101" "110100010100" "000111001011" "110011001010" "000111100100" "110101011001" "111010111011" "001101111000" "000110111011" "001010110100" "110000110011" "001100011000" "111101111100" "000100110110" "111100000111" "110111111011" "000101100101" "110101001110" "111111101101" "001100111101" "001000000111" "000000111111" "111111110100" "000110101100" "001011001110" "111001101001" "110010110001" "110101010010" "000110100010" "000100001001" "111101011001" "111110110011" "110001011100" "111110010000" "111111101101" "110010001000" "111110011111" "111111101101" "111011110100" "000111001000" "001111100011" "110001110101" "110111010100" "001100001001" "001100011100" "110011100100" "111001101011" "101111111100" "001111001010" "001100001000" "001110101100" "111000000101" "111010010000" "110011011011" "000000100111" "110001100001" "111001010001" "001111000111" "000000101110" "001111101110" "001101011101" "110111000000" "110000111111" "001100101000" "001000100011" "000001001000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 13
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 438
set MemName fc_layer3_fc_layeiab
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 12
set AddrRange 84
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "111001000010" "000110010000" "000010000100" "111011110010" "110001011001" "001111001101" "111000100010" "111100010101" "111100001001" "111101111111" "001100011000" "010000000011" "111100110010" "000011111001" "001101101100" "111000001100" "001010110011" "000111101110" "001100100110" "000101010111" "111111001111" "111010011000" "111011110111" "110000100111" "111010010011" "001010011001" "111011001000" "110010110001" "000101111110" "110000100101" "111110110000" "000000100001" "110100100101" "001000100110" "000111100101" "000101110010" "110011000101" "001111011000" "111110010001" "000010001000" "111010110111" "111101110100" "110111011011" "001010000101" "111001011101" "111111101101" "000110010011" "001001001000" "111110110011" "110110011100" "111010110100" "110001100011" "001110101011" "111000011111" "000001001001" "110000110110" "110011010101" "001001010111" "000010101110" "111011101000" "110111011000" "110100110000" "111001010100" "000100011100" "000111111010" "001011111000" "110111111101" "111011110111" "110111010001" "111110110111" "110010000110" "110000111100" "110011100100" "001100101001" "111000100101" "001111110100" "000111010101" "001010011110" "000011011101" "110000100111" "001101001001" "110011111010" "110000001110" "111000010110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 13
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 439
set MemName fc_layer3_fc_layeibb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 12
set AddrRange 84
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "001000101010" "001100100011" "110110001000" "110000110100" "010000000011" "000011001101" "110011111001" "110001101000" "111110011001" "110111101010" "001001000010" "111101001001" "111110111100" "111000101010" "000001101100" "000011000101" "111001111011" "000001011001" "001101010100" "110111100001" "111111001010" "000010101010" "110000101100" "110111011010" "000110111000" "000101101001" "001011111110" "111110111000" "000011111011" "110110101010" "110010110111" "111000010011" "001000000011" "110100001000" "111111101110" "110000010111" "111111111011" "000000110100" "000010011010" "000001001101" "001101000110" "000101110100" "000101001001" "000111101110" "111001100101" "111101001001" "111000100011" "101111111000" "111011001111" "001010110100" "000100001101" "110111010111" "111010100000" "001011111100" "111110100101" "111111101101" "000110111101" "110101000011" "111111010100" "111100010011" "110111111101" "110111010001" "111110001101" "110010001001" "001110011110" "010000001000" "111101010010" "001101010000" "111011000010" "101111111001" "101111111100" "001000101001" "000011110110" "001110110000" "111001000100" "111111101100" "000011101011" "111010100000" "000000001110" "001111100010" "000101110001" "111110100000" "110000111110" "111100111101" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 13
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 440
set MemName fc_layer3_fc_layeicb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 11
set AddrRange 84
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "00101011111" "11100011001" "11010000100" "01101101100" "00100011011" "10000101111" "01111100101" "11011100101" "11001110110" "11101110111" "00101101000" "01100101100" "00010111111" "01011010010" "10010000000" "10010011110" "01101101110" "10111011001" "00010110111" "01101101100" "11000101111" "00110010101" "11000101000" "01100101000" "11111001001" "00111010000" "01010110000" "00010010000" "10100000000" "00010100000" "00010101010" "10010011001" "01011100110" "01110010111" "10101001100" "10010110000" "00000101101" "11111011001" "00110110100" "01001111001" "11110001001" "00000110111" "01111110001" "00111111100" "11010111110" "01001001001" "10100000001" "01001000111" "10001111000" "00110100000" "01110111011" "00000101100" "11101100110" "01011001001" "00001101100" "00100111111" "11011001110" "11100010111" "10111011111" "00011101100" "11000110011" "11000111010" "01110100010" "10010011110" "10111101001" "01100100011" "10110111010" "11101100101" "00111010001" "11111101010" "10100010011" "00101110011" "11000101000" "00101111000" "00100111110" "01100001000" "01110010001" "01101010100" "00000111100" "01110011000" "10000101000" "00001111111" "01111101111" "10111100001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 13
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 441
set MemName fc_layer3_fc_layeidb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 12
set AddrRange 84
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "110101000110" "001110101000" "110100010100" "110001100111" "110101000110" "110001011100" "000001000011" "111000010011" "001111110101" "111011011011" "001010001101" "001110111010" "110111001010" "111000010110" "110101010110" "000110100001" "000011001100" "110100010000" "001111011010" "111100110011" "000111001110" "110001101110" "000011101111" "000001010101" "111110000111" "000111110000" "001011000001" "111010010000" "001101100001" "001011010001" "111001010011" "110101001001" "001000000111" "000101100010" "000110001100" "111010011010" "110010101110" "001100101001" "001011101001" "111010100010" "001011000111" "110000001101" "001101011000" "111010100000" "001111011001" "001000100001" "111110100101" "110011011011" "000011001100" "000100010001" "001010011110" "001010010010" "111011001001" "001011111001" "000101100101" "001111001000" "000011110110" "000010110110" "001010011101" "110010100011" "001110011011" "001011000010" "000100001111" "110101100101" "000101011100" "111100111111" "111111111010" "001111100100" "001010101111" "010000000001" "001101011001" "000010010100" "001000001100" "110000010001" "110111010001" "001011101101" "111010101111" "001100111011" "111100101001" "110010110111" "110101010001" "111000111000" "110101110100" "001000100100" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 13
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 442
set MemName fc_layer3_fc_layeieb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 12
set AddrRange 84
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "000011011100" "000110011111" "001000010001" "001011000110" "110101001101" "001001010010" "001101001100" "001100101011" "001111111100" "111111000011" "111011100111" "001001010001" "001101101101" "001011110001" "000011111110" "000001100000" "001101110100" "001011011000" "110010010010" "000011000001" "110111010101" "000111100000" "000011110100" "110101000001" "001000101011" "001011100011" "110110000000" "111111111010" "110010100110" "110010011111" "001001000110" "110000111011" "110101000101" "111111001010" "111111011011" "110001011111" "110010100110" "000101001101" "001011000000" "001110011111" "001011101111" "000001100111" "010000000011" "000010010101" "001010000111" "001101000000" "110111110111" "110111010101" "110010101001" "111010010110" "110010010110" "110110111100" "111000110001" "001001010110" "110100100111" "110100011000" "110001100100" "110100110100" "000010011001" "000010000110" "110010011000" "000001011111" "001101111100" "010000001001" "110010101011" "000110010100" "001001100111" "000111010101" "001100000101" "110101100111" "001101110011" "000011011100" "000010111100" "001110100001" "001011011111" "111001110001" "111101100010" "001110000111" "111011010000" "111101001000" "110100010010" "111011000001" "110100011011" "000100100000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 13
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 443
set MemName fc_layer3_fc_layeifb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 12
set AddrRange 84
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "001101010100" "111000001111" "110000001111" "001110001101" "110001110100" "010000001010" "111001100110" "110010101111" "000100011100" "001001010111" "000101010101" "110111011000" "000101011110" "000100000000" "000111000010" "110001011110" "000011101001" "110111100001" "001010100011" "110100000110" "000000001000" "110001011100" "111100111101" "001111001001" "000101111100" "111000001011" "000101101101" "001001101100" "110101100110" "110100101000" "000000001000" "110101001101" "110111001000" "000001101000" "110000111110" "001010010101" "110111010100" "111010110100" "000001110101" "001001000011" "111101011010" "000110000110" "110111111111" "111111000000" "000011010110" "001001111101" "111100000001" "111000011101" "110010000000" "000000101101" "111011111000" "111110101111" "111011100011" "111010001110" "111010111000" "111100101100" "000001101001" "000001110000" "111011101011" "110100110000" "001010101101" "001000100100" "110001111110" "111100111010" "001001001111" "000110000011" "110110110101" "111010110100" "000011001101" "000111001001" "000001110001" "110000110110" "001001011010" "000000101111" "000110100111" "110010010000" "001001010000" "001011000111" "110100100111" "001110011010" "000111110111" "000000101011" "000010011100" "000000100111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 13
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 444
set MemName fc_layer3_fc_layeigb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 12
set AddrRange 84
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "001101101101" "001010110111" "111110000101" "001110101000" "111101000000" "001101110101" "000010001000" "000001111100" "000101100101" "001010010101" "001101001010" "111011001110" "001111011001" "110110001000" "001100100000" "000101001101" "111110011110" "000110110100" "111001011100" "001100010101" "000101110010" "110010111111" "111111111010" "111101101100" "111011010010" "110011010010" "000010111001" "000110110111" "110001111101" "111010101100" "111100001101" "001111110100" "110110010110" "110011101010" "110001000010" "000111000000" "111000110010" "000110010001" "110100101101" "000000101101" "110011111101" "110000111110" "110110110101" "001100110101" "111100110100" "000011100110" "001111101011" "001110100011" "110111000001" "111100011110" "110111110101" "111111101111" "000101100000" "000101011101" "001011001001" "000110111101" "111101101000" "110001010100" "110000100100" "001110011010" "000001100101" "110110010110" "111011111011" "110000000110" "110110000000" "111010001111" "111101001000" "111010101001" "001011001010" "101111110110" "111001111110" "110101101100" "111001011111" "000101010101" "110100100000" "111101110111" "110010101000" "000000100101" "000001110011" "110111110101" "110001110011" "000101010100" "111100111101" "110100000001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 13
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 445
set MemName fc_layer3_fc_layeihb
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 12
set AddrRange 84
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "000011010110" "001111011010" "110010110111" "110101101011" "110011000101" "001000101110" "001110110111" "001010000011" "001001110000" "000001101011" "110011110101" "111100110001" "000010011011" "000110000001" "111011100011" "001111100001" "111110011001" "000110111010" "111110101001" "001011101111" "000111000011" "110101010101" "001000111010" "000010001101" "110001010000" "110011101011" "111101100110" "111010000010" "111010101000" "110001001111" "001100011110" "000101000010" "111100001110" "000100111110" "111100110101" "110111000110" "110101010100" "110001111001" "000011001101" "110100000100" "000001110001" "110111110100" "110010101101" "111101000101" "111100010100" "000001000111" "001101100101" "001010111110" "000110100001" "111000001111" "000111001000" "000001100000" "111110110001" "001100110100" "000100001101" "001101001010" "110101110000" "111011010101" "000000111000" "001100011101" "110011011010" "110100010101" "111101100110" "001100110110" "110010100000" "111110101111" "110111111100" "110110110111" "001111001110" "001010111000" "111011010110" "000101100011" "111011100000" "001010010000" "001111111011" "000110111011" "000001111000" "110000010111" "110110001001" "101111111011" "000100111000" "000100110010" "001110100111" "111000100011" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 13
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 446
set MemName fc_layer3_fc_layeiib
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 11
set AddrRange 84
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "10110101110" "01001111111" "11111110101" "01100011011" "10001100000" "11011100011" "10111000011" "11100010111" "01011011011" "10000111001" "11001110011" "10101001001" "01101010110" "10110100001" "11001111100" "01111010011" "11101001111" "11000010001" "10101111001" "11110100011" "00011111101" "10011100101" "01011111001" "10011010011" "10100010110" "11010111010" "01100001101" "00000001110" "10001010011" "10000110010" "10100100011" "01101101010" "11011111111" "10010110110" "00101110000" "01001100101" "10101011110" "00011100001" "11101001111" "00010101100" "11101111011" "00110100010" "11011011011" "11001011101" "00010100101" "01010010011" "01100010010" "10011111101" "10110010010" "01111001000" "00100101111" "01101100000" "11000110111" "10000001111" "00110101100" "11111100100" "01101111000" "00110110001" "01111110011" "01011000010" "11000010110" "11001110110" "00100100101" "01001101000" "10010110110" "10101101001" "01100010000" "01111100010" "01110001010" "00001000100" "00101001010" "10011111000" "11110001100" "00110011111" "11101100000" "01110001001" "00100111011" "11011000010" "01101011001" "10110011110" "11011011000" "10000100111" "11010011011" "00111001111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 13
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 447
set MemName fc_layer3_output_V
set CoreName ap_simcore_mem
set PortList { 2 2 }
set DataWd 16
set AddrRange 10
set AddrWd 4
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
set ClkPeriod 13
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 448 \
    name out_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_V \
    op interface \
    ports { out_V_V_din { O 16 vector } out_V_V_full_n { I 1 bit } out_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 449 \
    name in_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_V \
    op interface \
    ports { in_V_V_dout { I 16 vector } in_V_V_empty_n { I 1 bit } in_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


