/*
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _SENSOR_GC2145_MIPI_H_
#define _SENSOR_GC2145_MIPI_H_
#endif
#include <utils/Log.h>
#include "sensor.h"
#include "jpeg_exif_header.h"
#include "sensor_drv_u.h"
#include "sensor_raw.h"

#define VENDOR_NUM 1
#define GC2145_I2C_ADDR_W 0x78
#define GC2145_I2C_ADDR_R 0x78
#define SENSOR_NAME "gc2145_mipi"
#define gc2145_ES_OFFSET 10

#define EX_MCLK 24

#define GC2145_PID_VALUE 0x21
#define GC2145_PID_ADDR 0xf0
#define GC2145_VER_VALUE 0x45
#define GC2145_VER_ADDR 0xf1

/*sensor private data*/
typedef struct {
    cmr_int gain;
    cmr_int gain_bak;
    cmr_int shutter;
    cmr_int cap_shutter;
    cmr_int cap_vts;
} PRIVATE_DATA;

#define GC2145_MIPI_2Lane
//#define SENSOR_GC2145_RAW

static const SENSOR_REG_T gc2145_init_yuv_setting[] = {

    {0xfe, 0xf0},
    {0xfe, 0xf0},
    {0xfe, 0xf0},
    {0xfc, 0x06},
    {0xf6, 0x00},
    {0xf7, 0x1d},
    {0xf8, 0x84},
    {0xfa, 0x00},
    {0xf9, 0x8e},
    {0xf2, 0x00},
    /////////////////////////////////////////////////
    //////////////////ISP reg//////////////////////
    ////////////////////////////////////////////////////
    {0xfe, 0x00},
    {0x03, 0x04},
    {0x04, 0xe2},
    {0x09, 0x00},
    {0x0a, 0x00},
    {0x0b, 0x00},
    {0x0c, 0x00},
    {0x0d, 0x04},
    {0x0e, 0xc0},
    {0x0f, 0x06},
    {0x10, 0x52},
    {0x12, 0x2e},
    {0x17, 0x14}, // mirror
    {0x18, 0x22},
    {0x19, 0x0e},
    {0x1a, 0x01},
    {0x1b, 0x4b},
    {0x1c, 0x07},
    {0x1d, 0x10},
    {0x1e, 0x88},
    {0x1f, 0x78},
    {0x20, 0x03},
    {0x21, 0x40},
    {0x22, 0xdc},
    {0x24, 0x16},
    {0x25, 0x01},
    {0x26, 0x10},
    {0x2d, 0x60},
    {0x30, 0x01},
    {0x31, 0x90},
    {0x33, 0x06},
    {0x34, 0x01},
    /////////////////////////////////////////////////
    //////////////////ISP reg////////////////////
    /////////////////////////////////////////////////
    {0xfe, 0x00},
    {0x80, 0x7f},
    {0x81, 0x26},
    {0x82, 0xfa},
    {0x83, 0x00},
    {0x84, 0x02}, // 03
    {0x86, 0x02},
    {0x88, 0x03},
    {0x89, 0x03},
    {0x85, 0x08},
    {0x8a, 0x00},
    {0x8b, 0x00},
    {0xb0, 0x55},
    {0xc3, 0x00},
    {0xc4, 0x80},
    {0xc5, 0x90},
    {0xc6, 0x3b},
    {0xc7, 0x46},
    {0xec, 0x06},
    {0xed, 0x04},
    {0xee, 0x60},
    {0xef, 0x90},
    {0xb6, 0x01},
    {0x90, 0x01},
    {0x91, 0x00},
    {0x92, 0x00},
    {0x93, 0x00},
    {0x94, 0x00},
    {0x95, 0x04},
    {0x96, 0xb0},
    {0x97, 0x06},
    {0x98, 0x40},
    /////////////////////////////////////////
    /////////// BLK ////////////////////////
    /////////////////////////////////////////
    {0xfe, 0x00},
    {0x40, 0x42},
    {0x41, 0x00},
    {0x43, 0x5b},
    {0x5e, 0x00},
    {0x5f, 0x00},
    {0x60, 0x00},
    {0x61, 0x00},
    {0x62, 0x00},
    {0x63, 0x00},
    {0x64, 0x00},
    {0x65, 0x00},
    {0x66, 0x20},
    {0x67, 0x20},
    {0x68, 0x20},
    {0x69, 0x20},
    {0x76, 0x00},
    {0x6a, 0x08},
    {0x6b, 0x08},
    {0x6c, 0x08},
    {0x6d, 0x08},
    {0x6e, 0x08},
    {0x6f, 0x08},
    {0x70, 0x08},
    {0x71, 0x08},
    {0x76, 0x00},
    {0x72, 0xf0},
    {0x7e, 0x3c},
    {0x7f, 0x00},
    {0xfe, 0x02},
    {0x48, 0x15},
    {0x49, 0x00},
    {0x4b, 0x0b},
    {0xfe, 0x00},
    ////////////////////////////////////////
    /////////// AEC ////////////////////////
    ////////////////////////////////////////
    {0xfe, 0x01},
    {0x01, 0x04},
    {0x02, 0xc0},
    {0x03, 0x04},
    {0x04, 0x90},
    {0x05, 0x30},
    {0x06, 0x90},
    {0x07, 0x30},
    {0x08, 0x80},
    {0x09, 0x00},
    {0x0a, 0x82},
    {0x0b, 0x11},
    {0x0c, 0x10},
    {0x11, 0x10},
    {0x13, 0x7b},
    {0x17, 0x00},
    {0x1c, 0x11},
    {0x1e, 0x61},
    {0x1f, 0x35},
    {0x20, 0x40},
    {0x22, 0x40},
    {0x23, 0x20},
    {0xfe, 0x02},
    {0x0f, 0x04},
    {0xfe, 0x01},
    {0x12, 0x35},
    {0x15, 0xb0},
    {0x10, 0x31},
    {0x3e, 0x28},
    {0x3f, 0xb0},
    {0x40, 0x90},
    {0x41, 0x0f},

    /////////////////////////////
    //////// INTPEE /////////////
    /////////////////////////////
    {0xfe, 0x02},
    {0x90, 0x6c},
    {0x91, 0x03},
    {0x92, 0xcb},
    {0x94, 0x33},
    {0x95, 0x84},
    {0x97, 0x65},
    {0xa2, 0x11},
    {0xfe, 0x00},
    /////////////////////////////
    //////// DNDD///////////////
    /////////////////////////////
    {0xfe, 0x02},
    {0x80, 0xc1},
    {0x81, 0x08},
    {0x82, 0x05},
    {0x83, 0x08},
    {0x84, 0x0a},
    {0x86, 0xf0},
    {0x87, 0x50},
    {0x88, 0x15},
    {0x89, 0xb0},
    {0x8a, 0x30},
    {0x8b, 0x10},
    /////////////////////////////////////////
    /////////// ASDE ////////////////////////
    /////////////////////////////////////////
    {0xfe, 0x01},
    {0x21, 0x04},
    {0xfe, 0x02},
    {0xa3, 0x50},
    {0xa4, 0x20},
    {0xa5, 0x40},
    {0xa6, 0x80},
    {0xab, 0x40},
    {0xae, 0x0c},
    {0xb3, 0x46},
    {0xb4, 0x64},
    {0xb6, 0x38},
    {0xb7, 0x01},
    {0xb9, 0x2b},
    {0x3c, 0x04},
    {0x3d, 0x15},
    {0x4b, 0x06},
    {0x4c, 0x20},
    {0xfe, 0x00},
/////////////////////////////////////////
/////////// GAMMA   ////////////////////////
/////////////////////////////////////////

///////////////////gamma1////////////////////
#if 1
    {0xfe, 0x02},
    {0x10, 0x09},
    {0x11, 0x0d},
    {0x12, 0x13},
    {0x13, 0x19},
    {0x14, 0x27},
    {0x15, 0x37},
    {0x16, 0x45},
    {0x17, 0x53},
    {0x18, 0x69},
    {0x19, 0x7d},
    {0x1a, 0x8f},
    {0x1b, 0x9d},
    {0x1c, 0xa9},
    {0x1d, 0xbd},
    {0x1e, 0xcd},
    {0x1f, 0xd9},
    {0x20, 0xe3},
    {0x21, 0xea},
    {0x22, 0xef},
    {0x23, 0xf5},
    {0x24, 0xf9},
    {0x25, 0xff},
#else
    {0xfe, 0x02},
    {0x10, 0x0a},
    {0x11, 0x12},
    {0x12, 0x19},
    {0x13, 0x1f},
    {0x14, 0x2c},
    {0x15, 0x38},
    {0x16, 0x42},
    {0x17, 0x4e},
    {0x18, 0x63},
    {0x19, 0x76},
    {0x1a, 0x87},
    {0x1b, 0x96},
    {0x1c, 0xa2},
    {0x1d, 0xb8},
    {0x1e, 0xcb},
    {0x1f, 0xd8},
    {0x20, 0xe2},
    {0x21, 0xe9},
    {0x22, 0xf0},
    {0x23, 0xf8},
    {0x24, 0xfd},
    {0x25, 0xff},
    {0xfe, 0x00},
#endif
    {0xfe, 0x00},
    {0xc6, 0x20},
    {0xc7, 0x2b},
///////////////////gamma2////////////////////
#if 1
    {0xfe, 0x02},
    {0x26, 0x0f},
    {0x27, 0x14},
    {0x28, 0x19},
    {0x29, 0x1e},
    {0x2a, 0x27},
    {0x2b, 0x33},
    {0x2c, 0x3b},
    {0x2d, 0x45},
    {0x2e, 0x59},
    {0x2f, 0x69},
    {0x30, 0x7c},
    {0x31, 0x89},
    {0x32, 0x98},
    {0x33, 0xae},
    {0x34, 0xc0},
    {0x35, 0xcf},
    {0x36, 0xda},
    {0x37, 0xe2},
    {0x38, 0xe9},
    {0x39, 0xf3},
    {0x3a, 0xf9},
    {0x3b, 0xff},
#else
    ////Gamma outdoor
    {0xfe, 0x02},
    {0x26, 0x17},
    {0x27, 0x18},
    {0x28, 0x1c},
    {0x29, 0x20},
    {0x2a, 0x28},
    {0x2b, 0x34},
    {0x2c, 0x40},
    {0x2d, 0x49},
    {0x2e, 0x5b},
    {0x2f, 0x6d},
    {0x30, 0x7d},
    {0x31, 0x89},
    {0x32, 0x97},
    {0x33, 0xac},
    {0x34, 0xc0},
    {0x35, 0xcf},
    {0x36, 0xda},
    {0x37, 0xe5},
    {0x38, 0xec},
    {0x39, 0xf8},
    {0x3a, 0xfd},
    {0x3b, 0xff},
#endif
    ///////////////////////////////////////////////
    ///////////YCP ///////////////////////
    ///////////////////////////////////////////////
    {0xfe, 0x02},
    {0xd1, 0x32},
    {0xd2, 0x32},
    {0xd3, 0x40},
    {0xd6, 0xf0},
    {0xd7, 0x10},
    {0xd8, 0xda},
    {0xdd, 0x14},
    {0xde, 0x86},
    {0xed, 0x80},
    {0xee, 0x00},
    {0xef, 0x3f},
    {0xd8, 0xd8},
    ///////////////////abs/////////////////
    {0xfe, 0x01},
    {0x9f, 0x40},
    /////////////////////////////////////////////
    //////////////////////// LSC ///////////////
    //////////////////////////////////////////
    {0xfe, 0x01},
    {0xc2, 0x14},
    {0xc3, 0x0d},
    {0xc4, 0x0c},
    {0xc8, 0x15},
    {0xc9, 0x0d},
    {0xca, 0x0a},
    {0xbc, 0x24},
    {0xbd, 0x10},
    {0xbe, 0x0b},
    {0xb6, 0x25},
    {0xb7, 0x16},
    {0xb8, 0x15},
    {0xc5, 0x00},
    {0xc6, 0x00},
    {0xc7, 0x00},
    {0xcb, 0x00},
    {0xcc, 0x00},
    {0xcd, 0x00},
    {0xbf, 0x07},
    {0xc0, 0x00},
    {0xc1, 0x00},
    {0xb9, 0x00},
    {0xba, 0x00},
    {0xbb, 0x00},
    {0xaa, 0x01},
    {0xab, 0x01},
    {0xac, 0x00},
    {0xad, 0x05},
    {0xae, 0x06},
    {0xaf, 0x0e},
    {0xb0, 0x0b},
    {0xb1, 0x07},
    {0xb2, 0x06},
    {0xb3, 0x17},
    {0xb4, 0x0e},
    {0xb5, 0x0e},
    {0xd0, 0x09},
    {0xd1, 0x00},
    {0xd2, 0x00},
    {0xd6, 0x08},
    {0xd7, 0x00},
    {0xd8, 0x00},
    {0xd9, 0x00},
    {0xda, 0x00},
    {0xdb, 0x00},
    {0xd3, 0x0a},
    {0xd4, 0x00},
    {0xd5, 0x00},
    {0xa4, 0x00},
    {0xa5, 0x00},
    {0xa6, 0x77},
    {0xa7, 0x77},
    {0xa8, 0x77},
    {0xa9, 0x77},
    {0xa1, 0x80},
    {0xa2, 0x80},

    {0xfe, 0x01},
    {0xdf, 0x0d},
    {0xdc, 0x25},
    {0xdd, 0x30},
    {0xe0, 0x77},
    {0xe1, 0x80},
    {0xe2, 0x77},
    {0xe3, 0x90},
    {0xe6, 0x90},
    {0xe7, 0xa0},
    {0xe8, 0x90},
    {0xe9, 0xa0},
    {0xfe, 0x00},
    ///////////////////////////////////////////////
    /////////// AWB////////////////////////
    ///////////////////////////////////////////////
    {0xfe, 0x01},
    {0x4f, 0x00},
    {0x4f, 0x00},
    {0x4b, 0x01},
    {0x4f, 0x00},

    {0x4c, 0x01}, // D75
    {0x4d, 0x71},
    {0x4e, 0x01},
    {0x4c, 0x01},
    {0x4d, 0x91},
    {0x4e, 0x01},
    {0x4c, 0x01},
    {0x4d, 0x70},
    {0x4e, 0x01},

    {0x4c, 0x01}, // D65
    {0x4d, 0x90},
    {0x4e, 0x02},

    {0x4c, 0x01},
    {0x4d, 0xb0},
    {0x4e, 0x02},
    {0x4c, 0x01},
    {0x4d, 0x8f},
    {0x4e, 0x02},
    {0x4c, 0x01},
    {0x4d, 0x6f},
    {0x4e, 0x02},
    {0x4c, 0x01},
    {0x4d, 0xaf},
    {0x4e, 0x02},

    {0x4c, 0x01},
    {0x4d, 0xd0},
    {0x4e, 0x02},
    {0x4c, 0x01},
    {0x4d, 0xf0},
    {0x4e, 0x02},
    {0x4c, 0x01},
    {0x4d, 0xcf},
    {0x4e, 0x02},
    {0x4c, 0x01},
    {0x4d, 0xef},
    {0x4e, 0x02},

    {0x4c, 0x01}, // D50
    {0x4d, 0x6e},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0x8e},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0xae},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0xce},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0x4d},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0x6d},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0x8d},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0xad},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0xcd},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0x4c},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0x6c},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0x8c},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0xac},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0xcc},
    {0x4e, 0x03},

    {0x4c, 0x01},
    {0x4d, 0xcb},
    {0x4e, 0x03},

    {0x4c, 0x01},
    {0x4d, 0x4b},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0x6b},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0x8b},
    {0x4e, 0x03},
    {0x4c, 0x01},
    {0x4d, 0xab},
    {0x4e, 0x03},

    {0x4c, 0x01}, // CWF
    {0x4d, 0x8a},
    {0x4e, 0x04},
    {0x4c, 0x01},
    {0x4d, 0xaa},
    {0x4e, 0x04},
    {0x4c, 0x01},
    {0x4d, 0xca},
    {0x4e, 0x04},
    {0x4c, 0x01},
    {0x4d, 0xca},
    {0x4e, 0x04},
    {0x4c, 0x01},
    {0x4d, 0xc9},
    {0x4e, 0x04},
    {0x4c, 0x01},
    {0x4d, 0x8a},
    {0x4e, 0x04},
    {0x4c, 0x01},
    {0x4d, 0x89},
    {0x4e, 0x04},
    {0x4c, 0x01},
    {0x4d, 0xa9},
    {0x4e, 0x04},

    {0x4c, 0x02}, // tl84
    {0x4d, 0x0b},
    {0x4e, 0x05},
    {0x4c, 0x02},
    {0x4d, 0x0a},
    {0x4e, 0x05},

    {0x4c, 0x01},
    {0x4d, 0xeb},
    {0x4e, 0x05},

    {0x4c, 0x01},
    {0x4d, 0xea},
    {0x4e, 0x05},

    {0x4c, 0x02},
    {0x4d, 0x09},
    {0x4e, 0x05},
    {0x4c, 0x02},
    {0x4d, 0x29},
    {0x4e, 0x05},

    {0x4c, 0x02},
    {0x4d, 0x2a},
    {0x4e, 0x05},

    {0x4c, 0x02},
    {0x4d, 0x4a},
    {0x4e, 0x05},

    //{0x4c , 0x02}, //A
    //{0x4d , 0x6a},
    //{0x4e , 0x06},

    {0x4c, 0x02},
    {0x4d, 0x8a},
    {0x4e, 0x06},

    {0x4c, 0x02},
    {0x4d, 0x49},
    {0x4e, 0x06},
    {0x4c, 0x02},
    {0x4d, 0x69},
    {0x4e, 0x06},
    {0x4c, 0x02},
    {0x4d, 0x89},
    {0x4e, 0x06},
    {0x4c, 0x02},
    {0x4d, 0xa9},
    {0x4e, 0x06},

    {0x4c, 0x02},
    {0x4d, 0x48},
    {0x4e, 0x06},
    {0x4c, 0x02},
    {0x4d, 0x68},
    {0x4e, 0x06},
    {0x4c, 0x02},
    {0x4d, 0x69},
    {0x4e, 0x06},

    {0x4c, 0x02}, // H
    {0x4d, 0xca},
    {0x4e, 0x07},
    {0x4c, 0x02},
    {0x4d, 0xc9},
    {0x4e, 0x07},
    {0x4c, 0x02},
    {0x4d, 0xe9},
    {0x4e, 0x07},
    {0x4c, 0x03},
    {0x4d, 0x09},
    {0x4e, 0x07},
    {0x4c, 0x02},
    {0x4d, 0xc8},
    {0x4e, 0x07},
    {0x4c, 0x02},
    {0x4d, 0xe8},
    {0x4e, 0x07},
    {0x4c, 0x02},
    {0x4d, 0xa7},
    {0x4e, 0x07},
    {0x4c, 0x02},
    {0x4d, 0xc7},
    {0x4e, 0x07},
    {0x4c, 0x02},
    {0x4d, 0xe7},
    {0x4e, 0x07},
    {0x4c, 0x03},
    {0x4d, 0x07},
    {0x4e, 0x07},

    {0x4f, 0x01},
    {0x50, 0x80},
    {0x51, 0xa8},
    {0x52, 0x47},
    {0x53, 0x38},
    {0x54, 0xc7},
    {0x56, 0x0e},
    {0x58, 0x08},
    {0x5b, 0x00},
    {0x5c, 0x74},
    {0x5d, 0x8b},
    {0x61, 0xdb},
    {0x62, 0xb8},
    {0x63, 0x86},
    {0x64, 0xc0},
    {0x65, 0x04},

    {0x67, 0xa8},
    {0x68, 0xb0},
    {0x69, 0x00},
    {0x6a, 0xa8},
    {0x6b, 0xb0},
    {0x6c, 0xaf},
    {0x6d, 0x8b},
    {0x6e, 0x50},
    {0x6f, 0x18},
    {0x73, 0xf0},
    {0x70, 0x0d},
    {0x71, 0x60},
    {0x72, 0x80},
    {0x74, 0x01},
    {0x75, 0x01},
    {0x7f, 0x0c},
    {0x76, 0x70},
    {0x77, 0x58},
    {0x78, 0xa0},
    {0x79, 0x5e},
    {0x7a, 0x54},
    {0x7b, 0x58},
    {0xfe, 0x00},
    //////////////////////////////////////////
    ///////////CC////////////////////////
    //////////////////////////////////////////
    {0xfe, 0x02},
    {0xc0, 0x01},
    {0xc1, 0x44},
    {0xc2, 0xfd},
    {0xc3, 0x04},
    {0xc4, 0xf0},
    {0xc5, 0x48},
    {0xc6, 0xfd},
    {0xc7, 0x46},
    {0xc8, 0xfd},
    {0xc9, 0x02},
    {0xca, 0xe0},
    {0xcb, 0x45},
    {0xcc, 0xec},
    {0xcd, 0x48},
    {0xce, 0xf0},
    {0xcf, 0xf0},
    {0xe3, 0x0c},
    {0xe4, 0x4b},
    {0xe5, 0xe0},
    //////////////////////////////////////////
    ///////////ABS ////////////////////
    //////////////////////////////////////////
    {0xfe, 0x01},
    {0x9f, 0x40},
    {0xfe, 0x00},
    //////////////////////////////////////
    ///////////  OUTPUT   ////////////////
    //////////////////////////////////////
    {0xfe, 0x00},
    {0xf2, 0x00},

    //////////////frame rate 50Hz/////////
    {0xfe, 0x00},
    {0x05, 0x01},
    {0x06, 0x56},
    {0x07, 0x00},
    {0x08, 0x32},
    {0xfe, 0x01},
    {0x25, 0x00},
    {0x26, 0xfa},
    {0x27, 0x04},
    {0x28, 0xe2}, // 20fps
    {0x29, 0x06},
    {0x2a, 0xd6}, // 14fps
    {0x2b, 0x07},
    {0x2c, 0xd0}, // 12fps
    {0x2d, 0x0b},
    {0x2e, 0xb8}, // 8fps
    {0xfe, 0x00},

    ///////////////dark sun////////////////////
    {0x18, 0x22},
    {0xfe, 0x02},
    {0x40, 0xbf},
    {0x46, 0xcf},
    {0xfe, 0x00},
    /////////////////////////////////////////////////////
    //////////////////////   MIPI   /////////////////////
    /////////////////////////////////////////////////////
    {0xfe, 0x03},
    {0x02, 0x22},
    {0x03, 0x10}, // 0x12 20140821
    {0x04, 0x10}, // 0x01
    {0x05, 0x00},
    {0x06, 0x88},
