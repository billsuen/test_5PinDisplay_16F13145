#include "config_16F13145.h"
#include "fivePinDisplay.h"
#include <stdint.h>

volatile uint16_t	IND_FlashCnt = 0;
volatile uint8_t	displayClock = 0;
volatile uint8_t	displayDelay = 0;
volatile uint8_t	num = 0;

void USER_TMR0_ISR()
{
	IND_FlashCnt++;
	if(IND_FlashCnt >= IND_FLASH_PERIOD)
	{
		IND_FlashCnt = 0;

		num++;
		if(num > 100)
			num = 0;
	}

	displayDelay++;
	if(displayDelay >= DISPLAY_DELAY_SETTING)
	{
		displayDelay = 0;
		displayClock++;
	}
}

void USER_ADC_THRESHOLD_ISR()
{

}