/*
* sillystruder *
* (C) marc fischer (marc@marcfischer.org)

* Hardware Config *
* Version: 1 (and above)
*/

#ifndef HWCONFIG_H__    // prevent double include
    #define HWCONFIG_H__

// pin configuration
//#define pin_config_dev  // pin config for dev board
#define keypad_shield   // use cheap chinese keypad shield with buttons connected to A0 & mounted lcd

// stepper driver
#define stepper_ULN //ULN2003 stepper driver


// liquid crystal display
#define display_16x2_serial // standard, cheap 16x2 character display for interfacing

// buttons etc
//#define rotary_encoder  // rotary encoder for user interaction
//#define emergency_off   // emergency off button (prio ISR)
//#define endstop_switch // hardware endstop switch is used
// interface
#define USB // sending S-codes via USB connection
#define SD  // S-code files on SD-card

#include "pinconfig.h"  // external pin config file
#endif