#ifdef GC2145_MIPI_2Lane
    {0x01, 0x87},
    {0x10, 0x85},
#else
    {0x01, 0x83},
    {0x10, 0x84},
#endif
    {0x11, 0x1e},
    {0x12, 0x80},
    {0x13, 0x0c},
    {0x15, 0x10},
    {0x17, 0xf0},

    {0x21, 0x10},
    {0x22, 0x04},
    {0x23, 0x10},
    {0x24, 0x10},
    {0x25, 0x10},
    {0x26, 0x05},
    {0x29, 0x03},
    {0x2a, 0x0a},
    {0x2b, 0x06},
    {0xfe, 0x00},
};

SENSOR_REG_T gc2145_preview_yuv_setting[] = {

    //{0xfe, 0x03},
    {0xfe, 0x00},
    {0xfd, 0x01},
    {0xfa, 0x00},
    //// crop window
    {0xfe, 0x00},
    {0x99, 0x11},
    {0x9a, 0x06},
    {0x9b, 0x00},
    {0x9c, 0x00},
    {0x9d, 0x00},
    {0x9e, 0x00},
    {0x9f, 0x00},
    {0xa0, 0x00},
    {0xa1, 0x00},
    {0xa2, 0x00},
    {0x90, 0x01},
    {0x91, 0x00},
    {0x92, 0x00},
    {0x93, 0x00},
    {0x94, 0x00},
    {0x95, 0x02},
    {0x96, 0x58},
    {0x97, 0x03},
    {0x98, 0x20},

    //// AWB
    {0xfe, 0x00},
    {0xec, 0x02},
    {0xed, 0x02},
    {0xee, 0x30},
    {0xef, 0x48},
    {0xfe, 0x02},
    {0x9d, 0x0b},
    {0xfe, 0x01},
    {0x74, 0x00},
    //// AEC
    {0xfe, 0x01},
    {0x01, 0x04},
    {0x02, 0x60},
    {0x03, 0x02},
    {0x04, 0x48},
    {0x05, 0x18},
    {0x06, 0x50},
    {0x07, 0x10},
    {0x08, 0x38},
    {0x0a, 0x80},
    {0x21, 0x04},
    {0xfe, 0x00},
    {0x20, 0x03},

    //// mipi
    {0xfe, 0x03},
    {0x12, 0x40},
    {0x13, 0x06},
#ifdef GC2145_MIPI_2Lane
    {0x04, 0x90},
    {0x05, 0x01},
#else
    {0x04, 0x01},
    {0x05, 0x00},
#endif
    {0xfe, 0x00},
};

