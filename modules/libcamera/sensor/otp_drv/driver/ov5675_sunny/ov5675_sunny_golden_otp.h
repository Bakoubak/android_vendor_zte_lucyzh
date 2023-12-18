#ifndef _OV5675_SUNNY_GOLDEN_OTP_H_
#define _OV5675_SUNNY_GOLDEN_OTP_H_
#include "otp_common.h"

static awb_target_packet_t golden_awb[AWB_MAX_LIGHT] = {
    {
        .R = 0x0198, .G = 0x02d1, .B = 0x01eb,
    },
};
static cmr_u8 golden_lsc[] = {
    0x3f, 0xd0,0xbf, 0x3f,0x3f, 0x54,0x30, 0x3f,0x0a, 0x3f,0x3f, 0x3f,0x3f, 0x22,0x2a, 0x3f,0x3f,
    0x3f,0x7b, 0x64,0x1f, 0x33,0x08, 0x33,0x32, 0x3f,0x3f, 0x29,0x7a, 0x4b,0x2b, 0x33,0x3f, 0x18,0x40,
    0x3f,0x52, 0x3f,0x54, 0x3f,0x28, 0x36,0x2e, 0x3f,0xc0, 0xb2,0x3f, 0x3f,0x23, 0x15,0x08, 0xde,0x91,
    0x70,0x3f, 0x1a,0x3f, 0x46,0x3f, 0x11,0x71, 0x3f,0x1e, 0x72,0x3f, 0x53,0xd2, 0xa5,0x7c, 0x2e,0x3f,
    0x4c,0x3f, 0x3f,0x0f, 0x3f,0x44, 0x10,0x3f, 0x28,0x3f, 0x3f,0x3f, 0x27,0x3f, 0x48,0x3f, 0x11,0x70,
    0x3f,0x19, 0x04,0x3f, 0x6c,0x41, 0x5a,0x04, 0x17,0x0d, 0xc6,0xa5, 0x3f,0x75, 0x3f,0x20, 0x41,0xc9,
    0xa4,0xc2, 0xbf,0x3f, 0x35,0x3f, 0x4f,0x3f, 0x63,0x3f, 0x38,0x2f, 0x6c,0x0a, 0x43,0x02, 0x7e,0x3f,
    0x1b,0x28, 0x3f,0x68, 0x3f,0x54, 0x28,0x14, 0x3f,0x04, 0x46,0x71, 0x55,0x28, 0x17,0x74, 0x46,0x3f,
    0x01,0x3f, 0x3f,0x26, 0x1e,0x3f, 0x2b,0x23, 0x3f,0x2c, 0x3b,0x66, 0x3f,0x3f, 0xc2,0x9a, 0x20,0x21,
    0x28,0x47, 0x3f,0x3f, 0x58,0x6c, 0x14,0xd6, 0x84,0x27, 0x51,0x49, 0x3f,0x12, 0xda,0x84, 0x4f,0x31,
    0x5d,0x24, 0x1a,0x3f, 0x07,0x37, 0x22,0x3f, 0x04,0x30, 0x3f,0x3f, 0x7a,0x3f, 0x3f,0x3f, 0x2a,0x13,
    0x09,0x3f, 0x3f,0x69, 0x3f,0x16, 0x26,0x3f, 0x31,0x3f, 0x48,0x48, 0x11,0x4a, 0x04,0x17, 0x3f,0x48,
    0x78,0x13, 0x64,0x45, 0x3f,0x31, 0x70,0x00, 0x21,0x3f, 0x09,0xdc, 0x82,0x3f, 0x3f,0x35, 0x3f,0x4b,
    0x3f,0x62, 0x3f,0x5c, 0x1d,0x40, 0x06,0x5d, 0x3f,0x4e, 0x3c,0x12, 0x52,0x3f, 0x08,0x71, 0x41,0x3f,
    0x10,0x59, 0x04,0x2a, 0x01,0x52, 0x08,0x17, 0x3f,0x46, 0x3f,0x3f, 0x3f,0x4c, 0x2c,0xdb, 0x8c,0x44,
    0x3f,0x3f, 0x74,0x28, 0x3f,0x08, 0x3f,0x3f, 0x61,0x58, 0x15,0x3f, 0x04,0x15, 0x3f,0x42, 0x08,0x10,
    0x0f,0x3f, 0x06,0x11, 0x44,0x38, 0x12,0x02, 0x3f,0x67, 0x3f,0x67, 0x3f,0x1e, 0x32,0x3f, 0x3f,0x12,
    0xcb,0xb8, 0x33,0x3f, 0xcb,0x89, 0xc2,0x88, 0x3f,0x1c, 0x21,0x46, 0x55,0x21, 0x4d,0x6c, 0x11,0x29,
    0x04,0x00, 0x01,0x41, 0x3f,0x10, 0x45,0x3f, 0x24,0x61, 0x50,0x3f, 0x16,0x3f, 0x46,0x3f, 0x41,0x3f,
    0x3f,0x2b, 0x3f,0x0c, 0x3c,0x3f, 0x3f,0x6c, 0x29,0x3f, 0x3f,0x3f, 0x3f,0x64, 0x3f,0x15, 0x3f,0x3f,
    0x24,0x3f, 0x45,0x3f, 0x10,0x20, 0x3f,0x0d, 0x11,0x46, 0x3f,0x12, 0x2b,0x05, 0x74,0x71, 0x6b,0x3f,
    0x1f,0x72, 0x49,0x3f, 0x12,0x3f, 0x58,0x34, 0x0a,0x3f, 0x3f,0x22, 0x3f,0x1c, 0x1f,0x3f, 0x06,0x75,
    0x3f,0x53, 0x60,0x13, 0x3f,0x04, 0x19,0x3f, 0x45,0x3f, 0x11,0x3f, 0x44,0x3c, 0x61,0x57, 0x3f,0x18,
    0x11,0x3f, 0x16,0xc2, 0x9d,0x14, 0x2e,0x3c, 0x0d,0x5c, 0x3f,0x3f, 0x38,0x2d, 0x3f,0x49, 0x19,0x62,
    0x73,0x5c, 0x19,0x3f, 0x05,0x4d, 0x3f,0x4e, 0x3f,0x12, 0x3f,0x04, 0x2f,0x01, 0x4f,0x58, 0x15,0x3f,
    0xc5,0xaa, 0x3f,0x7a, 0x3f,0x23, 0x70,0x3f, 0x02,0x43, 0x3f,0x3f, 0x37,0x5f, 0x3f,0x00, 0x3f,0x3f,
    0x3f,0x24, 0x0c,0x3f, 0x3f,0x3f, 0x64,0x0c, 0x17,0x69, 0x05,0x4a, 0x3f,0x51, 0x3f,0x14, 0x78,0x3f,
    0x7a,0x61, 0x69,0x3f, 0x1d,0x74, 0x08,0x70, 0x3f,0x3f, 0x08,0x33, 0x7a,0x3f, 0x3f,0x3f, 0x3f,0x3f,
    0x33,0x3f, 0xcb,0x8e, 0x3f,0x3f, 0x04,0x20, 0x31,0xc7, 0xa5,0x3f, 0x62,0x3f, 0x17,0x3f, 0x3f,0x7c,
    0x3f,0x63, 0x14,0x1b, 0x3f,0x3f, 0x19,0xc2, 0x96,0x14, 0x2b,0x1a, 0x0c,0x65, 0x63,0x3f, 0x3f,0x3f,
    0xe1,0x8f, 0x81,0x3f, 0x3f,0x48, 0x2d,0x35, 0x3f,0x4b, 0x52,0x3f, 0x3f,0x1e, 0x3f,0x07, 0x3f,0x3f,
    0x6d,0x08, 0x1c,0x5a, 0x3f,0x3f, 0x71,0x3f, 0x54,0x26, 0x3f,0x3f, 0x3f,0x3f, 0x3f,0x10, 0x3b,0x6b,
    0x3f,0x78, 0x74,0x17, 0x3f,0x3d, 0x3f,0x0d, 0x19,0xe3, 0xb5,0xa4, 0x29,0x3f, 0x49,0x3e, 0x42,0x3f,
    0x08,0x21, 0x2f,0x48, 0x16,0x02, 0x3f,0x3f, 0x24,0x3f, 0x09,0x3f, 0x42,0x3f, 0x20,0x34, 0x56,0x4e,
    0x1e,0x3f, 0x4c,0x79, 0x56,0x3f, 0x3f,0x3f, 0x3f,0x3f, 0x3f,0x31, 0x6e,0x4b, 0x3f,0x12, 0x3f,0x3c,
    0x24,0x3f, 0x48,0x16, 0x52,0x3f, 0x3f,0x21, 0xc7,0x88, 0x54,0x02, 0x3f,0x3f, 0x2b,0x01, 0x3f,0x45,
    0x23,0x3f, 0x3f,0x42, 0x0d,0x15, 0x79,0x05, 0x00,0x3f, 0xd0,0xba, 0x3f,0x3f, 0x0c,0x30, 0x3f,0x3f,
    0x3f,0x3f, 0x3f,0x3f, 0x22,0x4b, 0x08,0x3f, 0x3f,0x7c, 0x3f,0x1f, 0x3a,0x3f, 0x31,0xc2, 0x98,0x28,
    0x29,0x41, 0x3f,0x13, 0x23,0xd9, 0xbc,0x3d, 0x3f,0x51, 0x3f,0x3f, 0x3f,0x3f, 0x35,0x11, 0x3f,0x3f,
    0x12,0x3f, 0x3f,0x23, 0x32,0x3f, 0x3f,0x3f, 0x72,0x20, 0x1b,0x3f, 0x3f,0x3f, 0x71,0x71, 0x3f,0x1e,
    0x5f,0x08, 0x4b,0x3f, 0x3f,0x34, 0x2d,0x3f, 0x3f,0x3f, 0x53,0x06, 0x3f,0x42, 0x06,0x3f, 0x20,0x3f,
    0x3f,0x3f, 0x27,0x3f, 0x48,0x3f, 0x21,0x72, 0x28,0x1a, 0x25,0x3f, 0x73,0x3f, 0x5b,0x4c, 0x17,0x18,
    0xc6,0xa4, 0x61,0x74, 0x40,0x20, 0x12,0x3f, 0x3f,0x32, 0x3f,0x3c, 0x34,0x0f, 0x4f,0x3f, 0x53,0x3f,
    0x3f,0x2e, 0x5f,0x4a, 0x46,0x12, 0x3f,0x30, 0x1c,0x49, 0x46,0x70, 0x3f,0x56, 0x3f,0x14, 0x12,0x3f,
    0x48,0x3f, 0x55,0x14, 0x17,0x65, 0x3f,0x3f, 0xd1,0x82, 0x3f,0x25, 0x3f,0x0a, 0x12,0x03, 0x3f,0x3c,
    0x39,0x4e, 0x4c,0x3f, 0x02,0x3f, 0x3f,0x21, 0x4f,0x3f, 0x3f,0x01, 0x5b,0x3f, 0x14,0x3f, 0x3f,0x2b,
    0x3f,0x49, 0x3f,0x12, 0x3f,0x04, 0x4d,0x71, 0x5c,0x3f, 0x19,0x71, 0x07,0x2a, 0x12,0x3f, 0x3f,0x2e,
    0x5e,0x3f, 0x65,0x3f, 0x3f,0x50, 0x2a,0x27, 0x49,0x3f, 0x3f,0x6c, 0x3f,0x17, 0x4c,0x3f, 0x37,0x3f,
    0x49,0x78, 0x11,0x4e, 0x04,0x17, 0x51,0x48, 0x50,0x13, 0x58,0x05, 0x7f,0x3f, 0x6e,0x3f, 0x20,0x3f,
    0x49,0x3f, 0x32,0x3f, 0x10,0x34, 0x3f,0x3f, 0x3f,0x3f, 0x3f,0x3f, 0x1d,0x74, 0x06,0x68, 0x3f,0x50,
    0x3f,0x12, 0x5f,0x04, 0x0a,0x3f, 0x41,0x3f, 0x10,0x4f, 0x44,0x27, 0x31,0x51, 0x3f,0x16, 0x3f,0x46,
    0x3f,0xd1, 0x92,0x30, 0x2b,0x3f, 0x4c,0x2e, 0x3f,0x3f, 0x68,0x28, 0x3f,0x08, 0x3f,0x3f, 0x64,0x00,
    0x16,0x3f, 0x3f,0x1a, 0x3f,0x43, 0x14,0x10, 0x0f,0x3f, 0x05,0x3f, 0x43,0x10, 0x12,0x3f, 0x44,0x65,
    0x11,0x67, 0x6c,0x1e, 0x08,0x09, 0x3f,0x3f, 0x3f,0x40, 0x32,0x67, 0x4b,0x3f, 0x3f,0x3f, 0x68,0x1d,
    0x4f,0x3f, 0x60,0x11, 0x4f,0x3f, 0x11,0x32, 0x04,0x00, 0x3f,0x40, 0x64,0x10, 0x3c,0x3f, 0x21,0x3f,
    0x4f,0x4c, 0x16,0x76, 0x46,0x3f, 0xe1,0x90, 0xa8,0x2a, 0x63,0x3f, 0x26,0x53, 0x3f,0x68, 0x29,0x3f,
    0x08,0x3f, 0x3f,0x67, 0x3f,0x16, 0x14,0x3f, 0x29,0x21, 0x46,0x3f, 0x10,0x1e, 0x3f,0x0b, 0x61,0x45,
    0x3f,0x12, 0x1c,0x3f, 0x6f,0x61, 0x6a,0x60, 0x1f,0x42, 0x49,0x3f, 0x62,0x3f, 0x3f,0x32, 0x3f,0xcb,
    0xac,0x3f, 0x3f,0x3f, 0x1f,0x3f, 0x06,0x7d, 0x51,0x55, 0x3f,0x13, 0x3f,0x44, 0x19,0x51, 0x45,0x3f,
    0x11,0x3f, 0x44,0x38, 0x41,0x56, 0x40,0x18, 0x3f,0x3f, 0x0e,0x3f, 0x3f,0x3f, 0x2c,0x3f, 0x0c,0x45,
    0x3f,0x3f, 0x3f,0x2c, 0x3f,0x49, 0x1d,0x62, 0x75,0x3f, 0x19,0xc3, 0x85,0x51, 0x3f,0x4f, 0x3f,0x12,
    0x3f,0x44, 0x2e,0x41, 0x4e,0x1c, 0x15,0xdc, 0x85,0x3f, 0x3f,0x78, 0x1c,0x23, 0x2c,0x0a, 0x3f,0x3f,
    0x3f,0x60, 0x36,0x33, 0x3f,0x3f, 0x62,0x3f, 0x3f,0x24, 0x1f,0x48, 0x3f,0x11, 0x66,0x58, 0x17,0x7c,
    0x45,0x4d, 0x21,0x52, 0x3f,0x14, 0x70,0x05, 0x78,0x01, 0x68,0x3c, 0x1d,0x4e, 0x3f,0x62, 0x62,0x3f,
    0x3f,0x31, 0x0f,0x0e, 0x3f,0x33, 0x3f,0x18, 0x33,0x66, 0xcb,0x8c, 0x3f,0x3f, 0x54,0x20, 0x47,0x07,
    0x3f,0x21, 0x64,0x3f, 0x17,0x3f, 0x45,0x7e, 0x3f,0x63, 0x3f,0x1a, 0x6c,0x47, 0x0f,0x3f, 0x3f,0x3f,
    0x29,0x3f, 0x4b,0x4a, 0x33,0x3f, 0x6c,0x3d, 0x3f,0x0f, 0x7b,0x3f, 0x3f,0x3f, 0x2c,0x2f, 0x3f,0x4d,
    0x62,0x3f, 0x00,0x1f, 0x50,0x3f, 0x3f,0x71, 0x6e,0x0c, 0x1c,0x4f, 0x3f,0x3f, 0xe1,0x88, 0xa0,0x25,
    0x6a,0x3f, 0x3f,0x72, 0x3f,0x18, 0x39,0x3f, 0x50,0x55, 0x34,0x16, 0x3f,0x3d, 0x3f,0x0d, 0x16,0x63,
    0x3f,0x3f, 0x29,0x3f, 0x3f,0x40, 0x42,0x3f, 0x44,0x21, 0x3a,0x3f, 0x15,0x22, 0x3f,0x3f, 0x24,0x3f,
    0x49,0x3f, 0xc2,0xb9, 0x3f,0x32, 0x3f,0x4d, 0x3f,0x3f, 0x3f,0x3f, 0x52,0x7e, 0x3f,0x3f, 0x43,0xda,
    0xa0,0x31, 0x68,0xcb, 0x9e,0x3f, 0x3f,0x68, 0x24,0x3f, 0x3f,0x19, 0x02,0x3f, 0x3f,0x21, 0x3f,0x48,
    0x50,0xd2, 0x9e,0x3f, 0x2a,0x3f, 0x3f,0x32, 0x3f,0x3f, 0x10,0x40, 0x3a,0x3f, 0x3a,0x05, 0x00,0x3f,
    0x10,0x3f, 0x53,0x3f, 0x3f,0x2f, 0x3f,0x4a, 0x3f,0x3f, 0x3f,0x3f, 0x22,0x3d, 0x48,0x3f, 0x21,0x7c,
    0x3f,0x1f, 0x3e,0x3f, 0x32,0xc2, 0x98,0x30, 0x29,0x50, 0x3f,0x1a, 0x3f,0x3f, 0x3c,0x3e, 0x2b,0x3f,
    0x3f,0x3f, 0x3f,0x78, 0x35,0x0c, 0x4c,0x3f, 0x52,0x3f, 0x3f,0x23, 0x26,0x3f, 0x3f,0x51, 0x72,0x14,
    0x1b,0x3f, 0x06,0x3f, 0x01,0x72, 0x3f,0x1e, 0x6a,0x3f, 0x4d,0x3f, 0x3f,0x3f, 0x2d,0x3f, 0x0c,0x3f,
    0x3f,0x08, 0x41,0x43, 0x3f,0x3f, 0x20,0x03, 0x3f,0x3f, 0x27,0x3f, 0x3f,0x3f, 0x3f,0x71, 0x14,0x1a,
    0x24,0x3f, 0x74,0x3f, 0x5b,0x64, 0x17,0x1f, 0x06,0x3f, 0x21,0x75, 0x70,0x20, 0x21,0x49, 0x3f,0x02,
    0x3f,0x3f, 0x34,0x41, 0x3f,0x3f, 0x73,0x3f, 0x3f,0x2e, 0x59,0x4a, 0x44,0x32, 0x7f,0x00, 0x1c,0x42,
    0x3f,0x6e, 0x3f,0x56, 0x3f,0x14, 0x13,0x3f, 0x4a,0x21, 0x56,0x3c, 0x17,0x72, 0x3f,0xcc, 0xa1,0x3f,
    0x3f,0x25, 0x3f,0x0a, 0x1a,0x3f, 0x3f,0x3f, 0x39,0x69, 0x3f,0x3f, 0x3f,0x3f, 0x68,0x21, 0x3f,0x47,
    0x3f,0x51, 0x5a,0x3f, 0x14,0x3f, 0x44,0x2b, 0x11,0x4a, 0x3f,0x12, 0x3f,0x44, 0x4f,0x3f, 0x5c,0x10,
    0x1a,0x7e, 0x3f,0x2f, 0x02,0x3f, 0x38,0x2f, 0x3f,0x0d, 0x70,0x13, 0x3f,0x7c, 0x2a,0x21, 0x09,0x3f,
    0x3f,0x6b, 0x70,0x17, 0x41,0x45, 0x36,0x41, 0x49,0x70, 0x11,0x4e, 0x04,0x18, 0x3f,0x48, 0x6c,0x13,
    0x61,0xc5, 0x81,0x3f, 0x6f,0x3f, 0x20,0x3f, 0x3f,0x3f, 0x22,0x3f, 0x28,0x35, 0x3f,0x0b, 0x3f,0x62,
    0x3f,0x3f, 0x1d,0x67, 0x3f,0x64, 0x31,0x50, 0x78,0x12, 0x5d,0x3f, 0x09,0x3f, 0x41,0x3f, 0x10,0x54,
    0x04,0x29, 0x3f,0x51, 0x3f,0x16, 0x3f,0x46, 0x3f,0x3f, 0x3f,0x3f, 0x2b,0xc0, 0x8c,0x3d, 0x3f,0x3f,
    0x3f,0x28, 0x3f,0x48, 0x3f,0x01, 0x64,0x3f, 0x15,0x3f, 0x3f,0x18, 0x61,0x43, 0x14,0x10, 0x0e,0x3f,
    0x06,0x3f, 0x43,0x28, 0x12,0x3f, 0x04,0x67, 0x01,0x68, 0x3f,0x1e, 0x27,0x3f, 0x3f,0x32, 0x3f,0x28,
    0x33,0x3f, 0x0b,0x3f, 0x3f,0x3f, 0x3c,0x1d, 0x40,0x3f, 0x5d,0x3f, 0x4e,0x3f, 0x11,0x31, 0x04,0x00,
    0x11,0x41, 0x70,0x10, 0x41,0x3f, 0x23,0x11, 0x50,0x7c, 0x16,0x3f, 0x3f,0x3f, 0x3f,0x3f, 0x78,0x2b,
    0x3f,0x3f, 0x36,0x73, 0x3f,0x3f, 0x29,0x3f, 0x08,0x3f, 0x01,0x67, 0x6c,0x16, 0x0c,0x3f, 0x27,0x3f,
    0x45,0x3f, 0x10,0x20, 0x3f,0x0c, 0x3f,0x45, 0x3f,0x12, 0x26,0x05, 0x73,0x51, 0x6b,0x3f, 0x1f,0x62,
    0x3f,0xc0, 0xb2,0x3f, 0x0c,0x34, 0x16,0xcc, 0xaf,0xc2, 0x93,0x3f, 0x1f,0x3f, 0x3f,0x7a, 0x3f,0x54,
    0x3f,0x13, 0x3f,0x44, 0x19,0x71, 0x45,0x3f, 0x11,0x3f, 0x3f,0x3a, 0x3f,0x56, 0x7c,0x18, 0x0c,0x07,
    0x14,0x62, 0x3f,0x3f, 0x2d,0x1e, 0x3f,0x54, 0x73,0x3f, 0x18,0x2d, 0x3f,0x49, 0x1b,0x3f, 0x74,0x3f,
    0x19,0x3f, 0x45,0x50, 0x21,0x4f, 0x3f,0x12, 0x3f,0x44, 0x2f,0x3f, 0x4e,0x44, 0x15,0xe5, 0x85,0xa8,
    0x3f,0x79, 0x3f,0x23, 0x54,0x4a, 0x3f,0x3f, 0x3f,0x60, 0x37,0x47, 0x4d,0x3f, 0x12,0x3f, 0x3f,0x24,
    0x19,0x08, 0xc7,0xb1, 0x65,0x48, 0x17,0x79, 0x3f,0x4c, 0x51,0x52, 0x3f,0x14, 0x79,0x05, 0x7b,0x01,
    0x69,0x6c, 0x1d,0x63, 0x3f,0x68, 0x3f,0x3f, 0x68,0x32, 0x45,0x0e, 0x3f,0x3f, 0x3f,0x20, 0x33,0x6a,
    0x3f,0x3f, 0xc2,0x90, 0x30,0x20, 0x3d,0x3f, 0x3f,0x3f, 0x63,0x3f, 0x17,0xdd, 0x85,0x7f, 0x11,0x64,
    0x14,0x1b, 0x79,0x3f, 0x14,0x52, 0x3f,0x64, 0x2a,0x3f, 0x0b,0x56, 0x3f,0x3f, 0x78,0x3e, 0x3f,0x0f,
    0x77,0x3f, 0x3f,0x3f, 0x2c,0x25, 0x3f,0x4c, 0x12,0x3f, 0x3f,0x1e, 0x4e,0x07, 0x3f,0x3f, 0x6e,0x2c,
    0x1c,0x58, 0x07,0x3f, 0xc1,0x89, 0x3f,0x25, 0x7d,0x4a, 0x3f,0x3f, 0xce,0xb8, 0x39,0x12, 0x11,0x60,
    0x3f,0x14, 0x35,0x3d, 0x3f,0x3f, 0x11,0x03, 0x3f,0x3f, 0x29,0x3f, 0x09,0x3f, 0xd2,0x88, 0x34,0x21,
    0x38,0x3f, 0x16,0x3f, 0x3f,0x3f, 0x24,0x3f, 0x09,0x3f, 0x3f,0x3f, 0x4c,0x33, 0x1b,0x4e, 0x02,0x44,
    0x43,0x3f, 0x53,0x74, 0x51,0x3f, 0x43,0x3f, 0x50,0x31, 0x61,0x0b, 0x3f,0x3f, 0x3f,0x40, 0x24,0x3f,
    0x3f,0x18, 0x3f,0x3f, 0x3f,0x21, 0xc1,0x88, 0x53,0x32, 0x3f,0x5c, 0x2b,0x3f, 0x0b,0x3a, 0x3f,0x3f,
    0x3f,0x40, 0x79,0x3f, 0x4b,0x05, 0x00,0x6c, 0x3f,0x3f, 0x13,0x3f, 0x18,0x2f, 0xc2,0x8a, 0x77,0x3f,
    0x3f,0x40, 0x22,0x25, 0x48,0x3f, 0x51,0x7b, 0x48,0x1f, 0x21,0x08, 0x29,0x02, 0x3f,0x50, 0x28,0x00,
    0x3f,0x05, 0x3f,0x3f, 0x44,0x3d, 0x3f,0x11, 0x3f,0x64, 0x3f,0x3f, 0x34,0x3f, 0x4b,0x3f, 0x3f,0x3f,
    0x1c,0x23, 0x07,0x08, 0x3f,0x3f, 0x70,0x3f, 0x1a,0x3f, 0xc6,0xad, 0x11,0x70, 0x18,0x1e, 0x3b,0x08,
    0x40,0x3f, 0x3f,0x58, 0x2c,0x50, 0x0c,0x78, 0x03,0x04, 0x11,0x42, 0x3f,0x3f, 0x11,0xd3, 0xae,0x14,
    0x27,0x3f, 0x3f,0x3f, 0x01,0x70, 0x3f,0x19, 0x0c,0x46, 0x6f,0x3f, 0x5a,0x18, 0x17,0x08, 0x46,0x3f,
    0x01,0x73, 0x3f,0x1f, 0x3f,0x08, 0x3f,0x52, 0x3f,0x3f, 0x33,0x3f, 0x3f,0x3f, 0x3f,0x3f, 0x20,0x2e,
    0x29,0x4a, 0x39,0x52, 0x7d,0x3f, 0x1b,0x2b, 0x3f,0x6a, 0x3f,0x55, 0x54,0x14, 0x05,0x3f, 0x46,0x11,
    0x55,0x3f, 0x16,0x5b, 0x46,0x3f, 0x21,0x3f, 0x14,0x25, 0x3f,0x3f, 0x09,0x53, 0x3f,0x3f, 0x38,0x3f,
    0xcb,0xb9, 0x52,0x3f, 0x3f,0x20, 0x27,0xc7, 0x8f,0x61, 0x59,0x3f, 0x14,0xdd, 0x84,0x29, 0x3f,0x49,
    0x3f,0x12, 0xd4,0x84, 0x4c,0x3f, 0x5b,0x3f, 0x19,0x5f, 0x3f,0x25, 0xd2,0x9f, 0x3c,0x2e, 0x43,0x4d,
    0x5e,0x73, 0x3f,0x3f, 0x29,0x3f, 0x3f,0x3f, 0x3f,0x6a, 0x34,0x17, 0x36,0x45, 0x34,0x3f, 0x48,0x5c,
    0x11,0x4c, 0x3f,0x16, 0x61,0x48, 0x54,0x13, 0x55,0x3f, 0x7c,0x11, 0x6e,0x3c, 0x20,0x7f, 0x49,0xc5,
    0xa2,0x3f, 0x3f,0x33, 0x39,0xcb, 0x88,0xc2, 0x8a,0x74, 0x1d,0x54, 0x3f,0x61, 0x3f,0x4f, 0x60,0x12,
    0x57,0x44, 0x09,0x3f, 0x41,0x3f, 0x10,0x52, 0x04,0x28, 0x21,0x51, 0x3f,0x16, 0x3f,0x3f, 0x3f,0x01,
    0x3f,0x14, 0x2b,0x72, 0x0c,0x27, 0x3f,0x3f, 0x3f,0x27, 0x3f,0x08, 0x3f,0x3f, 0x62,0x3f, 0x15,0x3f,
    0x04,0x19, 0x51,0x43, 0x0c,0x10, 0x0f,0x3f, 0x06,0x3f, 0x43,0x1c, 0x12,0x3f, 0x44,0x64, 0x11,0x67,
    0x58,0x1e, 0x01,0xc9, 0xa7,0x62, 0x3f,0x3f, 0x31,0x25, 0xcb,0x81, 0x72,0x3f, 0x3f,0x1c, 0x30,0x46,
    0x5a,0x3f, 0x4d,0x3f, 0x11,0x31, 0x04,0x00, 0x11,0x41, 0x78,0x10, 0x42,0x04, 0x23,0x3f, 0x4f,0x50,
    0x16,0x75, 0x3f,0x3f, 0x41,0x3f, 0x3f,0x2a, 0x50,0x3f, 0x22,0x13, 0x3f,0x3f, 0x28,0x3f, 0x3f,0xdb,
    0xb1,0x65, 0x30,0x16, 0x03,0x3f, 0x26,0x3f, 0x45,0x3f, 0x10,0x21, 0x04,0x0d, 0x3f,0x45, 0x3f,0x12,
    0x1e,0x3f, 0x6f,0x3f, 0x69,0x40, 0x1f,0x3b, 0x49,0x3f, 0x52,0xc7, 0xa0,0x32, 0x3f,0x4b, 0x3f,0x3f,
    0x3f,0x18, 0x1f,0x3f, 0x46,0x76, 0x31,0x54, 0x70,0x13, 0x3f,0x44, 0x19,0x71, 0x45,0x3f, 0x11,0x3f,
    0x3f,0x39, 0x3f,0x56, 0x34,0x18, 0x3f,0x3f, 0x0b,0x3f, 0x3f,0x3f, 0x2c,0xcb, 0x8c,0x40, 0x23,0x3f,
    0x34,0x2c, 0x3f,0x49, 0x12,0x12, 0x73,0x50, 0x19,0x3f, 0x45,0x4e, 0x3f,0x4e, 0x3f,0x12, 0x3f,0x3f,
    0x2e,0x3f, 0x4e,0x2c, 0x15,0xdb, 0x85,0x3f, 0x3f,0x77, 0x3f,0x22, 0x17,0x0a, 0x3f,0x22, 0x3f,0x04,
    0x36,0x3f, 0x3f,0xec, 0x92,0xa5, 0x30,0x24, 0x3f,0x07, 0xc1,0xa1, 0x64,0x18, 0x17,0x6d, 0x45,0x4b,
    0x01,0x52, 0x3f,0x14, 0x6e,0x45, 0x77,0x3f, 0x67,0x3f, 0x1c,0x3d, 0x3f,0x5d, 0x3f,0x3f, 0x08,0x31,
    0x3f,0x3f, 0x3f,0x23, 0x3f,0x1c, 0x32,0x3a, 0x3f,0x3f, 0x3f,0x3f, 0x3f,0x1f, 0x2a,0x07, 0x3f,0x31,
    0x63,0x3f, 0x17,0x3f, 0x3f,0x7c, 0x3f,0x62, 0x3f,0x1a, 0x5f,0x07, 0x0c,0x52, 0x3f,0x3f, 0x29,0x3f,
    0x3f,0x41, 0x3f,0x3f, 0x08,0x3d, 0x39,0x4f, 0x68,0x3f, 0x3f,0x18, 0x2c,0x3f, 0x09,0x41, 0xc2,0x83,
    0x7c,0x1e, 0x33,0x47, 0x3f,0x61, 0x6d,0x3f, 0x1b,0x39, 0x3f,0x3f, 0x01,0x3f, 0x14,0x25, 0x3e,0x4a,
    0x3f,0x32, 0x3f,0x68, 0x38,0x3f, 0x10,0x48, 0x3f,0x09, 0x69,0x3b, 0x14,0x3f, 0x3f,0x3f, 0x3f,0x40,
    0x28,0x49, 0x49,0x2e, 0x02,0x3f, 0x54,0x20, 0x3f,0x3f, 0x07,0x3f, 0x3f,0x3f, 0x23,0x3f, 0x09,0x3f,
    0x22,0x3f, 0x54,0x31, 0x3f,0x0d, 0x3f,0x3f, 0x39,0x21, 0x51,0x3f, 0xd0,0xbb, 0x3f,0xd2, 0xb0,0x2f,
    0xf9,0x8a, 0x88,0x82, 0x95,0x24, 0x23,0x64, 0x08,0x0a, 0x22,0x3f, 0x3f,0x20, 0x3f,0x48, 0x3d,0x02,
    0x3f,0x3f, 0x29,0x53, 0x0b,0x19, 0x3f,0xda, 0x98,0x3e, 0x3f,0x3f, 0x21,0x00,0x00};

#endif
