/*
* pin config file for sillystruder
(C) by marc fischer (marc@marcfischer.org)
*
*
* Version 1 (and above)

*/
#include "hwconfig.h" // config header

#ifndef pinconfig_h__
    #define pinconfig_h__


#ifdef pin_config_dev

#ifdef stepper_ULN
// ULN2003A Pins
    #define PinStepperPower 6
    #define PinStepperA     7
    #define PinStepperB     8
    #define PinStepperC     9
    #define PinStepperD     10
#endif //stepper_ULN

#ifdef endstop_switch       
// EndStop
    #define PinEndstop      3 // interrupt possible
#endif // endstop_switch

#ifdef rotary_encoder
// RotaryEncoder
// library: 
// https://github.com/0xPIT/encoder/tree/arduino

    #define PinRotaryEncoderA   A0  // common: GND
    #define PinRotaryEncoderB   A1
    #define PinRotaryEncoderPush    A2  // second: GND
#endif //RotaryEncoder

#ifdef emergency_off
// Emergency off
    //#define PinEmergencyOff   //needs to be interrupt capable
#endif //emergency_off

#ifdef display_16x2_serial
// display
// wiring: https://www.arduino.cc/en/Tutorial/LiquidCrystalDisplay

#define lcd_rs  12
#define lcd_en  11 
#define lcd_d4  5
#define lcd_d5  4
#define lcd_d6  3
#define lcd_d7  2

#endif //display_16x2_serial

#endif //pin config dev

#ifdef keypad_shield
// standard keypad shield for arduino uno
// define all onboard functions

#define display_16x2_serial
#define emergency_off

// lcd pin config
#define lcd_rs  8
#define lcd_en  9
#define lcd_d4  4
#define lcd_d5  5
#define lcd_d6  6
#define lcd_d7  7

// buttons are connected to A0
// treshhold values for Buttons

#define btn_right 50
#define btn_up 250
#define btn_down 450
#define btn_left 650
#define btn_select 850

#define btn_pin A0

// define pins for stepper driver (A4988)
#define stepper_impulse 2
#define stepper_dir 3


#endif


#ifndef stepper_impulse 
    #define stepper_impulse 2
#endif
#ifndef stepper_dir
    #define stepper_dir 3
#endif

#endif // double include protection