SENSOR_REG_T GC2145_MIPI_YUV_1280x960[] = {
    /*
            //{0xfe, 0x03},
            //{0x10, 0x85}, // output disable
            {0xfe, 0x00},
            {0xfd, 0x00},
    #ifdef GC2145_MIPI_2Lane
            {0xfa, 0x00},
    #else
            {0xfa, 0x11},
    #endif
            //// crop window
            {0xfe , 0x00},
            {0x99 , 0x55},
            {0x9a , 0x06},
            {0x9b , 0x00},
            {0x9c , 0x00},
            {0x9d , 0x01},
            {0x9e , 0x23},
            {0x9f , 0x00},
            {0xa0 , 0x00},
            {0xa1 , 0x01},
            {0xa2 , 0x23},
            {0x90 , 0x01},
            {0x91 , 0x00},
            {0x92 , 0x00},
            {0x93 , 0x00},
            {0x94 , 0x00},
            {0x95 , 0x03},
            {0x96 , 0xc0},
            {0x97 , 0x05},
            {0x98 , 0x00},
            //// AWB
            {0xfe , 0x00},
            {0xec , 0x06},
            {0xed , 0x04},
            {0xee , 0x60},
            {0xef , 0x90},
            {0xfe , 0x01},
            {0x74 , 0x01},
            //// AEC
            {0xfe , 0x01},
            {0x01 , 0x04},
            {0x02 , 0xc0},
            {0x03 , 0x04},
            {0x04 , 0x90},
            {0x05 , 0x30},
            {0x06 , 0x90},
            {0x07 , 0x30},
            {0x08 , 0x80},
            {0x0a , 0x82},
    #ifdef GC2145_MIPI_2Lane
            {0x21 , 0x04},
            {0xfe , 0x00},
            {0x20 , 0x03},
    #else
            {0x21 , 0x15},
            {0xfe , 0x00},
            {0x20 , 0x15},
    #endif
            //// mipi
            {0xfe , 0x03},
            {0x12 , 0x00},
            {0x13 , 0x0a},
            {0x04 , 0x40},
            {0x05 , 0x01},
            //{0x10 , 0x95}, // output enable
            {0xfe , 0x00},
            */
};

