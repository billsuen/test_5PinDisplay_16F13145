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
extern volatile adc_result_t tmpVRvalue;

extern volatile uint8_t num;
extern volatile uint8_t sampleDelayCnt;
extern volatile	uint8_t	ADC_pointer;

extern volatile bool	sendUART;


#define IND_FLASH_PERIOD	100
#define IND_FLASH_DUTY		(IND_FLASH_PERIOD / 2)
#define SAMPLE_DELAY_SETTING	10

#define IND_ON	0
#define IND_OFF	1
#define SET		1
#define CLEAR	0
#define	POINT_TO_VR		0
#define	POINT_TO_BATT	1


#endif	//CONFIG_16F13145_H