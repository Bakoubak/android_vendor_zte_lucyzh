#
# Copyright (C) 2008 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

ifeq ($(strip $(TARGET_BOARD_CAMERA_DRE_PRO_CAPTURE)),true)
LOCAL_PATH := $(call my-dir)

LIB_PATH := lib

include $(CLEAR_VARS)
LOCAL_MODULE := libsprddrepro
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_MODULE_TAGS := optional
LOCAL_MULTILIB := both
LOCAL_MODULE_STEM_32 := $(LOCAL_MODULE).so
LOCAL_MODULE_STEM_64 := $(LOCAL_MODULE).so
LOCAL_SRC_FILES_32 := $(LIB_PATH)/libsprddrepro.so
LOCAL_SRC_FILES_64 := $(LIB_PATH)64/libsprddrepro.so

ifeq (1, $(strip $(shell expr $(ANDROID_MAJOR_VER) \>= 8)))
LOCAL_PROPRIETARY_MODULE := true
endif

include $(BUILD_PREBUILT)

### adapter ###
include $(CLEAR_VARS)
LOCAL_SRC_FILES := src/sprd_dre_adapter_pro.cpp
LOCAL_MODULE := libsprddreproadapter
LOCAL_MODULE_TAGS := optional
LOCAL_CFLAGS := -O3 -fno-strict-aliasing -fPIC -fvisibility=hidden
LOCAL_SHARED_LIBRARIES := libcutils liblog libsprddrepro

LOCAL_C_INCLUDES := \
         $(LOCAL_PATH)/inc \
         $(LOCAL_PATH)/../inc \
         $(TOP)/system/core/include/cutils/ \
         $(TOP)/system/core/include/

ifeq (1, $(strip $(shell expr $(ANDROID_MAJOR_VER) \>= 8)))
LOCAL_PROPRIETARY_MODULE := true
endif
include $(BUILD_SHARED_LIBRARY)

endif
