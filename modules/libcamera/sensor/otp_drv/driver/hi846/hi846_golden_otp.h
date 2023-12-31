/*
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * V1.0
 */
/*History
*Date                  Modification                                 Reason
*
*/

#ifndef HI846_GOLDEN_OTP_H_
#define HI846_GOLDEN_OTP_H_

#include "otp_common.h"

static awb_target_packet_t hi846_awb[AWB_MAX_LIGHT] = {
    {
        .R = 0x00,
        .G = 0x00,
        .B = 0x00,
        .rg_ratio = 0x104,
        .bg_ratio = 0x140,
        .GrGb_ratio = 0x200,
    },
};

static uint16_t hi846_lsc[] = {

};

#endif
