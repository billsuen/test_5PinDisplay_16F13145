#ifndef FIVEPINEDISPLAY_H
#define FIVEPINEDISPLAY_H

#include <stdint.h>
#include "mcc_generated_files/system/system.h"

void displayOncePlaceNum(uint8_t);
void displayTensPlaceNum(uint8_t);
void AllHighZ(void);

extern volatile uint8_t displayClock;
extern volatile uint8_t displayDelay;

extern bool placePoint;

#define DISPLAY_DELAY_SETTING	2
#define ONCE_PLACE	0
#define TENS_PLACE	1

#endif