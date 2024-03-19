 /******************************************************************************
 *
 * File Name: GPIO_Interface.h
 *
 * Description: CContains function prototypes and their brief explanation related to GIPO
 *
 * Author: Mohamed Youssef
 *
 * Date : 19/3/2024
 *
 *******************************************************************************/



#ifndef GPIO_Interface_h
#define GPIO_Interface_h

#include "../../SERVICE/StandardTypes.h"
#include "../../SERVICE/BitMath.h"


/**************************                   Function Declaration                   **************************/

/*
*   @brief : this function is used to initailize an individual pin for GPIO by setting it as an Input pins or as an output pin
*   @args  : PORT_ID : PORTA | PORTB | PORTC | PORTD
             PIN_ID  : PIN0 | PIN1 | PIN2 ---------------> PIN7
             STATE : INPUT | OUTPUT
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void GPIO_SetPinDirection(uint8 PORT_ID, uint8 PIN_ID, uint8 STATE );






/*
*   @brief : this function is used to write on an individual pin for GPIO by setting it either logic high or logic low
*   @args  : PORT_ID : PORTA | PORTB | PORTC | PORTD
             PIN_ID  : PIN0 | PIN1 | PIN2 ---------------> PIN7
             STATE : LOGIC_HIGH | LOGIC_LOW
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void GPIO_SetPinValue(uint8 PORT_ID, uint8 PIN_ID, uint8 STATE);








/*
*   @brief : this function is used to read an individual pin from GPIO  by checking if its either logic high or logic low
*   @args  : PORT_ID : PORTA | PORTB | PORTC | PORTD
             PIN_ID  : PIN0 | PIN1 | PIN2 ---------------> PIN7
*   @return: returns 1 if it reads LOGIC_HIGH
             returns 0 if it reads LOGIC_LOW
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
uint8 GPIO_ReadPin(uint8 PORT_ID, uint8 PIN_ID);






/*
*   @brief : this function is used to toggls  an individual pin for GPIO by setting it either logic high or logic low
*   @args  : PORT_ID : PORTA | PORTB | PORTC | PORTD
             PIN_ID  : PIN0 | PIN1 | PIN2 ---------------> PIN7
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void GPIO_TogglePin(uint8 PORT_ID, uint8 PIN_ID);






/*
*   @brief : this function used to disable all pullup resistors
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void GPIO_DisableAllPullUpResistors(void);



#endif