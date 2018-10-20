/* ==================================================
====================  MACROS  =======================
====================================================*/
#ifndef MACROS_H__
    #define MACROS_H__

// log levels

#define PRODUKTION 100
#define TESTING 80
#define BETA 60
#define ALPHA 0

#define prefix_error "[ERROR]"     //99
#define prefix_warning "[WARNING]" //1
#define prefix_info "[INFO]"       //0

#define ERROR 99
#define WARNING 1
#define INFO 0



#define PRINTLN(v1) Serial.println(v1);
#define PRINT(v1) Serial.print(v1);

#define COMPILE_DATE __DATE__ + __TIME__


#endif