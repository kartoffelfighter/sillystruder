/*
* abstraktion layer for ULN stepper driver
*
*/
#include <Arduino.h>

#include "hwconfig.h" // include necessary hardware config file
#include "pinconfig.h" 
#include "../config.h"


#ifdef stepper_ULN
#include <Stepper.h> // Arduino has a Stepper library for ULN2003..


Stepper stepl(steps_per_rev, PinStepperA, PinStepperB, PinStepperC, PinStepperD);

/*
Theory:
the ULN2003A drives a unipolar stepper.
Therefore for a step are 8 needed cycles:
    1   2   3   4   5   6   7   8
A   +   +                       +
B       +   +   +
C               +   +   +
D                       +   +   +

a coil is set to high three cycles, the first and the last are overlapping with the coil before and after

*/

void disable_stepper(void){ // write zeros to all stepper pins
    digitalWrite(PinStepperPower, 0);
    digitalWrite(PinStepperA, 0);
    digitalWrite(PinStepperB, 0);
    digitalWrite(PinStepperC, 0);
    digitalWrite(PinStepperD, 0);

}

void enable_stepper(void){
    digitalWrite(PinStepperPower, 1);
}

int configure_stepper(int){
    // set pinmodes of stepper related pins to output
    pinMode(PinStepperPower, 1);
    pinMode(PinStepperA, 1);
    pinMode(PinStepperB, 1);
    pinMode(PinStepperC, 1);
    pinMode(PinStepperD, 1);
    disable_stepper();
    return 1;
}

void configure_stepper_speed(int speed){
    stepl.setSpeed(speed);      // just use function for setting rpms provided by lib
}

void step(int direction) {
    // called by algorithm
    // does one step in the given direction
    // switch direction 0 = forwards, 1 = backwards

    if(direction == 0)
    {
        stepl.step(1);  // do one step forwards
    }
    else 
    if(direction == 1)
    {
        stepl.step(-1); // do one step backwards
    }
    else {
       //log(ERROR_SET_WRONG_STEP_DIR, ERROR, 100);
    }
    return;
}

#endif