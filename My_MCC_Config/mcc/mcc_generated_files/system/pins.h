/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IND_R_TRIS                 TRISAbits.TRISA0
#define IND_R_LAT                  LATAbits.LATA0
#define IND_R_PORT                 PORTAbits.RA0
#define IND_R_WPU                  WPUAbits.WPUA0
#define IND_R_OD                   ODCONAbits.ODCA0
#define IND_R_ANS                  ANSELAbits.ANSA0
#define IND_R_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IND_R_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IND_R_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IND_R_GetValue()           PORTAbits.RA0
#define IND_R_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IND_R_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IND_R_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IND_R_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IND_R_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IND_R_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IND_R_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define IND_R_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)
// get/set IO_RA1 aliases
#define IND_Y_TRIS                 TRISAbits.TRISA1
#define IND_Y_LAT                  LATAbits.LATA1
#define IND_Y_PORT                 PORTAbits.RA1
#define IND_Y_WPU                  WPUAbits.WPUA1
#define IND_Y_OD                   ODCONAbits.ODCA1
#define IND_Y_ANS                  ANSELAbits.ANSA1
#define IND_Y_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IND_Y_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IND_Y_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IND_Y_GetValue()           PORTAbits.RA1
#define IND_Y_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IND_Y_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IND_Y_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define IND_Y_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define IND_Y_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define IND_Y_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define IND_Y_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define IND_Y_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
// get/set IO_RA2 aliases
#define VIN_TRIS                 TRISAbits.TRISA2
#define VIN_LAT                  LATAbits.LATA2
#define VIN_PORT                 PORTAbits.RA2
#define VIN_WPU                  WPUAbits.WPUA2
#define VIN_OD                   ODCONAbits.ODCA2
#define VIN_ANS                  ANSELAbits.ANSA2
#define VIN_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define VIN_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define VIN_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define VIN_GetValue()           PORTAbits.RA2
#define VIN_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define VIN_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define VIN_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define VIN_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define VIN_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define VIN_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define VIN_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define VIN_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RA4 aliases
#define VR_TRIS                 TRISAbits.TRISA4
#define VR_LAT                  LATAbits.LATA4
#define VR_PORT                 PORTAbits.RA4
#define VR_WPU                  WPUAbits.WPUA4
#define VR_OD                   ODCONAbits.ODCA4
#define VR_ANS                  ANSELAbits.ANSA4
#define VR_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define VR_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define VR_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define VR_GetValue()           PORTAbits.RA4
#define VR_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define VR_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define VR_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define VR_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define VR_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define VR_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define VR_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define VR_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)
// get/set IO_RB5 aliases
#define RX_TRIS                 TRISBbits.TRISB5
#define RX_LAT                  LATBbits.LATB5
#define RX_PORT                 PORTBbits.RB5
#define RX_WPU                  WPUBbits.WPUB5
#define RX_OD                   ODCONBbits.ODCB5
#define RX_ANS                  ANSELBbits.ANSB5
#define RX_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RX_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RX_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RX_GetValue()           PORTBbits.RB5
#define RX_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RX_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RX_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define RX_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define RX_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define RX_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define RX_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define RX_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RB6 aliases
#define TX_TRIS                 TRISBbits.TRISB6
#define TX_LAT                  LATBbits.LATB6
#define TX_PORT                 PORTBbits.RB6
#define TX_WPU                  WPUBbits.WPUB6
#define TX_OD                   ODCONBbits.ODCB6
#define TX_ANS                  ANSELBbits.ANSB6
#define TX_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define TX_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define TX_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define TX_GetValue()           PORTBbits.RB6
#define TX_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define TX_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define TX_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define TX_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define TX_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define TX_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define TX_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define TX_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)
// get/set IO_RC0 aliases
#define PIN1_TRIS                 TRISCbits.TRISC0
#define PIN1_LAT                  LATCbits.LATC0
#define PIN1_PORT                 PORTCbits.RC0
#define PIN1_WPU                  WPUCbits.WPUC0
#define PIN1_OD                   ODCONCbits.ODCC0
#define PIN1_ANS                  ANSELCbits.ANSC0
#define PIN1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define PIN1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define PIN1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define PIN1_GetValue()           PORTCbits.RC0
#define PIN1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define PIN1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define PIN1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define PIN1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define PIN1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define PIN1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define PIN1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define PIN1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC1 aliases
#define PIN2_TRIS                 TRISCbits.TRISC1
#define PIN2_LAT                  LATCbits.LATC1
#define PIN2_PORT                 PORTCbits.RC1
#define PIN2_WPU                  WPUCbits.WPUC1
#define PIN2_OD                   ODCONCbits.ODCC1
#define PIN2_ANS                  ANSELCbits.ANSC1
#define PIN2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define PIN2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define PIN2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define PIN2_GetValue()           PORTCbits.RC1
#define PIN2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define PIN2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define PIN2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define PIN2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define PIN2_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define PIN2_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define PIN2_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define PIN2_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
// get/set IO_RC2 aliases
#define PIN3_TRIS                 TRISCbits.TRISC2
#define PIN3_LAT                  LATCbits.LATC2
#define PIN3_PORT                 PORTCbits.RC2
#define PIN3_WPU                  WPUCbits.WPUC2
#define PIN3_OD                   ODCONCbits.ODCC2
#define PIN3_ANS                  ANSELCbits.ANSC2
#define PIN3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define PIN3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define PIN3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define PIN3_GetValue()           PORTCbits.RC2
#define PIN3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define PIN3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define PIN3_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define PIN3_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define PIN3_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define PIN3_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define PIN3_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define PIN3_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define PIN4_TRIS                 TRISCbits.TRISC3
#define PIN4_LAT                  LATCbits.LATC3
#define PIN4_PORT                 PORTCbits.RC3
#define PIN4_WPU                  WPUCbits.WPUC3
#define PIN4_OD                   ODCONCbits.ODCC3
#define PIN4_ANS                  ANSELCbits.ANSC3
#define PIN4_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define PIN4_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define PIN4_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define PIN4_GetValue()           PORTCbits.RC3
#define PIN4_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define PIN4_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define PIN4_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define PIN4_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define PIN4_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define PIN4_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define PIN4_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define PIN4_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC4 aliases
#define PIN5_TRIS                 TRISCbits.TRISC4
#define PIN5_LAT                  LATCbits.LATC4
#define PIN5_PORT                 PORTCbits.RC4
#define PIN5_WPU                  WPUCbits.WPUC4
#define PIN5_OD                   ODCONCbits.ODCC4
#define PIN5_ANS                  ANSELCbits.ANSC4
#define PIN5_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define PIN5_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define PIN5_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define PIN5_GetValue()           PORTCbits.RC4
#define PIN5_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define PIN5_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define PIN5_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define PIN5_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define PIN5_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define PIN5_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define PIN5_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define PIN5_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/