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
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_Timer0_Void_Init(void);


/*
*   @brief : this function is used write preload to timer/counter register, if set to 200, timer will begin counting from 200 till reaching 255
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_Timer0_Write_Preload(void);




#endif