SENSOR_REG_T gc2145_snapshot_yuv_setting[] = {

    {0xfe, 0x00},
    {0xfd, 0x00},
#ifdef GC2145_MIPI_2Lane
    {0xfa, 0x00},
#else
    {0xfa, 0x11},
#endif
    //// crop window
    {0xfe, 0x00},
    {0x99, 0x11},
    {0x9a, 0x06},
    {0x9b, 0x00},
    {0x9c, 0x00},
    {0x9d, 0x00},
    {0x9e, 0x00},
    {0x9f, 0x00},
    {0xa0, 0x00},
    {0xa1, 0x00},
    {0xa2, 0x00},
    {0x90, 0x01},
    {0x91, 0x00},
    {0x92, 0x00},
    {0x93, 0x00},
    {0x94, 0x00},
    {0x95, 0x04},
    {0x96, 0xb0},
    {0x97, 0x06},
    {0x98, 0x40},

    //// AWB
    {0xfe, 0x00},
    {0xec, 0x06},
    {0xed, 0x04},
    {0xee, 0x60},
    {0xef, 0x90},
    {0xfe, 0x01},
    {0x74, 0x01},
    //// AEC
    {0xfe, 0x01},
    {0x01, 0x04},
    {0x02, 0xc0},
    {0x03, 0x04},
    {0x04, 0x90},
    {0x05, 0x30},
    {0x06, 0x90},
    {0x07, 0x30},
    {0x08, 0x80},
    {0x0a, 0x82},
#ifdef GC2145_MIPI_2Lane
    {0x21, 0x04},
    {0xfe, 0x00},
    {0x20, 0x03},
#else
    {0x21, 0x15},
    {0xfe, 0x00},
    {0x20, 0x15},
#endif
    //// mipi
    {0xfe, 0x03},
    {0x12, 0x80},
    {0x13, 0x0c},
    {0x04, 0x01},
    {0x05, 0x00},
    //{0x10, 0x95}, // output enable
    {0xfe, 0x00},
};

