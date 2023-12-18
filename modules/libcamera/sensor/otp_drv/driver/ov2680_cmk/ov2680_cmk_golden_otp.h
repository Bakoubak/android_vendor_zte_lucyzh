#ifndef _OV2680_CMK_GOLDEN_OTP_H_
#define _OV2680_CMK_GOLDEN_OTP_H_
#include "otp_common.h"

static awb_target_packet_t golden_awb[AWB_MAX_LIGHT] = {
    {
        .R = 0x261,
        .G = 0x33c,
        .B = 0x1fc //        .R = 0x0198, .G = 0x02d1, .B = 0x01eb,
    },
};
static cmr_u16 golden_lsc[] = {
    0x8e34, 0x2303, 0xf0a5, 0x8a24, 0x03c8, 0x7d22, 0x1f5c, 0xc81b, 0xc228,
    0x2897, 0xb92b, 0x6e0c, 0xc793, 0x2a18, 0x88fa, 0x01fe, 0xec74, 0x791a,
    0x9e06, 0x6c21, 0x1d74, 0x483f, 0xb259, 0xa8b0, 0x122f, 0x534b, 0x7e92,
    0x1b80, 0x860f, 0xb15f, 0xd853, 0x8014, 0x8a05, 0x7151, 0x211c, 0xc9cc,
    0xe2a2, 0x40a1, 0x2f22, 0x8647, 0x53d1, 0x12cc, 0xc474, 0x311c, 0x544b,
    0x4215, 0xde46, 0x8fa1, 0x26a4, 0x49b4, 0xc209, 0xa06c, 0xd016, 0x13c4,
    0x40c1, 0x1038, 0x044f, 0xb139, 0x005c, 0x791c, 0x4808, 0x99f2, 0x206c,
    0x46b7, 0xe165, 0xfc4b, 0x0810, 0x0004, 0x4421, 0x1340, 0x05b2, 0xe1b8,
    0x2085, 0xff24, 0x1a89, 0x7062, 0x1794, 0xc508, 0x611e, 0xc443, 0x8310,
    0x4484, 0x5f31, 0x1c84, 0x489b, 0x1253, 0x64ac, 0xaf24, 0xa447, 0x5b31,
    0x1478, 0x44de, 0xb133, 0xe051, 0x9516, 0xee86, 0x9371, 0x27ac, 0x8c16,
    0xe28f, 0x988b, 0xcf1e, 0x8dc6, 0x5e61, 0x177c, 0x8624, 0x31b0, 0xb079,
    0x4722, 0xc0ca, 0xe182, 0x2fa4, 0x8a37, 0x6241, 0x2083, 0x601e, 0xd507,
    0x7911, 0x2058, 0x48e2, 0xa283, 0xe0bd, 0xaf32, 0x1d8e, 0xaaa3, 0x25c4,
    0x889a, 0x51f7, 0xe87c, 0xf41e, 0x1dc7, 0x94a2, 0x2a08, 0x4c66, 0x0353,
    0x8d4e, 0x92d3, 0xa49a, 0x0922, 0xeac8, 0x7751, 0x1dd4, 0x079f, 0x5203,
    0x048b, 0x6727, 0x164b, 0xbb83, 0x27a4, 0xc87b, 0xd1e4, 0xd86e, 0x3f19,
    0x8e46, 0x6741, 0x1ba4, 0x0795, 0x6220, 0x709d, 0x6a2a, 0x330a, 0x78d2,
    0x1a60, 0x05de, 0x2158, 0x7852, 0x5614, 0x7785, 0x6981, 0x1e18, 0x88bc,
    0x9258, 0x8499, 0xe620, 0x7986, 0x5201, 0x1298, 0x4470, 0xf11b, 0x8449,
    0xdc14, 0xb4c5, 0x8001, 0x2254, 0xc930, 0x91f0, 0x0068, 0xbb16, 0x1204,
    0x40c1, 0x1038, 0x4441, 0x012e, 0x9c57, 0x9119, 0x08c7, 0x91a2, 0x1ee0,
    0x867b, 0xa15b, 0xdc4a, 0x0810, 0x0004, 0x4361, 0x1290, 0x4559, 0xc192,
    0xe876, 0x601f, 0xfd09, 0x6bb1, 0x16d0, 0x44ec, 0x411c, 0xbc43, 0x7110,
    0x37c4, 0x58e1, 0x19f0, 0x079a, 0x520b, 0x4ca1, 0x4d22, 0x9307, 0x5841,
    0x1408, 0x44cd, 0xa12f, 0xc04f, 0x1615, 0xbd06, 0x81a1, 0x22b0, 0xcb56,
    0x9265, 0xf483, 0x7f1c, 0x7ec6, 0x5b51, 0x16b0, 0x45de, 0xb194, 0xe46e,
    0xfe1e, 0x6ac8, 0xd322, 0x2c44, 0x097e, 0x621b, 0x8c7b, 0xfe1c, 0xbb86,
    0x7171, 0x1dc8, 0x07fb, 0x8239, 0x88a5, 0xc32c, 0xe50d, 0x9ec2, 0x233c,
    0xc811, 0xe1db, 0x2475, 0x6f1d, 0xf207, 0x8581, 0x253c, 0x0ade, 0x02ee,
    0x8d91, 0xe2de, 0x209c, 0x2323, 0xec88, 0x7781, 0x1db0, 0x878f, 0x41fb,
    0x6889, 0x3e26, 0x0a8b, 0xbef3, 0x283c, 0x889e, 0xf1eb, 0x086f, 0x401a,
    0x8cc6, 0x6661, 0x1b54, 0x877e, 0x9219, 0x0c9b, 0x9d2a, 0x3f4a, 0x7b02,
    0x1adc, 0xc5f3, 0x515a, 0x6852, 0x4f14, 0x7545, 0x68b1, 0x1dd4, 0xc8aa,
    0xd253, 0x409c, 0x0c21, 0x8187, 0x5361, 0x12c8, 0xc473, 0xa11a, 0x7449,
    0xdb14, 0xb385, 0x7f81, 0x2270, 0xc970, 0x41fd, 0x8c6b, 0xd216, 0x1504,
    0x4121, 0x1034, 0xc43f, 0x512e, 0xc457, 0x9a19, 0x0c87, 0x9602, 0x1fd0,
    0xc6a9, 0x2164, 0x104c, 0x0b11, 0x0004, 0x4351, 0x12a8, 0x8563, 0x5196,
    0x6478, 0xaa20, 0x0d09, 0x6ef2, 0x1778, 0x0506, 0x7120, 0xb843, 0x7210,
    0x3984, 0x5a01, 0x1a64, 0x87bf, 0x4217, 0x64a6, 0x8423, 0x9d47, 0x59f1,
    0x1440, 0x04d1, 0x912e, 0xec4f, 0x2f15, 0xc5c6, 0x84a1, 0x23b4, 0x0ba9,
    0x7277, 0x8486, 0x981d, 0x80c6, 0x5b41, 0x169c, 0xc5dc, 0x3196, 0x8070,
    0x351f, 0x7a89, 0xd7e2, 0x2d34, 0x89aa, 0x8222, 0xa47c, 0xf81c, 0xb986,
    0x7111, 0x1de4, 0xc817, 0x2243, 0x84a9, 0x092d, 0xf28e, 0xa102, 0x23b0,
    0x081e, 0x01dd, 0xe875, 0x651c, 0xf387, 0x8721, 0x25c0, 0x0b10, 0x02fc,
    0x4c2e, 0xd298, 0x708e, 0x9e20, 0xd647, 0x7381, 0x1d34, 0xc77c, 0x31f9,
    0x7489, 0x4726, 0x0d4b, 0xa963, 0x2430, 0x07c6, 0xd1c3, 0xdc68, 0x1818,
    0x87c6, 0x65f1, 0x1b4c, 0x4779, 0xe219, 0x189b, 0x692a, 0x0089, 0x6ed2,
    0x18a4, 0x4594, 0x914b, 0x5050, 0x5014, 0x7645, 0x68e1, 0x1dec, 0x88b3,
    0x7256, 0xb48a, 0x5d1d, 0x62c6, 0x4e41, 0x1204, 0x045f, 0x011a, 0x984a,
    0xe314, 0xb685, 0x8081, 0x2280, 0xc84a, 0xf1c6, 0xc860, 0x8914, 0x0ac4,
    0x4041, 0x1038, 0x0449, 0x4131, 0xf458, 0xa919, 0x0ec7, 0x83d2, 0x1c60,
    0x4606, 0xe149, 0x7847, 0x0010, 0x00c4, 0x4401, 0x12dc, 0xc572, 0x719b,
    0xb079, 0x9120, 0xd808, 0x64b1, 0x15a8, 0x84c1, 0x0116, 0xd443, 0x8110,
    0x3e04, 0x5b51, 0x1aa4, 0x47d8, 0xd21d, 0xd493, 0xd61f, 0x7f46, 0x5551,
    0x1394, 0xc4c4, 0x712f,

};

#endif
