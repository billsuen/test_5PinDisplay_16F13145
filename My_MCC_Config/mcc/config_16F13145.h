#ifndef	CONFIG_16F13145_H
#define	CONFIG_16F13145_H

#include "mcc_generated_files/system/system.h"
#include <stdint.h>

void USER_TMR0_ISR(void);
void USER_ADC_THRESHOLD_ISR(void);

extern volatile uint16_t IND_FlashCnt;

extern volatile uint8_t num;

#define IND_FLASH_PERIOD	300
#define IND_FLASH_DUTY		150

#define IND_ON	0
#define IND_OFF	1


#endif	//CONFIG_16F13145_H