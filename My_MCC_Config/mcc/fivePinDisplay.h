#ifndef FIVEPINEDISPLAY_H
#define FIVEPINEDISPLAY_H

#include <stdint.h>
#include "mcc_generated_files/system/system.h"

void displayOncePlaceNum(uint8_t);
void displayTensPlaceNum(uint8_t);
void AllHighZ(void);

extern volatile uint8_t displayClock;
extern volatile uint8_t displayDelay;


#define DISPLAY_DELAY_SETTING	3

#endif