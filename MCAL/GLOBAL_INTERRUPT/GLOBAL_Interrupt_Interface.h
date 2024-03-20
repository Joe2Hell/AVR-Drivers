 /******************************************************************************
 *
 * File Name: GLOBAL_Interrupt_Interface.h
 *
 * Description: Contains function prototypes and their brief explanation related to External interrupts
 *
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 19/3/2024
 *
 *******************************************************************************/

#ifndef GLOBAL_INTERRUPT_INTERFACE_H
#define GLOBAL_INTERRUPT_INTERFACE_H


#include "../../SERVICE/BitMath.h"
#include "../../SERVICE/StandardTypes.h"

/**************************                   Function Declaration                   **************************/

/*
*   @brief : this function is used to enable global interrupt
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_GlobalInterruptEnable(void);




/*
*   @brief : this function is used to diable global interrupt
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_GlobalInterruptDisable(void);







#endif