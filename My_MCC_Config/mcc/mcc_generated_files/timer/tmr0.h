/**
 * TMR0 Generated Driver API Header File
 * 
 * @file tmr0.h
 * 
 * @defgroup tmr08bit TMR0 in 8-Bit Mode
 * 
 * @brief This file contains API prototypes and other data types for the TMR0 driver.
 *
 * @version TMR0 Driver Version 3.0.0
 *
 * @version Package Version 5.0.0
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

#ifndef TMR0_H
#define TMR0_H

#include <stdint.h>
#include <stdbool.h>
#include "tmr0_deprecated.h"

/**
 * @misradeviation{@advisory,2.5}
 * MCC Melody drivers provide macros that can be added to an application. 
 * It depends on the application whether a macro is used or not. 
 */
 
/**
 * @ingroup tmr08bit
 * @brief Defines the maximum count value of the timer.
 */
#define TMR0_MAX_COUNT (255U)
/**
 * @ingroup tmr08bit
 * @brief Defines the timer prescaled clock frequency in hertz.
 */
/* cppcheck-suppress misra-c2012-2.5 */ 
#define TMR0_CLOCK_FREQ (250000UL)
/**
 * @ingroup tmr08bit
 * @brief Defines the timer interrupt ticker factor.
 */
#define TMR0_INTERRUPT_TICKER_FACTOR (1U)

/**
 * @ingroup tmr08bit
 * @brief Initializes the Timer0 (TMR0) module.
 *        This routine must be called before any other TMR0 routines.
 * @param None.
 * @return None.
 */
void TMR0_Initialize(void);

/**
 * @ingroup tmr08bit
 * @brief Deinitializes the TMR0 module.
 * @param None.
 * @return None.
 */
void TMR0_Deinitialize(void);

/**
 * @ingroup tmr08bit
 * @brief Starts the TMR0 timer.
 * @pre Initialize TMR0 with TMR0_Initialize() before calling this API.
 * @param None.
 * @return None.
 */
void TMR0_Start(void);

/**
 * @ingroup tmr08bit
 * @brief Stops the TMR0 timer.
 * @pre Initialize TMR0 with TMR0_Initialize() before calling this API.
 * @param None.
 * @return None.
 */
void TMR0_Stop(void);

/**
 * @ingroup tmr08bit
 * @brief Returns the current counter value.
 * @pre Initialize TMR0 with TMR0_Initialize() before calling this API.
 * @param None.
 * @return Counter value from the TMR0L register
 */
uint8_t TMR0_CounterGet(void);

/**
 * @ingroup tmr08bit
 * @brief Sets the counter value.
 * @pre Initialize TMR0 with TMR0_Initialize() before calling this API.
 * @param counterValue - Counter value to be written to the TMR0L register
 * @return None.
 */
void TMR0_CounterSet(uint8_t counterValue);

/**
 * @ingroup tmr08bit
 * @brief Sets the period value.
 * @pre Initialize TMR0 with TMR0_Initialize() before calling this API.
 * @param periodCount - Period count value written to the TMR0H register
 * @return None.
 */
void TMR0_PeriodSet(uint8_t periodCount);

/**
 * @ingroup tmr08bit
 * @brief Returns the current period value.
 * @pre Initialize TMR0 with TMR0_Initialize() before calling this API.
 * @param None.
 * @return Period count value from the TMR0H register
 */
uint8_t TMR0_PeriodGet(void);

/**
 * @ingroup tmr08bit
 * @brief Returns the maximum count value.
 * @param None.
 * @return Maximum count value
 */
uint8_t TMR0_MaxCountGet(void);

/**
 * @ingroup tmr08bit
 * @brief Enables the TMR0 interrupt.
 * @param None.
 * @return None.
 */
void TMR0_TMRInterruptEnable(void);

/**
 * @ingroup tmr08bit
 * @brief Disables the TMR0 interrupt.
 * @param None.
 * @return None.
 */
void TMR0_TMRInterruptDisable(void);

/**
 * @ingroup tmr08bit
 * @brief Interrupt Service Routine (ISR) for the TMR0 overflow or period match interrupt.
 * @param None.
 * @return None.
 */
void TMR0_ISR(void);

/**
 * @ingroup tmr08bit
 * @brief Registers a callback function for the TMR0 overflow or period match event.
 * @param CallbackHandler - Address to the custom callback function
 * @return None.
 */
void TMR0_PeriodMatchCallbackRegister(void (* CallbackHandler)(void));

#endif //TMR0_H