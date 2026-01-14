#include "config_16F13145.h"
#include "fivePinDisplay.h"
#include "mcc_generated_files/adc/adc.h"
#include "mcc_generated_files/adc/adc_types.h"
#include "mcc_generated_files/system/pins.h"
#include <stdint.h>

volatile adc_result_t	tmpBATTvalue = 0;
volatile adc_result_t	tmpVRvalue = 0;
volatile uint16_t	IND_FlashCnt = 0;
volatile uint8_t	displayClock = 0;
volatile uint8_t	displayDelay = 0;
volatile uint8_t	sampleDelayCnt = 0;
volatile uint8_t	num = 0;
volatile uint8_t	ADC_pointer = POINT_TO_VR;
volatile bool		sendUART = 0;


void USER_TMR0_ISR()
{
	sampleDelayCnt++;
	if(sampleDelayCnt >= SAMPLE_DELAY_SETTING)
	{
		sampleDelayCnt = 0;
		if(ADC_pointer == POINT_TO_VR)
		{
			ADC_ChannelSelect(VR);
			ADC_ConversionStart();
		}
		else
		{
			ADC_ChannelSelect(BATT);
			ADC_ConversionStart();
		}
	}

	IND_FlashCnt++;
	if(IND_FlashCnt >= IND_FLASH_PERIOD)
	{
		IND_FlashCnt = 0;

		//sendUART = SET;
		//IND_R_LAT = IND_ON;
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
	//tmpBATTvalue = ADC_FilterValueGet();
	//if(ADC_FilterValueGet() == 0)
	//{
		switch(ADC_pointer)
		{
			case POINT_TO_VR:
				tmpVRvalue = ADC_FilterValueGet();
				ADC_pointer = POINT_TO_BATT;
				sendUART = SET;
				IND_R_LAT = IND_ON;
				break;
		
			case POINT_TO_BATT:
				tmpBATTvalue = ADC_FilterValueGet();
				ADC_pointer = POINT_TO_VR;
				break;
			//default:
				//ADC_pointer = POINT_TO_VR;
		}
	//}
}