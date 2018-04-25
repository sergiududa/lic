-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4.1
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity conv_layer2 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    output_V_address0 : OUT STD_LOGIC_VECTOR (11 downto 0);
    output_V_ce0 : OUT STD_LOGIC;
    output_V_we0 : OUT STD_LOGIC;
    output_V_d0 : OUT STD_LOGIC_VECTOR (23 downto 0);
    image_V_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
    image_V_ce0 : OUT STD_LOGIC;
    image_V_q0 : IN STD_LOGIC_VECTOR (23 downto 0) );
end;


architecture behav of conv_layer2 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (11 downto 0) := "000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (11 downto 0) := "000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (11 downto 0) := "000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (11 downto 0) := "000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (11 downto 0) := "000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (11 downto 0) := "000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (11 downto 0) := "000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (11 downto 0) := "000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (11 downto 0) := "000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (11 downto 0) := "001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (11 downto 0) := "010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (11 downto 0) := "100000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv24_0 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000000000000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv8_D : STD_LOGIC_VECTOR (7 downto 0) := "00001101";
    constant ap_const_lv4_D : STD_LOGIC_VECTOR (3 downto 0) := "1101";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv23_0 : STD_LOGIC_VECTOR (22 downto 0) := "00000000000000000000000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv4_8 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv20_0 : STD_LOGIC_VECTOR (19 downto 0) := "00000000000000000000";
    constant ap_const_lv32_14 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010100";
    constant ap_const_lv32_2B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000101011";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (11 downto 0) := "000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal conv_layer2_bias_V_address0 : STD_LOGIC_VECTOR (3 downto 0);
    signal conv_layer2_bias_V_ce0 : STD_LOGIC;
    signal conv_layer2_bias_V_q0 : STD_LOGIC_VECTOR (19 downto 0);
    signal conv_layer2_weights_s_address0 : STD_LOGIC_VECTOR (8 downto 0);
    signal conv_layer2_weights_s_ce0 : STD_LOGIC;
    signal conv_layer2_weights_s_q0 : STD_LOGIC_VECTOR (18 downto 0);
    signal filter_1_fu_247_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal filter_1_reg_578 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal exitcond8_fu_241_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_cast2_fu_258_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_cast2_reg_588 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_cast_fu_262_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_cast_reg_593 : STD_LOGIC_VECTOR (12 downto 0);
    signal p_Val2_12_cast_fu_266_p1 : STD_LOGIC_VECTOR (23 downto 0);
    signal p_Val2_12_cast_reg_598 : STD_LOGIC_VECTOR (23 downto 0);
    signal tmp_2_fu_270_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_2_reg_603 : STD_LOGIC_VECTOR (22 downto 0);
    signal next_mul_fu_274_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal next_mul_reg_608 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal i_5_fu_286_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_5_reg_616 : STD_LOGIC_VECTOR (3 downto 0);
    signal j_5_fu_298_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal j_5_reg_624 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal row_offset_1_fu_314_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal row_offset_1_reg_632 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal tmp_52_fu_350_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_52_reg_637 : STD_LOGIC_VECTOR (8 downto 0);
    signal exitcond2_fu_308_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_76_cast_fu_364_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_76_cast_reg_642 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_49_fu_390_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_49_reg_647 : STD_LOGIC_VECTOR (12 downto 0);
    signal a_V_i_fu_415_p3 : STD_LOGIC_VECTOR (22 downto 0);
    signal a_V_i_reg_652 : STD_LOGIC_VECTOR (22 downto 0);
    signal col_offset_1_fu_433_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal col_offset_1_reg_660 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal tmp_79_cast_fu_454_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_79_cast_reg_665 : STD_LOGIC_VECTOR (11 downto 0);
    signal exitcond3_fu_427_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_42_fu_467_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_42_reg_670 : STD_LOGIC_VECTOR (6 downto 0);
    signal channel_offset_1_fu_481_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal channel_offset_1_reg_678 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal exitcond_fu_475_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal image_V_load_reg_693 : STD_LOGIC_VECTOR (23 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal conv_layer2_weights_2_reg_698 : STD_LOGIC_VECTOR (18 downto 0);
    signal p_Val2_2_fu_569_p2 : STD_LOGIC_VECTOR (41 downto 0);
    signal p_Val2_2_reg_703 : STD_LOGIC_VECTOR (41 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal ap_CS_fsm_state11 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state11 : signal is "none";
    signal filter_reg_124 : STD_LOGIC_VECTOR (4 downto 0);
    signal exitcond9_fu_280_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_reg_136 : STD_LOGIC_VECTOR (3 downto 0);
    signal exitcond1_fu_292_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal phi_mul_reg_148 : STD_LOGIC_VECTOR (7 downto 0);
    signal j_reg_160 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state12 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state12 : signal is "none";
    signal p_Val2_s_reg_172 : STD_LOGIC_VECTOR (23 downto 0);
    signal row_offset_reg_184 : STD_LOGIC_VECTOR (1 downto 0);
    signal sum_1_reg_195 : STD_LOGIC_VECTOR (23 downto 0);
    signal col_offset_reg_207 : STD_LOGIC_VECTOR (1 downto 0);
    signal p_Val2_1_reg_218 : STD_LOGIC_VECTOR (23 downto 0);
    signal channel_offset_reg_230 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_fu_253_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_83_cast_fu_500_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_87_cast_fu_523_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_71_cast_fu_561_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal row_offset_cast5_fu_304_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_27_fu_320_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_50_fu_326_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_51_fu_338_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal p_shl_cast_fu_334_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_shl1_cast_fu_346_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_53_fu_356_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_26_cast_fu_368_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_s_fu_372_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_40_fu_378_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_70_cast_fu_386_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_41_fu_395_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal p_Val2_s_34_fu_399_p2 : STD_LOGIC_VECTOR (23 downto 0);
    signal tmp_i_fu_409_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Val2_cast_fu_404_p2 : STD_LOGIC_VECTOR (22 downto 0);
    signal col_offset_cast3_fu_423_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_28_fu_439_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_29_cast_fu_445_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_54_fu_449_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_55_fu_462_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_31_cast_fu_491_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_56_fu_495_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_31_fu_487_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_57_fu_505_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_86_cast_fu_510_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_58_fu_518_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_32_fu_534_p3 : STD_LOGIC_VECTOR (43 downto 0);
    signal tmp_40_cast_fu_542_p1 : STD_LOGIC_VECTOR (43 downto 0);
    signal p_Val2_3_fu_545_p2 : STD_LOGIC_VECTOR (43 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (11 downto 0);

    component nnet_mul_mul_24s_hbi IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (23 downto 0);
        din1 : IN STD_LOGIC_VECTOR (18 downto 0);
        dout : OUT STD_LOGIC_VECTOR (41 downto 0) );
    end component;


    component conv_layer2_conv_fYi IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (19 downto 0) );
    end component;


    component conv_layer2_conv_g8j IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (8 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (18 downto 0) );
    end component;



begin
    conv_layer2_bias_V_U : component conv_layer2_conv_fYi
    generic map (
        DataWidth => 20,
        AddressRange => 16,
        AddressWidth => 4)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => conv_layer2_bias_V_address0,
        ce0 => conv_layer2_bias_V_ce0,
        q0 => conv_layer2_bias_V_q0);

    conv_layer2_weights_s_U : component conv_layer2_conv_g8j
    generic map (
        DataWidth => 19,
        AddressRange => 512,
        AddressWidth => 9)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => conv_layer2_weights_s_address0,
        ce0 => conv_layer2_weights_s_ce0,
        q0 => conv_layer2_weights_s_q0);

    nnet_mul_mul_24s_hbi_U9 : component nnet_mul_mul_24s_hbi
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 24,
        din1_WIDTH => 19,
        dout_WIDTH => 42)
    port map (
        din0 => image_V_load_reg_693,
        din1 => conv_layer2_weights_2_reg_698,
        dout => p_Val2_2_fu_569_p2);





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


    channel_offset_reg_230_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
                channel_offset_reg_230 <= channel_offset_1_reg_678;
            elsif (((exitcond3_fu_427_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                channel_offset_reg_230 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    col_offset_reg_207_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state8) and (exitcond_fu_475_p2 = ap_const_lv1_1))) then 
                col_offset_reg_207 <= col_offset_1_reg_660;
            elsif (((exitcond2_fu_308_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                col_offset_reg_207 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    filter_reg_124_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) and (exitcond9_fu_280_p2 = ap_const_lv1_1))) then 
                filter_reg_124 <= filter_1_reg_578;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                filter_reg_124 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;

    i_reg_136_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (exitcond1_fu_292_p2 = ap_const_lv1_1))) then 
                i_reg_136 <= i_5_reg_616;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                i_reg_136 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    j_reg_160_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond9_fu_280_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                j_reg_160 <= ap_const_lv4_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state12)) then 
                j_reg_160 <= j_5_reg_624;
            end if; 
        end if;
    end process;

    p_Val2_1_reg_218_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
                p_Val2_1_reg_218 <= p_Val2_3_fu_545_p2(43 downto 20);
            elsif (((exitcond3_fu_427_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                p_Val2_1_reg_218 <= sum_1_reg_195;
            end if; 
        end if;
    end process;

    p_Val2_s_reg_172_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_292_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                p_Val2_s_reg_172 <= ap_const_lv24_0;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state7) and (exitcond3_fu_427_p2 = ap_const_lv1_1))) then 
                p_Val2_s_reg_172 <= sum_1_reg_195;
            end if; 
        end if;
    end process;

    phi_mul_reg_148_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (exitcond1_fu_292_p2 = ap_const_lv1_1))) then 
                phi_mul_reg_148 <= next_mul_reg_608;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                phi_mul_reg_148 <= ap_const_lv8_0;
            end if; 
        end if;
    end process;

    row_offset_reg_184_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_292_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                row_offset_reg_184 <= ap_const_lv2_0;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state7) and (exitcond3_fu_427_p2 = ap_const_lv1_1))) then 
                row_offset_reg_184 <= row_offset_1_reg_632;
            end if; 
        end if;
    end process;

    sum_1_reg_195_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state8) and (exitcond_fu_475_p2 = ap_const_lv1_1))) then 
                sum_1_reg_195 <= p_Val2_1_reg_218;
            elsif (((exitcond2_fu_308_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                sum_1_reg_195 <= p_Val2_s_reg_172;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state6) and (exitcond2_fu_308_p2 = ap_const_lv1_1))) then
                a_V_i_reg_652 <= a_V_i_fu_415_p3;
                tmp_49_reg_647 <= tmp_49_fu_390_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                channel_offset_1_reg_678 <= channel_offset_1_fu_481_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                col_offset_1_reg_660 <= col_offset_1_fu_433_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then
                conv_layer2_weights_2_reg_698 <= conv_layer2_weights_s_q0;
                image_V_load_reg_693 <= image_V_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                filter_1_reg_578 <= filter_1_fu_247_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                i_5_reg_616 <= i_5_fu_286_p2;
                next_mul_reg_608 <= next_mul_fu_274_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                j_5_reg_624 <= j_5_fu_298_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                p_Val2_12_cast_reg_598 <= p_Val2_12_cast_fu_266_p1;
                tmp_2_reg_603 <= tmp_2_fu_270_p1;
                    tmp_cast2_reg_588(4 downto 0) <= tmp_cast2_fu_258_p1(4 downto 0);
                    tmp_cast_reg_593(4 downto 0) <= tmp_cast_fu_262_p1(4 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state10)) then
                p_Val2_2_reg_703 <= p_Val2_2_fu_569_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                row_offset_1_reg_632 <= row_offset_1_fu_314_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond3_fu_427_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then
                    tmp_42_reg_670(6 downto 3) <= tmp_42_fu_467_p3(6 downto 3);
                    tmp_79_cast_reg_665(11 downto 3) <= tmp_79_cast_fu_454_p3(11 downto 3);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond2_fu_308_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    tmp_52_reg_637(8 downto 1) <= tmp_52_fu_350_p2(8 downto 1);
                    tmp_76_cast_reg_642(2 downto 1) <= tmp_76_cast_fu_364_p1(2 downto 1);
            end if;
        end if;
    end process;
    tmp_cast2_reg_588(10 downto 5) <= "000000";
    tmp_cast_reg_593(12 downto 5) <= "00000000";
    tmp_52_reg_637(0) <= '0';
    tmp_76_cast_reg_642(0) <= '0';
    tmp_76_cast_reg_642(3) <= '0';
    tmp_79_cast_reg_665(2 downto 0) <= "000";
    tmp_42_reg_670(2 downto 0) <= "000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond8_fu_241_p2, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, exitcond2_fu_308_p2, ap_CS_fsm_state7, exitcond3_fu_427_p2, ap_CS_fsm_state8, exitcond_fu_475_p2, exitcond9_fu_280_p2, exitcond1_fu_292_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond8_fu_241_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state4) and (exitcond9_fu_280_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state5) and (exitcond1_fu_292_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state6 => 
                if (((exitcond2_fu_308_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    ap_NS_fsm <= ap_ST_fsm_state7;
                else
                    ap_NS_fsm <= ap_ST_fsm_state12;
                end if;
            when ap_ST_fsm_state7 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state7) and (exitcond3_fu_427_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state8;
                end if;
            when ap_ST_fsm_state8 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state8) and (exitcond_fu_475_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state7;
                else
                    ap_NS_fsm <= ap_ST_fsm_state9;
                end if;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state11;
            when ap_ST_fsm_state11 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state12 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXX";
        end case;
    end process;
    a_V_i_fu_415_p3 <= 
        p_Val2_cast_fu_404_p2 when (tmp_i_fu_409_p2(0) = '1') else 
        ap_const_lv23_0;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state11 <= ap_CS_fsm(10);
    ap_CS_fsm_state12 <= ap_CS_fsm(11);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond8_fu_241_p2)
    begin
        if ((((exitcond8_fu_241_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond8_fu_241_p2)
    begin
        if (((exitcond8_fu_241_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    channel_offset_1_fu_481_p2 <= std_logic_vector(unsigned(channel_offset_reg_230) + unsigned(ap_const_lv4_1));
    col_offset_1_fu_433_p2 <= std_logic_vector(unsigned(col_offset_reg_207) + unsigned(ap_const_lv2_1));
    col_offset_cast3_fu_423_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(col_offset_reg_207),4));
    conv_layer2_bias_V_address0 <= tmp_fu_253_p1(4 - 1 downto 0);

    conv_layer2_bias_V_ce0_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            conv_layer2_bias_V_ce0 <= ap_const_logic_1;
        else 
            conv_layer2_bias_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    conv_layer2_weights_s_address0 <= tmp_87_cast_fu_523_p1(9 - 1 downto 0);

    conv_layer2_weights_s_ce0_assign_proc : process(ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            conv_layer2_weights_s_ce0 <= ap_const_logic_1;
        else 
            conv_layer2_weights_s_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    exitcond1_fu_292_p2 <= "1" when (j_reg_160 = ap_const_lv4_D) else "0";
    exitcond2_fu_308_p2 <= "1" when (row_offset_reg_184 = ap_const_lv2_2) else "0";
    exitcond3_fu_427_p2 <= "1" when (col_offset_reg_207 = ap_const_lv2_2) else "0";
    exitcond8_fu_241_p2 <= "1" when (filter_reg_124 = ap_const_lv5_10) else "0";
    exitcond9_fu_280_p2 <= "1" when (i_reg_136 = ap_const_lv4_D) else "0";
    exitcond_fu_475_p2 <= "1" when (channel_offset_reg_230 = ap_const_lv4_8) else "0";
    filter_1_fu_247_p2 <= std_logic_vector(unsigned(filter_reg_124) + unsigned(ap_const_lv5_1));
    i_5_fu_286_p2 <= std_logic_vector(unsigned(i_reg_136) + unsigned(ap_const_lv4_1));
    image_V_address0 <= tmp_83_cast_fu_500_p1(11 - 1 downto 0);

    image_V_ce0_assign_proc : process(ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            image_V_ce0 <= ap_const_logic_1;
        else 
            image_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    j_5_fu_298_p2 <= std_logic_vector(unsigned(j_reg_160) + unsigned(ap_const_lv4_1));
    next_mul_fu_274_p2 <= std_logic_vector(unsigned(phi_mul_reg_148) + unsigned(ap_const_lv8_D));
    output_V_address0 <= tmp_71_cast_fu_561_p1(12 - 1 downto 0);

    output_V_ce0_assign_proc : process(ap_CS_fsm_state12)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state12)) then 
            output_V_ce0 <= ap_const_logic_1;
        else 
            output_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_V_d0 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(a_V_i_reg_652),24));

    output_V_we0_assign_proc : process(ap_CS_fsm_state12)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state12)) then 
            output_V_we0 <= ap_const_logic_1;
        else 
            output_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

        p_Val2_12_cast_fu_266_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(conv_layer2_bias_V_q0),24));

    p_Val2_3_fu_545_p2 <= std_logic_vector(unsigned(tmp_32_fu_534_p3) + unsigned(tmp_40_cast_fu_542_p1));
    p_Val2_cast_fu_404_p2 <= std_logic_vector(signed(tmp_2_reg_603) + signed(tmp_41_fu_395_p1));
    p_Val2_s_34_fu_399_p2 <= std_logic_vector(unsigned(p_Val2_s_reg_172) + unsigned(p_Val2_12_cast_reg_598));
    p_shl1_cast_fu_346_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_51_fu_338_p3),9));
    p_shl_cast_fu_334_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_50_fu_326_p3),9));
    row_offset_1_fu_314_p2 <= std_logic_vector(unsigned(row_offset_reg_184) + unsigned(ap_const_lv2_1));
    row_offset_cast5_fu_304_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(row_offset_reg_184),4));
    tmp_26_cast_fu_368_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_reg_160),8));
    tmp_27_fu_320_p2 <= std_logic_vector(unsigned(row_offset_cast5_fu_304_p1) + unsigned(i_reg_136));
    tmp_28_fu_439_p2 <= std_logic_vector(unsigned(j_reg_160) + unsigned(col_offset_cast3_fu_423_p1));
    tmp_29_cast_fu_445_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_28_fu_439_p2),9));
        tmp_2_fu_270_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(conv_layer2_bias_V_q0),23));

    tmp_31_cast_fu_491_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(channel_offset_reg_230),12));
    tmp_31_fu_487_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(channel_offset_reg_230),7));
    tmp_32_fu_534_p3 <= (p_Val2_1_reg_218 & ap_const_lv20_0);
        tmp_40_cast_fu_542_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(p_Val2_2_reg_703),44));

    tmp_40_fu_378_p3 <= (tmp_s_fu_372_p2 & ap_const_lv4_0);
    tmp_41_fu_395_p1 <= p_Val2_s_reg_172(23 - 1 downto 0);
    tmp_42_fu_467_p3 <= (tmp_55_fu_462_p2 & ap_const_lv3_0);
    tmp_49_fu_390_p2 <= std_logic_vector(unsigned(tmp_cast_reg_593) + unsigned(tmp_70_cast_fu_386_p1));
    tmp_50_fu_326_p3 <= (tmp_27_fu_320_p2 & ap_const_lv4_0);
    tmp_51_fu_338_p3 <= (tmp_27_fu_320_p2 & ap_const_lv1_0);
    tmp_52_fu_350_p2 <= std_logic_vector(unsigned(p_shl_cast_fu_334_p1) - unsigned(p_shl1_cast_fu_346_p1));
    tmp_53_fu_356_p3 <= (row_offset_reg_184 & ap_const_lv1_0);
    tmp_54_fu_449_p2 <= std_logic_vector(unsigned(tmp_29_cast_fu_445_p1) + unsigned(tmp_52_reg_637));
    tmp_55_fu_462_p2 <= std_logic_vector(unsigned(col_offset_cast3_fu_423_p1) + unsigned(tmp_76_cast_reg_642));
    tmp_56_fu_495_p2 <= std_logic_vector(unsigned(tmp_31_cast_fu_491_p1) + unsigned(tmp_79_cast_reg_665));
    tmp_57_fu_505_p2 <= std_logic_vector(unsigned(tmp_31_fu_487_p1) + unsigned(tmp_42_reg_670));
    tmp_58_fu_518_p2 <= std_logic_vector(unsigned(tmp_cast2_reg_588) + unsigned(tmp_86_cast_fu_510_p3));
    tmp_70_cast_fu_386_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_40_fu_378_p3),13));
    tmp_71_cast_fu_561_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_49_reg_647),64));
    tmp_76_cast_fu_364_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_53_fu_356_p3),4));
    tmp_79_cast_fu_454_p3 <= (tmp_54_fu_449_p2 & ap_const_lv3_0);
    tmp_83_cast_fu_500_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_56_fu_495_p2),64));
    tmp_86_cast_fu_510_p3 <= (tmp_57_fu_505_p2 & ap_const_lv4_0);
    tmp_87_cast_fu_523_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_58_fu_518_p2),64));
    tmp_cast2_fu_258_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(filter_reg_124),11));
    tmp_cast_fu_262_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(filter_reg_124),13));
    tmp_fu_253_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(filter_reg_124),64));
    tmp_i_fu_409_p2 <= "1" when (signed(p_Val2_s_34_fu_399_p2) > signed(ap_const_lv24_0)) else "0";
    tmp_s_fu_372_p2 <= std_logic_vector(unsigned(tmp_26_cast_fu_368_p1) + unsigned(phi_mul_reg_148));
end behav;
