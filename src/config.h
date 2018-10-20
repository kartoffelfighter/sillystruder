/* sillystruder general config file */
#include "macros.h"

#ifndef CONFIG_H__
    #define CONFIG_H__

/* ==================================================
====================  GENERAL  ======================
====================================================*/
#define VERSION 100
#define language en // en possible
#include "lang/lang.h"

/* ==================================================
====================  Serial  =======================
====================================================*/
#define BAUD 9600

/* ==================================================
================ stepper config =====================
====================================================*/

#define steps_per_rev 200
#define steps_per_mm 1
#define steps_per_ml steps_per_mm * 12
#define speed_multiplicator 1.00  
#define flowrate_multiplicator 1.00


/* ==================================================
====================  LOGGING  ======================
====================================================*/
#define LOG_LEVEL ALPHA // log barely everything
#define LOG_SERIAL true     // log errors to configured Serial
//#define LOG_SD          // log errors to logfile to SD-card



#endif //COFNIG_H__