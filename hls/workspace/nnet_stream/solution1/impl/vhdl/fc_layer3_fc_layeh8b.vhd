-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4.1
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity fc_layer3_fc_layeh8b_rom is 
    generic(
             dwidth     : integer := 12; 
             awidth     : integer := 10; 
             mem_size    : integer := 840
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          addr1      : in std_logic_vector(awidth-1 downto 0); 
          ce1       : in std_logic; 
          q1         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of fc_layer3_fc_layeh8b_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
signal addr1_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "001100110110", 1 => "111001000010", 2 => "001000101010", 
    3 => "000101011111", 4 => "110101000110", 5 => "000011011100", 
    6 => "001101010100", 7 => "001101101101", 8 => "000011010110", 
    9 => "110110101110", 10 => "001000100110", 11 => "000110010000", 
    12 => "001100100011", 13 => "111100011001", 14 => "001110101000", 
    15 => "000110011111", 16 => "111000001111", 17 => "001010110111", 
    18 => "001111011010", 19 => "001001111111", 20 => "111010110100", 
    21 => "000010000100", 22 => "110110001000", 23 => "111010000100", 
    24 => "110100010100", 25 => "001000010001", 26 => "110000001111", 
    27 => "111110000101", 28 => "110010110111", 29 => "111111110101", 
    30 => "111101010110", 31 => "111011110010", 32 => "110000110100", 
    33 => "001101101100", 34 => "110001100111", 35 => "001011000110", 
    36 => "001110001101", 37 => "001110101000", 38 => "110101101011", 
    39 => "001100011011", 40 => "000011100001", 41 => "110001011001", 
    42 => "010000000011", 43 => "000100011011", 44 => "110101000110", 
    45 => "110101001101", 46 => "110001110100", 47 => "111101000000", 
    48 => "110011000101", 49 => "110001100000", 50 => "000111101111", 
    51 => "001111001101", 52 => "000011001101", 53 => "110000101111", 
    54 => "110001011100", 55 => "001001010010", 56 => "010000001010", 
    57 => "001101110101", 58 => "001000101110", 59 => "111011100011", 
    60 => "101111110101", 61 => "111000100010", 62 => "110011111001", 
    63 => "001111100101", 64 => "000001000011", 65 => "001101001100", 
    66 => "111001100110", 67 => "000010001000", 68 => "001110110111", 
    69 => "110111000011", 70 => "001111110110", 71 => "111100010101", 
    72 => "110001101000", 73 => "111011100101", 74 => "111000010011", 
    75 => "001100101011", 76 => "110010101111", 77 => "000001111100", 
    78 => "001010000011", 79 => "111100010111", 80 => "001111010110", 
    81 => "111100001001", 82 => "111110011001", 83 => "111001110110", 
    84 => "001111110101", 85 => "001111111100", 86 => "000100011100", 
    87 => "000101100101", 88 => "001001110000", 89 => "001011011011", 
    90 => "000110000010", 91 => "111101111111", 92 => "110111101010", 
    93 => "111101110111", 94 => "111011011011", 95 => "111111000011", 
    96 => "001001010111", 97 => "001010010101", 98 => "000001101011", 
    99 => "110000111001", 100 => "000010101001", 101 => "001100011000", 
    102 => "001001000010", 103 => "000101101000", 104 => "001010001101", 
    105 => "111011100111", 106 => "000101010101", 107 => "001101001010", 
    108 => "110011110101", 109 => "111001110011", 110 => "111111010010", 
    111 => "010000000011", 112 => "111101001001", 113 => "001100101100", 
    114 => "001110111010", 115 => "001001010001", 116 => "110111011000", 
    117 => "111011001110", 118 => "111100110001", 119 => "110101001001", 
    120 => "111010010101", 121 => "111100110010", 122 => "111110111100", 
    123 => "000010111111", 124 => "110111001010", 125 => "001101101101", 
    126 => "000101011110", 127 => "001111011001", 128 => "000010011011", 
    129 => "001101010110", 130 => "110110101010", 131 => "000011111001", 
    132 => "111000101010", 133 => "001011010010", 134 => "111000010110", 
    135 => "001011110001", 136 => "000100000000", 137 => "110110001000", 
    138 => "000110000001", 139 => "110110100001", 140 => "000100001101", 
    141 => "001101101100", 142 => "000001101100", 143 => "110010000000", 
    144 => "110101010110", 145 => "000011111110", 146 => "000111000010", 
    147 => "001100100000", 148 => "111011100011", 149 => "111001111100", 
    150 => "111110111011", 151 => "111000001100", 152 => "000011000101", 
    153 => "110010011110", 154 => "000110100001", 155 => "000001100000", 
    156 => "110001011110", 157 => "000101001101", 158 => "001111100001", 
    159 => "001111010011", 160 => "110000110100", 161 => "001010110011", 
    162 => "111001111011", 163 => "001101101110", 164 => "000011001100", 
    165 => "001101110100", 166 => "000011101001", 167 => "111110011110", 
    168 => "111110011001", 169 => "111101001111", 170 => "001101001100", 
    171 => "000111101110", 172 => "000001011001", 173 => "110111011001", 
    174 => "110100010000", 175 => "001011011000", 176 => "110111100001", 
    177 => "000110110100", 178 => "000110111010", 179 => "111000010001", 
    180 => "000001001101", 181 => "001100100110", 182 => "001101010100", 
    183 => "000010110111", 184 => "001111011010", 185 => "110010010010", 
    186 => "001010100011", 187 => "111001011100", 188 => "111110101001", 
    189 => "110101111001", 190 => "110100010100", 191 => "000101010111", 
    192 => "110111100001", 193 => "001101101100", 194 => "111100110011", 
    195 => "000011000001", 196 => "110100000110", 197 => "001100010101", 
    198 => "001011101111", 199 => "111110100011", 200 => "000111001011", 
    201 => "111111001111", 202 => "111111001010", 203 => "111000101111", 
    204 => "000111001110", 205 => "110111010101", 206 => "000000001000", 
    207 => "000101110010", 208 => "000111000011", 209 => "000011111101", 
    210 => "110011001010", 211 => "111010011000", 212 => "000010101010", 
    213 => "000110010101", 214 => "110001101110", 215 => "000111100000", 
    216 => "110001011100", 217 => "110010111111", 218 => "110101010101", 
    219 => "110011100101", 220 => "000111100100", 221 => "111011110111", 
    222 => "110000101100", 223 => "111000101000", 224 => "000011101111", 
    225 => "000011110100", 226 => "111100111101", 227 => "111111111010", 
    228 => "001000111010", 229 => "001011111001", 230 => "110101011001", 
    231 => "110000100111", 232 => "110111011010", 233 => "001100101000", 
    234 => "000001010101", 235 => "110101000001", 236 => "001111001001", 
    237 => "111101101100", 238 => "000010001101", 239 => "110011010011", 
    240 => "111010111011", 241 => "111010010011", 242 => "000110111000", 
    243 => "111111001001", 244 => "111110000111", 245 => "001000101011", 
    246 => "000101111100", 247 => "111011010010", 248 => "110001010000", 
    249 => "110100010110", 250 => "001101111000", 251 => "001010011001", 
    252 => "000101101001", 253 => "000111010000", 254 => "000111110000", 
    255 => "001011100011", 256 => "111000001011", 257 => "110011010010", 
    258 => "110011101011", 259 => "111010111010", 260 => "000110111011", 
    261 => "111011001000", 262 => "001011111110", 263 => "001010110000", 
    264 => "001011000001", 265 => "110110000000", 266 => "000101101101", 
    267 => "000010111001", 268 => "111101100110", 269 => "001100001101", 
    270 => "001010110100", 271 => "110010110001", 272 => "111110111000", 
    273 => "000010010000", 274 => "111010010000", 275 => "111111111010", 
    276 => "001001101100", 277 => "000110110111", 278 => "111010000010", 
    279 => "000000001110", 280 => "110000110011", 281 => "000101111110", 
    282 => "000011111011", 283 => "110100000000", 284 => "001101100001", 
    285 => "110010100110", 286 => "110101100110", 287 => "110001111101", 
    288 => "111010101000", 289 => "110001010011", 290 => "001100011000", 
    291 => "110000100101", 292 => "110110101010", 293 => "000010100000", 
    294 => "001011010001", 295 => "110010011111", 296 => "110100101000", 
    297 => "111010101100", 298 => "110001001111", 299 => "110000110010", 
    300 => "111101111100", 301 => "111110110000", 302 => "110010110111", 
    303 => "000010101010", 304 => "111001010011", 305 => "001001000110", 
    306 => "000000001000", 307 => "111100001101", 308 => "001100011110", 
    309 => "110100100011", 310 => "000100110110", 311 => "000000100001", 
    312 => "111000010011", 313 => "110010011001", 314 => "110101001001", 
    315 => "110000111011", 316 => "110101001101", 317 => "001111110100", 
    318 => "000101000010", 319 => "001101101010", 320 => "111100000111", 
    321 => "110100100101", 322 => "001000000011", 323 => "001011100110", 
    324 => "001000000111", 325 => "110101000101", 326 => "110111001000", 
    327 => "110110010110", 328 => "111100001110", 329 => "111011111111", 
    330 => "110111111011", 331 => "001000100110", 332 => "110100001000", 
    333 => "001110010111", 334 => "000101100010", 335 => "111111001010", 
    336 => "000001101000", 337 => "110011101010", 338 => "000100111110", 
    339 => "110010110110", 340 => "000101100101", 341 => "000111100101", 
    342 => "111111101110", 343 => "110101001100", 344 => "000110001100", 
    345 => "111111011011", 346 => "110000111110", 347 => "110001000010", 
    348 => "111100110101", 349 => "000101110000", 350 => "110101001110", 
    351 => "000101110010", 352 => "110000010111", 353 => "110010110000", 
    354 => "111010011010", 355 => "110001011111", 356 => "001010010101", 
    357 => "000111000000", 358 => "110111000110", 359 => "001001100101", 
    360 => "111111101101", 361 => "110011000101", 362 => "111111111011", 
    363 => "000000101101", 364 => "110010101110", 365 => "110010100110", 
    366 => "110111010100", 367 => "111000110010", 368 => "110101010100", 
    369 => "110101011110", 370 => "001100111101", 371 => "001111011000", 
    372 => "000000110100", 373 => "111111011001", 374 => "001100101001", 
    375 => "000101001101", 376 => "111010110100", 377 => "000110010001", 
    378 => "110001111001", 379 => "000011100001", 380 => "001000000111", 
    381 => "111110010001", 382 => "000010011010", 383 => "000110110100", 
    384 => "001011101001", 385 => "001011000000", 386 => "000001110101", 
    387 => "110100101101", 388 => "000011001101", 389 => "111101001111", 
    390 => "000000111111", 391 => "000010001000", 392 => "000001001101", 
    393 => "001001111001", 394 => "111010100010", 395 => "001110011111", 
    396 => "001001000011", 397 => "000000101101", 398 => "110100000100", 
    399 => "000010101100", 400 => "111111110100", 401 => "111010110111", 
    402 => "001101000110", 403 => "111110001001", 404 => "001011000111", 
    405 => "001011101111", 406 => "111101011010", 407 => "110011111101", 
    408 => "000001110001", 409 => "111101111011", 410 => "000110101100", 
    411 => "111101110100", 412 => "000101110100", 413 => "000000110111", 
    414 => "110000001101", 415 => "000001100111", 416 => "000110000110", 
    417 => "110000111110", 418 => "110111110100", 419 => "000110100010", 
    420 => "001011001110", 421 => "110111011011", 422 => "000101001001", 
    423 => "001111110001", 424 => "001101011000", 425 => "010000000011", 
    426 => "110111111111", 427 => "110110110101", 428 => "110010101101", 
    429 => "111011011011", 430 => "111001101001", 431 => "001010000101", 
    432 => "000111101110", 433 => "000111111100", 434 => "111010100000", 
    435 => "000010010101", 436 => "111111000000", 437 => "001100110101", 
    438 => "111101000101", 439 => "111001011101", 440 => "110010110001", 
    441 => "111001011101", 442 => "111001100101", 443 => "111010111110", 
    444 => "001111011001", 445 => "001010000111", 446 => "000011010110", 
    447 => "111100110100", 448 => "111100010100", 449 => "000010100101", 
    450 => "110101010010", 451 => "111111101101", 452 => "111101001001", 
    453 => "001001001001", 454 => "001000100001", 455 => "001101000000", 
    456 => "001001111101", 457 => "000011100110", 458 => "000001000111", 
    459 => "001010010011", 460 => "000110100010", 461 => "000110010011", 
    462 => "111000100011", 463 => "110100000001", 464 => "111110100101", 
    465 => "110111110111", 466 => "111100000001", 467 => "001111101011", 
    468 => "001101100101", 469 => "001100010010", 470 => "000100001001", 
    471 => "001001001000", 472 => "101111111000", 473 => "001001000111", 
    474 => "110011011011", 475 => "110111010101", 476 => "111000011101", 
    477 => "001110100011", 478 => "001010111110", 479 => "110011111101", 
    480 => "111101011001", 481 => "111110110011", 482 => "111011001111", 
    483 => "110001111000", 484 => "000011001100", 485 => "110010101001", 
    486 => "110010000000", 487 => "110111000001", 488 => "000110100001", 
    489 => "110110010010", 490 => "111110110011", 491 => "110110011100", 
    492 => "001010110100", 493 => "000110100000", 494 => "000100010001", 
    495 => "111010010110", 496 => "000000101101", 497 => "111100011110", 
    498 => "111000001111", 499 => "001111001000", 500 => "110001011100", 
    501 => "111010110100", 502 => "000100001101", 503 => "001110111011", 
    504 => "001010011110", 505 => "110010010110", 506 => "111011111000", 
    507 => "110111110101", 508 => "000111001000", 509 => "000100101111", 
    510 => "111110010000", 511 => "110001100011", 512 => "110111010111", 
    513 => "000000101100", 514 => "001010010010", 515 => "110110111100", 
    516 => "111110101111", 517 => "111111101111", 518 => "000001100000", 
    519 => "001101100000", 520 => "111111101101", 521 => "001110101011", 
    522 => "111010100000", 523 => "111101100110", 524 => "111011001001", 
    525 => "111000110001", 526 => "111011100011", 527 => "000101100000", 
    528 => "111110110001", 529 => "111000110111", 530 => "110010001000", 
    531 => "111000011111", 532 => "001011111100", 533 => "001011001001", 
    534 => "001011111001", 535 => "001001010110", 536 => "111010001110", 
    537 => "000101011101", 538 => "001100110100", 539 => "110000001111", 
    540 => "111110011111", 541 => "000001001001", 542 => "111110100101", 
    543 => "000001101100", 544 => "000101100101", 545 => "110100100111", 
    546 => "111010111000", 547 => "001011001001", 548 => "000100001101", 
    549 => "000110101100", 550 => "111111101101", 551 => "110000110110", 
    552 => "111111101101", 553 => "000100111111", 554 => "001111001000", 
    555 => "110100011000", 556 => "111100101100", 557 => "000110111101", 
    558 => "001101001010", 559 => "111111100100", 560 => "111011110100", 
    561 => "110011010101", 562 => "000110111101", 563 => "111011001110", 
    564 => "000011110110", 565 => "110001100100", 566 => "000001101001", 
    567 => "111101101000", 568 => "110101110000", 569 => "001101111000", 
    570 => "000111001000", 571 => "001001010111", 572 => "110101000011", 
    573 => "111100010111", 574 => "000010110110", 575 => "110100110100", 
    576 => "000001110000", 577 => "110001010100", 578 => "111011010101", 
    579 => "000110110001", 580 => "001111100011", 581 => "000010101110", 
    582 => "111111010100", 583 => "110111011111", 584 => "001010011101", 
    585 => "000010011001", 586 => "111011101011", 587 => "110000100100", 
    588 => "000000111000", 589 => "001111110011", 590 => "110001110101", 
    591 => "111011101000", 592 => "111100010011", 593 => "000011101100", 
    594 => "110010100011", 595 => "000010000110", 596 => "110100110000", 
    597 => "001110011010", 598 => "001100011101", 599 => "001011000010", 
    600 => "110111010100", 601 => "110111011000", 602 => "110111111101", 
    603 => "111000110011", 604 => "001110011011", 605 => "110010011000", 
    606 => "001010101101", 607 => "000001100101", 608 => "110011011010", 
    609 => "111000010110", 610 => "001100001001", 611 => "110100110000", 
    612 => "110111010001", 613 => "111000111010", 614 => "001011000010", 
    615 => "000001011111", 616 => "001000100100", 617 => "110110010110", 
    618 => "110100010101", 619 => "111001110110", 620 => "001100011100", 
    621 => "111001010100", 622 => "111110001101", 623 => "001110100010", 
    624 => "000100001111", 625 => "001101111100", 626 => "110001111110", 
    627 => "111011111011", 628 => "111101100110", 629 => "000100100101", 
    630 => "110011100100", 631 => "000100011100", 632 => "110010001001", 
    633 => "110010011110", 634 => "110101100101", 635 => "010000001001", 
    636 => "111100111010", 637 => "110000000110", 638 => "001100110110", 
    639 => "001001101000", 640 => "111001101011", 641 => "000111111010", 
    642 => "001110011110", 643 => "110111101001", 644 => "000101011100", 
    645 => "110010101011", 646 => "001001001111", 647 => "110110000000", 
    648 => "110010100000", 649 => "110010110110", 650 => "101111111100", 
    651 => "001011111000", 652 => "010000001000", 653 => "001100100011", 
    654 => "111100111111", 655 => "000110010100", 656 => "000110000011", 
    657 => "111010001111", 658 => "111110101111", 659 => "110101101001", 
    660 => "001111001010", 661 => "110111111101", 662 => "111101010010", 
    663 => "110110111010", 664 => "111111111010", 665 => "001001100111", 
    666 => "110110110101", 667 => "111101001000", 668 => "110111111100", 
    669 => "001100010000", 670 => "001100001000", 671 => "111011110111", 
    672 => "001101010000", 673 => "111101100101", 674 => "001111100100", 
    675 => "000111010101", 676 => "111010110100", 677 => "111010101001", 
    678 => "110110110111", 679 => "001111100010", 680 => "001110101100", 
    681 => "110111010001", 682 => "111011000010", 683 => "000111010001", 
    684 => "001010101111", 685 => "001100000101", 686 => "000011001101", 
    687 => "001011001010", 688 => "001111001110", 689 => "001110001010", 
    690 => "111000000101", 691 => "111110110111", 692 => "101111111001", 
    693 => "111111101010", 694 => "010000000001", 695 => "110101100111", 
    696 => "000111001001", 697 => "101111110110", 698 => "001010111000", 
    699 => "000001000100", 700 => "111010010000", 701 => "110010000110", 
    702 => "101111111100", 703 => "110100010011", 704 => "001101011001", 
    705 => "001101110011", 706 => "000001110001", 707 => "111001111110", 
    708 => "111011010110", 709 => "000101001010", 710 => "110011011011", 
    711 => "110000111100", 712 => "001000101001", 713 => "000101110011", 
    714 => "000010010100", 715 => "000011011100", 716 => "110000110110", 
    717 => "110101101100", 718 => "000101100011", 719 => "110011111000", 
    720 => "000000100111", 721 => "110011100100", 722 => "000011110110", 
    723 => "111000101000", 724 => "001000001100", 725 => "000010111100", 
    726 => "001001011010", 727 => "111001011111", 728 => "111011100000", 
    729 => "111110001100", 730 => "110001100001", 731 => "001100101001", 
    732 => "001110110000", 733 => "000101111000", 734 => "110000010001", 
    735 => "001110100001", 736 => "000000101111", 737 => "000101010101", 
    738 => "001010010000", 739 => "000110011111", 740 => "111001010001", 
    741 => "111000100101", 742 => "111001000100", 743 => "000100111110", 
    744 => "110111010001", 745 => "001011011111", 746 => "000110100111", 
    747 => "110100100000", 748 => "001111111011", 749 => "111101100000", 
    750 => "001111000111", 751 => "001111110100", 752 => "111111101100", 
    753 => "001100001000", 754 => "001011101101", 755 => "111001110001", 
    756 => "110010010000", 757 => "111101110111", 758 => "000110111011", 
    759 => "001110001001", 760 => "000000101110", 761 => "000111010101", 
    762 => "000011101011", 763 => "001110010001", 764 => "111010101111", 
    765 => "111101100010", 766 => "001001010000", 767 => "110010101000", 
    768 => "000001111000", 769 => "000100111011", 770 => "001111101110", 
    771 => "001010011110", 772 => "111010100000", 773 => "001101010100", 
    774 => "001100111011", 775 => "001110000111", 776 => "001011000111", 
    777 => "000000100101", 778 => "110000010111", 779 => "111011000010", 
    780 => "001101011101", 781 => "000011011101", 782 => "000000001110", 
    783 => "000000111100", 784 => "111100101001", 785 => "111011010000", 
    786 => "110100100111", 787 => "000001110011", 788 => "110110001001", 
    789 => "001101011001", 790 => "110111000000", 791 => "110000100111", 
    792 => "001111100010", 793 => "001110011000", 794 => "110010110111", 
    795 => "111101001000", 796 => "001110011010", 797 => "110111110101", 
    798 => "101111111011", 799 => "110110011110", 800 => "110000111111", 
    801 => "001101001001", 802 => "000101110001", 803 => "110000101000", 
    804 => "110101010001", 805 => "110100010010", 806 => "000111110111", 
    807 => "110001110011", 808 => "000100111000", 809 => "111011011000", 
    810 => "001100101000", 811 => "110011111010", 812 => "111110100000", 
    813 => "000001111111", 814 => "111000111000", 815 => "111011000001", 
    816 => "000000101011", 817 => "000101010100", 818 => "000100110010", 
    819 => "110000100111", 820 => "001000100011", 821 => "110000001110", 
    822 => "110000111110", 823 => "001111101111", 824 => "110101110100", 
    825 => "110100011011", 826 => "000010011100", 827 => "111100111101", 
    828 => "001110100111", 829 => "111010011011", 830 => "000001001000", 
    831 => "111000010110", 832 => "111100111101", 833 => "110111100001", 
    834 => "001000100100", 835 => "000100100000", 836 => "000000100111", 
    837 => "110100000001", 838 => "111000100011", 839 => "000111001111" );


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

memory_access_guard_1: process (addr1) 
begin
      addr1_tmp <= addr1;
--synthesis translate_off
      if (CONV_INTEGER(addr1) > mem_size-1) then
           addr1_tmp <= (others => '0');
      else 
           addr1_tmp <= addr1;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
        if (ce1 = '1') then 
            q1 <= mem(CONV_INTEGER(addr1_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity fc_layer3_fc_layeh8b is
    generic (
        DataWidth : INTEGER := 12;
        AddressRange : INTEGER := 840;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address1 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of fc_layer3_fc_layeh8b is
    component fc_layer3_fc_layeh8b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR;
            addr1 : IN STD_LOGIC_VECTOR;
            ce1 : IN STD_LOGIC;
            q1 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    fc_layer3_fc_layeh8b_rom_U :  component fc_layer3_fc_layeh8b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1);

end architecture;

