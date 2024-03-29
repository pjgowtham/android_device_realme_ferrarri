/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of The Linux Foundation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

static const int8_t effect_0[] = {
    1,    1,    1,    1,    1,    1,    2,    2,    2,    3,    3,    4,
    4,    5,    6,    7,    8,    9,    10,   12,   13,   14,   16,   19,
    22,   25,   28,   32,   36,   42,   48,   54,   61,   69,   78,   85,
    92,   97,   102,  106,  110,  113,  115,  117,  119,  121,  121,  123,
    123,  123,  124,  124,  124,  123,  123,  123,  122,  121,  121,  120,
    119,  118,  117,  115,  114,  113,  112,  111,  109,  108,  106,  105,
    103,  101,  99,   97,   95,   93,   91,   89,   86,   83,   80,   77,
    73,   69,   64,   60,   54,   48,   41,   34,   25,   15,   4,    -7,
    -22,  -37,  -51,  -64,  -74,  -83,  -91,  -99,  -104, -109, -112, -115,
    -119, -120, -122, -122, -123, -122, -122, -122, -120, -120, -118, -116,
    -114, -112, -110, -107, -105, -103, -99,  -97,  -95,  -91,  -89,  -86,
    -83,  -80,  -77,  -74,  -71,  -68,  -64,  -61,  -58,  -55,  -52,  -49,
    -46,  -43,  -40,  -36,  -33,  -29,  -26,  -22,  -18,  -14,  -10,  -5,
    0,    6,    12,   19,   27,   35,   42,   47,   52,   57,   60,   63,
    65,   66,   67,   68,   68,   67,   67,   66,   64,   62,   61,   58,
    56,   53,   51,   49,   45,   43,   39,   35,   33,   29,   26,   22,
    19,   15,   12,   8,    5,    1,    -2,   -5,   -9,   -12,  -14,  -17,
    -20,  -22,  -25,  -27,  -28,  -30,  -32,  -32,  -34,  -34,  -34,  -34,
    -33,  -31,  -29,  -27,  -24,  -21,  -16,  -11,  -4,   2,    8,    14,
    19,   23,   27,   31,   35,   38,   42,   45,   48,   51,   54,   56,
    58,   62,   65,   67,   69,   72,   75,   78,   80,   83,   86,   88,
    91,   94,   97,   99,   102,  104,  107,  109,  111,  114,  116,  118,
    120,  121,  123,  124,  125,  126,  127,  127,  127,  127,  127,  126,
    124,  123,  120,  117,  113,  109,  103,  96,   89,   80,   70,   58,
    45,   32,   21,   11,   2,    -6,   -12,  -18,  -24,  -29,  -33,  -37,
    -41,  -43,  -47,  -49,  -51,  -54,  -56,  -58,  -59,  -61,  -62,  -64,
    -65,  -66,  -67,  -68,  -69,  -70,  -71,  -72,  -73,  -74,  -75,  -76,
    -77,  -77,  -78,  -78,  -79,  -79,  -80,  -80,  -80,  -80,  -80,  -80,
    -80,  -80,  -79,  -79,  -78,  -77,  -75,  -74,  -72,  -70,  -67,  -64,
    -61,  -57,  -53,  -47,  -42,  -37,  -32,  -28,  -25,  -22,  -19,  -16,
    -15,  -12,  -11,  -10,  -8,   -7,   -6,   -6,   -5,   -4,   -4,   -3,
    -3,   -3,   -3,   -2,   -2,   -2,   -2,   -2,   -2,   -2,   -1,   0
};