static struct sensor_res_tab_info s_gc2145_resolution_tab_raw[VENDOR_NUM] = {
    {.module_id = MODULE_SUNNY,
     .reg_tab =
         {
#ifndef SENSOR_GC2145_RAW
             {ADDR_AND_LEN_OF_ARRAY(gc2145_init_yuv_setting), PNULL, 0,
              .width = 0, .height = 0, .xclk_to_sensor = EX_MCLK,
              .image_format = SENSOR_IMAGE_FORMAT_YUV422},

             /*   {ADDR_AND_LEN_OF_ARRAY(gc2145_preview_yuv_setting), PNULL, 0,
                 .width = 800, .height = 600, .xclk_to_sensor = EX_MCLK,
                 .image_format = SENSOR_IMAGE_FORMAT_YUV422},*/

             {ADDR_AND_LEN_OF_ARRAY(gc2145_snapshot_yuv_setting), PNULL, 0,
              .width = 1600, .height = 1200, .xclk_to_sensor = EX_MCLK,
              .image_format = SENSOR_IMAGE_FORMAT_YUV422}
#else
             {ADDR_AND_LEN_OF_ARRAY(gc2145_init_yuv_setting), PNULL, 0,
              .width = 0, .height = 0, .xclk_to_sensor = EX_MCLK,
              .image_format = SENSOR_IMAGE_FORMAT_RAW},

             /*	 {ADDR_AND_LEN_OF_ARRAY(gc2145_preview_yuv_setting), PNULL, 0,
                      .width = 800, .height = 600,
                      .xclk_to_sensor = EX_MCLK, .image_format =
                SENSOR_IMAGE_FORMAT_RAW},*/
             {ADDR_AND_LEN_OF_ARRAY(gc2145_snapshot_yuv_setting), PNULL, 0,
              .width = 1600, .height = 1200, .xclk_to_sensor = EX_MCLK,
              .image_format = SENSOR_IMAGE_FORMAT_RAW}
#endif
         }}
    /*If there are multiple modules,please add here*/
};

