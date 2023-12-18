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
#ifndef _vm242_H_
#define _vm242_H_

#define VM242_POWERON_DELAY 5 // ms

static int _vm242_drv_power_on(cmr_handle sns_af_drv_handle, uint16_t power_on);
static int vm242_drv_set_mode(cmr_handle sns_af_drv_handle);
static int vm242_drv_create(struct af_drv_init_para *input_ptr,
                            cmr_handle *sns_af_drv_handle);
static int vm242_drv_delete(cmr_handle sns_af_drv_handle, void *param);
static int vm242_drv_set_pos(cmr_handle sns_af_drv_handle, uint16_t pos);
static int vm242_drv_ioctl(cmr_handle sns_af_drv_handle, enum sns_cmd cmd,
                           void *param);

#endif
