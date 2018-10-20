/*
eventlogging in firmware
*/
#include <Arduino.h>
#include <stdio.h>
#include "config.h"

#ifndef LOG_LEVEL
#define LOG_LEVEL 100
#warning "no log level defined. assuming production"
#endif

void log(char *errorstring, int prefix, int level)
{
    char *payload = {};
    if (level >= LOG_LEVEL)
    {
        if (LOG_SERIAL)
        {
            if (prefix == 0)
            {
                sprintf(payload, "%s: %s", prefix_info, errorstring);
            }
            if (prefix == 1)
            {
                sprintf(payload, "%s: %s", prefix_warning, errorstring);
            }
            if (prefix == 99)
            {
                sprintf(payload, "%s: %s", prefix_error, errorstring);
            }
            PRINTLN(payload);
        }
    }
}
