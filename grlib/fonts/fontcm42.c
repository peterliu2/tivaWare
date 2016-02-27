//*****************************************************************************
//
// fontcm42.c - Font definition for the 42pt Cm font.
//
// Copyright (c) 2011-2015 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.2.111 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cm
//     Size: 42 point
//     Bold: no
//     Italic: no
//     Memory usage: 5412 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 42 point Cm font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm42Data[5210] =
{
      5,  17,   0,  91,  48,  33,   7, 227,  67,  67,  67,  67,
     67,  67,  67,  67,  67,  67,  81,  97,  97,  97,  97,  97,
     97,  97,  97,  97,  97,  97, 240, 240,  51,  67,  67,   0,
     10,  16,  31,  16,   0,   6,   3,  83,  84,  68,  68,  68,
    113, 113, 113, 113, 113, 113, 113, 113,  97, 113, 113, 113,
    113,  97, 113, 113,  97, 113,   0,  56, 112, 113,  32,   0,
     13,  82, 114, 240,  98, 114, 240,  97, 129, 240, 113, 129,
    240,  98, 114, 240,  98, 114, 240,  97, 129, 240, 113, 129,
    240,  98, 114, 240,  98, 114, 240,  97, 129, 240, 113, 129,
    240,  98, 114, 240,  98, 114, 240,  97, 129, 207,  13, 210,
    114, 240,  98, 114, 240,  97, 129, 240, 113, 129, 240,  98,
    114, 240,  98, 114, 223,  13, 193, 114, 240,  98, 114, 240,
     98, 113, 240, 113, 129, 240, 113, 114, 240,  98, 114, 240,
     98, 113, 240, 113, 129, 240, 113, 114, 240,  98, 114, 240,
     98, 113, 240, 113, 129, 240,  98, 114, 240,  98, 114,   0,
     14,  16,  83,  19, 240, 177, 240,  49, 240,  22, 178,  33,
     50, 130,  49,  66,  98,  65,  81,  98,  65,  82,  66,  81,
     97,  66,  81,  67,  66,  81,  67,  66,  81,  67,  67,  65,
    179,  65, 195,  49, 212,  17, 231, 216, 230, 209,  36, 193,
     51, 193,  67, 177,  82,  67,  65,  82,  67,  65,  82,  67,
     65,  82,  65,  97,  82,  66,  81,  81,  97,  81,  66, 113,
     65,  50, 131,  33,  34, 182, 240,  17, 240,  49,   0,  22,
     96, 116,  32,  67, 240,  17, 177,  49, 226, 161,  81, 210,
    146,  98, 162, 162,  97,  18,  97,  18, 146, 113,  53,  34,
    162, 129, 145, 178, 129, 130, 178, 129, 114, 194, 129, 113,
    210, 129,  98, 210, 129,  97, 226, 129,  82, 242,  97,  82,
    240,  18,  97,  81, 240,  49,  81,  82, 240,  65,  49,  82,
    240,  99,  98, 113, 240,  98,  98,  18, 240,  65,  97,  81,
    240,  34,  82,  97, 242,  97, 113, 241,  98, 129, 210,  98,
    129, 194, 114, 129, 194, 114, 129, 178, 130, 129, 177, 146,
    129, 162, 146, 129, 146, 178,  97, 162, 178,  97, 146, 209,
     82, 130, 226,  50, 146, 240,  19,   0,  37,  94,  31,   0,
      8, 100, 240, 178,  49, 240, 146,  66, 240, 129,  97, 240,
    114,  97, 240, 114,  97, 240, 114,  97, 240, 114,  81, 240,
    130,  81, 240, 130,  65, 240, 147,  33, 240, 178,  33, 240,
    178,  17, 167, 163, 196, 195, 209, 228, 193, 209,  19, 177,
    209,  51, 145, 209,  82, 145, 193,  99, 113, 193, 131,  97,
    193, 146,  81, 194, 147,  65, 194, 163,  33, 210, 180, 145,
     67, 178, 161,  82, 179, 145,  83, 145,  34, 113, 115,  98,
     67,  65, 167, 133,   0,  43,  64,  18,   8, 240, 147,  84,
     68, 113, 113, 113, 113,  97, 113, 113,  97,  97,   0,  28,
    112,  46,  13, 240,  97, 177, 177, 178, 177, 177, 178, 177,
    178, 178, 177, 178, 178, 178, 177, 178, 178, 178, 178, 178,
    178, 178, 178, 178, 178, 178, 178, 179, 178, 178, 178, 178,
    194, 178, 193, 194, 193, 194, 194, 193, 209, 209,  64,  45,
     13, 209, 209, 209, 194, 194, 193, 194, 193, 194, 178, 194,
    178, 178, 178, 194, 178, 178, 178, 178, 178, 178, 178, 178,
    178, 178, 178, 178, 177, 178, 178, 178, 177, 178, 178, 177,
    178, 177, 177, 193, 177, 177, 177, 192,  44,  18, 240, 146,
    240,  18, 240,  18, 240,  18, 162,  66,  66,  67,  50,  51,
     98,  33,  50, 163,  18, 212, 228, 211,  18, 162,  33,  50,
     99,  49,  67,  66,  66,  66, 162, 240,  18, 240,  18, 240,
     18,   0,  55,  32,  60,  29,   0,  30,  65, 240, 209, 240,
    209, 240, 209, 240, 209, 240, 209, 240, 209, 240, 209, 240,
    209, 240, 209, 240, 209, 240, 209, 240, 209, 240,  31,  10,
    240,  17, 240, 209, 240, 209, 240, 209, 240, 209, 240, 209,
    240, 209, 240, 209, 240, 209, 240, 209, 240, 209, 240, 209,
    240, 209,   0,  31,  18,   8,   0,  29,   3,  84,  68, 113,
    113, 113, 113,  97, 113,  97,  97, 240, 240,  16,   9,  14,
      0,  38,  74,  74,   0,  33,  96,  10,   7,   0,  25,  51,
     67,  67,   0,  10,  16,  88,  19, 240, 240,  49, 240,  34,
    240,  33, 240,  49, 240,  34, 240,  33, 240,  49, 240,  34,
    240,  33, 240,  49, 240,  34, 240,  33, 240,  34, 240,  34,
    240,  33, 240,  34, 240,  34, 240,  33, 240,  34, 240,  34,
    240,  33, 240,  34, 240,  34, 240,  33, 240,  34, 240,  34,
    240,  33, 240,  34, 240,  34, 240,  33, 240,  34, 240,  33,
    240,  49, 240,  34, 240,  33, 240,  49, 240,  34, 240,  33,
    240,  49, 240,  34, 240,  33, 240, 240, 112,  61,  19,   0,
     10,  21, 209,  82, 161, 114, 129, 145, 114, 146,  98, 146,
     97, 177,  82, 178,  66, 178,  66, 178,  66, 178,  66, 178,
     66, 178,  66, 178,  66, 178,  66, 178,  66, 178,  66, 178,
     66, 178,  66, 178,  66, 178,  81, 177,  98, 146,  98, 146,
    114, 129, 145, 114, 147,  66, 197,   0,  27,  32,  36,  16,
      0,   8,  97, 226, 196, 148,  18, 226, 226, 226, 226, 226,
    226, 226, 226, 226, 226, 226, 226, 226, 226, 226, 226, 226,
    226, 226, 226, 226, 226, 226, 156,   0,  22,  64,  61,  19,
      0,  10,   6, 193,  68, 145, 115, 113, 147,  97, 147,  81,
    179,  65, 179,  67, 147,  67, 147,  67, 147, 240,  19, 240,
     18, 240,  19, 240,  18, 240,  19, 240,  18, 240,  18, 240,
     18, 240,  18, 240,  18, 240,  33, 240,  33, 240,  33, 145,
    113, 161,  97, 177,  81, 177, 109,  94,   0,  26,  96,  60,
     20,   0,  10,  86, 209,  83, 146, 115, 129, 146, 113, 163,
     99, 131,  99, 131,  99, 131, 240,  35, 240,  34, 240,  35,
    240,  19, 240,  18, 229, 240,  83, 240,  51, 240,  51, 240,
     50, 240,  51,  67, 163,  67, 163,  67, 163,  67, 163,  65,
    179,  97, 163, 113, 131, 146,  83, 198,   0,  28,  80,  63,
     21,   0,  12,   1, 240,  66, 240,  66, 240,  51, 240,  51,
    240,  33,  18, 240,  17,  34, 240,  17,  34, 241,  50, 241,
     50, 225,  66, 209,  82, 209,  82, 193,  98, 193,  98, 177,
    114, 161, 130, 161, 130, 145, 146, 145, 146, 143,   2, 242,
    240,  66, 240,  66, 240,  66, 240,  66, 240,  66, 250,   0,
     29,  48,  61,  19,   0,   9,  98, 130, 123, 138, 145,  22,
    177, 240,  49, 240,  49, 240,  49, 240,  49, 240,  49, 240,
     49,  53, 161,  18,  66, 146, 114, 129, 145, 240,  50, 240,
     49, 240,  50, 240,  34, 240,  34, 240,  34,  67, 162,  67,
    162,  67, 162,  65, 193,  97, 162,  98, 130, 131,  82, 182,
      0,  27,  32,  63,  19,   0,  10,  68, 210,  66, 146, 113,
    131,  98, 130, 114, 114, 130, 114, 240,  19, 240,  18, 240,
     34, 240,  19,  53, 131,  33,  66, 115,  17,  98, 100, 130,
     84, 145,  83, 162,  67, 162,  67, 162,  67, 162,  67, 162,
     82, 162,  82, 162,  83, 145, 114, 145, 114, 130, 130,  98,
    162,  66, 197,   0,  27,  32,  62,  21,   0,  10,  81, 240,
     95,   1,  95,  97, 194,  81, 209,  97, 193, 113, 178, 240,
     65, 240,  65, 240,  66, 240,  65, 240,  65, 240,  81, 240,
     65, 240,  81, 240,  66, 240,  66, 240,  65, 240,  66, 240,
     66, 240,  66, 240,  51, 240,  51, 240,  51, 240,  51, 240,
     51, 240,  51, 240,  51,   0,  30,  64,  60,  20,   0,  10,
    101, 210,  82, 161, 130, 129, 161, 129, 177, 113, 177,  98,
    177,  99, 161, 115, 129, 132, 113, 148,  81, 181,  18, 213,
    240,  22, 209,  37, 162,  84, 130, 116,  98, 147,  98, 163,
     66, 194,  66, 209,  66, 209,  66, 209,  67, 177,  98, 177,
    114, 145, 147,  82, 198,   0,  28,  80,  64,  19,   0,  10,
     21, 194,  66, 162,  98, 145, 130, 114, 130, 113, 162,  82,
    162,  82, 162,  82, 163,  66, 163,  66, 163,  66, 163,  66,
    163,  81, 163,  82, 132,  82, 113,  19,  98,  97,  19, 114,
     65,  35, 133,  51, 240,  18, 240,  34, 240,  19, 240,  18,
    114, 115, 114, 114, 130,  98, 145,  83, 182,   0,  27,  64,
     15,   7,   0,  12,  35,  67,  67,   0,  11,   3,  67,  67,
      0,  10,  16,  23,   8,   0,  14,   3,  84,  67,   0,  12,
     83,  84,  68, 113, 113, 113, 113,  97, 113,  97,  97, 240,
    240,  16,  34,   7,   0,   9,  83,  67,  67, 240, 240,  49,
     97,  97,  97,  97,  97,  97,  97,  97,  97,  97,  98,  82,
     67,  67,  67,  67,  67,  67,  67,  67,  67,  67, 240,  48,
     13,  30,   0,  67,  79,  11,   0,  23,  15,  11,   0,  64,
     32,  53,  18,   0,  25,  51, 228, 243,   0,  11,   1, 240,
     33, 240,  33, 240,  33, 240,  33, 240,  33, 240,  17, 240,
     33, 240,  33, 240,  17, 240,  18, 242, 242, 240,  17, 240,
     18, 240,  18, 147,  66, 147,  66, 147,  66, 177,  82, 145,
    114,  98, 151,   0,   7,  96,  48,  17, 240, 240, 134, 146,
     82, 114, 114,  97, 146,  65, 162,  67, 130,  67, 130,  67,
    130, 242, 226, 242, 226, 226, 241, 242, 241, 240,  17, 241,
    240,  17, 240,  17, 240,  17, 240,  17, 240,  17,   0,  10,
     51, 227, 227,   0,  24,  64, 108,  30,   0,   8, 102, 240,
     99,  98, 240,  49, 178, 241, 210, 209, 240,  17, 177, 240,
     49, 146, 101, 114, 129,  98,  65, 113, 113,  82, 113,  98,
     97,  82, 129,  97,  97,  66, 162,  65,  81,  82, 162,  66,
     65,  66, 178,  81,  65,  66, 178,  81,  65,  66, 178,  81,
     65,  66, 178,  81,  65,  66, 178,  81,  65,  66, 178,  81,
     65,  66, 178,  81,  81,  66, 162,  81,  81,  66, 147,  81,
     81,  82, 131,  65, 113,  66, 113,  18,  65, 113,  83,  65,
     50,  34, 129, 101,  84, 146, 240, 226, 240, 226, 243, 195,
    132, 240,  41,   0,  42,  96,  81,  31,   0,   9,  49, 240,
    226, 240, 227, 240, 211, 240, 196, 240, 193,  19, 240, 161,
     35, 240, 161,  35, 240, 161,  51, 240, 129,  67, 240, 129,
     67, 240, 129,  83, 240,  97,  99, 240,  97,  99, 240,  97,
    115, 240,  65, 131, 240,  65, 131, 240,  65, 147, 240,  33,
    163, 240,  46, 240,  33, 179, 241, 195, 241, 210, 241, 211,
    209, 227, 209, 242, 209, 243, 178, 243, 163, 244, 119, 185,
      0,  43,  16,  63,  26,   0,   9, 111, 226, 148, 178, 179,
    162, 195, 146, 195, 146, 211, 130, 211, 130, 211, 130, 211,
    130, 210, 146, 195, 146, 194, 162, 178, 178, 146, 222, 194,
    164, 162, 195, 146, 211, 130, 211, 130, 227, 114, 227, 114,
    227, 114, 227, 114, 227, 114, 211, 130, 211, 130, 195, 146,
    164, 127,   2,   0,  36, 112,  81,  28,   0,  11, 103,  97,
    195,  98,  65, 163, 161,  34, 146, 209,  18, 130, 243, 114,
    240,  19,  99, 240,  34,  98, 240,  50,  83, 240,  50,  83,
    240,  65,  82, 240,  81,  67, 240, 163, 240, 163, 240, 163,
    240, 163, 240, 163, 240, 163, 240, 178, 240,  81,  83, 240,
     65,  83, 240,  65,  98, 240,  65,  99, 240,  33, 131, 240,
     17, 146, 241, 178, 209, 211, 161, 240,  19,  98, 240,  71,
      0,  39, 112,  74,  28,   0,  10,  79, 240,  18, 147, 226,
    179, 194, 195, 178, 211, 162, 226, 162, 227, 146, 243, 130,
    243, 130, 243, 130, 240,  19, 114, 240,  19, 114, 240,  19,
    114, 240,  19, 114, 240,  19, 114, 240,  19, 114, 240,  19,
    114, 240,  19, 114, 240,  19, 114, 240,  18, 130, 243, 130,
    243, 130, 242, 146, 227, 146, 211, 162, 210, 178, 179, 194,
    148, 175,   0,  40,  16,  75,  27,   0,  10,  31,   6, 146,
    196, 146, 226, 146, 241, 146, 241, 146, 240,  17, 130, 240,
     17, 130, 240,  17, 130, 240,  17, 130, 145,  97, 130, 145,
    242, 145, 242, 130, 242, 115, 252, 242, 115, 242, 145, 242,
    145, 242, 145, 242, 145, 113, 114, 240,  33, 114, 240,  33,
    114, 240,  17, 130, 240,  17, 130, 240,  17, 130, 242, 130,
    227, 130, 197,  95,   7,   0,  37,  96,  64,  26,   0,   9,
    111,   6, 130, 196, 130, 226, 130, 226, 130, 241, 130, 241,
    130, 241, 130, 241, 130, 240,  17, 114, 145, 226, 145, 226,
    145, 226, 145, 226, 115, 236, 226, 115, 226, 130, 226, 145,
    226, 145, 226, 145, 226, 240, 146, 240, 146, 240, 146, 240,
    146, 240, 146, 240, 146, 240, 146, 240, 106,   0,  37,  96,
     80,  30,   0,  12,  70,  97, 243,  82,  65, 211, 146,  33,
    194, 196, 178, 227, 163, 242, 147, 240,  18, 146, 240,  34,
    131, 240,  49, 131, 240,  49, 130, 240,  65, 115, 240,  65,
    115, 240, 195, 240, 195, 240, 195, 240, 195, 240, 195, 240,
    195, 218,  83, 240,  34, 131, 240,  34, 146, 240,  34, 147,
    240,  18, 162, 240,  18, 178, 242, 194, 226, 211, 179, 228,
    114,  33, 240,  40,  65,   0,  42,  16,  65,  27,   0,  10,
     24, 120, 114, 210, 162, 210, 162, 210, 162, 210, 162, 210,
    162, 210, 162, 210, 162, 210, 162, 210, 162, 210, 162, 210,
    162, 210, 162, 210, 175,   2, 162, 210, 162, 210, 162, 210,
    162, 210, 162, 210, 162, 210, 162, 210, 162, 210, 162, 210,
    162, 210, 162, 210, 162, 210, 162, 210, 120, 120,   0,  37,
     80,  35,  12, 240, 240, 104, 114, 162, 162, 162, 162, 162,
    162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
    162, 162, 162, 162, 162, 162, 162, 162, 162, 120,   0,  17,
     61,  18,   0,   7,  72, 226, 240,  18, 240,  18, 240,  18,
    240,  18, 240,  18, 240,  18, 240,  18, 240,  18, 240,  18,
    240,  18, 240,  18, 240,  18, 240,  18, 240,  18, 240,  18,
    240,  18, 240,  18, 240,  18, 240,  18, 240,  18, 114, 114,
    100,  98, 100,  98,  99,  98, 129, 114, 146,  66, 196,   0,
     26,  80,  29,   0,  10, 120, 167, 114, 227, 162, 226, 178,
    209, 210, 193, 226, 177, 242, 162, 242, 146, 240,  18, 145,
    240,  34, 129, 240,  50, 113, 240,  66,  97, 240,  82,  83,
    240,  66,  65,  19, 240,  50,  49,  35, 240,  50,  33,  67,
    240,  34,  17,  83, 240,  35, 115, 240,  18, 147, 242, 147,
    242, 163, 226, 179, 210, 179, 210, 195, 194, 195, 194, 211,
    178, 227, 162, 213, 104, 152,   0,  40,  48,  65,  23,   0,
      8,  89, 240,  34, 240,  98, 240,  98, 240,  98, 240,  98,
    240,  98, 240,  98, 240,  98, 240,  98, 240,  98, 240,  98,
    240,  98, 240,  98, 240,  98, 240,  98, 240,  98, 240,  98,
    240,  98, 209, 114, 209, 114, 209, 114, 209, 114, 209, 114,
    209, 114, 194, 114, 194, 114, 178, 130, 148,  95,   3,   0,
     32,  32, 118,  34,   0,  12, 102, 240,  54, 116, 240,  35,
    161,  18, 240,  17,  18, 161,  18, 240,  17,  18, 161,  19,
    241,  18, 161,  34, 225,  34, 161,  34, 225,  34, 161,  35,
    209,  34, 161,  50, 193,  50, 161,  51, 177,  50, 161,  51,
    161,  66, 161,  66, 161,  66, 161,  67, 145,  66, 161,  82,
    129,  82, 161,  82, 129,  82, 161,  83, 113,  82, 161,  98,
     97,  98, 161,  98,  97,  98, 161,  99,  81,  98, 161, 114,
     65, 114, 161, 115,  49, 114, 161, 115,  33, 130, 161, 130,
     33, 130, 161, 131,  17, 130, 161, 132, 146, 161, 147, 146,
    161, 147, 146, 147, 145, 162, 119, 113, 120,   0,  47,  32,
     85,  28,   0,  10,  70, 183, 116, 195, 148, 209, 161,  19,
    193, 161,  35, 177, 161,  35, 177, 161,  51, 161, 161,  51,
    161, 161,  67, 145, 161,  83, 129, 161,  83, 129, 161,  99,
    113, 161,  99, 113, 161, 115,  97, 161, 130,  97, 161, 131,
     81, 161, 147,  65, 161, 147,  65, 161, 163,  49, 161, 178,
     49, 161, 179,  33, 161, 195,  17, 161, 195,  17, 161, 212,
    161, 212, 161, 227, 161, 242, 147, 226, 119, 209,   0,  39,
     48,  84,  30,   0,  12,  70, 240,  99,  99, 240,  34, 162,
    242, 195, 194, 226, 178, 240,  18, 147, 240,  19, 130, 240,
     50, 115, 240,  51,  99, 240,  51,  98, 240,  83,  67, 240,
     83,  67, 240,  83,  67, 240,  83,  67, 240,  83,  67, 240,
     83,  67, 240,  83,  67, 240,  83,  83, 240,  67,  83, 240,
     51,  99, 240,  51, 114, 240,  50, 131, 240,  19, 147, 242,
    178, 226, 210, 194, 242, 162, 240,  35,  99, 240, 102,   0,
     43,  62,  25,   0,   9,  63, 210, 147, 178, 179, 146, 194,
    146, 195, 130, 211, 114, 211, 114, 211, 114, 211, 114, 211,
    114, 211, 114, 195, 130, 194, 146, 178, 162, 147, 188, 210,
    240, 130, 240, 130, 240, 130, 240, 130, 240, 130, 240, 130,
    240, 130, 240, 130, 240, 130, 240, 130, 240, 130, 240,  88,
      0,  36,  64, 114,  30,   0,  12,  71, 240,  98,  99, 240,
     34, 162, 242, 195, 194, 226, 179, 242, 147, 240,  19, 130,
    240,  50, 115, 240,  51,  99, 240,  51,  99, 240,  66,  83,
    240,  83,  67, 240,  83,  67, 240,  83,  67, 240,  83,  67,
    240,  83,  67, 240,  83,  67, 240,  83,  67, 240,  83,  83,
    240,  66,  99, 240,  51, 114, 240,  51, 115, 240,  34, 146,
    115,  98, 178,  81,  49,  67, 194,  49,  81,  50, 226,  33,
     81,  18, 240,  35,  17,  67, 240, 102,  17, 240, 225, 113,
    240,  98,  97, 240, 113,  97, 240, 113,  97, 240, 114,  65,
    240, 135, 240, 150, 240, 163,   0,  12,  16,  71,  29,   0,
     10, 126, 240,  50, 131, 240,  18, 163, 226, 179, 210, 179,
    210, 195, 194, 195, 194, 195, 194, 195, 194, 195, 194, 179,
    210, 178, 226, 162, 242, 131, 240,  26, 240,  66, 115, 240,
     34, 147, 242, 162, 242, 163, 226, 163, 226, 178, 226, 178,
    226, 179, 210, 179, 210, 179, 210, 179,  81, 114, 179,  81,
    114, 195,  49,  88, 165,   0,  40,  80,  66,  21,   0,   8,
     69,  81, 130,  82,  49, 114, 129,  18,  98, 163,  97, 194,
     82, 194,  82, 209,  82, 209,  82, 209,  83, 193,  99, 240,
     52, 240,  54, 240,  25, 233, 240,  22, 240,  52, 240,  51,
    240,  67,  65, 226,  65, 226,  65, 226,  65, 226,  66, 210,
     66, 209,  83, 178,  82,  17, 146,  97,  50,  98, 113,  86,
      0,  30,  72,  28,   0,  10,  79,   9,  68, 114, 116,  66,
    146, 146,  65, 162, 146,  65, 162, 161,  65, 162, 161,  65,
    162, 161,  65, 162, 161,  65, 162, 161, 242, 240, 178, 240,
    178, 240, 178, 240, 178, 240, 178, 240, 178, 240, 178, 240,
    178, 240, 178, 240, 178, 240, 178, 240, 178, 240, 178, 240,
    178, 240, 178, 240, 178, 240, 178, 240, 178, 240, 108,   0,
     39,  96,  66,  28,   0,  10,  72, 136, 114, 227, 146, 241,
    162, 241, 162, 241, 162, 241, 162, 241, 162, 241, 162, 241,
    162, 241, 162, 241, 162, 241, 162, 241, 162, 241, 162, 241,
    162, 241, 162, 241, 162, 241, 162, 241, 162, 241, 162, 241,
    162, 241, 177, 225, 194, 209, 194, 193, 226, 177, 242, 145,
    240,  34,  98, 240,  86,   0,  40,  16,  84,  32,   0,  12,
      9, 199, 115, 240,  35, 147, 240,  34, 179, 240,  17, 195,
    240,  17, 210, 241, 227, 225, 227, 225, 243, 193, 240,  19,
    193, 240,  19, 193, 240,  35, 161, 240,  51, 161, 240,  67,
    129, 240,  83, 129, 240,  83, 129, 240,  99,  97, 240, 115,
     97, 240, 130,  81, 240, 147,  65, 240, 147,  65, 240, 163,
     33, 240, 179,  33, 240, 179,  33, 240, 196, 240, 212, 240,
    226, 240, 242, 240, 242,   0,  46,  16, 122,  43,   0,  16,
     25, 105, 135, 115, 196, 195, 147, 195, 225, 163, 211, 209,
    179, 195, 193, 195, 195, 193, 195, 177,  19, 177, 211, 161,
     19, 161, 227, 161,  19, 161, 227, 145,  51, 145, 242, 145,
     51, 129, 240,  19, 129,  51, 129, 240,  19, 113,  82, 129,
    240,  34, 113,  83,  97, 240,  51,  97,  83,  97, 240,  51,
     81, 114,  97, 240,  51,  81, 115,  81, 240,  67,  65, 115,
     65, 240,  83,  49, 131,  65, 240,  83,  49, 147,  49, 240,
     99,  33, 147,  33, 240, 115,  33, 147,  33, 240, 115,  17,
    179,  17, 240, 132, 180, 240, 148, 180, 240, 147, 211, 240,
    162, 210, 240, 178, 210, 240, 177, 241,   0,  61,  82,  31,
      0,  11, 104, 151, 149, 180, 196, 193, 243, 177, 240,  35,
    161, 240,  35, 145, 240,  67, 113, 240,  99,  97, 240,  99,
     81, 240, 131,  49, 240, 163,  33, 240, 163,  17, 240, 196,
    240, 211, 240, 211, 240, 212, 240, 177,  35, 240, 145,  51,
    240, 145,  67, 240, 113,  84, 240,  81, 115, 240,  81, 131,
    240,  49, 148, 240,  17, 179, 240,  17, 195, 225, 212, 194,
    227, 179, 228, 119, 185,   0,  43,  16,  76,  32,   0,  12,
      9, 199, 116, 244, 163, 240,  17, 211, 225, 227, 225, 243,
    193, 240,  19, 193, 240,  35, 161, 240,  67, 129, 240,  83,
    129, 240,  99,  97, 240, 115,  97, 240, 131,  65, 240, 162,
     49, 240, 179,  33, 240, 194,  17, 240, 212, 240, 226, 240,
    242, 240, 242, 240, 242, 240, 242, 240, 242, 240, 242, 240,
    242, 240, 242, 240, 242, 240, 242, 240, 200,   0,  45,  96,
     66,  24,   0,   9,  31,   4,  85, 164,  83, 195,  98, 195,
    113, 196, 113, 195, 129, 179, 145, 179, 240,  83, 240,  84,
    240,  83, 240,  83, 240,  99, 240,  83, 240,  84, 240,  83,
    240,  83, 240,  99, 240,  83, 161, 147, 177, 147, 177, 131,
    193, 131, 193, 115, 209,  99, 210,  99, 210,  83, 211,  68,
    181,  79,   5,   0,  33,  64,  44,   9, 149,  65, 129, 129,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    133, 208,  31,  16,   0,   6,  49, 113,  97, 113, 113, 113,
     97, 113, 113, 113,  97, 113, 113, 113, 113, 113, 113, 113,
    116,  68,  68,  68,  83,  83,   0,  56,  64,  44,   9, 149,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
    129, 129, 129,  69, 208,  16,  14,   0,   5, 113, 194, 178,
     17, 145,  65, 113,  97,  81, 129,   0,  60,  10,   7, 240,
    240,  83,  67,  67,   0,  31,  16,  18,   8, 240, 193,  97,
    113,  97, 113,  97, 113, 113, 113, 116,  68,  83,   0,  28,
     64,  48,  21,   0,  37,  37, 226,  82, 177, 130, 162, 130,
    147, 114, 146, 130, 240,  66, 231, 195,  66, 162, 114, 146,
    130, 146, 130, 130, 146,  49,  66, 146,  49,  66, 131,  49,
     67,  97,  18,  49,  83,  66,  34,  17, 133,  67,   0,  29,
     80,  67,  22,   0,   8,  52, 240,  37, 240,  82, 240,  82,
    240,  82, 240,  82, 240,  82, 240,  82, 240,  82, 240,  82,
    240,  82, 240,  82,  53, 194,  33,  67, 163, 130, 147, 146,
    130, 162, 130, 177, 130, 178, 114, 178, 114, 178, 114, 178,
    114, 178, 114, 178, 114, 177, 130, 162, 131, 145, 147, 130,
    145,  34,  66, 177,  69,   0,  31,  48,  41,  18,   0,  32,
     22, 163,  82, 114, 129, 113, 131,  82, 131,  81, 147,  66,
    240,  18, 240,  18, 240,  18, 240,  18, 240,  18, 240,  34,
    240,  18, 161,  98, 129, 115, 113, 146,  66, 181,   0,  25,
     96,  67,  23,   0,  10,  65, 240,  53, 240,  98, 240,  98,
    240,  98, 240,  98, 240,  98, 240,  98, 240,  98, 240,  98,
    240,  98, 213,  50, 178,  82,  18, 161, 147, 146, 147, 130,
    178, 130, 178, 114, 194, 114, 194, 114, 194, 114, 194, 114,
    194, 114, 194, 129, 194, 130, 178, 145, 163, 146, 129,  18,
    178,  81,  37, 150,  53,   0,  32,  16,  40,  19,   0,  33,
    118, 178,  82, 146, 114, 129, 146,  97, 178,  81, 178,  66,
    178,  79,  66, 240,  34, 240,  34, 240,  34, 240,  50, 177,
     82, 177,  98, 145, 130, 114, 146,  82, 182,   0,  27,  16,
     41,  15, 240, 240, 115, 162,  49, 130,  50, 130,  50, 114,
     66, 114, 210, 210, 210, 210, 210, 210, 170, 130, 210, 210,
    210, 210, 210, 210, 210, 210, 210, 210, 210, 210, 210, 210,
    210, 169,   0,  21,  48,  61,  22,   0,  36,  52,  68, 147,
     19,  17,  35, 114,  82,  50, 129,  98, 194, 114, 178, 114,
    178, 114, 178, 114, 178, 114, 178, 113, 210,  82, 211,  50,
    209,  37, 225, 240,  97, 240,  98, 240, 106, 219, 146, 147,
    114, 179,  82, 210,  82, 210,  82, 210,  83, 179,  99, 147,
    147,  98, 215,   0,   9,  64,  67,  23,   0,   8, 100, 240,
     53, 240,  98, 240,  98, 240,  98, 240,  98, 240,  98, 240,
     98, 240,  98, 240,  98, 240,  98, 240,  98,  53, 210,  33,
     67, 178,  17,  99, 163, 130, 163, 130, 162, 146, 162, 146,
    162, 146, 162, 146, 162, 146, 162, 146, 162, 146, 162, 146,
    162, 146, 162, 146, 162, 146, 162, 146, 120,  56,   0,  32,
     16,  30,  11,   0,   7,  19, 131, 131,   0,   9,  50, 101,
    146, 146, 146, 146, 146, 146, 146, 146, 146, 146, 146, 146,
    146, 146, 146, 103,   0,  15,  80,  41,  12,   0,   8,  19,
    147, 147,   0,  10,  34, 132, 162, 162, 162, 162, 162, 162,
    162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
    162, 162,  67,  50,  67,  49,  82,  50, 115, 240, 240, 208,
     67,  22,   0,   8,  52, 240,  37, 240,  82, 240,  82, 240,
     82, 240,  82, 240,  82, 240,  82, 240,  82, 240,  82, 240,
     82, 240,  82, 103, 114, 115, 162, 114, 178,  97, 210,  81,
    226,  65, 242,  49, 240,  18,  35, 242,  17,  19, 227,  50,
    226,  67, 210,  83, 194,  98, 194,  99, 178, 115, 162, 130,
    162, 131, 104,  70,   0,  30,  96,  35,  12, 240, 240, 116,
    117, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
    162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
    162, 162, 162, 120,   0,  17,  65,  34,   0,  59,  99,  53,
    101, 165,  33,  67,  49,  67, 178,  17,  98,  33,  99, 163,
    131, 130, 163, 131, 130, 162, 146, 146, 162, 146, 146, 162,
    146, 146, 162, 146, 146, 162, 146, 146, 162, 146, 146, 162,
    146, 146, 162, 146, 146, 162, 146, 146, 162, 146, 146, 162,
    146, 146, 162, 146, 146, 120,  56,  56,   0,  47,  32,  45,
     23,   0,  40,  67,  53, 165,  33,  67, 178,  17,  99, 163,
    130, 163, 130, 162, 146, 162, 146, 162, 146, 162, 146, 162,
    146, 162, 146, 162, 146, 162, 146, 162, 146, 162, 146, 162,
    146, 162, 146, 120,  56,   0,  32,  16,  41,  20,   0,  35,
    101, 210,  66, 177, 130, 129, 161, 114, 162,  97, 193,  82,
    194,  66, 194,  66, 194,  66, 194,  66, 194,  66, 194,  81,
    193,  98, 162, 113, 161, 130, 130, 162,  66, 214,   0,  28,
     80,  59,  22,   0,  38,  84,  53, 149,  33,  67, 163, 130,
    147, 131, 130, 162, 130, 162, 130, 178, 114, 178, 114, 178,
    114, 178, 114, 178, 114, 178, 114, 162, 130, 162, 131, 130,
    147, 130, 146,  18,  66, 178,  53, 194, 240,  82, 240,  82,
    240,  82, 240,  82, 240,  82, 240,  82, 240,  40,   0,  10,
     63,  23,   0,  41,   5,  65, 178,  81,  49, 162, 113,  33,
    146, 147, 130, 178, 130, 178, 114, 194, 114, 194, 114, 194,
    114, 194, 114, 194, 114, 194, 130, 178, 130, 178, 146, 147,
    147, 113,  18, 178,  81,  34, 197,  66, 240,  98, 240,  98,
    240,  98, 240,  98, 240,  98, 240,  98, 240,  98, 240,  56,
      0,   9,  16,  31,  16,   0,  28,  35,  51,  85,  33,  34,
    114,  17,  50, 115,  66, 115, 210, 226, 226, 226, 226, 226,
    226, 226, 226, 226, 226, 226, 185,   0,  22, 112,  37,  16,
      0,  28,  54, 130,  83,  97, 129,  81, 145,  81, 145,  82,
    227, 230, 199, 197, 227,  65, 146,  65, 161,  66, 145,  66,
    145,  67, 113,  81,  18,  82,  81,  53,   0,  22, 112,  44,
     17,   0,  13,  49, 240,  17, 240,  17, 240,  17, 240,  17,
    242, 242, 212, 188, 146, 242, 242, 242, 242, 242, 242, 242,
    242, 242,  97, 130,  97, 130,  97, 130,  97, 130,  97, 146,
     65, 162,  50, 196,   0,  24,  16,  45,  23,   0,  40,  52,
    116, 117, 101, 162, 146, 162, 146, 162, 146, 162, 146, 162,
    146, 162, 146, 162, 146, 162, 146, 162, 146, 162, 146, 162,
    146, 162, 146, 162, 131, 162, 113,  18, 179,  65,  37, 165,
     53,   0,  32,  16,  47,  23,   0,  40,  39, 102,  99, 162,
    146, 161, 163, 145, 178, 129, 194, 129, 210,  97, 226,  97,
    227,  81, 242,  65, 240,  18,  65, 240,  34,  33, 240,  50,
     33, 240,  51,  17, 240,  67, 240,  83, 240,  97, 240, 113,
      0,  33,  32,  70,  30,   0,  52,  71,  54,  70,  99, 114,
    130, 146, 114, 130, 146, 129, 129, 163,  99, 113, 178,  99,
     97, 194,  81,  34,  81, 195,  65,  34,  81, 210,  65,  34,
     65, 226,  49,  66,  49, 227,  33,  66,  49, 242,  33,  66,
     33, 240,  18,  33,  82,  17, 240,  20,  98,  17, 240,  35,
     99, 240,  51, 114, 240,  50, 130, 240,  65, 129,   0,  42,
     96,  49,  24,   0,  42,   7, 102, 131, 131, 178, 129, 226,
     97, 243,  81, 240,  19,  49, 240,  50,  33, 240,  83, 240,
     99, 240, 115, 240,  81,  18, 240,  65,  50, 240,  33,  67,
    240,  17,  83, 225, 114, 209, 146, 178, 147, 118, 119,   0,
     33,  64,  63,  22,   0,  38,  70, 117,  99, 146, 146, 145,
    162, 145, 162, 129, 194, 113, 194, 113, 210,  81, 226,  81,
    226,  65, 240,  18,  49, 240,  18,  49, 240,  34,  17, 240,
     50,  17, 240,  51, 240,  82, 240,  82, 240,  81, 240,  97,
    240,  81, 240,  97, 240,  97, 226,  65, 242,  65, 241,  65,
    240,  36,   0,  10,  48,  37,  18,   0,  31,  93,  82, 130,
     97, 131,  97, 130,  97, 130, 113, 115, 242, 242, 242, 243,
    242,  97, 130, 113, 115, 113, 114, 129,  98, 145,  83, 130,
     67, 131,  78,   0,  25,  32,   9,  23,   0,  57,  79,   4,
      0,  63,  96,  10,  43,   0, 107,  79,  15,   9,   0, 118,
     96,  22,  15,   0,   6,   2,  66,  99,  51,  98,  66, 114,
     66,  98,  66, 113,  81, 114,  66, 113,  81,   0,  61,  15,
     17,   0,   8, 115,  97, 101,  65,  97,  69,  97,  99,   0,
     75,  32,
};

//*****************************************************************************
//
// The font definition for the 42 point Cm font.
//
//*****************************************************************************
const tFont g_sFontCm42 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    38,

    //
    // The height of the font.
    //
    43,

    //
    // The baseline of the font.
    //
    32,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   38,   69,  182,  265,  381,  475,
         493,  539,  584,  628,  688,  706,  715,  725,
         813,  874,  910,  971, 1031, 1094, 1155, 1218,
        1280, 1340, 1404, 1419, 1442, 1476, 1489, 1542,
        1590, 1698, 1779, 1842, 1923, 1997, 2072, 2136,
        2216, 2281, 2316, 2377, 2457, 2522, 2640, 2725,
        2809, 2871, 2985, 3056, 3122, 3194, 3260, 3344,
        3466, 3548, 3624, 3690, 3734, 3765, 3809, 3825,
        3835, 3853, 3901, 3968, 4009, 4076, 4116, 4157,
        4218, 4285, 4315, 4356, 4423, 4458, 4523, 4568,
        4609, 4668, 4731, 4762, 4799, 4843, 4888, 4935,
        5005, 5054, 5117, 5154, 5163, 5173, 5195,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm42Data
};
