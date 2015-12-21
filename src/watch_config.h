#pragma once

#define USE_GENERIC_MAIN
#undef REMOVE_LEADING_ZERO_FROM_TIME  /* 12 hour display will not have a leading "0" if this is defined */
#undef FONT_NAME
#undef FONT_SYSTEM_NAME  /* the default font system will be used */
#undef DEBUG_TIME

#define BG_IMAGE RESOURCE_ID_IMAGE_MAIN
/* storm_trooper_pebble_time_144x155  */
#define IMAGE_RES_X 123  /* NOTE if image res changes - this needs to change too! */
#define IMAGE_RES_Y 132  /* NOTE if image res changes - this needs to change too! */


#define BT_DISCONNECT_IMAGE RESOURCE_ID_IMAGE_BT_DISCONNECT

//#define NO_BATTERY
//#define NO_DATE

//#define FONT_SYSTEM_NAME FONT_KEY_BITHAM_30_BLACK /* works well if 144x144 image is used above, little wasted space */

#define BAT_FMT_STR "%d%%"

#define DATE_FMT_STR "%b\n%d"  /* TODO review %d for day */
#define MAX_DATE_STR "00\nAug"  /* if custom version of DATE_FMT_STR is set, MAX_DATE_STR  needs to be updated too */


#ifdef PBL_ROUND /* 180x180 */
    /* Image at top of screen, centered horizontally */
    #define BG_IMAGE_GRECT GRect((180 - IMAGE_RES_X) / 2, 0, IMAGE_RES_X, IMAGE_RES_Y)

    #define CLOCK_POS GRect(0, 136, 180, 180) /* bottom of screen for FONT_KEY_BITHAM_30_BLACK */

/*TODO center/move right*/
    #define BT_POS GRect(0, 100, 180, 180) /* probably taller than really needed */

    #define DATE_ALIGN GTextAlignmentCenter
    #define DATE_POS GRect(0, 120, 180, 180) /* probably taller than really needed */

    #define BAT_ALIGN GTextAlignmentCenter
    #define BAT_POS GRect(0, 140, 180, 180) /* probably taller than really needed */
#else /* PBL_RECT 144x168*/
    /* Image at top of screen, centered horizontally */
    #define BG_IMAGE_GRECT GRect((144 - IMAGE_RES_X) / 2, 0,  IMAGE_RES_X, IMAGE_RES_Y)  // use same size as image. On Aplite can determine this at runtime but not Basalt

    //#define CLOCK_POS GRect(0, 136, 144, 168) /* bottom of screen for FONT_KEY_BITHAM_30_BLACK */
    #define CLOCK_POS GRect(0, 118, 144, 168) /* bottom of screen for FONT_KEY_ROBOTO_BOLD_SUBSET_49 with one pixel border on bottom */

    //#define BT_DISCONNECT_IMAGE_GRECT GRect(144 - 20, 138, 20, 30)
    #define BT_DISCONNECT_IMAGE_GRECT GRect(144 - 20, 168 - (2 * 30 + 4), 20, 30)

    #define BT_POS GRect(0, 120, 144, 168) /* probably taller than really needed */
    #define DATE_POS GRect(0, 0, 144, 168) /* probably taller than really needed */
    #define BAT_POS GRect(0, 0, 144, 168) /* probably taller than really needed */
#endif /* end of Round or rectangle */

/* for screen shots and font testing
#define DEBUG_TIME
#define DEBUG_TIME_SCREENSHOT
 */
