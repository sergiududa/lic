-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4.1
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity nnet is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of nnet is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "nnet,hls_ip_2017_4_1,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg400-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.749750,HLS_SYN_LAT=2345882,HLS_SYN_TPT=none,HLS_SYN_MEM=36,HLS_SYN_DSP=10,HLS_SYN_FF=2228,HLS_SYN_LUT=5009}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (9 downto 0) := "0000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (9 downto 0) := "0000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (9 downto 0) := "0000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (9 downto 0) := "0000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (9 downto 0) := "0000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (9 downto 0) := "0001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (9 downto 0) := "0010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (9 downto 0) := "0100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (9 downto 0) := "1000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal conv_layer1_out_address0 : STD_LOGIC_VECTOR (12 downto 0);
    signal conv_layer1_out_ce0 : STD_LOGIC;
    signal conv_layer1_out_we0 : STD_LOGIC;
    signal conv_layer1_out_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal conv_layer2_out_address0 : STD_LOGIC_VECTOR (11 downto 0);
    signal conv_layer2_out_ce0 : STD_LOGIC;
    signal conv_layer2_out_we0 : STD_LOGIC;
    signal conv_layer2_out_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal pool_layer1_out_address0 : STD_LOGIC_VECTOR (10 downto 0);
    signal pool_layer1_out_ce0 : STD_LOGIC;
    signal pool_layer1_out_we0 : STD_LOGIC;
    signal pool_layer1_out_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal pool_layer2_out_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal pool_layer2_out_ce0 : STD_LOGIC;
    signal pool_layer2_out_we0 : STD_LOGIC;
    signal pool_layer2_out_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_conv_layer2_fu_52_ap_start : STD_LOGIC;
    signal grp_conv_layer2_fu_52_ap_done : STD_LOGIC;
    signal grp_conv_layer2_fu_52_ap_idle : STD_LOGIC;
    signal grp_conv_layer2_fu_52_ap_ready : STD_LOGIC;
    signal grp_conv_layer2_fu_52_output_r_address0 : STD_LOGIC_VECTOR (11 downto 0);
    signal grp_conv_layer2_fu_52_output_r_ce0 : STD_LOGIC;
    signal grp_conv_layer2_fu_52_output_r_we0 : STD_LOGIC;
    signal grp_conv_layer2_fu_52_output_r_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_conv_layer2_fu_52_image_r_address0 : STD_LOGIC_VECTOR (10 downto 0);
    signal grp_conv_layer2_fu_52_image_r_ce0 : STD_LOGIC;
    signal grp_conv_layer1_fu_62_ap_start : STD_LOGIC;
    signal grp_conv_layer1_fu_62_ap_done : STD_LOGIC;
    signal grp_conv_layer1_fu_62_ap_idle : STD_LOGIC;
    signal grp_conv_layer1_fu_62_ap_ready : STD_LOGIC;
    signal grp_conv_layer1_fu_62_output_r_address0 : STD_LOGIC_VECTOR (12 downto 0);
    signal grp_conv_layer1_fu_62_output_r_ce0 : STD_LOGIC;
    signal grp_conv_layer1_fu_62_output_r_we0 : STD_LOGIC;
    signal grp_conv_layer1_fu_62_output_r_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_pool_layer1_fu_74_ap_start : STD_LOGIC;
    signal grp_pool_layer1_fu_74_ap_done : STD_LOGIC;
    signal grp_pool_layer1_fu_74_ap_idle : STD_LOGIC;
    signal grp_pool_layer1_fu_74_ap_ready : STD_LOGIC;
    signal grp_pool_layer1_fu_74_output_r_address0 : STD_LOGIC_VECTOR (10 downto 0);
    signal grp_pool_layer1_fu_74_output_r_ce0 : STD_LOGIC;
    signal grp_pool_layer1_fu_74_output_r_we0 : STD_LOGIC;
    signal grp_pool_layer1_fu_74_output_r_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_pool_layer1_fu_74_image_r_address0 : STD_LOGIC_VECTOR (12 downto 0);
    signal grp_pool_layer1_fu_74_image_r_ce0 : STD_LOGIC;
    signal grp_pool_layer2_fu_80_ap_start : STD_LOGIC;
    signal grp_pool_layer2_fu_80_ap_done : STD_LOGIC;
    signal grp_pool_layer2_fu_80_ap_idle : STD_LOGIC;
    signal grp_pool_layer2_fu_80_ap_ready : STD_LOGIC;
    signal grp_pool_layer2_fu_80_output_r_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal grp_pool_layer2_fu_80_output_r_ce0 : STD_LOGIC;
    signal grp_pool_layer2_fu_80_output_r_we0 : STD_LOGIC;
    signal grp_pool_layer2_fu_80_output_r_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_pool_layer2_fu_80_image_r_address0 : STD_LOGIC_VECTOR (11 downto 0);
    signal grp_pool_layer2_fu_80_image_r_ce0 : STD_LOGIC;
    signal grp_flatten_fu_86_ap_start : STD_LOGIC;
    signal grp_flatten_fu_86_ap_done : STD_LOGIC;
    signal grp_flatten_fu_86_ap_idle : STD_LOGIC;
    signal grp_flatten_fu_86_ap_ready : STD_LOGIC;
    signal grp_flatten_fu_86_output_r_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal grp_flatten_fu_86_output_r_ce0 : STD_LOGIC;
    signal grp_flatten_fu_86_output_r_we0 : STD_LOGIC;
    signal grp_flatten_fu_86_output_r_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_flatten_fu_86_input_r_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal grp_flatten_fu_86_input_r_ce0 : STD_LOGIC;
    signal ap_reg_grp_conv_layer2_fu_52_ap_start : STD_LOGIC := '0';
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal ap_reg_grp_conv_layer1_fu_62_ap_start : STD_LOGIC := '0';
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal ap_reg_grp_pool_layer1_fu_74_ap_start : STD_LOGIC := '0';
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal ap_reg_grp_pool_layer2_fu_80_ap_start : STD_LOGIC := '0';
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal ap_reg_grp_flatten_fu_86_ap_start : STD_LOGIC := '0';
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (9 downto 0);

    component conv_layer2 IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        output_r_address0 : OUT STD_LOGIC_VECTOR (11 downto 0);
        output_r_ce0 : OUT STD_LOGIC;
        output_r_we0 : OUT STD_LOGIC;
        output_r_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
        image_r_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
        image_r_ce0 : OUT STD_LOGIC;
        image_r_q0 : IN STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component conv_layer1 IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        output_r_address0 : OUT STD_LOGIC_VECTOR (12 downto 0);
        output_r_ce0 : OUT STD_LOGIC;
        output_r_we0 : OUT STD_LOGIC;
        output_r_d0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component pool_layer1 IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        output_r_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
        output_r_ce0 : OUT STD_LOGIC;
        output_r_we0 : OUT STD_LOGIC;
        output_r_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
        image_r_address0 : OUT STD_LOGIC_VECTOR (12 downto 0);
        image_r_ce0 : OUT STD_LOGIC;
        image_r_q0 : IN STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component pool_layer2 IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        output_r_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
        output_r_ce0 : OUT STD_LOGIC;
        output_r_we0 : OUT STD_LOGIC;
        output_r_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
        image_r_address0 : OUT STD_LOGIC_VECTOR (11 downto 0);
        image_r_ce0 : OUT STD_LOGIC;
        image_r_q0 : IN STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component flatten IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        output_r_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
        output_r_ce0 : OUT STD_LOGIC;
        output_r_we0 : OUT STD_LOGIC;
        output_r_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
        input_r_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
        input_r_ce0 : OUT STD_LOGIC;
        input_r_q0 : IN STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component nnet_conv_layer1_ibs IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (12 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component nnet_conv_layer2_jbC IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (11 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component nnet_pool_layer1_kbM IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (10 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component nnet_pool_layer2_lbW IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component nnet_flatten_out IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    conv_layer1_out_U : component nnet_conv_layer1_ibs
    generic map (
        DataWidth => 32,
        AddressRange => 6728,
        AddressWidth => 13)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => conv_layer1_out_address0,
        ce0 => conv_layer1_out_ce0,
        we0 => conv_layer1_out_we0,
        d0 => grp_conv_layer1_fu_62_output_r_d0,
        q0 => conv_layer1_out_q0);

    conv_layer2_out_U : component nnet_conv_layer2_jbC
    generic map (
        DataWidth => 32,
        AddressRange => 2704,
        AddressWidth => 12)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => conv_layer2_out_address0,
        ce0 => conv_layer2_out_ce0,
        we0 => conv_layer2_out_we0,
        d0 => grp_conv_layer2_fu_52_output_r_d0,
        q0 => conv_layer2_out_q0);

    pool_layer1_out_U : component nnet_pool_layer1_kbM
    generic map (
        DataWidth => 32,
        AddressRange => 1568,
        AddressWidth => 11)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => pool_layer1_out_address0,
        ce0 => pool_layer1_out_ce0,
        we0 => pool_layer1_out_we0,
        d0 => grp_pool_layer1_fu_74_output_r_d0,
        q0 => pool_layer1_out_q0);

    pool_layer2_out_U : component nnet_pool_layer2_lbW
    generic map (
        DataWidth => 32,
        AddressRange => 576,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => pool_layer2_out_address0,
        ce0 => pool_layer2_out_ce0,
        we0 => pool_layer2_out_we0,
        d0 => grp_pool_layer2_fu_80_output_r_d0,
        q0 => pool_layer2_out_q0);

    flatten_out_U : component nnet_flatten_out
    generic map (
        DataWidth => 32,
        AddressRange => 576,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => grp_flatten_fu_86_output_r_address0,
        ce0 => grp_flatten_fu_86_output_r_ce0,
        we0 => grp_flatten_fu_86_output_r_we0,
        d0 => grp_flatten_fu_86_output_r_d0);

    grp_conv_layer2_fu_52 : component conv_layer2
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_conv_layer2_fu_52_ap_start,
        ap_done => grp_conv_layer2_fu_52_ap_done,
        ap_idle => grp_conv_layer2_fu_52_ap_idle,
        ap_ready => grp_conv_layer2_fu_52_ap_ready,
        output_r_address0 => grp_conv_layer2_fu_52_output_r_address0,
        output_r_ce0 => grp_conv_layer2_fu_52_output_r_ce0,
        output_r_we0 => grp_conv_layer2_fu_52_output_r_we0,
        output_r_d0 => grp_conv_layer2_fu_52_output_r_d0,
        image_r_address0 => grp_conv_layer2_fu_52_image_r_address0,
        image_r_ce0 => grp_conv_layer2_fu_52_image_r_ce0,
        image_r_q0 => pool_layer1_out_q0);

    grp_conv_layer1_fu_62 : component conv_layer1
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_conv_layer1_fu_62_ap_start,
        ap_done => grp_conv_layer1_fu_62_ap_done,
        ap_idle => grp_conv_layer1_fu_62_ap_idle,
        ap_ready => grp_conv_layer1_fu_62_ap_ready,
        output_r_address0 => grp_conv_layer1_fu_62_output_r_address0,
        output_r_ce0 => grp_conv_layer1_fu_62_output_r_ce0,
        output_r_we0 => grp_conv_layer1_fu_62_output_r_we0,
        output_r_d0 => grp_conv_layer1_fu_62_output_r_d0);

    grp_pool_layer1_fu_74 : component pool_layer1
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_pool_layer1_fu_74_ap_start,
        ap_done => grp_pool_layer1_fu_74_ap_done,
        ap_idle => grp_pool_layer1_fu_74_ap_idle,
        ap_ready => grp_pool_layer1_fu_74_ap_ready,
        output_r_address0 => grp_pool_layer1_fu_74_output_r_address0,
        output_r_ce0 => grp_pool_layer1_fu_74_output_r_ce0,
        output_r_we0 => grp_pool_layer1_fu_74_output_r_we0,
        output_r_d0 => grp_pool_layer1_fu_74_output_r_d0,
        image_r_address0 => grp_pool_layer1_fu_74_image_r_address0,
        image_r_ce0 => grp_pool_layer1_fu_74_image_r_ce0,
        image_r_q0 => conv_layer1_out_q0);

    grp_pool_layer2_fu_80 : component pool_layer2
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_pool_layer2_fu_80_ap_start,
        ap_done => grp_pool_layer2_fu_80_ap_done,
        ap_idle => grp_pool_layer2_fu_80_ap_idle,
        ap_ready => grp_pool_layer2_fu_80_ap_ready,
        output_r_address0 => grp_pool_layer2_fu_80_output_r_address0,
        output_r_ce0 => grp_pool_layer2_fu_80_output_r_ce0,
        output_r_we0 => grp_pool_layer2_fu_80_output_r_we0,
        output_r_d0 => grp_pool_layer2_fu_80_output_r_d0,
        image_r_address0 => grp_pool_layer2_fu_80_image_r_address0,
        image_r_ce0 => grp_pool_layer2_fu_80_image_r_ce0,
        image_r_q0 => conv_layer2_out_q0);

    grp_flatten_fu_86 : component flatten
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_flatten_fu_86_ap_start,
        ap_done => grp_flatten_fu_86_ap_done,
        ap_idle => grp_flatten_fu_86_ap_idle,
        ap_ready => grp_flatten_fu_86_ap_ready,
        output_r_address0 => grp_flatten_fu_86_output_r_address0,
        output_r_ce0 => grp_flatten_fu_86_output_r_ce0,
        output_r_we0 => grp_flatten_fu_86_output_r_we0,
        output_r_d0 => grp_flatten_fu_86_output_r_d0,
        input_r_address0 => grp_flatten_fu_86_input_r_address0,
        input_r_ce0 => grp_flatten_fu_86_input_r_ce0,
        input_r_q0 => pool_layer2_out_q0);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_reg_grp_conv_layer1_fu_62_ap_start_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_grp_conv_layer1_fu_62_ap_start <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                    ap_reg_grp_conv_layer1_fu_62_ap_start <= ap_const_logic_1;
                elsif ((grp_conv_layer1_fu_62_ap_ready = ap_const_logic_1)) then 
                    ap_reg_grp_conv_layer1_fu_62_ap_start <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_reg_grp_conv_layer2_fu_52_ap_start_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_grp_conv_layer2_fu_52_ap_start <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                    ap_reg_grp_conv_layer2_fu_52_ap_start <= ap_const_logic_1;
                elsif ((grp_conv_layer2_fu_52_ap_ready = ap_const_logic_1)) then 
                    ap_reg_grp_conv_layer2_fu_52_ap_start <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_reg_grp_flatten_fu_86_ap_start_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_grp_flatten_fu_86_ap_start <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                    ap_reg_grp_flatten_fu_86_ap_start <= ap_const_logic_1;
                elsif ((grp_flatten_fu_86_ap_ready = ap_const_logic_1)) then 
                    ap_reg_grp_flatten_fu_86_ap_start <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_reg_grp_pool_layer1_fu_74_ap_start_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_grp_pool_layer1_fu_74_ap_start <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                    ap_reg_grp_pool_layer1_fu_74_ap_start <= ap_const_logic_1;
                elsif ((grp_pool_layer1_fu_74_ap_ready = ap_const_logic_1)) then 
                    ap_reg_grp_pool_layer1_fu_74_ap_start <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_reg_grp_pool_layer2_fu_80_ap_start_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_grp_pool_layer2_fu_80_ap_start <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
                    ap_reg_grp_pool_layer2_fu_80_ap_start <= ap_const_logic_1;
                elsif ((grp_pool_layer2_fu_80_ap_ready = ap_const_logic_1)) then 
                    ap_reg_grp_pool_layer2_fu_80_ap_start <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, grp_conv_layer2_fu_52_ap_done, grp_conv_layer1_fu_62_ap_done, grp_pool_layer1_fu_74_ap_done, grp_pool_layer2_fu_80_ap_done, grp_flatten_fu_86_ap_done, ap_CS_fsm_state6, ap_CS_fsm_state2, ap_CS_fsm_state4, ap_CS_fsm_state8, ap_CS_fsm_state10)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((grp_conv_layer1_fu_62_ap_done = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state4) and (grp_pool_layer1_fu_74_ap_done = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                if (((grp_conv_layer2_fu_52_ap_done = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    ap_NS_fsm <= ap_ST_fsm_state7;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state8) and (grp_pool_layer2_fu_80_ap_done = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state9;
                else
                    ap_NS_fsm <= ap_ST_fsm_state8;
                end if;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state10) and (grp_flatten_fu_86_ap_done = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state10;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(grp_flatten_fu_86_ap_done, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) and (grp_flatten_fu_86_ap_done = ap_const_logic_1))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(grp_flatten_fu_86_ap_done, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) and (grp_flatten_fu_86_ap_done = ap_const_logic_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= ap_const_lv32_A;

    conv_layer1_out_address0_assign_proc : process(grp_conv_layer1_fu_62_output_r_address0, grp_pool_layer1_fu_74_image_r_address0, ap_CS_fsm_state2, ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            conv_layer1_out_address0 <= grp_pool_layer1_fu_74_image_r_address0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            conv_layer1_out_address0 <= grp_conv_layer1_fu_62_output_r_address0;
        else 
            conv_layer1_out_address0 <= "XXXXXXXXXXXXX";
        end if; 
    end process;


    conv_layer1_out_ce0_assign_proc : process(grp_conv_layer1_fu_62_output_r_ce0, grp_pool_layer1_fu_74_image_r_ce0, ap_CS_fsm_state2, ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            conv_layer1_out_ce0 <= grp_pool_layer1_fu_74_image_r_ce0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            conv_layer1_out_ce0 <= grp_conv_layer1_fu_62_output_r_ce0;
        else 
            conv_layer1_out_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    conv_layer1_out_we0_assign_proc : process(grp_conv_layer1_fu_62_output_r_we0, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            conv_layer1_out_we0 <= grp_conv_layer1_fu_62_output_r_we0;
        else 
            conv_layer1_out_we0 <= ap_const_logic_0;
        end if; 
    end process;


    conv_layer2_out_address0_assign_proc : process(grp_conv_layer2_fu_52_output_r_address0, grp_pool_layer2_fu_80_image_r_address0, ap_CS_fsm_state6, ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            conv_layer2_out_address0 <= grp_pool_layer2_fu_80_image_r_address0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            conv_layer2_out_address0 <= grp_conv_layer2_fu_52_output_r_address0;
        else 
            conv_layer2_out_address0 <= "XXXXXXXXXXXX";
        end if; 
    end process;


    conv_layer2_out_ce0_assign_proc : process(grp_conv_layer2_fu_52_output_r_ce0, grp_pool_layer2_fu_80_image_r_ce0, ap_CS_fsm_state6, ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            conv_layer2_out_ce0 <= grp_pool_layer2_fu_80_image_r_ce0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            conv_layer2_out_ce0 <= grp_conv_layer2_fu_52_output_r_ce0;
        else 
            conv_layer2_out_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    conv_layer2_out_we0_assign_proc : process(grp_conv_layer2_fu_52_output_r_we0, ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            conv_layer2_out_we0 <= grp_conv_layer2_fu_52_output_r_we0;
        else 
            conv_layer2_out_we0 <= ap_const_logic_0;
        end if; 
    end process;

    grp_conv_layer1_fu_62_ap_start <= ap_reg_grp_conv_layer1_fu_62_ap_start;
    grp_conv_layer2_fu_52_ap_start <= ap_reg_grp_conv_layer2_fu_52_ap_start;
    grp_flatten_fu_86_ap_start <= ap_reg_grp_flatten_fu_86_ap_start;
    grp_pool_layer1_fu_74_ap_start <= ap_reg_grp_pool_layer1_fu_74_ap_start;
    grp_pool_layer2_fu_80_ap_start <= ap_reg_grp_pool_layer2_fu_80_ap_start;

    pool_layer1_out_address0_assign_proc : process(grp_conv_layer2_fu_52_image_r_address0, grp_pool_layer1_fu_74_output_r_address0, ap_CS_fsm_state6, ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            pool_layer1_out_address0 <= grp_pool_layer1_fu_74_output_r_address0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            pool_layer1_out_address0 <= grp_conv_layer2_fu_52_image_r_address0;
        else 
            pool_layer1_out_address0 <= "XXXXXXXXXXX";
        end if; 
    end process;


    pool_layer1_out_ce0_assign_proc : process(grp_conv_layer2_fu_52_image_r_ce0, grp_pool_layer1_fu_74_output_r_ce0, ap_CS_fsm_state6, ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            pool_layer1_out_ce0 <= grp_pool_layer1_fu_74_output_r_ce0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            pool_layer1_out_ce0 <= grp_conv_layer2_fu_52_image_r_ce0;
        else 
            pool_layer1_out_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    pool_layer1_out_we0_assign_proc : process(grp_pool_layer1_fu_74_output_r_we0, ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            pool_layer1_out_we0 <= grp_pool_layer1_fu_74_output_r_we0;
        else 
            pool_layer1_out_we0 <= ap_const_logic_0;
        end if; 
    end process;


    pool_layer2_out_address0_assign_proc : process(grp_pool_layer2_fu_80_output_r_address0, grp_flatten_fu_86_input_r_address0, ap_CS_fsm_state8, ap_CS_fsm_state10)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            pool_layer2_out_address0 <= grp_flatten_fu_86_input_r_address0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            pool_layer2_out_address0 <= grp_pool_layer2_fu_80_output_r_address0;
        else 
            pool_layer2_out_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    pool_layer2_out_ce0_assign_proc : process(grp_pool_layer2_fu_80_output_r_ce0, grp_flatten_fu_86_input_r_ce0, ap_CS_fsm_state8, ap_CS_fsm_state10)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            pool_layer2_out_ce0 <= grp_flatten_fu_86_input_r_ce0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            pool_layer2_out_ce0 <= grp_pool_layer2_fu_80_output_r_ce0;
        else 
            pool_layer2_out_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    pool_layer2_out_we0_assign_proc : process(grp_pool_layer2_fu_80_output_r_we0, ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            pool_layer2_out_we0 <= grp_pool_layer2_fu_80_output_r_we0;
        else 
            pool_layer2_out_we0 <= ap_const_logic_0;
        end if; 
    end process;

end behav;