static const int8_t effect_1[] = {
    0,    0,    8,    16,   23,   31,   38,   46,   53,   60,   67,   73,
    80,   85,   91,   96,   101,  106,  110,  114,  117,  120,  122,  124,
    125,  126,  127,  127,  126,  126,  124,  122,  120,  117,  114,  110,
    106,  102,  97,   91,   86,   80,   74,   67,   60,   53,   46,   39,
    31,   24,   16,   8,    0,    -7,   -15,  -23,  -30,  -38,  -45,  -53,
    -60,  -66,  -73,  -79,  -85,  -91,  -96,  -101, -105, -110, -113, -117,
    -120, -122, -124, -125, -126, -127, -127, -127, -126, -124, -122, -120,
    -117, -114, -110, -106, -102, -97,  -92,  -86,  -80,  -74,  -68,  -61,
    -54,  -47,  -39,  -32,  -24,  -17,  -9,   0,    -7,   -14,  -21,  -28,
    -35,  -42,  -48,  -55,  -61,  -67,  -72,  -78,  -83,  -88,  -92,  -96,
    -100, -103, -106, -109, -111, -113, -114, -115, -116, -116, -115, -114,
    -113, -111, -109, -107, -104, -100, -97,  -92,  -88,  -83,  -78,  -73,
    -67,  -61,  -55,  -49,  -42,  -35,  -29,  -22,  -15,  -8,   0,    7,
    14,   21,   28,   35,   41,   48,   54,   60,   66,   72,   77,   83,
    87,   92,   96,   100,  103,  106,  109,  111,  113,  114,  115,  115,
    116,  115,  114,  113,  111,  109,  107,  104,  100,  97,   93,   88,
    84,   78,   73,   67,   62,   55,   49,   43,   36,   29,   22,   15,
    8,    0,    0
};

static const int8_t effect_2[] = {
    0,    7,    14,   21,   28,   34,   41,   47,   54,   59,   65,   71,
    76,   81,   86,   90,   94,   98,   101,  104,  107,  109,  111,  112,
    113,  113,  113,  113,  112,  111,  109,  107,  104,  101,  98,   95,
    91,   86,   81,   76,   71,   66,   60,   54,   48,   41,   35,   28,
    21,   14,   7,    0,    -7,   -13,  -20,  -27,  -34,  -40,  -47,  -53,
    -59,  -65,  -71,  -76,  -81,  -86,  -90,  -94,  -98,  -101, -104, -107,
    -109, -110, -112, -113, -113, -113, -113, -112, -111, -109, -107, -105,
    -102, -98,  -95,  -91,  -86,  -82,  -77,  -72,  -66,  -60,  -54,  -48,
    -42,  -35,  -28,  -22,  -15,  -8,   -1,   6,    13,   20,   27,   33,
    40,   46,   53,   59,   65,   70,   76,   81,   85,   90,   94,   97,
    101,  104,  106,  109,  110,  112,  113,  113,  113,  113,  112,  111,
    109,  107,  105,  102,  99,   95,   91,   87,   82,   77,   72,   66,
    61,   55,   48,   42,   36,   29,   22,   15,   8,    0,    6,    12,
    18,   24,   30,   35,   41,   46,   52,   57,   61,   66,   70,   74,
    78,   82,   85,   88,   90,   92,   94,   96,   97,   98,   98,   98,
    98,   97,   96,   94,   93,   90,   88,   85,   82,   78,   75,   71,
    66,   62,   57,   52,   47,   41,   36,   30,   24,   18,   12,   6,
    0,    -6,   -12,  -18,  -23,  -29,  -35,  -41,  -46,  -51,  -56,  -61,
    -66,  -70,  -74,  -78,  -81,  -85,  -88,  -90,  -92,  -94,  -96,  -97,
    -98,  -98,  -98,  -98,  -97,  -96,  -94,  -93,  -90,  -88,  -85,  -82,
    -79,  -75,  -71,  -67,  -62,  -57,  -52,  -47,  -42,  -36,  -30,  -25,
    -19,  -13,  -7,   -1,   5,    11,   17,   23,   29,   35,   40,   46,
    51,   56,   61,   65,   70,   74,   78,   81,   84,   87,   90,   92,
    94,   96,   97,   97,   98,   98,   98,   97,   96,   95,   93,   91,
    88,   85,   82,   79,   75,   71,   67,   62,   58,   52,   47,   42,
    36,   31,   25,   19,   13,   7
};

