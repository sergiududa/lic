-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4.1
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity nnet_fc_layer3_wekbM_rom is 
    generic(
             dwidth     : integer := 20; 
             awidth     : integer := 10; 
             mem_size    : integer := 840
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of nnet_fc_layer3_wekbM_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00110011011010111110", 1 => "11100100001000000011", 
    2 => "00100010101010111110", 3 => "00010101111101110110", 
    4 => "11010100011001000111", 5 => "00001101110001100101", 
    6 => "00110101010000101101", 7 => "00110110110110100000", 
    8 => "00001101011000101100", 9 => "11011010111011100100", 
    10 => "00100010011011101001", 11 => "00011001000000101110", 
    12 => "00110010001101111010", 13 => "11110001100100000111", 
    14 => "00111010100001110101", 15 => "00011001111110100111", 
    16 => "11100000111111010111", 17 => "00101011011110010110", 
    18 => "00111101101011000101", 19 => "00100111111101000110", 
    20 => "11101011010010011111", 21 => "00001000010001110010", 
    22 => "11011000100001011010", 23 => "11101000010011010111", 
    24 => "11010001010011000000", 25 => "00100001000101010101", 
    26 => "11000000111101100011", 27 => "11111000010110110110", 
    28 => "11001011011111010110", 29 => "11111111010110000110", 
    30 => "11110101011010001000", 31 => "11101111001001100111", 
    32 => "11000011010010010000", 33 => "00110110110010100101", 
    34 => "11000110011101110101", 35 => "00101100011011011100", 
    36 => "00111000110100110111", 37 => "00111010100010000101", 
    38 => "11010110101110000000", 39 => "00110001101101110111", 
    40 => "00001110000101011010", 41 => "11000101100111001000", 
    42 => "01000000001100111011", 43 => "00010001101111001100", 
    44 => "11010100011001011110", 45 => "11010100110110000111", 
    46 => "11000111010000010100", 47 => "11110100000000111011", 
    48 => "11001100010100001000", 49 => "11000110000000100100", 
    50 => "00011110111110111110", 51 => "00111100110111010110", 
    52 => "00001100110111001111", 53 => "11000010111101000101", 
    54 => "11000101110011101010", 55 => "00100101001011011011", 
    56 => "01000000101001011011", 57 => "00110111010101111010", 
    58 => "00100010111010100110", 59 => "11101110001110100101", 
    60 => "10111111010110010110", 61 => "11100010001010010101", 
    62 => "11001111100100111100", 63 => "00111110010110110011", 
    64 => "00000100001111111010", 65 => "00110100110001011011", 
    66 => "11100110011011111101", 67 => "00001000100000101000", 
    68 => "00111011011100111000", 69 => "11011100001111000100", 
    70 => "00111111011001100110", 71 => "11110001010110100111", 
    72 => "11000110100011100111", 73 => "11101110010111010101", 
    74 => "11100001001100111100", 75 => "00110010101100001110", 
    76 => "11001010111111000100", 77 => "00000111110011101110", 
    78 => "00101000001111101000", 79 => "11110001011111111010", 
    80 => "00111101011001000001", 81 => "11110000100101101100", 
    82 => "11111001100100000001", 83 => "11100111011011111011", 
    84 => "00111111010110010111", 85 => "00111111110010001001", 
    86 => "00010001110001000110", 87 => "00010110010110010101", 
    88 => "00100111000000001100", 89 => "00101101101100100011", 
    90 => "00011000001010100001", 91 => "11110111111101111011", 
    92 => "11011110101000111000", 93 => "11110111011110011001", 
    94 => "11101101101111000001", 95 => "11111100001111001000", 
    96 => "00100101011110111101", 97 => "00101001010100100111", 
    98 => "00000110101101000110", 99 => "11000011100100111101", 
    100 => "00001010100111101110", 101 => "00110001100001001100", 
    102 => "00100100001011100011", 103 => "00010110100011001001", 
    104 => "00101000110110010100", 105 => "11101110011110011001", 
    106 => "00010101010100100100", 107 => "00110100101010010000", 
    108 => "11001111010110000100", 109 => "11100111001100101001", 
    110 => "11111101001011110111", 111 => "01000000001100000010", 
    112 => "11110100100110100011", 113 => "00110010110011110100", 
    114 => "00111011101011100110", 115 => "00100101000100011111", 
    116 => "11011101100011001011", 117 => "11101100111000010011", 
    118 => "11110011000101011110", 119 => "11010100100110010111", 
    120 => "11101001010110110110", 121 => "11110011001011111111", 
    122 => "11111011110000101011", 123 => "00001011111101111111", 
    124 => "11011100101010110100", 125 => "00110110110100010101", 
    126 => "00010101111010011111", 127 => "00111101100100100110", 
    128 => "00001001101110001101", 129 => "00110101011010011010", 
    130 => "11011010101001000100", 131 => "00001111100100110000", 
    132 => "11100010101000000111", 133 => "00101101001000011101", 
    134 => "11100001011011011111", 135 => "00101111000100111100", 
    136 => "00010000000000110000", 137 => "11011000100010001011", 
    138 => "00011000000111110001", 139 => "11011010000100000010", 
    140 => "00010000110111100111", 141 => "00110110110000110000", 
    142 => "00000110110010101101", 143 => "11001000000011111001", 
    144 => "11010101011010001001", 145 => "00001111111000001010", 
    146 => "00011100001000101101", 147 => "00110010000001000011", 
    148 => "11101110001111011111", 149 => "11100111110000011000", 
    150 => "11111011101101101000", 151 => "11100000110001111110", 
    152 => "00001100010101000110", 153 => "11001001111000000101", 
    154 => "00011010000101000110", 155 => "00000110000000100111", 
    156 => "11000101111001101111", 157 => "00010100110111011101", 
    158 => "00111110000100000100", 159 => "00111101001100101100", 
    160 => "11000011010001100011", 161 => "00101011001111001010", 
    162 => "11100111101111100111", 163 => "00110110111000101001", 
    164 => "00001100110010000110", 165 => "00110111010000010100", 
    166 => "00001110100100010100", 167 => "11111001111011101001", 
    168 => "11111001100101100111", 169 => "11110100111101101011", 
    170 => "00110100110010100100", 171 => "00011110111011100110", 
    172 => "00000101100111001001", 173 => "11011101100111000000", 
    174 => "11010001000001100110", 175 => "00101101100000011011", 
    176 => "11011110000101111110", 177 => "00011011010001010100", 
    178 => "00011011101000001011", 179 => "11100001000101100111", 
    180 => "00000100110100011000", 181 => "00110010011000001101", 
    182 => "00110101010011011111", 183 => "00001011011110111001", 
    184 => "00111101101001110000", 185 => "11001001001000011111", 
    186 => "00101010001100000111", 187 => "11100101110001010110", 
    188 => "11111010100100111010", 189 => "11010111100110000011", 
    190 => "11010001010001011011", 191 => "00010101011110010011", 
    192 => "11011110000101111100", 193 => "00110110110011110011", 
    194 => "11110011001110001011", 195 => "00001100000100010110", 
    196 => "11010000011001000011", 197 => "00110001010100010000", 
    198 => "00101110111110100111", 199 => "11111010001110100111", 
    200 => "00011100101111101000", 201 => "11111100111111000110", 
    202 => "11111100101010100101", 203 => "11100010111111100000", 
    204 => "00011100111000100011", 205 => "11011101010111000011", 
    206 => "00000000100000000111", 207 => "00010111001011111101", 
    208 => "00011100001111100110", 209 => "00001111110110110011", 
    210 => "11001100101001001010", 211 => "11101001100000011100", 
    212 => "00001010101000111011", 213 => "00011001010110101010", 
    214 => "11000110111000011110", 215 => "00011110000001011010", 
    216 => "11000101110001011000", 217 => "11001011111110111110", 
    218 => "11010101010110111001", 219 => "11001110010110010100", 
    220 => "00011110010011110100", 221 => "11101111011111101001", 
    222 => "11000010110011010101", 223 => "11100010100010001010", 
    224 => "00001110111110110110", 225 => "00001111010011001111", 
    226 => "11110011110111000010", 227 => "11111111101000100001", 
    228 => "00100011101010000011", 229 => "00101111100111101111", 
    230 => "11010101100101000001", 231 => "11000010011110010000", 
    232 => "11011101101011010101", 233 => "00110010100001000100", 
    234 => "00000101010100001111", 235 => "11010100000111011101", 
    236 => "00111100100110100011", 237 => "11110110110010000111", 
    238 => "00001000110100011101", 239 => "11001101001111011100", 
    240 => "11101011101100010001", 241 => "11101001001110011111", 
    242 => "00011011100000100110", 243 => "11111100100111000011", 
    244 => "11111000011111000110", 245 => "00100010101100011101", 
    246 => "00010111110010001110", 247 => "11101101001011001001", 
    248 => "11000101000011000101", 249 => "11010001011001110000", 
    250 => "00110111100000110011", 251 => "00101001100100011110", 
    252 => "00010110100100100000", 253 => "00011101000011010110", 
    254 => "00011111000001110000", 255 => "00101110001110001100", 
    256 => "11100000101101001001", 257 => "11001101001010110000", 
    258 => "11001110101101110000", 259 => "11101011101011000111", 
    260 => "00011011101101000110", 261 => "11101100100000011100", 
    262 => "00101111111011011011", 263 => "00101011000010110010", 
    264 => "00101100000110011000", 265 => "11011000000010011110", 
    266 => "00010110110100111000", 267 => "00001011100111000110", 
    268 => "11110110011010011100", 269 => "00110000110100110010", 
    270 => "00101011010001011011", 271 => "11001011000111111010", 
    272 => "11111011100010111000", 273 => "00001001000010011001", 
    274 => "11101001000001100010", 275 => "11111111101010010111", 
    276 => "00100110110000000001", 277 => "00011011011100110010", 
    278 => "11101000001011111101", 279 => "00000000111010100110", 
    280 => "11000011001111011101", 281 => "00010111111010111110", 
    282 => "00001111101110100001", 283 => "11010000000010010100", 
    284 => "00110110000101111000", 285 => "11001010011001111110", 
    286 => "11010110011010001101", 287 => "11000111110101110111", 
    288 => "11101010100000100100", 289 => "11000101001101011001", 
    290 => "00110001100001110110", 291 => "11000010010100010111", 
    292 => "11011010101000101100", 293 => "00001010000001100111", 
    294 => "00101101000100000011", 295 => "11001001111111100110", 
    296 => "11010010100011001000", 297 => "11101010110000011010", 
    298 => "11000100111111001001", 299 => "11000011001001000111", 
    300 => "11110111110000101110", 301 => "11111011000000001111", 
    302 => "11001011011110101111", 303 => "00001010101011101010", 
    304 => "11100101001110010011", 305 => "00100100011010001101", 
    306 => "00000000100010110110", 307 => "11110000110101101111", 
    308 => "00110001111000111110", 309 => "11010010001111001010", 
    310 => "00010011011011111101", 311 => "00000010000110101011", 
    312 => "11100001001101101111", 313 => "11001001100101111010", 
    314 => "11010100100101010010", 315 => "11000011101100111110", 
    316 => "11010100110100101101", 317 => "00111111010010110010", 
    318 => "00010100001011111011", 319 => "00110110101001001101", 
    320 => "11110000011111001101", 321 => "11010010010100111101", 
    322 => "00100000001100111011", 323 => "00101110011001100000", 
    324 => "00100000011111100010", 325 => "11010100010111010010", 
    326 => "11011100100011101101", 327 => "11011001011011111101", 
    328 => "11110000111001010000", 329 => "11101111111100000001", 
    330 => "11011111101100100010", 331 => "00100010011000000110", 
    332 => "11010000100010011010", 333 => "00111001011101010101", 
    334 => "00010110001011110101", 335 => "11111100101001001101", 
    336 => "00000110100000011000", 337 => "11001110101010000001", 
    338 => "00010011111011000001", 339 => "11001011011000110010", 
    340 => "00010110010111001000", 341 => "00011110010101111000", 
    342 => "11111110111001011001", 343 => "11010100110010001101", 
    344 => "00011000110001011001", 345 => "11111101101110100001", 
    346 => "11000011111011010010", 347 => "11000100001011000000", 
    348 => "11110011010111100100", 349 => "00010111000011100001", 
    350 => "11010100111011011001", 351 => "00010111001001011001", 
    352 => "11000001011111010001", 353 => "11001011000010110011", 
    354 => "11101001101010001001", 355 => "11000101111110010110", 
    356 => "00101001010101101000", 357 => "00011100000011110001", 
    358 => "11011100011010000001", 359 => "00100110010111011101", 
    360 => "11111110110111101111", 361 => "11001100010101011001", 
    362 => "11111111101101010010", 363 => "00000010110100101001", 
    364 => "11001010111010101110", 365 => "11001010011011000111", 
    366 => "11011101010010001110", 367 => "11100011001010111000", 
    368 => "11010101010001010110", 369 => "11010101111000100011", 
    370 => "00110011110100010000", 371 => "00111101100000000100", 
    372 => "00000011010001111010", 373 => "11111101100111111100", 
    374 => "00110010100100111000", 375 => "00010100110111110011", 
    376 => "11101011010011011011", 377 => "00011001000101000101", 
    378 => "11000111100111111110", 379 => "00001110000111110000", 
    380 => "00100000011111011001", 381 => "11111001000110100100", 
    382 => "00001001101010011110", 383 => "00011011010001000110", 
    384 => "00101110100111001100", 385 => "00101100000001100110", 
    386 => "00000111010101010001", 387 => "11010010110110010010", 
    388 => "00001100110100010011", 389 => "11110100111110111000", 
    390 => "00000011111111111001", 391 => "00001000100011101001", 
    392 => "00000100110111110011", 393 => "00100111100100000001", 
    394 => "11101010001001110110", 395 => "00111001111111101000", 
    396 => "00100100001111110101", 397 => "00000010110101011111", 
    398 => "11010000010000101011", 399 => "00001010110011110011", 
    400 => "11111111010000001000", 401 => "11101011011100111100", 
    402 => "00110100011011111001", 403 => "11111000100110000011", 
    404 => "00101100011101000101", 405 => "00101110111110100111", 
    406 => "11110101101001101111", 407 => "11001111110101110111", 
    408 => "00000111000110011010", 409 => "11110111101100010100", 
    410 => "00011010110001101011", 411 => "11110111010000001000", 
    412 => "00010111010011011011", 413 => "00000011011101111110", 
    414 => "11000000110110101110", 415 => "00000110011111001010", 
    416 => "00011000011000010011", 417 => "11000011111000111111", 
    418 => "11011111010011010111", 419 => "00011010001010000110", 
    420 => "00101100111001101111", 421 => "11011101101100011000", 
    422 => "00010100100111001100", 423 => "00111111000101010100", 
    424 => "00110101100001011001", 425 => "01000000001100111111", 
    426 => "11011111111110100001", 427 => "11011011010100011110", 
    428 => "11001010110110101111", 429 => "11101101101111110111", 
    430 => "11100110100101011000", 431 => "00101000010110011111", 
    432 => "00011110111011001010", 433 => "00011111110000110001", 
    434 => "11101010000000111110", 435 => "00001001010110010001", 
    436 => "11111100000000000001", 437 => "00110011010110011111", 
    438 => "11110100010111011100", 439 => "11100101110111110110", 
    440 => "11001011000101010111", 441 => "11100101110110000100", 
    442 => "11100110010100010110", 443 => "11101011111001001111", 
    444 => "00111101100110101011", 445 => "00101000011100100111", 
    446 => "00001101011010111010", 447 => "11110011010011111111", 
    448 => "11110001010010111111", 449 => "00001010010100101000", 
    450 => "11010101001010011111", 451 => "11111110110110010000", 
    452 => "11110100100111001110", 453 => "00100100100111101001", 
    454 => "00100010000101110100", 455 => "00110100000010011000", 
    456 => "00100111110111000101", 457 => "00001110011001100010", 
    458 => "00000100011111011101", 459 => "00101001001100110010", 
    460 => "00011010001000100101", 461 => "00011001001111101111", 
    462 => "11100010001101000110", 463 => "11010000000100000100", 
    464 => "11111010010111111011", 465 => "11011111011111111001", 
    466 => "11110000000101010100", 467 => "00111110101101001000", 
    468 => "00110110010101000110", 469 => "00110001001011000001", 
    470 => "00010000100101000001", 471 => "00100100100000101011", 
    472 => "10111111100011101111", 473 => "00100100011110010000", 
    474 => "11001101101100000011", 475 => "11011101010110100101", 
    476 => "11100001110100110100", 477 => "00111010001100110001", 
    478 => "00101011111011110001", 479 => "11001111110110101100", 
    480 => "11110101100111100100", 481 => "11111011001100001111", 
    482 => "11101100111100010010", 483 => "11000111100000110101", 
    484 => "00001100110000100111", 485 => "11001010100100001010", 
    486 => "11001000000000101110", 487 => "11011100000111110011", 
    488 => "00011010000110000101", 489 => "11011001001000010101", 
    490 => "11111011001111001001", 491 => "11011001110000111010", 
    492 => "00101011010000101010", 493 => "00011010000010111011", 
    494 => "00010001000110111100", 495 => "11101001011011010001", 
    496 => "00000010110111010001", 497 => "11110001111000000010", 
    498 => "11100000111111100110", 499 => "00111100100000100100", 
    500 => "11000101110011000100", 501 => "11101011010011111011", 
    502 => "00010000110110000000", 503 => "00111011101110100010", 
    504 => "00101001111000111000", 505 => "11001001011000000111", 
    506 => "11101111100011111001", 507 => "11011111010111111100", 
    508 => "00011100100011011000", 509 => "00010010111110111100", 
    510 => "11111001000011001000", 511 => "11000110001111101010", 
    512 => "11011101011101111001", 513 => "00000010110000010000", 
    514 => "00101001001001011010", 515 => "11011011110010110011", 
    516 => "11111010111111011100", 517 => "11111110111100001110", 
    518 => "00000110000001011011", 519 => "00110110000001110111", 
    520 => "11111110110111001010", 521 => "00111010101100101101", 
    522 => "11101010000011010000", 523 => "11110110011001010011", 
    524 => "11101100100101010011", 525 => "11100011000100011110", 
    526 => "11101110001110100101", 527 => "00010110000011000000", 
    528 => "11111011000100101011", 529 => "11100011011100011110", 
    530 => "11001000100010110010", 531 => "11100001111111101101", 
    532 => "00101111110001010101", 533 => "00101100100100010110", 
    534 => "00101111100110011011", 535 => "00100101011001010011", 
    536 => "11101000111011110001", 537 => "00010101110111101000", 
    538 => "00110011010000100100", 539 => "11000000111101000100", 
    540 => "11111001111111000100", 541 => "00000100100110111011", 
    542 => "11111010010101110011", 543 => "00000110110011010100", 
    544 => "00010110010100010111", 545 => "11010010011111010000", 
    546 => "11101011100000010110", 547 => "00101100100100110111", 
    548 => "00010000110110100101", 549 => "00011010110010101110", 
    550 => "11111110110111111001", 551 => "11000011011001010100", 
    552 => "11111110110111111101", 553 => "00010011111111000101", 
    554 => "00111100100000011011", 555 => "11010001100011010101", 
    556 => "11110010110010010110", 557 => "00011011110101111110", 
    558 => "00110100101000100001", 559 => "11111110010010110000", 
    560 => "11101111010010101110", 561 => "11001101010110111110", 
    562 => "00011011110111010001", 563 => "11101100111010001011", 
    564 => "00001111011010001001", 565 => "11000110010010101111", 
    566 => "00000110100111000000", 567 => "11110110100011010110", 
    568 => "11010111000010100110", 569 => "00110111100001100011", 
    570 => "00011100100001001001", 571 => "00100101011110101011", 
    572 => "11010100001111010111", 573 => "11110001011101010010", 
    574 => "00001011011010010111", 575 => "11010011010000001110", 
    576 => "00000111000011000110", 577 => "11000101010001010110", 
    578 => "11101101010110000110", 579 => "00011011000100110101", 
    580 => "00111110001111100101", 581 => "00001010111001001101", 
    582 => "11111101010011010010", 583 => "11011101111100101111", 
    584 => "00101001110111101101", 585 => "00001001100101001100", 
    586 => "11101110101110001101", 587 => "11000010010010111000", 
    588 => "00000011100000011111", 589 => "00111111001110100110", 
    590 => "11000111010101100011", 591 => "11101110100011011010", 
    592 => "11110001001100001000", 593 => "00001110110000100001", 
    594 => "11001010001111010001", 595 => "00001000011010011000", 
    596 => "11010011000010011101", 597 => "00111001101001000000", 
    598 => "00110001110101010001", 599 => "00101100001011001111", 
    600 => "11011101010010011001", 601 => "11011101100000000100", 
    602 => "11011111110110000011", 603 => "11100011001110001010", 
    604 => "00111001101111010100", 605 => "11001001100011111000", 
    606 => "00101010110100101010", 607 => "00000110010100001111", 
    608 => "11001101101001000000", 609 => "11100001011011110010", 
    610 => "00110000100110101110", 611 => "11010011000001011000", 
    612 => "11011101000101111001", 613 => "11100011101011010101", 
    614 => "00101100001000100010", 615 => "00000101111101010111", 
    616 => "00100010010001111001", 617 => "11011001011001001011", 
    618 => "11010001010110111001", 619 => "11100111011011010010", 
    620 => "00110001110011101111", 621 => "11100101010001111000", 
    622 => "11111000110111110101", 623 => "00111010001000111010", 
    624 => "00010000111110010001", 625 => "00110111110000001100", 
    626 => "11000111111000010011", 627 => "11101111101111001100", 
    628 => "11110110011011000010", 629 => "00010010010101101010", 
    630 => "11001110010001111110", 631 => "00010001110001110001", 
    632 => "11001000100101001011", 633 => "11001001111010101110", 
    634 => "11010110010110101011", 635 => "01000000100111011111", 
    636 => "11110011101001000001", 637 => "11000000011000111010", 
    638 => "00110011011010110110", 639 => "00100110100011011101", 
    640 => "11100110101100010100", 641 => "00011111101001011110", 
    642 => "00111001111001011010", 643 => "11011110100101001001", 
    644 => "00010101110001111001", 645 => "11001010101111010100", 
    646 => "00100100111110011010", 647 => "11011000000011100100", 
    648 => "11001010000011011100", 649 => "11001011011000100111", 
    650 => "10111111110011011001", 651 => "00101111100000111011", 
    652 => "01000000100011110001", 653 => "00110010001110001001", 
    654 => "11110011111101001000", 655 => "00011001010000100101", 
    656 => "00011000001100010010", 657 => "11101000111111101100", 
    658 => "11111010111101011110", 659 => "11010110100101101011", 
    660 => "00111100101000001100", 661 => "11011111110100000011", 
    662 => "11110101001001111010", 663 => "11011011101011001101", 
    664 => "11111111101000100000", 665 => "00100110011101111101", 
    666 => "11011011010100001101", 667 => "11110100100000000111", 
    668 => "11011111110011010011", 669 => "00110001000001001101", 
    670 => "00110000100011101111", 671 => "11101111011100110100", 
    672 => "00110101000010011011", 673 => "11110110010101111110", 
    674 => "00111110010000111101", 675 => "00011101010111101101", 
    676 => "11101011010010101100", 677 => "11101010100101100100", 
    678 => "11011011011110100011", 679 => "00111110001010100001", 
    680 => "00111010110001000011", 681 => "11011101000100111001", 
    682 => "11101100001011100000", 683 => "00011101000111100001", 
    684 => "00101010111100011001", 685 => "00110000010111001000", 
    686 => "00001100110101111011", 687 => "00101100101001011110", 
    688 => "00111100111011001100", 689 => "00111000101001100001", 
    690 => "11100000010101111110", 691 => "11111011011110101010", 
    692 => "10111111100111100001", 693 => "11111110101001011000", 
    694 => "01000000000111011111", 695 => "11010110011111000101", 
    696 => "00011100100100001000", 697 => "10111111011001110011", 
    698 => "00101011100010010000", 699 => "00000100010001101000", 
    700 => "11101001000010110100", 701 => "11001000011011100110", 
    702 => "10111111110011101001", 703 => "11010001001110110000", 
    704 => "00110101100111010001", 705 => "00110111001101111100", 
    706 => "00000111000110101001", 707 => "11100111111010111001", 
    708 => "11101101011011011000", 709 => "00010100101001110011", 
    710 => "11001101101111100001", 711 => "11000011110010111000", 
    712 => "00100010100101011000", 713 => "00010111001111111110", 
    714 => "00001001010011001100", 715 => "00001101110001011000", 
    716 => "11000011011001101101", 717 => "11010110110010010111", 
    718 => "00010110001100101010", 719 => "11001111100011100100", 
    720 => "00000010011111001111", 721 => "11001110010001101010", 
    722 => "00001111011001000011", 723 => "11100010100011011010", 
    724 => "00100000110001110100", 725 => "00001011110001010110", 
    726 => "00100101101011110011", 727 => "11100101111110110011", 
    728 => "11101110000000001101", 729 => "11111000110010110100", 
    730 => "11000110000111011011", 731 => "00110010100100110011", 
    732 => "00111011000011101010", 733 => "00010111100011111000", 
    734 => "11000001000101000011", 735 => "00111010000111110100", 
    736 => "00000010111101010111", 737 => "00010101010101000100", 
    738 => "00101001000010111111", 739 => "00011001111101011111", 
    740 => "11100101000101010101", 741 => "11100010010110001101", 
    742 => "11100100010001011010", 743 => "00010011111001111110", 
    744 => "11011101000110101001", 745 => "00101101111111111001", 
    746 => "00011010011111010000", 747 => "11010010000010000001", 
    748 => "00111111101110111000", 749 => "11110110000001110100", 
    750 => "00111100011110011000", 751 => "00111111010001100111", 
    752 => "11111110110001011011", 753 => "00110000100011000111", 
    754 => "00101110110101100111", 755 => "11100111000111000010", 
    756 => "11001001000010001110", 757 => "11110111011101010110", 
    758 => "00011011101100111010", 759 => "00111000100110011101", 
    760 => "00000010111000101011", 761 => "00011101010111000111", 
    762 => "00001110101111001011", 763 => "00111001000101110101", 
    764 => "11101010111101100100", 765 => "11110110001001000100", 
    766 => "00100101000010100101", 767 => "11001010100001011011", 
    768 => "00000111100011001111", 769 => "00010011101100101101", 
    770 => "00111110111010100000", 771 => "00101001111011111000", 
    772 => "11101010000001000110", 773 => "00110101010010111111", 
    774 => "00110011101100010110", 775 => "00111000011100110111", 
    776 => "00101100011110110110", 777 => "00000010010110111110", 
    778 => "11000001011100110001", 779 => "11101100001011100100", 
    780 => "00110101110111011011", 781 => "00001101110111101001", 
    782 => "00000000111011011001", 783 => "00000011110011011001", 
    784 => "11110010100110000110", 785 => "11101101000011101000", 
    786 => "11010010011111000001", 787 => "00000111001101010001", 
    788 => "11011000100111000101", 789 => "00110101100100101110", 
    790 => "11011100000000100001", 791 => "11000010011110011010", 
    792 => "00111110001000110001", 793 => "00111001100010110101", 
    794 => "11001011011111100011", 795 => "11110100100011010110", 
    796 => "00111001101000101101", 797 => "11011111010111010101", 
    798 => "10111111101110000010", 799 => "11011001111001010110", 
    800 => "11000011111100111001", 801 => "00110100100100100000", 
    802 => "00010111000101100011", 803 => "11000010100001000010", 
    804 => "11010101000110000110", 805 => "11010001001001111011", 
    806 => "00011111011100010000", 807 => "11000111001111001101", 
    808 => "00010011100010110111", 809 => "11101101100000000101", 
    810 => "00110010100011011000", 811 => "11001111101000001110", 
    812 => "11111010000000011000", 813 => "00000111111101101010", 
    814 => "11100011100010001100", 815 => "11101100000101111000", 
    816 => "00000010101111100011", 817 => "00010101010001111111", 
    818 => "00010011001001010000", 819 => "11000010011101100100", 
    820 => "00100010001100000000", 821 => "11000000111010011000", 
    822 => "11000011111011000000", 823 => "00111110111110000101", 
    824 => "11010111010001111011", 825 => "11010001101110110010", 
    826 => "00001001110011101000", 827 => "11110011110110011000", 
    828 => "00111010011100010011", 829 => "11101001101101011000", 
    830 => "00000100100000011011", 831 => "11100001011011111100", 
    832 => "11110011110110110000", 833 => "11011110000110010100", 
    834 => "00100010010010111110", 835 => "00010010000010011011", 
    836 => "00000010011101011111", 837 => "11010000000101111000", 
    838 => "11100010001111110011", 839 => "00011100111110100100" );


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

entity nnet_fc_layer3_wekbM is
    generic (
        DataWidth : INTEGER := 20;
        AddressRange : INTEGER := 840;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of nnet_fc_layer3_wekbM is
    component nnet_fc_layer3_wekbM_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    nnet_fc_layer3_wekbM_rom_U :  component nnet_fc_layer3_wekbM_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


