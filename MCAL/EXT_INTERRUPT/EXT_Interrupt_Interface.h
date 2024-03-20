 /******************************************************************************
 *
 * File Name: EXT_Interrupt_Interface.h
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



#ifndef EXT_INTERRUPT_INTERFACE_H
#define EXT_INTERRUPT_INTERFACE_H


#include "../../SERVICE/BitMath.h"
#include "../../SERVICE/StandardTypes.h"

/**************************                   Function Declaration                   **************************/

/*
*   @brief : this function is used to initailize External interrupt 0
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int0Init(void);


/*
*   @brief : this function is used to initailize External interrupt 1
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int1Init(void);


/*
*   @brief : this function is used to initailize External interrupt 2
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int2Init(void);










#endif