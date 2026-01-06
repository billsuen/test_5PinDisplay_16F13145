#include "config_16F13145.h"
#include <stdint.h>

volatile uint16_t IND_FlashCnt = 0;

void USER_TMR0_ISR()
{
	IND_FlashCnt++;
	if(IND_FlashCnt >= IND_FLASH_PERIOD)
		IND_FlashCnt = 0;
}

void USER_ADC_THRESHOLD_ISR()
{

}