-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4.1
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_layer2_conv_g8j_rom is 
    generic(
             dwidth     : integer := 19; 
             awidth     : integer := 9; 
             mem_size    : integer := 512
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv_layer2_conv_g8j_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "0101000000001100110", 1 => "1001010000011101011", 
    2 => "0110010001000101100", 3 => "1010101101010100010", 
    4 => "1001000000101000001", 5 => "0000101110011001011", 
    6 => "0000000011110100100", 7 => "0110110011000001001", 
    8 => "0010101101100111111", 9 => "0110110110011001010", 
    10 => "1001111101010101000", 11 => "0101101001101100111", 
    12 => "0110011110011111010", 13 => "0011010111011110101", 
    14 => "1110100000100101001", 15 => "0001001101010111011", 
    16 => "0101101011010010000", 17 => "0001100010011000000", 
    18 => "0100011010110101000", 19 => "0111100100010111001", 
    20 => "1000111111111100100", 21 => "1101010111101011100", 
    22 => "1011100010111111001", 23 => "1101001000000010111", 
    24 => "1000101000001011111", 25 => "1001000100110101111", 
    26 => "1101001110111110010", 27 => "1111110110010100100", 
    28 => "1001110101010001111", 29 => "1101100000001110001", 
    30 => "0000010110110010011", 31 => "1100111001000101100", 
    32 => "0110000110111011001", 33 => "0100110100111101100", 
    34 => "0111111111010001001", 35 => "0010100011001111010", 
    36 => "1010000010010011001", 37 => "1011000011110000101", 
    38 => "0010100011000111110", 39 => "0100001011101111100", 
    40 => "0100000011101011010", 41 => "1110101010000001000", 
    42 => "0111001011001110110", 43 => "0110001111110011011", 
    44 => "0110101011010011111", 45 => "1100010001011100110", 
    46 => "1010110010011101000", 47 => "1000101110111010000", 
    48 => "0111110011101100001", 49 => "1000100111101111110", 
    50 => "1011101010001011011", 51 => "1000000011101100010", 
    52 => "0001100111000011101", 53 => "1100000001101110110", 
    54 => "1111010011011100110", 55 => "1011010111010111010", 
    56 => "1010001001000011010", 57 => "0001110000110010110", 
    58 => "0011001110101000101", 59 => "0001000111001000011", 
    60 => "1100001000001110000", 61 => "1001100001010001111", 
    62 => "0111011010111001101", 63 => "1011011001000011001", 
    64 => "0111000111000101100", 65 => "1000110010011011100", 
    66 => "0110001101011001101", 67 => "1011101110111111110", 
    68 => "1111000110100100011", 69 => "1010000110100111111", 
    70 => "0110110011111111110", 71 => "1101100000111010101", 
    72 => "0111110100011110010", 73 => "0101100001101101101", 
    74 => "0100010011010010110", 75 => "1100100101000001100", 
    76 => "1111100001010011110", 77 => "0101011010111010100", 
    78 => "0100011100010110010", 79 => "1101101100110110100", 
    80 => "0100000000101111001", 81 => "1110001110000011111", 
    82 => "1101110001000000001", 83 => "1000000100111000000", 
    84 => "1010110010111000011", 85 => "0111111000011100111", 
    86 => "1100000101001001000", 87 => "1101010010110010100", 
    88 => "0010110100111010001", 89 => "1001001010000100110", 
    90 => "1000111010010101100", 91 => "0111011000101011010", 
    92 => "1111011111010110011", 93 => "0010010110001001011", 
    94 => "0111010110110000010", 95 => "0101101100000111010", 
    96 => "1010011101111110010", 97 => "1111010110000110011", 
    98 => "0100001000011101111", 99 => "1100000101001100101", 
    100 => "0101000110001110110", 101 => "1100100000000010001", 
    102 => "0110100010100010001", 103 => "0010111000001001100", 
    104 => "0001010110011111100", 105 => "0101000110011000011", 
    106 => "0100101010100010010", 107 => "1111001111010011111", 
    108 => "1010100001001001011", 109 => "1100001101010101010", 
    110 => "0011010100111011001", 111 => "1100011000000100110", 
    112 => "1100100101011101011", 113 => "0101001110101011011", 
    114 => "0010100100000010100", 115 => "1011100111111000011", 
    116 => "1111011001110111010", 117 => "0100000011101000010", 
    118 => "1110110010001101010", 119 => "1100000101010011000", 
    120 => "0111000111111110110", 121 => "1011111110010011101", 
    122 => "0010011110100000101", 123 => "0011100101011111110", 
    124 => "0100110110101010011", 125 => "0010110010000101000", 
    126 => "1111101011110000011", 127 => "0101111100101011011", 
    128 => "0000000011101001110", 129 => "0110001001000110101", 
    130 => "1110000101000001001", 131 => "0011111111000010101", 
    132 => "0110011111100000100", 133 => "1110011110100010111", 
    134 => "1101000010000111101", 135 => "0010010001011100101", 
    136 => "0111011111111101101", 137 => "1100110001000001111", 
    138 => "1000111100110011101", 139 => "0110101100101111000", 
    140 => "1100011101001100010", 141 => "1010001101000001010", 
    142 => "0000001111101001011", 143 => "0110111101011010100", 
    144 => "0101101010001001011", 145 => "1111111010101010111", 
    146 => "1011000110011011111", 147 => "1000001001001010010", 
    148 => "1101100110000000011", 149 => "0000111011011011101", 
    150 => "1011000010010011001", 151 => "0010010010100010011", 
    152 => "1100000001001101100", 153 => "1111110011011101101", 
    154 => "1111100011010101110", 155 => "1100001101100110000", 
    156 => "1111001111110111100", 157 => "0001010010100100001", 
    158 => "0000000001011101111", 159 => "0000011011010001101", 
    160 => "1001010001000000010", 161 => "1111001100001010101", 
    162 => "0001010111001001110", 163 => "1101101100101011010", 
    164 => "0111001011001111000", 165 => "1100000011101110011", 
    166 => "0011100001100000101", 167 => "1001101111010110110", 
    168 => "0011110111100111001", 169 => "1000100000001111100", 
    170 => "1111111011111011010", 171 => "1000011101001010000", 
    172 => "1111011101101110011", 173 => "0001110011110010100", 
    174 => "0001110101011010111", 175 => "0001001101010011000", 
    176 => "0110010111111110001", 177 => "1000110101100010000", 
    178 => "1010110000111100111", 179 => "0010010110010000100", 
    180 => "1111011111010111101", 181 => "0000110110100001110", 
    182 => "1011001100110110110", 183 => "0010001101100110101", 
    184 => "0011100011000101000", 185 => "1011011110100100101", 
    186 => "1110101100011101000", 187 => "0101000111101011001", 
    188 => "1001000010110100000", 189 => "0111100110101001001", 
    190 => "0110000110001010111", 191 => "1010101111110101010", 
    192 => "1011001111010111011", 193 => "0000001011111110110", 
    194 => "0000011000110111000", 195 => "1100001011101011000", 
    196 => "1100001010101000110", 197 => "0000010111111100100", 
    198 => "0110101110110100011", 199 => "0010001110111011111", 
    200 => "1101110100010100000", 201 => "0100010011011000111", 
    202 => "1000010001100101101", 203 => "0000110001000000111", 
    204 => "1100011000101101010", 205 => "1101010010010100110", 
    206 => "0000101100101101010", 207 => "0111010011111111100", 
    208 => "1010110100101100101", 209 => "0100110010100010001", 
    210 => "1011000101110000110", 211 => "0100000010001010111", 
    212 => "1011011000010000101", 213 => "0101101111100101101", 
    214 => "1100111111010111110", 215 => "1011000000100001100", 
    216 => "0111000001000100000", 217 => "1001101000101111001", 
    218 => "1010101001011011010", 219 => "1001000111100010110", 
    220 => "0010110101000111111", 221 => "0000100000111001110", 
    222 => "1100001011001000111", 223 => "1001101100111110011", 
    224 => "1010111100000001111", 225 => "0101011100111111011", 
    226 => "1000110110101100001", 227 => "0101000110101010011", 
    228 => "1101010101001101000", 229 => "1011101101010101101", 
    230 => "1000101100101100000", 231 => "0011010001101000010", 
    232 => "1000010100111111100", 233 => "0001101010100000101", 
    234 => "0010101011110001001", 235 => "0101101001111010110", 
    236 => "1101111110101101010", 237 => "0100011110010010000", 
    238 => "0010000110111100010", 239 => "0100000010101010001", 
    240 => "1100001111010111011", 241 => "0101110010000101001", 
    242 => "0110001111101000001", 243 => "0011001101010001100", 
    244 => "0111101111000101010", 245 => "1000100101010011011", 
    246 => "0101110000110010110", 247 => "0001111100010110100", 
    248 => "1101111011011101010", 249 => "0001100001111011001", 
    250 => "0000001110111100011", 251 => "0010011001001100011", 
    252 => "0101111110011100110", 253 => "0010011110001100010", 
    254 => "0100100111110000000", 255 => "0000100001110010011", 
    256 => "1110111100001011100", 257 => "0100000001110010111", 
    258 => "1110101110011110010", 259 => "1100110110000010110", 
    260 => "1011111010011101000", 261 => "0011001100110100011", 
    262 => "0011110010000110000", 263 => "1010001111001010100", 
    264 => "1011000011100011011", 265 => "1010011101110011011", 
    266 => "0101011100100100101", 267 => "1110101101110100001", 
    268 => "1001101000010101000", 269 => "0101100110110000011", 
    270 => "0011011011111111001", 271 => "0000100100010000000", 
    272 => "0010010111001101110", 273 => "0001100000001000100", 
    274 => "0110110110111101001", 275 => "0110011010100101010", 
    276 => "0101101001111100011", 277 => "0111110101111100100", 
    278 => "0100101100010001010", 279 => "0110001011011010100", 
    280 => "1011111000111111111", 281 => "1011101110011010010", 
    282 => "0100011010000100011", 283 => "1011101101000110001", 
    284 => "0010001000000111000", 285 => "1010110100111100110", 
    286 => "0110000000001000011", 287 => "0010100110110000010", 
    288 => "0010000010111110101", 289 => "0101011000100111010", 
    290 => "0101101100011110100", 291 => "0000011100001101100", 
    292 => "1101000100101100110", 293 => "0011001101001001101", 
    294 => "0011111110110010101", 295 => "1101111010010111110", 
    296 => "0101100000111110110", 297 => "1101111000001011100", 
    298 => "1100000111010011111", 299 => "0100101011010000101", 
    300 => "1110011011001110100", 301 => "0000100111000000111", 
    302 => "0010110101001110101", 303 => "0010111110101101111", 
    304 => "1001001001000111000", 305 => "0100110010100100111", 
    306 => "0100001010001001011", 307 => "1101001111110010100", 
    308 => "1011000000101000001", 309 => "1001101100100110000", 
    310 => "1110010111100101011", 311 => "0100110100110001000", 
    312 => "1001011001101000001", 313 => "0110000111001110100", 
    314 => "1110000110001010111", 315 => "0101001100001101000", 
    316 => "0001110000100011101", 317 => "1010011101001100000", 
    318 => "0010010111100111101", 319 => "0111100000110010111", 
    320 => "0101111011100110010", 321 => "1111010111100100001", 
    322 => "0100011100011101100", 323 => "1111101011010001111", 
    324 => "1000001101000001001", 325 => "1001001001111110110", 
    326 => "1001010011011111101", 327 => "1101011010101110011", 
    328 => "1111001100000010100", 329 => "1011101110010111111", 
    330 => "1110100001111001101", 331 => "1010000110001100000", 
    332 => "0011010001001000010", 333 => "1111101000010011001", 
    334 => "1100001001001110110", 335 => "1110111111001110010", 
    336 => "0101001010010010110", 337 => "1000000110010100000", 
    338 => "0001010100110000001", 339 => "1000101001011010100", 
    340 => "1011111110100100111", 341 => "0000101110010010010", 
    342 => "0101011110110010011", 343 => "1010101101101110100", 
    344 => "0010000100110101000", 345 => "1010101001111000110", 
    346 => "0111110010110011101", 347 => "1010000101011011000", 
    348 => "0110110010001011111", 349 => "1001100010001000111", 
    350 => "1111111000001010010", 351 => "0011100101100111100", 
    352 => "1101110111101100111", 353 => "0101111001001110100", 
    354 => "0011010101011110110", 355 => "1010001001000011010", 
    356 => "1001111001001111001", 357 => "1000000101011110001", 
    358 => "1001000011000001100", 359 => "1010110111100100111", 
    360 => "1111110010000111111", 361 => "1011000010101101001", 
    362 => "0000100000110011100", 363 => "1100111111101010010", 
    364 => "0111100001010000010", 365 => "1100110011100010000", 
    366 => "0111100111100111011", 367 => "1101000000001001111", 
    368 => "0111001000010001011", 369 => "1000101001000010001", 
    370 => "1011101101111001110", 371 => "0000110110101000110", 
    372 => "0110111010110001010", 373 => "1100110110011001010", 
    374 => "0001010100010100101", 375 => "0001001000001000001", 
    376 => "1111111001111100111", 377 => "1101110111000010011", 
    378 => "1010110101111100100", 379 => "1000000000100110110", 
    380 => "1000110001011110011", 381 => "0001100010110000000", 
    382 => "1111001101100110111", 383 => "1000100110000101100", 
    384 => "1010000111011111101", 385 => "1101101101111100101", 
    386 => "1111010110111101100", 387 => "1100000011001010001", 
    388 => "1000000100101001110", 389 => "1110000110110100101", 
    390 => "1000111011011001001", 391 => "1100100001011100001", 
    392 => "0001110000100100100", 393 => "1000010100011110101", 
    394 => "0011111000011011001", 395 => "0001101101100010010", 
    396 => "0101101110111011000", 397 => "0011010100001100001", 
    398 => "0100111101100111010", 399 => "1000000101011010101", 
    400 => "1101010000100011110", 401 => "0101101011100010011", 
    402 => "0011110101001110110", 403 => "0101010111100001100", 
    404 => "1101010101110100101", 405 => "1101011010111110001", 
    406 => "1111110100001011101", 407 => "1011010100000110000", 
    408 => "0111101110110101101", 409 => "1110001000000010100", 
    410 => "1001111001110000001", 411 => "0100010011100000001", 
    412 => "1000101101011110010", 413 => "1010110111111100100", 
    414 => "1010110101111010011", 415 => "1100101101010101010", 
    416 => "0001111101100111011", 417 => "0111111100010110011", 
    418 => "1000101101001010100", 419 => "0000101001111110100", 
    420 => "1111000001110110001", 421 => "0111101110000010010", 
    422 => "0011011011010111111", 423 => "1111010111001100100", 
    424 => "1101001011110001001", 425 => "1110010000100001010", 
    426 => "0011011000100001111", 427 => "0000011000101110011", 
    428 => "1011110011100110010", 429 => "1000101011110010111", 
    430 => "0011001001111011011", 431 => "0110101000111011101", 
    432 => "0110011110101111001", 433 => "1000010011000101001", 
    434 => "0011100011000010100", 435 => "0011110000101011011", 
    436 => "1001100010000110100", 437 => "0101101000101010101", 
    438 => "0011011101001000110", 439 => "1001010101010000111", 
    440 => "1101011010000100000", 441 => "1101101010101011100", 
    442 => "0001010001010000001", 443 => "0111100011011111101", 
    444 => "0011001111001010000", 445 => "1100001100001000000", 
    446 => "1000110111100110000", 447 => "0111001000000100011", 
    448 => "1111011000011001011", 449 => "1010000111100100110", 
    450 => "0101001110001010001", 451 => "1111001111011100101", 
    452 => "0100110011100000011", 453 => "0010001000101111001", 
    454 => "1000100110001101000", 455 => "0011000011010111111", 
    456 => "0111010110011101111", 457 => "0110100101110010101", 
    458 => "0001001001101101000", 459 => "0101111101010110001", 
    460 => "1100110011000010101", 461 => "0101110100110011101", 
    462 => "1111001111111110110", 463 => "0101011111010000011", 
    464 => "1100000100101101011", 465 => "1010101110100000010", 
    466 => "1111110001101100110", 467 => "1000011101010011011", 
    468 => "0011111111001101010", 469 => "1101111101101111001", 
    470 => "0110100110000011110", 471 => "0010111011001100100", 
    472 => "1000010000110100110", 473 => "0011001000110000001", 
    474 => "1111111100000110000", 475 => "0010001010010001010", 
    476 => "1000111010000000011", 477 => "1010011111111101111", 
    478 => "1000101010111010010", 479 => "0111001010010001111", 
    480 => "1000010000010011000", 481 => "1011111101111101010", 
    482 => "0111011010101011010", 483 => "1001010111100000110", 
    484 => "1111111011110011001", 485 => "1110111001101001111", 
    486 => "0110000011110010101", 487 => "1011010000010100100", 
    488 => "0101101000110000110", 489 => "0111100010000010111", 
    490 => "1111010111100011111", 491 => "1100010101010100001", 
    492 => "1001011001001100000", 493 => "1011110100010111110", 
    494 => "1001111000111110110", 495 => "1111101111011010100", 
    496 => "0100001001111111111", 497 => "1111010100000011011", 
    498 => "1000001110100101000", 499 => "1011101011111001010", 
    500 => "1101111100111011111", 501 => "0011010110100101001", 
    502 => "0111001100001111101", 503 => "1010111110001101011", 
    504 => "1100011101110000000", 505 => "1011100001111000001", 
    506 => "0101101101111000100", 507 => "1011011101001011101", 
    508 => "1100111111011100000", 509 => "1011101111011010101", 
    510 => "0101110110101101100", 511 => "0011101011101110010" );


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

entity conv_layer2_conv_g8j is
    generic (
        DataWidth : INTEGER := 19;
        AddressRange : INTEGER := 512;
        AddressWidth : INTEGER := 9);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv_layer2_conv_g8j is
    component conv_layer2_conv_g8j_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv_layer2_conv_g8j_rom_U :  component conv_layer2_conv_g8j_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


