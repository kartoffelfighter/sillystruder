/*
* abstraktion layer for A4988 stepper driver
*
*/
#include <Arduino.h>

#include "hwconfig.h" // include necessary hardware config file
#include "pinconfig.h" 
#include "../config.h"


#ifdef stepper_A4988
#warning "Stepper driver: A4988"

void disable_stepper(void){                 // turn off the stepper motor (and disable power on coils)
    
}

void enable_stepper(void);                  // enable stepper driver (enable power on coils)
int configure_stepper(int);                 // maybe needed configuration, pinmodes etc
void configure_stepper_speed(int speed);    // configure the hardware coded stepper speed (some librarys offer that functionality, since firmware decides which speed to use there is no use for this function now)
void step(int direction);                   // do a step in the passed direction


#endif