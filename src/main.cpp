#include <Arduino.h>
/* sillystruder (silicone-extruder)
* developed by marc fischer (marc@marcfischer.org)
* general hardware settings:
* ./abstraction/hwconfig.h
* pin configuration:
* ./abstraction/pinconfig.h

* documentation: markdown 

* Version: -> config.h*/

#include "./abstraction/hwconfig.h" // general hardware configuration + firmware related files
//#include "./algo/algorithm.h" // algorithm related config + algorithms
#include "config.h" // general config




void setup() {
    Serial.begin(BAUD);
    
}

void loop() {
    // put your main code here, to run repeatedly:
}