static const int8_t effect_3[] = {
    0,   5,   10,  15,  20,  25,  29,  34,  38,  43,  47,  51,  55,  58,  62,
    65,  68,  70,  73,  75,  77,  78,  79,  80,  81,  81,  81,  81,  80,  79,
    78,  77,  75,  73,  70,  68,  65,  62,  59,  55,  51,  47,  43,  39,  34,
    30,  25,  20,  15,  10,  5,   0,   -5,  -10, -15, -19, -24, -29, -34, -38,
    -42, -47, -51, -54, -58, -61, -65, -68, -70, -73, -75, -77, -78, -79, -80,
    -81, -81, -81, -81, -80, -79, -78, -77, -75, -73, -71, -68, -65, -62, -59,
    -55, -51, -47, -43, -39, -35, -30, -25, -20, -16, -11, -6,  -1,  4,   9,
    14,  19,  24,  29,  33,  38,  42,  46,  50,  54,  58,  61,  64,  67,  70,
    72,  75,  76,  78,  79,  80,  81,  81,  81,  81,  80,  80,  78,  77,  75,
    73,  71,  68,  65,  62,  59,  55,  52,  48,  44,  39,  35,  30,  26,  21,
    16,  11,  6,   1,   -4,  -9,  -14, -19, -24, -28, -33, -38, -42, -46, -50,
    -54, -58, -61, -64, -67, -70, -72, -74, -76, -78, -79, -80, -81, -81, -81,
    -81, -80, -80, -78, -77, -75, -73, -71, -68, -66, -62, -59, -56, -52, -48,
    -44, -40, -35, -31, -26, -21, -16, -11, -6,  -1,  4,   9,   14,  19,  23,
    28,  33,  37,  42,  46,  50,  54,  57,  61,  64,  67,  70,  72,  74,  76,
    78,  79,  80,  81,  81,  81,  81,  81,  80,  79,  77,  75,  73,  71,  69,
    66,  63,  59,  56,  52,  48,  44,  40,  35,  31,  26,  21,  16,  12,  7,
    2,   -3,  -8,  -13, -18, -23, -28, -32, -37, -41, -46, -50, -54, -57, -61,
    -64, -67, -70, -72, -74, -76, -78, -79, -80, -81, -81, -81, -81, -81, -80,
    -79, -77, -76, -74, -71, -69, -66, -63, -60, -56, -52, -48, -44, -40, -36,
    -31, -26, -22, -17, -12, -7,  0,   2,   3,   5,   7,   8,   10,  12,  13,
    15,  16,  17,  19,  20,  21,  22,  23,  24,  25,  26,  26,  27,  27,  28,
    28,  28,  28,  28,  28,  27,  27,  26,  26,  25,  24,  23,  22,  21,  20,
    19,  18,  16,  15,  13,  12,  10,  9,   7,   5,   4,   2,   0,   -2,  -3,
    -5,  -7,  -8,  -10, -12, -13, -15, -16, -17, -19, -20, -21, -22, -23, -24,
    -25, -26, -26, -27, -27, -28, -28, -28, -28, -28, -28, -27, -27, -26, -26,
    -25, -24, -23, -22, -21, -20, -19, -18, -16, -15, -13, -12, -10, -9,  -7,
    -5,  -4,  -2,  0,   1,   3,   5,   7,   8,   10,  11,  13,  15,  16,  17,
    19,  20,  21,  22,  23,  24,  25,  26,  26,  27,  27,  28,  28,  28,  28,
    28,  28,  27,  27,  26,  26,  25,  24,  23,  22,  21,  20,  19,  18,  16,
    15,  13,  12,  10,  9,   7,   5,   4,   2,   0,   -1,  -3,  -5,  -6,  -8,
    -10, -11, -13, -14, -16, -17, -19, -20, -21, -22, -23, -24, -25, -26, -26,
    -27, -27, -28, -28, -28, -28, -28, -28, -27, -27, -26, -26, -25, -24, -24,
    -23, -21, -20, -19, -18, -16, -15, -14, -12, -10, -9,  -7,  -6,  -4,  -2,
    0,   1,   3,   5,   6,   8,   10,  11,  13,  14,  16,  17,  18,  20,  21,
    22,  23,  24,  25,  26,  26,  27,  27,  28,  28,  28,  28,  28,  28,  27,
    27,  27,  26,  25,  24,  24,  23,  22,  20,  19,  18,  17,  15,  14,  12,
    11,  9,   7,   6,   4,   2,   1,   -1,  -3,  -5,  -6,  -8,  -10, -11, -13,
    -14, -16, -17, -18, -20, -21, -22, -23, -24, -25, -25, -26, -27, -27, -28,
    -28, -28, -28, -28, -28, -27, -27, -27, -26, -25, -24, -24, -23, -22, -20,
    -19, -18, -17, -15, -14, -12, -11, -9,  -7,  -6,  -4,  -2,  -1,  1,   3,
    4,   6,   8,   9,   11,  13,  14,  16,  17,  18,  20,  21,  22,  23,  24,
    25,  25,  26,  27,  27,  27,  28,  28,  28,  28,  28,  27,  27,  27,  26,
    25,  25,  24,  23,  22,  21,  19,  18,  17,  15,  14,  12,  11,  9,   8,
    6,   4,   2,   1,   -1,  -3,  -4,  -6,  -8,  -9,  -11, -13, -14, -15, -17,
    -18, -19, -21, -22, -23, -24, -25, -25, -26, -27, -27, -27, -28, -28, -28,
    -28, -28, -27, -27, -27, -26, -25, -25, -24, -23, -22, -21, -19, -18, -17,
    -15, -14, -12, -11, -9,  -8,  -6,  -4,  -3,  -1,  1,   3,   4,   6,   8,
    9,   11,  12,  14,  15,  17,  18,  19,  21,  22,  23,  24,  25,  25,  26,
    27,  27,  27,  28,  28,  28,  28,  28,  27,  27,  27,  26,  25,  25,  24,
    23,  22,  21,  20,  18,  17,  16,  14,  13,  11,  9,   8,   6,   4,   3,
    1,   -1,  -2,  -4,  -6,  -8,  -9,  -11, -12, -14, -15, -17, -18, -19, -21,
    -22, -23, -24, -25, -25, -26, -27, -27, -27, -28, -28, -28, -28, -28, -27,
    -27, -27, -26, -25, -25, -24, -23, -22, -21, -20, -18, -17, -16, -14, -13,
    -11, -9,  -8,  -6,  -5,  -3,  -1,  1,   2,   4,   6,   7,   9,   11,  12,
    14,  15,  17,  18,  19,  20,  22,  23,  24,  24,  25,  26,  27,  27,  27,
    28,  28,  28,  28,  28,  28,  27,  27,  26,  26,  25,  24,  23,  22,  21,
    20,  18,  17,  16,  14,  13,  11,  10,  8,   6,   5,   3,   1,   -1,  -2,
    -4,  -6,  -7,  -9,  -11, -12, -14, -15, -17, -18, -19, -20, -22, -23, -24,
    -24, -25, -26, -27, -27, -27, -28, -28, -28, -28, -28, -28, -27, -27, -26,
    -26, -25, -24, -23, -22, -21, -20, -19, -17, -16, -14, -13, -11, -10, -8,
    -6,  -5,  -3,  -1,  0,   2,   4,   6,   7,   9,   10,  12,  14,  15,  16,
    18,  19,  20,  21,  23,  23,  24,  25,  26,  26,  27,  27,  28,  28,  28,
    28,  28,  28,  27,  27,  26,  26,  25,  24,  23,  22,  21,  20,  19,  17,
    16,  14,  13,  11,  10,  8,   7,   5,   3,   1,   0,   -2,  -4,  -5,  -7,
    -9,  -10, -12, -13, -15, -16, -18, -19, -20, -21, -22, -23, -24, -25, -26,
    -26, -27, -27, -28, -28, -28, -28, -28, -28, -27, -27, -26, -26, -25, -24,
    -23, -22, -21, -20, -19, -17, -16, -15, -13, -11, -10, -8,  -7,  -5,  -3,
    -2,  0,   2,   4,   5,   7,   9,   10,  12,  13,  15,  16,  18,  19,  20,
    21,  22,  23,  24,  25,  26,  26,  27,  27,  28,  28,  28,  28,  28,  28,
    27,  27,  26,  26,  25,  24,  23,  22,  21,  20,  19,  17,  16,  15,  13,
    12,  10,  8,   7,   5,   3,   2,   0,   -2,  -3,  -5,  -7,  -9,  -10, -12,
    -13, -15, -16, -18, -19, -20, -21, -22, -23, -24, -25, -26, -26, -27, -27,
    -28, -28, -28, -28, -28, -28, -27, -27, -26, -26, -25, -24, -23, -22, -21,
    -20, -19, -18, -16, -15, -13, -12, -10, -8,  -7,  -5,  -3,  -2,  0,   2,
    3,   5,   7,   8,   10,  12,  13,  15,  16,  17,  19,  20,  21,  22,  23,
    24,  25,  26,  26,  27,  27,  28,  28,  28,  28,  28,  28,  27,  27,  26,
    26,  25,  24,  23,  22,  21,  20,  19,  18,  16,  15,  13,  12,  10,  9,
    7,   5,   4,   2,   0,   -2,  -3,  -5,  -7,  -8,  -10, -12, -13, -15, -16,
    -17, -19, -20, -21, -22, -23, -24, -25, -26, -26, -27, -27, -28, -28, -28,
    -28, -28, -28, -27, -27, -26, -26, -25, -24, -23, -22, -21, -20, -19, -18,
    -16, -15, -13, -12, -10, -9,  -7,  -5,  -4,  -2,  0,   -6,  -12, -18, -24,
    -30, -35, -41, -46, -51, -56, -61, -66, -70, -74, -78, -81, -85, -87, -90,
    -92, -94, -95, -97, -97, -98, -98, -97, -97, -96, -94, -92, -90, -88, -85,
    -82, -78, -74, -70, -66, -62, -57, -52, -47, -41, -36, -30, -24, -18, -12,
    -6,  0,   6,   12,  18,  23,  29,  35,  40,  46,  51,  56,  61,  66,  70,
    74,  78,  81,  84,  87,  90,  92,  94,  95,  97,  97,  98,  98,  97,  97,
    96,  94,  92,  90,  88,  85,  82,  78,  75,  71,  66,  62,  57,  52,  47,
    42,  36,  30,  25,  19,  13,  7,   1,   -5,  -11, -17, -23, -29, -35, -40,
    -46, -51, -56, -61, -65, -70, -74, -77, -81, -84, -87, -90, -92, -94, -95,
    -96, -97, -98, -98, -97, -97, -96, -94, -93, -90, -88, -85, -82, -79, -75,
    -71, -67, -62, -57, -52, -47, -42, -36, -31, -25, -19, -13, -7,  -1,  5,
    11,  17,  23,  29,  34,  40,  45,  50,  55,  60,  65,  69,  73,  77,  81,
    84,  87,  90,  92,  94,  95,  96,  97,  98,  98,  97,  97,  96,  94,  93,
    91,  88,  85,  82,  79,  75,  71,  67,  62,  58,  53,  48,  42,  37,  31,
    25,  19,  14,  8,   2,   -4,  -10, -16, -22, -28, -34, -39, -45, -50, -55,
    -60, -65, -69, -73, -77, -81, -84, -87, -89, -92, -94, -95, -96, -97, -98,
    -98, -98, -97, -96, -95, -93, -91, -88, -86, -82, -79, -75, -71, -67, -63,
    -58, -53, -48, -43, -37, -31, -26, -20, -14, -8,  0
};

