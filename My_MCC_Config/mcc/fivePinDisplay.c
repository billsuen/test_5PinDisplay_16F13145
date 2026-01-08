#include "fivePinDisplay.h"
#include "mcc_generated_files/system/pins.h"

bool placePoint = ONCE_PLACE;

void displayOncePlaceNum(uint8_t number)
{
	switch(number)
	{
		case 0:
			switch(displayClock)
			{
				case 0:
					PIN5_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN3_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 2:
					PIN4_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN5_SetDigitalOutput();	PIN5_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 3:
					PIN5_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = TENS_PLACE;
			}
			break;

		case 1:
			switch(displayClock)
			{
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN3_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 2:
					PIN4_SetDigitalInput();	PIN2_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN5_SetDigitalOutput();	PIN5_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = TENS_PLACE;
			}
			break;
			
		case 2:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN3_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN3_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 2:
					PIN4_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN5_SetDigitalOutput();	PIN5_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 3:
					PIN4_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = TENS_PLACE;
			}
			break;
		
		case 3:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN3_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 2:
					PIN4_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN5_SetDigitalOutput();	PIN5_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 3:
					PIN4_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalOutput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = TENS_PLACE;
			}
			break;
		
		case 4:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN3_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 2:
					AllHighZ();
					break;
				case 3:
					PIN5_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 4:
					PIN4_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = TENS_PLACE;
			}
			break;
		
		case 5:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetHigh();
					break;
				case 1:
					AllHighZ();
					break;
				case 2:
					PIN4_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN5_SetDigitalOutput();	PIN5_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 3:
					PIN5_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 4:
					PIN4_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = TENS_PLACE;
			}
			break;
		
		case 6:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetHigh();
					break;
				case 1:
					PIN4_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN5_SetDigitalOutput();	PIN5_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 2:
					PIN5_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 3:
					PIN4_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break; 
				default:
					displayClock = 0;
					placePoint = TENS_PLACE;
			}
			break;
		
		case 7:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN3_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 2:
					PIN4_SetDigitalInput();	PIN2_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN5_SetDigitalOutput();	PIN5_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = TENS_PLACE;
			}
			break;
		
		case 8:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN3_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 2:
					PIN4_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN5_SetDigitalOutput();	PIN5_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 3:
					PIN5_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 4:
					PIN4_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = TENS_PLACE;
			}
			break;
		
		case 9:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN1_SetDigitalOutput();	PIN1_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN3_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 2:
					PIN4_SetDigitalInput();	PIN2_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN5_SetDigitalOutput();	PIN5_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 3:
					PIN5_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 4:
					PIN4_SetDigitalInput();	PIN3_SetDigitalInput();	PIN2_SetDigitalInput();
					PIN1_SetDigitalOutput();	PIN1_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = TENS_PLACE;
			}
			break;
		
		default:
			AllHighZ();
			break;
	}
}

void displayTensPlaceNum(uint8_t number)
{
	switch(number){
		case 1:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN2_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = ONCE_PLACE;
			}
			break;
		case 2:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 2:
					PIN5_SetDigitalInput();	PIN3_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 3:
					PIN3_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = ONCE_PLACE;
			}
			break;
		case 3:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 2:
					PIN5_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 3:
					PIN3_SetDigitalInput();	PIN2_SetDigitalInput(); PIN1_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = ONCE_PLACE;
			}
			break;
		case 4:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN2_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 2:
					PIN2_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = ONCE_PLACE;
			}
			break;
		case 5:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 1:
					AllHighZ();
					break;
				case 2:
					PIN5_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 3:
					PIN2_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = ONCE_PLACE;
			}
			break;
		case 6:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 2:
					PIN1_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = ONCE_PLACE;
			}
			break;
		case 7:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 2:
					PIN5_SetDigitalInput();	PIN2_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = ONCE_PLACE;
			}
			break;
		case 8:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 2:
					PIN5_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 3:
					PIN1_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = ONCE_PLACE;
			}
			break;
		case 9:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 2:
					PIN5_SetDigitalInput();	PIN2_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 3:
					PIN2_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = ONCE_PLACE;
			}
			break;
		case 10:
			switch(displayClock){
				case 0:
					PIN5_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetHigh();
					break;
				case 1:
					PIN5_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN4_SetDigitalOutput();	PIN4_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN3_SetDigitalOutput();	PIN3_SetHigh();
					break;
				case 2:
					PIN5_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN4_SetDigitalOutput();	PIN4_SetHigh();
					break;
				case 3:
					PIN4_SetDigitalInput();	PIN1_SetDigitalInput();
					PIN3_SetDigitalOutput();	PIN3_SetLow();
					PIN2_SetDigitalOutput();	PIN2_SetLow();
					PIN5_SetDigitalOutput();	PIN5_SetHigh();
					break;
				default:
					displayClock = 0;
					placePoint = ONCE_PLACE;
			}
			break;
		default:
			AllHighZ();
			placePoint = ONCE_PLACE;
			break;
	}
}

void AllHighZ(void)
{
	PIN5_SetDigitalInput();
	PIN4_SetDigitalInput();
	PIN3_SetDigitalInput();
	PIN2_SetDigitalInput();
	PIN1_SetDigitalInput();
}