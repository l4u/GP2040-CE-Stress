/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include <GamepadEnums.h>
// This is the main pin definition section.
// This will let you specify which GPIO pin each button is assigned too.
// You can set any of the main pins as `-1` to disable it.
// The Turbo pin and LS + RS slider pins can also be set to `-1` to disable that functionality.
// Please note that only when `PIN_BUTTON_TURBO` is set to `-1` will the `T##` be removed from a connected display.
// Please note that only when `PIN_SLIDER_LS` and  `PIN_SLIDER_RS` are set to `-1` will the button combo shortcut for DP/LS/RS work.
// The buttons are listed in GP2040 configuration, beside each the listed order is *GP2040 / Xinput / Switch / PS3 / Directinput / Arcade*

#define PIN_DPAD_UP     26           // UP
#define PIN_DPAD_DOWN   28           // DOWN
#define PIN_DPAD_RIGHT  27           // RIGHT
#define PIN_DPAD_LEFT   29           // LEFT
#define PIN_BUTTON_B1   1           // B1 / A / B / Cross / 2 / K1
#define PIN_BUTTON_B2   3           // B2 / B / A / Circle / 3 / K2
#define PIN_BUTTON_R2   13           // R2 / RT / ZR / R2 / 8 / K3
#define PIN_BUTTON_L2   6           // L2 / LT / ZL / L2 / 7 / K4
#define PIN_BUTTON_B3   0          // B3 / X / Y / Square / 1 / P1
#define PIN_BUTTON_B4   2          // B4 / Y / X / Triangle / 4 / P2
#define PIN_BUTTON_R1   4          // R1 / RB / R / R1 / 6 / P3
#define PIN_BUTTON_L1   5          // L1 / LB / L / L1 / 5 / P4
#define PIN_BUTTON_S1   8           // S1 / Back / Minus / Select / 9 / Coin
#define PIN_BUTTON_S2   9           // S2 / Start / Plus / Start / 10 / Start
#define PIN_BUTTON_L3   12          // L3 / LS / LS / L3 / 11 / LS
#define PIN_BUTTON_R3   13          // R3 / RS / RS / R3 / 12 / RS
#define PIN_BUTTON_A1   14          // A1 / Guide / Home / PS / 13 / ~
#define PIN_BUTTON_A2   15          // A2 / ~ / Capture / ~ / 14 / ~
#define PIN_BUTTON_REVERSE -1       // UDLR Reverse
#define PIN_SLIDER_LS    -1         // Left Stick Slider
#define PIN_SLIDER_RS    -1         // Right Stick Slider


// This is the SOCD section.
// SOCD stands for `simultaneous opposing cardinal directions`.
// There are three options for `DEFAULT_SOCD_MODE` currently:
// 1 - `SOCD_MODE_NEUTRAL` - This is a neutral SOCD.  EG. when you press `up` + `down` no input will be registered.
// 2 - `SOCD_MODE_UP_PRIORITY` - This is up priority SOCD.  EG. when you press `up` + `down` `up` will be registered.
// 3 - `SOCD_MODE_SECOND_INPUT_PRIORITY` - This is last priority SOCD.  EG. when you press and hold `up` then press `down` `down` will be registered.

#define DEFAULT_SOCD_MODE SOCD_MODE_NEUTRAL


// This is the Analog section.
// In this section you can specify if Analog is enabled, and, if endabled, which pins will be used for it.
// The default for `ANALOG_ADC_VRX` and `ANALOG_ADC_VRY` is `-1` which disables them.
// To enable a `ANALOG_ADC_VRX` and `ANALOG_ADC_VRY`, replace the `-1` with the GPIO pin numbers that are desired.

#define ANALOG_ADC_VRX -1
#define ANALOG_ADC_VRY -1

// Dual Directional Add-on Options

#define PIN_DUAL_DIRECTIONAL_UP -1
#define PIN_DUAL_DIRECTIONAL_DOWN -1
#define PIN_DUAL_DIRECTIONAL_LEFT -1
#define PIN_DUAL_DIRECTIONAL_RIGHT -1
#define DUAL_DIRECTIONAL_STICK_MODE DPAD_MODE_DIGITAL
#define DUAL_DIRECTIONAL_COMBINE_MODE DUAL_COMBINE_MODE_MIXED

// BOOTSEL Button Add-on setting
#define BOOTSEL_BUTTON_MASK 0 // 0 means none, get other mask from GamepadState.h

// Extra Button Add-on setting
#define EXTRA_BUTTON_MASK 0 // 0 means none, get other mask from GamepadState.h
#define EXTRA_BUTTON_PIN -1

#endif
