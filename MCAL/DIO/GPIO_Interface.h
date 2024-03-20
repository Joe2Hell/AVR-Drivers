 /******************************************************************************
 *
 * File Name: GPIO_Interface.h
 *
 * Description: Contains function prototypes and their brief explanation related to GPIO
 * 
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 19/3/2024
 *
 *******************************************************************************/



#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

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
void M_GPIO_Void_SetPinDirection(uint8 PORT_ID, uint8 PIN_ID, uint8 STATE );






/*
*   @brief : this function is used to write on an individual pin for GPIO by setting it either logic high or logic low
*   @args  : PORT_ID : PORTA | PORTB | PORTC | PORTD
             PIN_ID  : PIN0 | PIN1 | PIN2 ---------------> PIN7
             STATE : LOGIC_HIGH | LOGIC_LOW
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_GPIO_Void_SetPinValue(uint8 PORT_ID, uint8 PIN_ID, uint8 STATE);








/*
*   @brief : this function is used to read an individual pin from GPIO  by checking if its either logic high or logic low
*   @args  : PORT_ID : PORTA | PORTB | PORTC | PORTD
             PIN_ID  : PIN0 | PIN1 | PIN2 ---------------> PIN7
*   @return: returns 1 if it reads LOGIC_HIGH
             returns 0 if it reads LOGIC_LOW
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
uint8 M_GPIO_uint8_ReadPin(uint8 PORT_ID, uint8 PIN_ID);






/*
*   @brief : this function is used to toggls  an individual pin for GPIO by setting it either logic high or logic low
*   @args  : PORT_ID : PORTA | PORTB | PORTC | PORTD
             PIN_ID  : PIN0 | PIN1 | PIN2 ---------------> PIN7
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_GPIO_Void_TogglePin(uint8 PORT_ID, uint8 PIN_ID);






/*
*   @brief : this function used to disable all pullup resistors
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_GPIO_Void_DisableAllPullUpResistors(void);



#endif