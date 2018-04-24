-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4.1
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity flatten is
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
end;


architecture behav of flatten is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv3_6 : STD_LOGIC_VECTOR (2 downto 0) := "110";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_3_fu_106_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal i_3_reg_264 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_55_fu_136_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_55_reg_269 : STD_LOGIC_VECTOR (6 downto 0);
    signal exitcond2_fu_100_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_s_fu_166_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_s_reg_274 : STD_LOGIC_VECTOR (10 downto 0);
    signal j_3_fu_178_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal j_3_reg_282 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_74_cast_fu_193_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_74_cast_reg_287 : STD_LOGIC_VECTOR (10 downto 0);
    signal exitcond1_fu_172_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_15_fu_201_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_15_reg_292 : STD_LOGIC_VECTOR (6 downto 0);
    signal k_3_fu_219_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal k_3_reg_300 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal exitcond_fu_213_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_17_fu_248_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_17_reg_310 : STD_LOGIC_VECTOR (10 downto 0);
    signal i_reg_67 : STD_LOGIC_VECTOR (2 downto 0);
    signal j_reg_78 : STD_LOGIC_VECTOR (2 downto 0);
    signal k_reg_89 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_75_cast_fu_234_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_18_fu_256_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_fu_112_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_54_fu_124_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_shl1_cast_fu_120_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal p_shl2_cast_fu_132_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal p_shl_fu_142_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal p_shl5_fu_154_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_shl_cast_fu_150_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal p_shl5_cast_fu_162_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_14_cast_fu_184_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_56_fu_188_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_16_cast_fu_225_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_57_fu_229_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal k_cast3_fu_209_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp1_fu_239_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp1_cast_fu_244_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_28_cast_fu_253_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);


begin




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


    i_reg_67_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_172_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i_reg_67 <= i_3_reg_264;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_67 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    j_reg_78_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_213_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                j_reg_78 <= j_3_reg_282;
            elsif (((exitcond2_fu_100_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                j_reg_78 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    k_reg_89_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_172_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                k_reg_89 <= ap_const_lv5_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                k_reg_89 <= k_3_reg_300;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_3_reg_264 <= i_3_fu_106_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                j_3_reg_282 <= j_3_fu_178_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                k_3_reg_300 <= k_3_fu_219_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_172_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    tmp_15_reg_292(6 downto 4) <= tmp_15_fu_201_p3(6 downto 4);
                    tmp_74_cast_reg_287(10 downto 4) <= tmp_74_cast_fu_193_p3(10 downto 4);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_213_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                tmp_17_reg_310 <= tmp_17_fu_248_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond2_fu_100_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    tmp_55_reg_269(6 downto 1) <= tmp_55_fu_136_p2(6 downto 1);
                    tmp_s_reg_274(10 downto 5) <= tmp_s_fu_166_p2(10 downto 5);
            end if;
        end if;
    end process;
    tmp_55_reg_269(0) <= '0';
    tmp_s_reg_274(4 downto 0) <= "00000";
    tmp_74_cast_reg_287(3 downto 0) <= "0000";
    tmp_15_reg_292(3 downto 0) <= "0000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond2_fu_100_p2, ap_CS_fsm_state3, exitcond1_fu_172_p2, ap_CS_fsm_state4, exitcond_fu_213_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond2_fu_100_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((exitcond1_fu_172_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((exitcond_fu_213_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond2_fu_100_p2)
    begin
        if ((((exitcond2_fu_100_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond2_fu_100_p2)
    begin
        if (((exitcond2_fu_100_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    exitcond1_fu_172_p2 <= "1" when (j_reg_78 = ap_const_lv3_6) else "0";
    exitcond2_fu_100_p2 <= "1" when (i_reg_67 = ap_const_lv3_6) else "0";
    exitcond_fu_213_p2 <= "1" when (k_reg_89 = ap_const_lv5_10) else "0";
    i_3_fu_106_p2 <= std_logic_vector(unsigned(i_reg_67) + unsigned(ap_const_lv3_1));
    input_r_address0 <= tmp_75_cast_fu_234_p1(10 - 1 downto 0);

    input_r_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            input_r_ce0 <= ap_const_logic_1;
        else 
            input_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    j_3_fu_178_p2 <= std_logic_vector(unsigned(j_reg_78) + unsigned(ap_const_lv3_1));
    k_3_fu_219_p2 <= std_logic_vector(unsigned(k_reg_89) + unsigned(ap_const_lv5_1));
    k_cast3_fu_209_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(k_reg_89),7));
    output_r_address0 <= tmp_18_fu_256_p1(10 - 1 downto 0);

    output_r_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            output_r_ce0 <= ap_const_logic_1;
        else 
            output_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_r_d0 <= input_r_q0;

    output_r_we0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            output_r_we0 <= ap_const_logic_1;
        else 
            output_r_we0 <= ap_const_logic_0;
        end if; 
    end process;

    p_shl1_cast_fu_120_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_fu_112_p3),7));
    p_shl2_cast_fu_132_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_54_fu_124_p3),7));
    p_shl5_cast_fu_162_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_shl5_fu_154_p3),11));
    p_shl5_fu_154_p3 <= (i_reg_67 & ap_const_lv5_0);
    p_shl_cast_fu_150_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_shl_fu_142_p3),11));
    p_shl_fu_142_p3 <= (i_reg_67 & ap_const_lv7_0);
    tmp1_cast_fu_244_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp1_fu_239_p2),11));
    tmp1_fu_239_p2 <= std_logic_vector(unsigned(k_cast3_fu_209_p1) + unsigned(tmp_15_reg_292));
    tmp_14_cast_fu_184_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_reg_78),7));
    tmp_15_fu_201_p3 <= (j_reg_78 & ap_const_lv4_0);
    tmp_16_cast_fu_225_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(k_reg_89),11));
    tmp_17_fu_248_p2 <= std_logic_vector(unsigned(tmp_s_reg_274) + unsigned(tmp1_cast_fu_244_p1));
    tmp_18_fu_256_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_28_cast_fu_253_p1),64));
        tmp_28_cast_fu_253_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_17_reg_310),32));

    tmp_54_fu_124_p3 <= (i_reg_67 & ap_const_lv1_0);
    tmp_55_fu_136_p2 <= std_logic_vector(unsigned(p_shl1_cast_fu_120_p1) - unsigned(p_shl2_cast_fu_132_p1));
    tmp_56_fu_188_p2 <= std_logic_vector(unsigned(tmp_14_cast_fu_184_p1) + unsigned(tmp_55_reg_269));
    tmp_57_fu_229_p2 <= std_logic_vector(unsigned(tmp_74_cast_reg_287) + unsigned(tmp_16_cast_fu_225_p1));
    tmp_74_cast_fu_193_p3 <= (tmp_56_fu_188_p2 & ap_const_lv4_0);
    tmp_75_cast_fu_234_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_57_fu_229_p2),64));
    tmp_fu_112_p3 <= (i_reg_67 & ap_const_lv3_0);
    tmp_s_fu_166_p2 <= std_logic_vector(unsigned(p_shl_cast_fu_150_p1) - unsigned(p_shl5_cast_fu_162_p1));
end behav;