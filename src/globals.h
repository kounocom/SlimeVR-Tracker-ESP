/*
	SlimeVR Code is placed under the MIT license
	Copyright (c) 2021 Eiren Rain

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	THE SOFTWARE.
*/
#pragma once

#include <Arduino.h>

#include "consts.h"
#include "debug.h"
#include "defines.h"

// clang-format off
#include "boards/boards_default.h"
// clang-format on

#ifndef SECOND_IMU
#define SECOND_IMU IMU
#endif

#ifndef SECOND_IMU_ROTATION
#define SECOND_IMU_ROTATION IMU_ROTATION
#endif

#ifndef BATTERY_MONITOR
#define BATTERY_MONITOR BAT_INTERNAL
#endif

#ifndef SENSOR_INFO_LIST
#define SENSOR_INFO_LIST
#endif

// Experimental features
#ifndef EXPERIMENTAL_BNO_DISABLE_ACCEL_CALIBRATION
#define EXPERIMENTAL_BNO_DISABLE_ACCEL_CALIBRATION true
#endif

#ifndef VENDOR_NAME
#define VENDOR_NAME "Unknown"
#endif

#ifndef VENDOR_URL
#define VENDOR_URL ""
#endif

#ifndef PRODUCT_NAME
#define PRODUCT_NAME "DIY SlimeVR Tracker"
#endif

#ifndef UPDATE_ADDRESS
#define UPDATE_ADDRESS ""
#endif

#ifndef UPDATE_NAME
#define UPDATE_NAME ""
#endif
