#ifndef _gc2375_altek_GOLDEN_OTP_H_
#define _gc2375_altek_GOLDEN_OTP_H_

#include "otp_common.h"

static awb_target_packet_t golden_awb[AWB_MAX_LIGHT] = {
    {
        .R = 0x16e,
        .G = 0x2c1,
        .B = 0x1c4,
        .rg_ratio = 0x102,
        .bg_ratio = 0x11e,
        .GrGb_ratio = 0x200,
    },
};

static cmr_u8 golden_lsc[] = {
    0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x32, 0x60, 0x3f, 0x3f, 0x3f, 0x3f,
    0x78, 0x24, 0x3f, 0x3f, 0x16, 0x3f, 0x3f, 0x68, 0x20, 0x29, 0x3f, 0x16,
    0x62, 0x3f, 0x3f, 0x24, 0x3f, 0x49, 0x3f, 0x22, 0x3f, 0x5c, 0x33, 0x70,
    0x0e, 0x3f, 0x53, 0x0f, 0x59, 0x41, 0x3f, 0x3f, 0x46, 0x53, 0x3f, 0x3f,
    0x29, 0x3f, 0x49, 0x39, 0x3f, 0x3f, 0x68, 0x1f, 0x3f, 0x07, 0x3f, 0x51,
    0x74, 0x5c, 0x1d, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x23, 0x3f, 0x3f,
    0x3f, 0x12, 0x3f, 0x3f, 0x34, 0x3f, 0x4e, 0x13, 0x34, 0x3f, 0x3f, 0x36,
    0x3f, 0x0b, 0x3f, 0x3f, 0x3f, 0x58, 0x23, 0x1b, 0x3f, 0x3f, 0x3f, 0x70,
    0x3f, 0x1a, 0x3f, 0x46, 0x3f, 0x3f, 0x68, 0x3f, 0x1a, 0x18, 0x47, 0x3f,
    0xd1, 0x82, 0x3f, 0x23, 0x3f, 0x3f, 0x3f, 0x62, 0x3f, 0x50, 0x37, 0x3f,
    0x0f, 0x3f, 0x43, 0x3f, 0x3f, 0x2b, 0x3f, 0x3f, 0x3a, 0x22, 0x3f, 0x3f,
    0x1d, 0x3f, 0xc6, 0x96, 0x61, 0x60, 0x5c, 0x17, 0x3f, 0x45, 0x76, 0x3f,
    0x60, 0x3f, 0x19, 0x3f, 0x46, 0x3f, 0x3f, 0x3f, 0x3f, 0x23, 0x3f, 0x3f,
    0x3f, 0x3f, 0x3f, 0x0c, 0x3a, 0x3f, 0x4d, 0x3f, 0x52, 0x3f, 0x24, 0x25,
    0x60, 0x08, 0x3f, 0x21, 0x6d, 0x3f, 0x18, 0xc8, 0x85, 0x5d, 0x71, 0x54,
    0x3f, 0x14, 0x48, 0x45, 0x5e, 0x11, 0x5d, 0x18, 0x19, 0x3f, 0x46, 0x3f,
    0x61, 0x3f, 0x54, 0x25, 0x65, 0x0a, 0x3f, 0x42, 0x3f, 0x74, 0x33, 0x26,
    0x3f, 0x77, 0x3f, 0x3f, 0x3f, 0x1f, 0x11, 0x3f, 0x3f, 0x3f, 0x5c, 0x40,
    0x15, 0x3f, 0x3f, 0x32, 0x3f, 0x4b, 0x40, 0x13, 0x05, 0x3f, 0x55, 0x3f,
    0x5c, 0x64, 0x19, 0x11, 0x07, 0x3f, 0xc1, 0x8d, 0x3f, 0x27, 0x30, 0x3f,
    0x35, 0x43, 0x3f, 0x3f, 0x2a, 0x3f, 0x3f, 0x20, 0x3f, 0x78, 0x3f, 0x1a,
    0x04, 0x46, 0x5c, 0x3f, 0x4f, 0x74, 0x12, 0x66, 0x3f, 0x14, 0x3f, 0x46,
    0x3f, 0x12, 0x01, 0x45, 0x5c, 0x51, 0x5f, 0x5c, 0x1a, 0x76, 0x47, 0x21,
    0x22, 0x3f, 0x04, 0x2b, 0x4c, 0x0c, 0x03, 0x23, 0x3f, 0x54, 0x25, 0x4d,
    0x3f, 0x3f, 0x3f, 0x67, 0x24, 0x17, 0x37, 0x05, 0x2f, 0x61, 0x45, 0x3f,
    0x10, 0x1d, 0x3f, 0x0b, 0x3f, 0x45, 0x10, 0x13, 0x30, 0x45, 0x69, 0x3f,
    0x64, 0x3f, 0x1c, 0x45, 0x48, 0x56, 0x3f, 0x3f, 0x50, 0x30, 0x3f, 0x0b,
    0x3f, 0x62, 0x3f, 0x3f, 0x20, 0x38, 0x47, 0x3f, 0x3f, 0x5a, 0x70, 0x14,
    0x3f, 0x44, 0x0e, 0x01, 0x41, 0x00, 0x10, 0x14, 0x04, 0x0f, 0x51, 0x4a,
    0x5c, 0x14, 0x3f, 0x3f, 0x3f, 0x61, 0x71, 0x3f, 0x20, 0x42, 0x3f, 0x3f,
    0x3f, 0x3f, 0x3f, 0x2f, 0x64, 0x0a, 0x50, 0x72, 0x3f, 0x3f, 0x1c, 0x6c,
    0x3f, 0x6c, 0x21, 0x52, 0x3f, 0x12, 0x3a, 0x04, 0x05, 0x3f, 0x40, 0x6c,
    0x10, 0x44, 0x3f, 0x2c, 0x11, 0x52, 0x5c, 0x16, 0x44, 0x3f, 0x3f, 0x3f,
    0x3f, 0x34, 0x25, 0x3f, 0x3f, 0x00, 0x3f, 0x3f, 0x20, 0x2a, 0x64, 0x49,
    0x16, 0x42, 0x76, 0x34, 0x1a, 0xdb, 0x85, 0x52, 0x21, 0x4d, 0x3f, 0x11,
    0x34, 0x44, 0x0b, 0x3f, 0x43, 0x3f, 0x11, 0x3f, 0x3f, 0x55, 0x3f, 0x5d,
    0x18, 0x1a, 0x66, 0x07, 0x1a, 0x62, 0x3f, 0x3f, 0x2a, 0x34, 0x3f, 0x22,
    0x23, 0x3f, 0x3f, 0x26, 0x3f, 0x3f, 0x3f, 0x3f, 0x6d, 0x3f, 0x18, 0x3f,
    0x45, 0x48, 0x3f, 0x4c, 0x5c, 0x12, 0x3f, 0x3f, 0x27, 0x71, 0x4d, 0x3f,
    0x14, 0x3f, 0xc5, 0x8b, 0x01, 0x6f, 0x04, 0x1f, 0x3f, 0x48, 0x70, 0x72,
    0x3f, 0x3f, 0x32, 0x34, 0x4d, 0x3f, 0x62, 0x3f, 0x2c, 0x24, 0x1e, 0x3f,
    0xd2, 0x81, 0x69, 0x10, 0x18, 0x3f, 0x05, 0x4e, 0x3f, 0x50, 0x00, 0x14,
    0x13, 0x05, 0x52, 0x3f, 0x59, 0x50, 0x18, 0x3f, 0x3f, 0xd8, 0x81, 0x3f,
    0x3f, 0x24, 0x2a, 0x3f, 0x3f, 0x52, 0x3f, 0x3f, 0x37, 0x3f, 0x4c, 0x3f,
    0x32, 0x3f, 0x3f, 0x22, 0x3f, 0x3f, 0xc8, 0xb1, 0x68, 0x58, 0x18, 0x3f,
    0x3f, 0x64, 0x71, 0x58, 0x6c, 0x16, 0x3f, 0x05, 0x3f, 0x3f, 0x69, 0x3f,
    0x1c, 0x3f, 0x07, 0x2f, 0x3f, 0x3f, 0x14, 0x2b, 0x67, 0x3f, 0x3f, 0x33,
    0x3f, 0x08, 0x35, 0x3f, 0x4b, 0x3f, 0x12, 0x3f, 0x3f, 0x21, 0xcf, 0x87,
    0xcd, 0xb1, 0x6b, 0x3f, 0x19, 0x3a, 0x46, 0x3f, 0x11, 0x64, 0x3f, 0x19,
    0x3f, 0x46, 0x3f, 0x3f, 0x7d, 0x48, 0x22, 0x5f, 0xc9, 0x94, 0x32, 0x3f,
    0x3f, 0x35, 0x04, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x32, 0x24, 0x0b, 0x3f,
    0xc2, 0x93, 0x38, 0x22, 0x3f, 0x3f, 0x3f, 0x21, 0x73, 0x0c, 0x1c, 0x3f,
    0x3f, 0x3f, 0x3f, 0x73, 0x50, 0x1e, 0x0e, 0x08, 0x28, 0x3f, 0x3f, 0x58,
    0x28, 0x3b, 0x0b, 0x32, 0x13, 0x3f, 0x24, 0x3f, 0x3f, 0x3f, 0xd5, 0x93,
    0xdf, 0x8c, 0x31, 0x02, 0x0b, 0x3f, 0x12, 0x3f, 0x4c, 0x23, 0x6a, 0x3f,
    0x05, 0x3f, 0x7e, 0x70, 0x1f, 0x3f, 0x3f, 0x08, 0x42, 0x3f, 0x3f, 0x23,
    0x78, 0xc9, 0x88, 0x62, 0x3f, 0x3f, 0x31, 0x19, 0x3f, 0x3f, 0x3f, 0x09,
    0x3f, 0x46, 0x3f, 0xcf, 0x92, 0x3f, 0x3f, 0x68, 0x2d, 0x56, 0x4a, 0x67,
    0xd2, 0x90, 0x3f, 0x22, 0x5a, 0x3f, 0x09, 0x62, 0x3f, 0x3f, 0x20, 0x5a,
    0x3f, 0x2b, 0x3f, 0x3f, 0x3f, 0x26, 0x68, 0x0a, 0xdb, 0xa2, 0xcd, 0xb8,
    0x39, 0x3f, 0x4f, 0x58, 0x04, 0x00, 0x35, 0x3f, 0x3f, 0x03, 0x3f, 0x50,
    0x32, 0x4c, 0x0b, 0x3f, 0x3f, 0x3f, 0x3f, 0x24, 0x3f, 0x48, 0x1e, 0x52,
    0x3f, 0x3f, 0x20, 0x46, 0x3f, 0x1f, 0x02, 0x3f, 0x3f, 0x24, 0xcb, 0x89,
    0x3f, 0x52, 0x3f, 0x2c, 0x33, 0x50, 0x0e, 0x3f, 0x03, 0x0e, 0x3f, 0x3f,
    0x3f, 0x0e, 0x37, 0xc3, 0xb6, 0x5c, 0x29, 0x3f, 0x3f, 0x3b, 0x22, 0x3f,
    0x3f, 0x1f, 0x3f, 0x47, 0x3f, 0x3f, 0x75, 0x3f, 0x1d, 0x3f, 0x07, 0x3f,
    0x3f, 0x3f, 0x3f, 0x23, 0x3f, 0xc9, 0x9e, 0x52, 0x3f, 0x54, 0x34, 0x3f,
    0x3f, 0x02, 0x44, 0x3f, 0x7c, 0x35, 0x3f, 0x4b, 0x3f, 0x3f, 0x3f, 0x30,
    0x23, 0x1e, 0x3f, 0x3f, 0x3f, 0x71, 0x30, 0x1b, 0x3f, 0x3f, 0x3f, 0x3f,
    0x69, 0x30, 0x1b, 0x26, 0x3f, 0x3f, 0x61, 0x3f, 0x3f, 0x23, 0x3f, 0x49,
    0x3f, 0xd2, 0xbe, 0x74, 0x36, 0x4d, 0x0f, 0x3f, 0x3f, 0x3f, 0x40, 0x2b,
    0x3f, 0x09, 0x37, 0x3f, 0x3f, 0x3f, 0x1d, 0x3f, 0x06, 0x3f, 0x3f, 0x61,
    0x3f, 0x17, 0xd4, 0x85, 0x79, 0x51, 0x61, 0x3f, 0x19, 0x3f, 0x06, 0x3f,
    0x01, 0x3f, 0x3f, 0x23, 0x3f, 0x49, 0x3f, 0x3f, 0xc9, 0x98, 0x39, 0x43,
    0x3f, 0x3f, 0xe2, 0xa2, 0xac, 0x24, 0x4d, 0x3f, 0x3f, 0x21, 0x6d, 0x04,
    0x19, 0x3f, 0x05, 0x60, 0x3f, 0x54, 0x3f, 0x14, 0x4f, 0x3f, 0x60, 0x71,
    0x5d, 0x34, 0x19, 0x3f, 0x3f, 0xe4, 0x81, 0x86, 0x64, 0x25, 0x5d, 0x0a,
    0x3f, 0x3f, 0x3f, 0x50, 0x32, 0x3f, 0x0a, 0x6e, 0xd2, 0x8b, 0x5c, 0x1f,
    0x09, 0x3f, 0x3f, 0x3f, 0x5c, 0x68, 0x15, 0x05, 0x45, 0x34, 0x41, 0x4c,
    0x50, 0x13, 0x0d, 0x3f, 0x57, 0x3f, 0x5c, 0x7c, 0x19, 0x16, 0x3f, 0x3f,
    0x21, 0x3f, 0x3f, 0x27, 0x29, 0x3f, 0x31, 0x3f, 0x3f, 0x2c, 0x2a, 0x62,
    0x49, 0x19, 0x3f, 0x77, 0x3f, 0x1a, 0x00, 0x3f, 0x5c, 0x3f, 0x4f, 0x3f,
    0x12, 0x6a, 0x3f, 0x15, 0x3f, 0x46, 0x3f, 0x12, 0x04, 0x3f, 0x5d, 0x3f,
    0x5f, 0x70, 0x1a, 0x78, 0x47, 0x21, 0x3f, 0x3f, 0x3f, 0x2a, 0x3e, 0x0c,
    0x3f, 0x3f, 0x3f, 0x3f, 0x24, 0x2f, 0x08, 0x3f, 0x41, 0x67, 0x0c, 0x17,
    0x35, 0x05, 0x30, 0x3f, 0x45, 0x3f, 0x10, 0x1c, 0x3f, 0x0b, 0x3f, 0x45,
    0x10, 0x13, 0x2f, 0x45, 0x69, 0x31, 0x65, 0x3f, 0x1c, 0x49, 0x3f, 0x55,
    0x3f, 0x3f, 0x3f, 0x2f, 0x3f, 0x0b, 0x3f, 0x32, 0x3f, 0x50, 0x20, 0x28,
    0x07, 0x3f, 0x3f, 0x5a, 0x6c, 0x14, 0x3f, 0x44, 0x0f, 0x11, 0x41, 0x00,
    0x10, 0x16, 0x04, 0x10, 0x51, 0x4a, 0x54, 0x14, 0x3f, 0x45, 0x3f, 0x3f,
    0x71, 0x3f, 0x20, 0x3d, 0x49, 0x3f, 0x32, 0x3f, 0x3f, 0x2e, 0x38, 0x0a,
    0x47, 0xc2, 0x81, 0x3f, 0x1c, 0x63, 0x3f, 0x6c, 0x51, 0x52, 0x3f, 0x12,
    0x43, 0x3f, 0x06, 0x3f, 0x40, 0x7c, 0x10, 0x49, 0x3f, 0x2c, 0x31, 0x52,
    0x58, 0x16, 0x45, 0x3f, 0x3f, 0xd1, 0x83, 0x20, 0x25, 0x7c, 0x3f, 0x3f,
    0x42, 0x3f, 0x3f, 0x29, 0x3f, 0x09, 0x11, 0x3f, 0x75, 0x3c, 0x1a, 0x3f,
    0x3f, 0x54, 0x3f, 0x4d, 0x3f, 0x11, 0x41, 0x3f, 0x0c, 0x51, 0x44, 0x3f,
    0x11, 0x3f, 0x3f, 0x56, 0x11, 0x5e, 0x20, 0x1a, 0x65, 0x47, 0x1a, 0x12,
    0x3f, 0x6c, 0x2a, 0x1f, 0x3f, 0x15, 0x63, 0x3f, 0x1c, 0x26, 0x3f, 0x48,
    0x3f, 0x3f, 0x6d, 0x3f, 0x18, 0x3f, 0x45, 0x4c, 0x3f, 0x4d, 0x3f, 0x12,
    0x3f, 0x04, 0x29, 0x3f, 0x4d, 0x3f, 0x14, 0x3f, 0x45, 0x3f, 0x01, 0x6f,
    0x08, 0x1f, 0x3f, 0x48, 0x6e, 0x3f, 0x3f, 0x24, 0x32, 0x3f, 0x4c, 0x3f,
    0x72, 0x3f, 0x3f, 0x23, 0x17, 0x3f, 0x3f, 0x3f, 0x69, 0x3c, 0x18, 0x3f,
    0x3f, 0x51, 0x51, 0x51, 0x14, 0x14, 0x1a, 0x3f, 0x53, 0x71, 0x5a, 0x68,
    0x18, 0x3f, 0x46, 0x3f, 0x41, 0x3f, 0x64, 0x24, 0x1d, 0x4a, 0x3f, 0x3f,
    0x3f, 0x10, 0x37, 0x0a, 0x4c, 0x3f, 0x3f, 0x3f, 0x5c, 0x22, 0x3f, 0x07,
    0xca, 0xa1, 0x69, 0x3f, 0x18, 0x3f, 0x45, 0x68, 0x11, 0x59, 0x3f, 0x16,
    0x3f, 0x05, 0x3f, 0x21, 0x6a, 0x3f, 0x1c, 0x3f, 0x3f, 0x2e, 0xc2, 0x99,
    0x3f, 0x2a, 0x47, 0x3f, 0x7d, 0x63, 0x3f, 0x20, 0x34, 0x5f, 0x0b, 0x3f,
    0x3f, 0x3f, 0x3f, 0x21, 0x3f, 0x3f, 0x3f, 0x3f, 0x6c, 0x3f, 0x19, 0x49,
    0xc6, 0x8e, 0x3f, 0x64, 0x3f, 0x19, 0x3f, 0x46, 0x3f, 0x3f, 0x7d, 0x40,
    0x22, 0x59, 0x49, 0x3f, 0x3f, 0x3f, 0x18, 0x35, 0x3f, 0x0e, 0xd8, 0x93,
    0x3f, 0x3f, 0x31, 0x06, 0x3f, 0x7d, 0x3f, 0x3f, 0x58, 0x22, 0x06, 0x48,
    0x3f, 0x41, 0x74, 0x58, 0x1c, 0x02, 0x07, 0x3f, 0x51, 0x74, 0x78, 0x1e,
    0x10, 0x3f, 0x28, 0x3f, 0x3f, 0x5c, 0x28, 0x2c, 0x0b, 0x2b, 0x13, 0x3f,
    0x3f, 0x3d, 0x3f, 0xd0, 0xbf, 0x73, 0x3f, 0x3f, 0x30, 0xf4, 0x8a, 0x84,
    0x82, 0x3f, 0x3f, 0x23, 0x78, 0x3f, 0x0a, 0x3f, 0x7f, 0x3f, 0x1f, 0x3f,
    0x47, 0x0a, 0x22, 0x3f, 0x3f, 0x23, 0x76, 0x3f, 0x3f, 0x3f, 0x3f, 0x7c,
    0x31, 0x3f, 0x3f, 0x3f, 0x73, 0x05, 0x01, 0x46, 0x2d, 0x4f, 0x3f, 0x23,
    0x3f, 0x20, 0x2d, 0x58, 0x4a, 0x68, 0x12, 0x3f, 0x3f, 0x22, 0x67, 0x3f,
    0x0d, 0x72, 0x3f, 0x3f, 0x20, 0x67, 0x48, 0x2e, 0x62, 0x3f, 0x3f, 0x26,
    0x67, 0x3f, 0x3f, 0x22, 0x3f, 0x3f, 0x38, 0x6d, 0x3f, 0x47, 0x04, 0x00,
    0x2c, 0x51, 0x3f, 0x53, 0x3f, 0x3f, 0x31, 0x33, 0xcb, 0x92, 0x3f, 0x3f,
    0x4c, 0x24, 0x3f, 0x48, 0x17, 0x3f, 0x3f, 0x74, 0x20, 0x2f, 0x08, 0x1a,
    0xc2, 0x8b, 0x3f, 0x24, 0x3f, 0x3f, 0x3f, 0xd2, 0xb5, 0x3f, 0x32, 0x4a,
    0x4e, 0x3f, 0x23, 0x0e, 0x3f, 0x3f, 0x3f, 0x3f, 0x36, 0x53, 0x3f, 0x24,
    0x29, 0x7f, 0x3f, 0x34, 0x62, 0x3f, 0x58, 0x1f, 0x3f, 0x3f, 0xd5, 0xb1,
    0x74, 0x74, 0x1d, 0x3f, 0x07, 0x3f, 0xe1, 0x85, 0xb8, 0x23, 0x3f, 0xc9,
    0x9a, 0x3f, 0x3f, 0x2c, 0x34, 0x3f, 0x3f, 0x04, 0x3f, 0x3f, 0x3f, 0x35,
    0x3f, 0xcb, 0x9a, 0x3f, 0x3f, 0x3f, 0x22, 0x0c, 0x3f, 0x3f, 0x61, 0x70,
    0x3f, 0x1a, 0x3f, 0x06, 0x3f, 0x3f, 0x68, 0x08, 0x1b, 0x19, 0x47, 0xe4,
    0x81, 0x82, 0x64, 0x23, 0x3f, 0x09, 0x3f, 0x3f, 0x3f, 0x3f, 0x36, 0x59,
    0x0f, 0x3f, 0x33, 0x3f, 0x5c, 0x2b, 0x3f, 0x3f, 0x34, 0xc2, 0x80, 0x68,
    0x1d, 0xc7, 0x86, 0x3f, 0x51, 0x60, 0x5c, 0x17, 0x3f, 0x3f, 0x76, 0x3f,
    0x60, 0x3f, 0x19, 0xdd, 0x86, 0xdd, 0xb1, 0x3f, 0x3f, 0x23, 0x3f, 0x3f,
    0x3f, 0x62, 0x3f, 0x3f, 0x39, 0x61, 0x4d, 0xe5, 0x82, 0xa3, 0x3f, 0x24,
    0x4c, 0x3f, 0x3f, 0x71, 0x6c, 0x3f, 0x18, 0xc5, 0x85, 0x5c, 0x41, 0x54,
    0x3f, 0x14, 0x49, 0x3f, 0x5f, 0x21, 0x5d, 0x14, 0x19, 0x3f, 0x06, 0x3f,
    0x41, 0x3f, 0x5c, 0x25, 0x5f, 0x3f, 0x3f, 0x32, 0x3f, 0x3f, 0x32, 0x06,
    0x3f, 0x71, 0x42, 0x3f, 0x64, 0x1f, 0x07, 0xc7, 0x94, 0x21, 0x5c, 0x3c,
    0x15, 0x3f, 0x3f, 0x32, 0x3f, 0x4b, 0x40, 0x13, 0x0a, 0x3f, 0x57, 0x3f,
    0x5c, 0x78, 0x19, 0x14, 0x07, 0x3f, 0x21, 0x3f, 0x3f, 0x27, 0x2f, 0x3f,
    0x37, 0x3f, 0xc3, 0x80, 0x2a, 0x70, 0x49, 0x1c, 0x12, 0x78, 0x3f, 0x1a,
    0x3f, 0x3f, 0x5a, 0x61, 0x4f, 0x74, 0x12, 0x65, 0x3f, 0x14, 0x3f, 0x46,
    0x3f, 0x12, 0x06, 0x3f, 0x5d, 0x3f, 0x5f, 0x7c, 0x1a, 0x3f, 0x47, 0x23,
    0x62, 0x3f, 0x20, 0x2b, 0x53, 0x0c, 0x3f, 0x02, 0x3f, 0x00, 0x25, 0x3b,
    0x3f, 0x3f, 0x71, 0x67, 0x08, 0x17, 0x31, 0x3f, 0x2e, 0x71, 0x45, 0x3f,
    0x10, 0x1b, 0x3f, 0x0b, 0x21, 0x46, 0x24, 0x13, 0x34, 0x3f, 0x6a, 0x71,
    0x65, 0x3f, 0x1c, 0x4f, 0x3f, 0x58, 0x3f, 0x3f, 0x24, 0x30, 0x3f, 0xcb,
    0x91, 0x72, 0x3f, 0x3f, 0x20, 0x34, 0x07, 0x3f, 0x3f, 0x5a, 0x6c, 0x14,
    0x3f, 0x3f, 0x0e, 0x21, 0x41, 0x00, 0x10, 0x18, 0x04, 0x11, 0x3f, 0x4a,
    0x74, 0x14, 0x3f, 0x05, 0x3f, 0x01, 0x72, 0x3f, 0x20, 0x47, 0x09, 0x3f,
    0x12, 0x3f, 0x3c, 0x2f, 0x57, 0x3f, 0x4c, 0xd2, 0x82, 0x3f, 0x1c, 0x6b,
    0x3f, 0x6d, 0x51, 0x52, 0x3f, 0x12, 0x42, 0x3f, 0x06, 0x3f, 0x40, 0x3f,
    0x10, 0x4f, 0x3f, 0x2e, 0x3f, 0x52, 0x3f, 0x16, 0x50, 0x46, 0xce, 0xa1,
    0x3f, 0x64, 0x25, 0x3f, 0x3f, 0x00, 0x13, 0x3f, 0x08, 0x2a, 0x57, 0x3f,
    0x15, 0x3f, 0x76, 0x5c, 0x1a, 0x3f, 0x3f, 0x54, 0x3f, 0x4d, 0x3f, 0x11,
    0x40, 0x04, 0x0d, 0x3f, 0x44, 0x10, 0x12, 0x3f, 0x04, 0x59, 0x3f, 0x5e,
    0x5c, 0x1a, 0x75, 0x3f, 0x1e, 0x12, 0x3f, 0x3f, 0x2a, 0x40, 0x3f, 0x21,
    0xd3, 0xad, 0x3f, 0x26, 0x3f, 0x48, 0x3f, 0x3f, 0x6e, 0x3f, 0x18, 0x3f,
    0x05, 0x4c, 0x3f, 0x4d, 0x3f, 0x12, 0x3f, 0x3f, 0x2a, 0x71, 0x4e, 0x10,
    0x15, 0x3f, 0x05, 0x3f, 0x3f, 0x6f, 0x50, 0x1f, 0x3f, 0x3f, 0x72, 0x42,
    0x3f, 0x3f, 0x32, 0x2f, 0x4d, 0x3f, 0x42, 0x3f, 0x4c, 0x24, 0x29, 0x3f,
    0x3f, 0x41, 0x6a, 0x50, 0x18, 0x3f, 0x45, 0x52, 0x71, 0x51, 0x2c, 0x14,
    0x1e, 0x05, 0x56, 0x01, 0x5b, 0x3f, 0x18, 0x3f, 0x06, 0x3f, 0x51, 0x3f,
    0x3f, 0x24, 0x3b, 0x4a, 0x3f, 0x3f, 0x3f, 0x3f, 0x37, 0x36, 0x3f, 0x3f,
    0x22, 0x3f, 0x3f, 0x22, 0x3f, 0x3f, 0x3f, 0x3f, 0x69, 0x3f, 0x18, 0xd6,
    0x85, 0x68, 0x61, 0x59, 0x3f, 0x16, 0x3f, 0x05, 0x3f, 0x3f, 0x6a, 0x18,
    0x1d, 0x3f, 0x07, 0x33, 0x62, 0x3f, 0x5c, 0x2b, 0x72, 0x3f, 0x3f, 0x3f,
    0x3f, 0x3f, 0x34, 0x3f, 0x0b, 0x3f, 0xd2, 0x94, 0x28, 0x22, 0x3f, 0x3f,
    0x3f, 0x01, 0x6d, 0x3f, 0x19, 0x4b, 0x06, 0x3f, 0x11, 0x65, 0x1c, 0x1a,
    0x3f, 0x3f, 0x3f, 0x3f, 0x7e, 0x3f, 0x22, 0x6d, 0xc9, 0x96, 0x12, 0x3f,
    0x3f, 0x35, 0x03, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x32, 0x22, 0x0b, 0x3f,
    0x32, 0x3f, 0x6c, 0x22, 0x0a, 0x48, 0x3f, 0x51, 0x74, 0x5c, 0x1c, 0x09,
    0x3f, 0x3f, 0x3f, 0x74, 0x3f, 0x1e, 0x1b, 0x3f, 0x2c, 0x3f, 0x3f, 0x3f,
    0x28, 0x43, 0x3f, 0x32, 0x3f, 0x3f, 0x3f, 0x3e, 0xc6, 0x90, 0x3f, 0x3f,
    0x3f, 0x3c, 0x31, 0x03, 0xcb, 0x86, 0xc2, 0x96, 0x3f, 0x23, 0x78, 0x3f,
    0x0a, 0x3f, 0x7f, 0x3f, 0x1f, 0x3f, 0x07, 0x0d, 0x72, 0x3f, 0x3f, 0x23,
    0x3f, 0x3f, 0x3f, 0xc2, 0xb1, 0x3f, 0x31, 0x0d, 0x0e, 0x3f, 0x63, 0x09,
    0x3f, 0x46, 0x60, 0xcf, 0x8b, 0x3f, 0x3f, 0x74, 0x2d, 0x5f, 0x0a, 0x6c,
    0x42, 0x3f, 0x3f, 0x22, 0x6b, 0x08, 0x0e, 0xd2, 0x82, 0x3f, 0x20, 0x6f,
    0x08, 0x30, 0x02, 0x3f, 0x08, 0x27, 0x7b, 0x4a, 0x3f, 0x02, 0x3f, 0x78,
    0x39, 0x3f, 0x3f, 0x5a, 0x04, 0x00, 0x60, 0xd0, 0xac, 0x3f, 0xd5, 0xb4,
    0x2f, 0x3f, 0x0a, 0x77, 0x3f, 0x3f, 0x18, 0x23, 0x67, 0x08, 0x08, 0x02,
    0x7f, 0x3f, 0x1f, 0x3f, 0x47, 0x07, 0x3f, 0x3f, 0x40, 0x23, 0x4d, 0x09,
    0x7c, 0x02, 0x3f, 0x60, 0x30, 0x3f, 0x0d, 0x3f, 0x63, 0x03, 0x61, 0x3c,
    0x3f, 0x3f, 0x06, 0x43, 0x3f, 0x3f, 0x26, 0x03, 0x09, 0x1a, 0x3f, 0x7e,
    0x20, 0x1e, 0x3d, 0x07, 0xc4, 0x81, 0x70, 0x54, 0x1c, 0x3e, 0x3f, 0x3f,
    0x11, 0x7f, 0x3f, 0x21, 0x0e, 0x49, 0x72, 0x3f, 0x3f, 0x08, 0x31, 0xc7,
    0x8d, 0x3f, 0x73, 0x3f, 0x3f, 0x32, 0x0b, 0x3f, 0x77, 0x3f, 0x3f, 0x40,
    0x21, 0x3f, 0x3f, 0x3f, 0x71, 0x6c, 0x04, 0x1a, 0x56, 0x46, 0x3f, 0x71,
    0x65, 0x08, 0x1a, 0x3f, 0x06, 0x3f, 0x3f, 0x7b, 0x3f, 0x21, 0x18, 0x49,
    0x3f, 0xc2, 0xb3, 0x60, 0x33, 0x3f, 0x4e, 0x5b, 0x63, 0x3f, 0x08, 0x29,
    0x38, 0x3f, 0x19, 0x3f, 0x7a, 0x2c, 0x1c, 0x3f, 0xc6, 0x89, 0x3f, 0x5d,
    0x3f, 0x16, 0x3f, 0x45, 0x6c, 0x3f, 0x5d, 0x3f, 0x18, 0x3f, 0x3f, 0x3f,
    0x11, 0x7c, 0x10, 0x22, 0x5e, 0xc9, 0x9b, 0xd2, 0xbe, 0x3f, 0x36, 0x3f,
    0xcc, 0xbf, 0x42, 0x3f, 0x3f, 0x22, 0x3f, 0x3f, 0x3f, 0x51, 0x68, 0x10,
    0x18, 0x3f, 0x45, 0x57, 0x21, 0x53, 0x3f, 0x14, 0x33, 0x3f, 0x57, 0x61,
    0x5a, 0x38, 0x18, 0x3f, 0x3f, 0xcd, 0xb1, 0x7f, 0x70, 0x23, 0x3f, 0x49,
    0x3f, 0x52, 0x3f, 0x4c, 0x30, 0x76, 0x3f, 0x52, 0x3f, 0x3f, 0x08, 0x1e,
    0x3f, 0xc6, 0x87, 0x01, 0x5a, 0x3f, 0x14, 0x3f, 0x44, 0x31, 0x61, 0x4b,
    0x14, 0x13, 0x3f, 0x44, 0x4f, 0x3f, 0x59, 0x6c, 0x18, 0xc5, 0x86, 0x3f,
    0x41, 0x3f, 0x3f, 0x25, 0x3f, 0x4a, 0x11, 0x43, 0x3f, 0x74, 0x28, 0x04,
    0x09, 0x05, 0x3f, 0x73, 0x3f, 0x19, 0x3f, 0x05, 0x55, 0x3f, 0x4e, 0x60,
    0x12, 0x64, 0x3f, 0x14, 0x61, 0x46, 0x6c, 0x12, 0x3f, 0x3f, 0x53, 0x31,
    0x5c, 0x5c, 0x19, 0x29, 0x3f, 0x07, 0x3f, 0x3f, 0x3f, 0x28, 0x3f, 0x0b,
    0xdc, 0x82, 0x3f, 0x3f, 0x23, 0x3f, 0x3f, 0x3f, 0x21, 0x64, 0x70, 0x16,
    0x1c, 0x3f, 0x2c, 0x51, 0x45, 0x3f, 0x10, 0x1b, 0x3f, 0x0a, 0x61, 0x45,
    0x3f, 0x12, 0x12, 0x3f, 0x5e, 0x51, 0x61, 0x3f, 0x1b, 0x3f, 0x3f, 0x3a,
    0x3f, 0x3f, 0x1c, 0x2e, 0x40, 0x4b, 0x74, 0x3f, 0x3f, 0x38, 0x1f, 0x3f,
    0x06, 0x3f, 0x3f, 0x58, 0x18, 0x14, 0x3f, 0x3f, 0x0e, 0x11, 0x41, 0x00,
    0x10, 0x13, 0x3f, 0x0e, 0x71, 0x49, 0x3f, 0x13, 0x6e, 0xc5, 0x83, 0x41,
    0x6d, 0x40, 0x1f, 0x3f, 0x3f, 0x7b, 0x3f, 0x3f, 0x04, 0x2d, 0x3f, 0x09,
    0x32, 0x42, 0x7d, 0x3f, 0x1b, 0x31, 0x06, 0x63, 0x3f, 0x50, 0x3f, 0x12,
    0x3d, 0x44, 0x06, 0x3f, 0x40, 0x78, 0x10, 0x44, 0x3f, 0x29, 0x3f, 0x50,
    0x3f, 0x15, 0x12, 0x06, 0x3f, 0x3f, 0x7e, 0x3f, 0x23, 0x05, 0x4a, 0xdf,
    0xb2, 0x3f, 0x3f, 0x27, 0x3f, 0x3f, 0x3f, 0x61, 0x71, 0x58, 0x19, 0x3f,
    0x3f, 0x4c, 0x3f, 0x4c, 0x3f, 0x11, 0x3d, 0x3f, 0x0c, 0x41, 0x44, 0x3f,
    0x11, 0xd7, 0x84, 0x4f, 0x61, 0x5b, 0x40, 0x19, 0x21, 0x3f, 0x05, 0x3f,
    0x3f, 0x3f, 0x28, 0x3f, 0x0b, 0x3f, 0x42, 0x3f, 0x3f, 0x24, 0x39, 0x3f,
    0x3f, 0x31, 0x6a, 0x10, 0x18, 0x3f, 0x05, 0x47, 0x3f, 0x4c, 0x70, 0x12,
    0x3f, 0x44, 0x27, 0x11, 0x4d, 0x3f, 0x14, 0x3f, 0x05, 0x3f, 0x31, 0x6b,
    0x3f, 0x1d, 0x5f, 0x3f, 0x55, 0x3f, 0x3f, 0x3f, 0x30, 0x7c, 0x0c, 0x3f,
    0x72, 0x3f, 0x3f, 0x22, 0x3f, 0x3f, 0x3f, 0x51, 0x66, 0x3f, 0x17, 0x7c,
    0x3f, 0x4b, 0x21, 0x50, 0x3f, 0x13, 0x09, 0x05, 0x4e, 0x61, 0x58, 0x3f,
    0x17, 0x70, 0x3f, 0x3f, 0x3f, 0x7d, 0x3f, 0x22, 0x3f, 0xc9, 0xbd, 0x3f,
    0x3f, 0x08, 0x35, 0x3f, 0x0b, 0x3f, 0x62, 0x3f, 0x3f, 0x20, 0x7f, 0x3f,
    0x3f, 0x3f, 0x65, 0x3f, 0x17, 0x3f, 0x3f, 0x60, 0x41, 0x57, 0x0c, 0x16,
    0x3f, 0x3f, 0x7f, 0x41, 0x66, 0x3f, 0x1b, 0x3f, 0x47, 0x14, 0x3f, 0x3f,
    0x3f, 0x28, 0x3f, 0x3f, 0x5a, 0x3f, 0x3f, 0x3f, 0x31, 0x3f, 0x3f, 0x6b,
    0x42, 0x3f, 0x7c, 0x20, 0x3f, 0x07, 0x3f, 0x61, 0x69, 0x1c, 0x19, 0x1a,
    0xc6, 0x81, 0x71, 0x61, 0x10, 0x19, 0x3f, 0x3f, 0x3f, 0x3f, 0x77, 0x3f,
    0x20, 0x3f, 0x08, 0x70, 0x3f, 0x3f, 0x3f, 0x32, 0x38, 0x4e, 0x3f, 0x3f,
    0x3f, 0x3f, 0x2f, 0x3f, 0x3f, 0x63, 0x3f, 0x3f, 0x3f, 0x20, 0x3f, 0x3f,
    0xd0, 0x81, 0x6f, 0x30, 0x1b, 0x3f, 0x3f, 0x3f, 0x3f, 0x6f, 0x28, 0x1d,
    0x3f, 0x47, 0x0d, 0x12, 0x3f, 0x40, 0x26, 0x3f, 0x4a, 0x3f, 0x12, 0x3f,
    0x10, 0x3b, 0x10, 0x50, 0x3f, 0x3f, 0x3f, 0x38, 0x2e, 0x5a, 0x3f, 0x62,
    0x02, 0x3f, 0x3f, 0x21, 0x18, 0x3f, 0x3f, 0x41, 0x7a, 0x44, 0x1e, 0x3f,
    0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x21, 0x3f, 0x08, 0x66, 0x3f, 0x3f, 0x3f,
    0x2e, 0x24, 0xcd, 0x99, 0x53, 0x3f, 0x3f, 0x43, 0x61, 0x3f, 0x51, 0x3f,
    0x3f, 0x3f, 0x2a, 0xd1, 0x89, 0x4b, 0x62, 0x3f, 0x4c, 0x21, 0x0b, 0x3f,
    0x3f, 0x3f, 0x7c, 0x78, 0x1f, 0x07, 0x08, 0x14, 0x42, 0x3f, 0x3f, 0x24,
    0xdc, 0x89, 0x3f, 0x3f, 0x3f, 0x3f, 0x35, 0x3f, 0x4e, 0x1f, 0x04, 0x00};

#endif
