#ifndef	CONFIG_16F13145_H
#define	CONFIG_16F13145_H

#include "mcc_generated_files/adc/adc_types.h"
#include "mcc_generated_files/system/system.h"
#include <stdint.h>
#include <stdbool.h>

void USER_TMR0_ISR(void);
void USER_ADC_THRESHOLD_ISR(void);

extern volatile uint16_t IND_FlashCnt;
extern volatile adc_result_t tmpBATTvalue;

extern volatile uint8_t num;
extern volatile uint8_t sampleDelayCnt;

extern volatile bool sendUART;

#define IND_FLASH_PERIOD	300
#define IND_FLASH_DUTY		150
#define SAMPLE_DELAY_SETTING	30

#define IND_ON	0
#define IND_OFF	1
#define SET		1
#define CLEAR	0


#endif	//CONFIG_16F13145_H