static SENSOR_TRIM_T s_gc2145_resolution_trim_tab[VENDOR_NUM] = {
    {.module_id = MODULE_SUNNY,
     .trim_info =
         {
             {0, 0, 0, 0, 0, 0, 0, {0, 0, 0, 0}},
             /*           {.trim_start_x = 0, .trim_start_y = 0,
                         .trim_width = 800,   .trim_height = 600,
                         .line_time = 40823, .bps_per_lane = 315,
                         .frame_line = 908,//1230,
                         .scaler_trim = {.x = 0, .y = 0, .w = 800, .h = 600}},*/
             {.trim_start_x = 0,
              .trim_start_y = 0,
              .trim_width = 1600,
              .trim_height = 1200,
              .line_time = 36954,  // 80071,//40000,//80071,//52775,
              .bps_per_lane = 480, // 432, // 416,//315,//52336
              .frame_line =
                  1252, // 1600,//2000,//1252,//2000,//1240, // 1224 ??
              .scaler_trim = {.x = 0, .y = 0, .w = 1600, .h = 1200}},
         }}

    /*If there are multiple modules,please add here*/
};

static const SENSOR_REG_T s_gc2145_800x600_video_tab[SENSOR_VIDEO_MODE_MAX][1] =
    {
        /*video mode 0: ?fps*/
        {{0xffff, 0xff}},
        /* video mode 1:?fps*/
        {{0xffff, 0xff}},
        /* video mode 2:?fps*/
        {{0xffff, 0xff}},
        /* video mode 3:?fps*/
        {{0xffff, 0xff}}};

