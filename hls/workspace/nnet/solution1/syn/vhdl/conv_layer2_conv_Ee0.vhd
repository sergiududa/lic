-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4.1
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_layer2_conv_Ee0_rom is 
    generic(
             dwidth     : integer := 19; 
             awidth     : integer := 4; 
             mem_size    : integer := 16
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv_layer2_conv_Ee0_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "0101101010001001011", 1 => "1111111010101010111", 
    2 => "1011000110011011111", 3 => "1000001001001010010", 
    4 => "1101100110000000011", 5 => "0000111011011011101", 
    6 => "1011000010010011001", 7 => "0010010010100010011", 
    8 => "1100000001001101100", 9 => "1111110011011101101", 
    10 => "1111100011010101110", 11 => "1100001101100110000", 
    12 => "1111001111110111100", 13 => "0001010010100100001", 
    14 => "0000000001011101111", 15 => "0000011011010001101" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity conv_layer2_conv_Ee0 is
    generic (
        DataWidth : INTEGER := 19;
        AddressRange : INTEGER := 16;
        AddressWidth : INTEGER := 4);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv_layer2_conv_Ee0 is
    component conv_layer2_conv_Ee0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv_layer2_conv_Ee0_rom_U :  component conv_layer2_conv_Ee0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


