-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4.1
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_layer1_image_0_rom is 
    generic(
             dwidth     : integer := 32; 
             awidth     : integer := 10; 
             mem_size    : integer := 1024
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv_layer1_image_0_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 to 300=> "00000000000000000000000000000000", 
    301 => "00111110110000101100001010111101", 
    302 => "00111110110000001100000011001111", 
    303 => "00111110100110101001101010100010", 
    304 => "00111110111011001110110011101010", 
    305 => "00111110011101001111010100001010", 
    306 to 324=> "00000000000000000000000000000000", 
    325 => "00111110101101001011010010101111", 
    326 => "00111111000010101000101010000011", 
    327 to 332=> "00111111011010111110101111110010", 
    333 to 334=> "00111111011110111111110000000001", 
    335 => "00111111011110001111100011111001", 
    336 => "00111111011111101111111011111000", 
    337 => "00111111011101011111010111110001", 
    338 => "00111111011010111110101111110010", 
    339 => "00111111001111101011111010111110", 
    340 => "00111101101010001010100010110001", 
    341 to 355=> "00000000000000000000000000000000", 
    356 => "00111111000011001000110010010011", 
    357 => "00111111011110111111110000000001", 
    358 to 371=> "00111111011111101111111011111000", 
    372 => "00111111001111011011110110110110", 
    373 => "00111101101110001011100010101110", 
    374 to 387=> "00000000000000000000000000000000", 
    388 => "00111111011000101110001011101011", 
    389 => "00111111011111101111111011111000", 
    390 => "00111111010100001101000011001100", 
    391 to 394=> "00111111010001111100011111000101", 
    395 => "00111111000010111000101110001011", 
    396 to 400=> "00111110011101001111010100001010", 
    401 => "00111111000000001000000010000100", 
    402 => "00111111010111101101111011011011", 
    403 to 404=> "00111111011111101111111011111000", 
    405 => "00111111001111011011110110110110", 
    406 => "00111101101010001010100010110001", 
    407 to 419=> "00000000000000000000000000000000", 
    420 => "00111110000110001001100010110011", 
    421 => "00111110101001001010010010110001", 
    422 => "00111101010100001101000001101000", 
    423 to 433=> "00000000000000000000000000000000", 
    434 => "00111110000010001000100001110010", 
    435 => "00111111010101011101010111010100", 
    436 to 437=> "00111111011111101111111011111000", 
    438 => "00111110111001101110011011011010", 
    439 to 466=> "00000000000000000000000000000000", 
    467 => "00111110101010001010100010110001", 
    468 to 469=> "00111111011111101111111011111000", 
    470 => "00111111011010101110101011101010", 
    471 to 498=> "00000000000000000000000000000000", 
    499 => "00111110101010001010100010110001", 
    500 to 501=> "00111111011111101111111011111000", 
    502 => "00111111011010101110101011101010", 
    503 to 529=> "00000000000000000000000000000000", 
    530 => "00111110110101001101010011001100", 
    531 => "00111111000111011001110110011001", 
    532 to 533=> "00111111011111101111111011111000", 
    534 => "00111111011100111111001111110001", 
    535 => "00111110010011001100110011001101", 
    536 to 556=> "00000000000000000000000000000000", 
    557 => "00111101110010001100100010101100", 
    558 => "00111110111010101110101011111011", 
    559 to 561=> "00111111011001001110010011101011", 
    562 => "00111111011111011111111000000000", 
    563 to 566=> "00111111011111101111111011111000", 
    567 => "00111111011100001111000011111010", 
    568 to 586=> "00000000000000000000000000000000", 
    587 => "00111110100010001000100010010100", 
    588 => "00111110111011101110111011111010", 
    589 => "00111111010111001101110011011011", 
    590 to 598=> "00111111011111101111111011111000", 
    599 => "00111111000011101000111010010011", 
    600 to 616=> "00000000000000000000000000000000", 
    617 => "00111110000101001001010010010010", 
    618 => "00111111001110111011101110110110", 
    619 => "00111111011111011111111000000000", 
    620 to 622=> "00111111011111101111111011111000", 
    623 => "00111111010111111101111111100011", 
    624 to 625=> "00111111010011101100111011001101", 
    626 => "00111110100101101001011010100010", 
    627 => "00111110100010001000100010010100", 
    628 => "00111111010101111101011111010100", 
    629 to 630=> "00111111011111101111111011111000", 
    631 => "00111110111010101110101011111011", 
    632 to 647=> "00000000000000000000000000000000", 
    648 => "00111110111000101110001011011010", 
    649 => "00111111010110111101101111100100", 
    650 => "00111111011111101111111011111000", 
    651 => "00111111011100101111001011111010", 
    652 => "00111111011000111110001111100011", 
    653 => "00111110111001101110011011011010", 
    654 => "00111110101100101011001011000000", 
    655 => "00111101111110001111100100101011", 
    656 to 659=> "00000000000000000000000000000000", 
    660 => "00111111010010001100100011001101", 
    661 => "00111111011111101111111011111000", 
    662 => "00111111011100011111000111110001", 
    663 => "00111110001001001010010010010000", 
    664 to 679=> "00000000000000000000000000000000", 
    680 => "00111111001010011010100110101000", 
    681 => "00111111011111101111111011111000", 
    682 => "00111111001100001011000010101111", 
    683 => "00111110011110001111100011101000", 
    684 to 690=> "00000000000000000000000000000000", 
    691 => "00111110010000001100000010101101", 
    692 => "00111111011001111110011111100010", 
    693 => "00111111011111101111111011111000", 
    694 => "00111111011010101110101011101010", 
    695 to 711=> "00000000000000000000000000000000", 
    712 => "00111101100100001001000001110001", 
    713 => "00111110111110001111100100001001", 
    714 to 722=> "00000000000000000000000000000000", 
    723 => "00111110101010001010100010110001", 
    724 to 725=> "00111111011111101111111011111000", 
    726 => "00111111001001101010011010100000", 
    727 to 754=> "00000000000000000000000000000000", 
    755 => "00111111000010111000101110001011", 
    756 => "00111111011111101111111011111000", 
    757 => "00111111011011101110111011101001", 
    758 => "00111110011001001110010011001001", 
    759 to 785=> "00000000000000000000000000000000", 
    786 => "00111111010100101101001011001100", 
    787 => "00111111011110101111101011111000", 
    788 => "00111111011111101111111011111000", 
    789 => "00111111001010001010100010110001", 
    790 to 817=> "00000000000000000000000000000000", 
    818 => "00111111011100101111001011111010", 
    819 => "00111111011111101111111011111000", 
    820 => "00111111011011111110111111110010", 
    821 => "00111110011001001110010011001001", 
    822 to 848=> "00000000000000000000000000000000", 
    849 => "00111110101100101011001011000000", 
    850 => "00111111011110111111110000000001", 
    851 => "00111111011100011111000111110001", 
    852 => "00111110101011001010110010110000", 
    853 to 879=> "00000000000000000000000000000000", 
    880 => "00111100101000001010000011110101", 
    881 => "00111111010011101100111011001101", 
    882 => "00111111011101101111011011111001", 
    883 => "00111111000111011001110110011001", 
    884 to 911=> "00000000000000000000000000000000", 
    912 => "00111100100000000111111111101101", 
    913 => "00111110111010101110101011111011", 
    914 => "00111110100010101000101010000011", 
    915 to 1023=> "00000000000000000000000000000000" );


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

entity conv_layer1_image_0 is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 1024;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv_layer1_image_0 is
    component conv_layer1_image_0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv_layer1_image_0_rom_U :  component conv_layer1_image_0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