static const SENSOR_REG_T
    s_gc2145_1600x1200_video_tab[SENSOR_VIDEO_MODE_MAX][1] = {
        /*video mode 0: ?fps*/
        {{0xffff, 0xff}},
        /* video mode 1:?fps*/
        {{0xffff, 0xff}},
        /* video mode 2:?fps*/
        {{0xffff, 0xff}},
        /* video mode 3:?fps*/
        {{0xffff, 0xff}}};

static SENSOR_VIDEO_INFO_T s_gc2145_video_info[] = {
    {{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}, PNULL},
    {{{30, 30, 544, 100}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}},
     (SENSOR_REG_T **)s_gc2145_800x600_video_tab},
    //{{{15, 15, 544, 100}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0,
    // 0}},(SENSOR_REG_T**)s_gc2145_1600x1200_video_tab},
    //{{{15, 15, 544, 100}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}},
    // (SENSOR_REG_T **)s_gc2145_1600x1200_video_tab},
    {{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}, PNULL},
    {{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}, PNULL},
    {{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}, PNULL},
    {{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}, PNULL},
    {{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}, PNULL},
    {{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}, PNULL}};

static SENSOR_STATIC_INFO_T s_gc2145_static_info[VENDOR_NUM] = {
    {.module_id = MODULE_SUNNY,
     .static_info = {.f_num = 220,
                     .focal_length = 346,
                     .max_fps = 0,
                     .max_adgain = 8,
                     .ois_supported = 0,
                     .pdaf_supported = 0,
                     .exp_valid_frame_num = 1,
                     .clamp_level = 0,
                     .adgain_valid_frame_num = 1,
                     .fov_info = {{4.614f, 3.444f}, 4.222f}}}
    /*If there are multiple modules,please add here*/
};

