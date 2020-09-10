/*
 * Copyright (C) 2019 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the MIT License (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://opensource.org/licenses/MIT
 * Unless required by applicable law or agreed to in writing, software distributed under the License is
 * distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef QCLOUD_BLE_QIOT_CONFIG_H
#define QCLOUD_BLE_QIOT_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdint.h>
#include "SEGGER_RTT.h"

#define BLE_QIOT_SDK_VERSION "1.0.0"  // sdk version

#define BLE_QIOT_SDK_DEBUG 1  // sdk debug switch

#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_BIG_ENDIAN__    4321
#define __BYTE_ORDER__          __ORDER_LITTLE_ENDIAN__

#define BLE_QIOT_POST_BASE64    1

#define BLE_QIOT_DEBUG_PRINT(...) SEGGER_RTT_printf(0, __VA_ARGS__)
#define BLE_QIOT_INFO_PRINT(...)  SEGGER_RTT_printf(0, __VA_ARGS__)
#define BLE_QIOT_WARN_PRINT(...)  SEGGER_RTT_printf(0, __VA_ARGS__)
#define BLE_QIOT_ERROR_PRINT(...) SEGGER_RTT_printf(0, __VA_ARGS__)
#define BLE_QIOT_HEX_PRINT(hex_name, data, data_len)  HexDump(hex_name, data, data_len)

#define BLE_QIOT_RECORD_FLASH_ADDR     0x7e000 // qiot data storage address
#define BLE_QIOT_RECORD_FLASH_PAGESIZE 4096    // flash page size, see chip datasheet
#define BLE_QIOT_RECORD_FLASH_PAGENUM  2       // how many pages qiot use

#define BLE_QIOT_BIND_TIMEOUT (2 * 60 * 1000) // bind timeout unit: ms

#ifdef __cplusplus
}
#endif

#endif  // QCLOUD_BLE_QIOT_CONFIG_H
