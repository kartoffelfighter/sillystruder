/*
* overall stepper header file
* all functions are described here


*/

#ifndef __stepper_driver_h__
    #define __stepper_driver_h__

void disable_stepper(void);                 // turn off the stepper motor (and disable power on coils)
void enable_stepper(void);                  // enable stepper driver (enable power on coils)
int configure_stepper(int);                 // maybe needed configuration, pinmodes etc
void configure_stepper_speed(int speed);    // configure the hardware coded stepper speed (some librarys offer that functionality, since firmware decides which speed to use there is no use for this function now)
void step(int direction);                   // do a step in the passed direction

#endif