static SENSOR_MODE_FPS_INFO_T s_gc2145_mode_fps_info[VENDOR_NUM] = {
    {.module_id = MODULE_SUNNY,
     {.is_init = 0,
      {{SENSOR_MODE_COMMON_INIT, 0, 1, 0, 0},
       {SENSOR_MODE_PREVIEW_ONE, 0, 1, 0, 0},
       {SENSOR_MODE_SNAPSHOT_ONE_FIRST, 0, 1, 0, 0},
       {SENSOR_MODE_SNAPSHOT_ONE_SECOND, 0, 1, 0, 0},
       {SENSOR_MODE_SNAPSHOT_ONE_THIRD, 0, 1, 0, 0},
       {SENSOR_MODE_PREVIEW_TWO, 0, 1, 0, 0},
       {SENSOR_MODE_SNAPSHOT_TWO_FIRST, 0, 1, 0, 0},
       {SENSOR_MODE_SNAPSHOT_TWO_SECOND, 0, 1, 0, 0},
       {SENSOR_MODE_SNAPSHOT_TWO_THIRD, 0, 1, 0, 0}}}}
    /*If there are multiple modules,please add here*/
};

static struct sensor_module_info s_gc2145_module_info_tab[VENDOR_NUM] = {
    {.module_id = MODULE_SUNNY,
     .module_info = {.major_i2c_addr = GC2145_I2C_ADDR_W >> 1,
                     .minor_i2c_addr = GC2145_I2C_ADDR_W >> 1,

                     .reg_addr_value_bits = SENSOR_I2C_REG_8BIT |
                                            SENSOR_I2C_VAL_8BIT |
                                            SENSOR_I2C_FREQ_400,

                     .avdd_val = SENSOR_AVDD_2800MV,
                     .iovdd_val = SENSOR_AVDD_1800MV,
                     .dvdd_val = SENSOR_AVDD_1800MV,

#ifndef SENSOR_GC2145_RAW
                     .image_pattern = SENSOR_IMAGE_PATTERN_YUV422_YUYV,
#else
                     .image_pattern = SENSOR_IMAGE_PATTERN_RAWRGB_R,
#endif

                     .preview_skip_num = 1,
                     .capture_skip_num = 1,
                     .mipi_cap_skip_num = 0,
                     .preview_deci_num = 0,
                     .video_preview_deci_num = 0,

                     .threshold_eb = 0,
                     .threshold_mode = 0,
                     .threshold_start = 0,
                     .threshold_end = 0,

                     .sensor_interface =
                         {
                             .type = SENSOR_INTERFACE_TYPE_CSI2,
#ifdef GC2145_MIPI_2Lane
                             .bus_width = 2,
#else
                             .bus_width = 1,
#endif
#ifndef SENSOR_GC2145_RAW
                             .pixel_width = 8,
#else
                             .pixel_width = 8,
#endif
                             .is_loose = 0,
                         },

                     .change_setting_skip_num = 3,
                     .horizontal_view_angle = 48,
                     .vertical_view_angle = 48}}
    /*If there are multiple modules,please add here*/
};

static struct sensor_ic_ops s_gc2145_ops_tab;
struct sensor_raw_info *s_gc2145_mipi_raw_info_ptr = PNULL;
SENSOR_INFO_T g_gc2145_mipi_raw_info = {
    .hw_signal_polarity = SENSOR_HW_SIGNAL_PCLK_N | SENSOR_HW_SIGNAL_VSYNC_N |
                          SENSOR_HW_SIGNAL_HSYNC_P,

    .environment_mode = SENSOR_ENVIROMENT_NORMAL | SENSOR_ENVIROMENT_NIGHT,

    .image_effect = SENSOR_IMAGE_EFFECT_NORMAL |
                    SENSOR_IMAGE_EFFECT_BLACKWHITE | SENSOR_IMAGE_EFFECT_RED |
                    SENSOR_IMAGE_EFFECT_GREEN | SENSOR_IMAGE_EFFECT_BLUE |
                    SENSOR_IMAGE_EFFECT_YELLOW | SENSOR_IMAGE_EFFECT_NEGATIVE |
                    SENSOR_IMAGE_EFFECT_CANVAS,

    .wb_mode = 0,
    .step_count = 7,

    .reset_pulse_level = SENSOR_LOW_PULSE_RESET,
    .reset_pulse_width = 10,

    .power_down_level = SENSOR_HIGH_LEVEL_PWDN,

    .identify_count = 1,
    .identify_code = {{GC2145_PID_ADDR, GC2145_PID_VALUE},
                      {GC2145_VER_ADDR, GC2145_VER_VALUE}},

    .source_width_max = 1600,  // 1616,//1600,
    .source_height_max = 1200, // 1216,//1200,
    .name = (cmr_s8 *)SENSOR_NAME,

#ifndef SENSOR_GC2145_RAW
    .image_format = SENSOR_IMAGE_FORMAT_YUV422,
#else
    .image_format = SENSOR_IMAGE_FORMAT_RAW,
#endif

    .resolution_tab_info_ptr = s_gc2145_resolution_tab_raw,
    .sns_ops = &s_gc2145_ops_tab,
    .module_info_tab = s_gc2145_module_info_tab,
    .module_info_tab_size = ARRAY_SIZE(s_gc2145_module_info_tab),

    .raw_info_ptr = &s_gc2145_mipi_raw_info_ptr,
    .video_tab_info_ptr = s_gc2145_video_info,

    .sensor_version_info = (cmr_s8 *)"gc2145_v1",
};
//#endif
