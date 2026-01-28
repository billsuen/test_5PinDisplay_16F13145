 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
? [2026] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "config_16F13145.h"
#include "fivePinDisplay.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/timer/tmr0_deprecated.h"
#include <stdio.h>
/*
    Main application
*/

char	buffer[8];

int main(void)
{
    SYSTEM_Initialize();

	ADC_ThresholdCallbackRegister(USER_ADC_THRESHOLD_ISR);
	TMR0_OverflowCallbackRegister(USER_TMR0_ISR);

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Enable the Peripheral Interrupts 
    INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 


    while(1)
    {
		/*
		if(IND_FlashCnt < IND_FLASH_DUTY)
		{
			IND_R_LAT = IND_ON;
			IND_Y_LAT = IND_OFF;
		}
		else
		{
			IND_R_LAT = IND_OFF;
			IND_Y_LAT = IND_ON;
		}
		*/

		num = (((tmpBATTvalue - 665)*100)/335);

		if(placePoint == ONCE_PLACE)
			displayOncePlaceNum(num % 10);
		else
			displayTensPlaceNum(num / 10);

		
		if(sendUART)
		{
			sendUART = CLEAR;
			//EUSART1_Write(tmpBATTvalue);
			//*
			sprintf(buffer, "%d\r\n", tmpVRvalue);
			for(uint8_t i=0; buffer[i] != '\0'; ++i)
			{
				while(!EUSART1_IsTxReady());   // 等待 Buffer 可傳送
				EUSART1_Write(buffer[i]);
			}
			//*/
			IND_R_LAT = IND_OFF;
		}
		
    }    
}