static const int8_t effect_4[] = {
    0,   0,   0,   0,   6,   12,  19,  25,   31,   36,   42,   48,   53,   58,
    63,  68,  72,  77,  80,  84,  87,  90,   93,   95,   97,   99,   100,  100,
    101, 101, 100, 100, 99,  97,  95,  93,   90,   87,   84,   81,   77,   73,
    68,  63,  59,  53,  48,  42,  37,  31,   25,   19,   13,   7,    0,    -6,
    -12, -18, -24, -30, -36, -42, -47, -53,  -58,  -63,  -68,  -72,  -76,  -80,
    -84, -87, -90, -93, -95, -97, -98, -100, -100, -101, -101, -100, -100, -99,
    -97, -95, -93, -91, -88, -84, -81, -77,  -73,  -68,  -64,  -59,  -54,  -48,
    -43, -37, -31, -25, -19, -13, -7,  -1,   5,    12,   18,   24,   30,   36,
    41,  47,  52,  58,  63,  67,  72,  76,   80,   84,   87,   90,   93,   95,
    97,  98,  100, 100, 101, 101, 101, 100,  99,   97,   95,   93,   91,   88,
    85,  81,  77,  73,  69,  64,  59,  54,   49,   43,   38,   32,   26,   20,
    14,  7,   0,   5,   11,  16,  21,  26,   32,   36,   41,   46,   50,   55,
    59,  63,  66,  70,  73,  76,  78,  80,   82,   84,   85,   86,   87,   87,
    87,  87,  86,  85,  84,  82,  81,  78,   76,   73,   70,   66,   63,   59,
    55,  51,  46,  42,  37,  32,  27,  22,   16,   11,   6,    0,    -5,   -10,
    -16, -21, -26, -31, -36, -41, -46, -50,  -54,  -59,  -62,  -66,  -69,  -73,
    -75, -78, -80, -82, -84, -85, -86, -87,  -87,  -87,  -87,  -86,  -85,  -84,
    -83, -81, -78, -76, -73, -70, -67, -63,  -59,  -55,  -51,  -47,  -42,  -37,
    -32, -27, -22, -17, -11, -6,  -1,  5,    10,   15,   21,   26,   31,   36,
    41,  45,  50,  54,  58,  62,  66,  69,   72,   75,   78,   80,   82,   84,
    85,  86,  87,  87,  87,  87,  86,  86,   84,   83,   81,   79,   76,   73,
    70,  67,  63,  60,  56,  51,  47,  42,   37,   32,   27,   22,   17,   12,
    6,   0,   0,   0,   0
};

static const struct effect_stream effects[] = {
    {
        /* CLICK */
        .effect_id = 0,
        .data = effect_0,
        .length = ARRAY_SIZE(effect_0),
        .play_rate_hz = 24000,
    },

    {
        /* DOUBLE_CLICK */
        .effect_id = 1,
        .data = effect_1,
        .length = ARRAY_SIZE(effect_1),
        .play_rate_hz = 24000,
    },

    {
        /* TICK */
        .effect_id = 2,
        .data = effect_2,
        .length = ARRAY_SIZE(effect_2),
        .play_rate_hz = 24000,
    },

    {
        /* THUD */
        .effect_id = 3,
        .data = effect_3,
        .length = ARRAY_SIZE(effect_3),
        .play_rate_hz = 24000,
    },

    {
        /* POP */
        .effect_id = 4,
        .data = effect_4,
        .length = ARRAY_SIZE(effect_4),
        .play_rate_hz = 24000,
    },

    {
        /* HEAVY_CLICK */
        .effect_id = 5,
        .data = effect_3,
        .length = ARRAY_SIZE(effect_3),
        .play_rate_hz = 24000,
    },
};
