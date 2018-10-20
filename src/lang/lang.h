/* language selector
*/

#ifndef LANG_H__
    #define LANG_H__

    #ifndef language
        #define language en
    #endif

    #if language == en
        #include "en.h"
    #endif
    #if language == de
        #include "de.h"
    #endif

#endif  // LANG_H__