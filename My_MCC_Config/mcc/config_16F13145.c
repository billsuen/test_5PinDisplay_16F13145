#include "config_16F13145.h"
#include "fivePinDisplay.h"
#include "mcc_generated_files/adc/adc_types.h"
#include <stdint.h>

volatile adc_result_t	tmpBATTvalue = 0;
volatile uint16_t	IND_FlashCnt = 0;
volatile uint8_t	displayClock = 0;
volatile uint8_t	displayDelay = 0;
volatile uint8_t	sampleDelayCnt = 0;
volatile uint8_t	num = 0;
volatile bool		sendUART = 0;

void USER_TMR0_ISR()
{
	sampleDelayCnt++;
	if(sampleDelayCnt >= SAMPLE_DELAY_SETTING)
	{
		sampleDelayCnt = 0;
		ADC_ConversionStart();
	}

	IND_FlashCnt++;
	if(IND_FlashCnt >= IND_FLASH_PERIOD)
	{
		IND_FlashCnt = 0;

		//sendUART = SET;
		/*
		num++;	//plus every 300 msec.
		if(num > 100)
			num = 0;
		*/
	}

	displayDelay++;
	if(displayDelay >= DISPLAY_DELAY_SETTING)
	{
		displayDelay = 0;
		displayClock++;	//every 2 msec to change the display.
	}
}

void USER_ADC_THRESHOLD_ISR()
{
	tmpBATTvalue = ADC_FilterValueGet();
}