 /******************************************************************************
 *
 * File Name: Timer_Interface.h
 *
 * Description: Contains function prototypes and their brief explanation related to Timer 0 and 1
 *
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 23/3/2024
 *
 *******************************************************************************/
#ifndef TIMER_INTERFACE_H
#define TIMER_INTERFACE_H

#include "../../SERVICE/BitMath.h"
#include "../../SERVICE/StandardTypes.h"
#include "../../SERVICE/InterruptVectorTable.h"

/**************************                   Function Declaration                   **************************/

/*
*   @brief : this function is used to initailize Timer 0
*   @args  : timer mode
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_Timer0_Void_Init(uint8);

/*
*   @brief : this function is used to initailize Prescaler of Timer 0
*   @args  : Prescaler mode
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_Timer0_Void_PrescalerInit(uint8);


/*
*   @brief : this function is used write preload to timer/counter register, if set to 200, timer will begin counting from 200 till reaching 255
*   @args  : the preload value
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_Timer0_Write_Preload(uint8);


/*
*   @brief : this function is used write compare match value to timer/counter register, if set to 200, timer will begin counting from 0 till reaching 200
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_Timer0_Write_CmpMatchValue(uint8);

/*
*   @brief : this function is used as a callback for timer0 normal mode
*   @args  : the compare match value
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_Timer0_Void_NCallback(void(*Local_PTR)(void));

/*
*   @brief : this function is used as a callback for timer0 CTC mode
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_Timer0_Void_CTCCallback(void(*Local_PTR)(void));

#endif
