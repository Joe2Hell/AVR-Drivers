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
*   @args  : chooses which type of trigger you want
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int0Init(uint8);


/*
*   @brief : this function is used to initailize External interrupt 1
*   @args  : chooses which type of trigger you want
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int1Init(uint8);


/*
*   @brief : this function is used to initailize External interrupt 2
*   @args  : chooses which type of trigger you want
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int2Init(uint8);



/*
*   @brief : this function is used to deinitailize External interrupt 0
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int0DeInit(void);


/*
*   @brief : this function is used to deinitailize External interrupt 1
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int1DeInit(void);


/*
*   @brief : this function is used to deinitailize External interrupt 2
*   @args  : void
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int2DeInit(void);




/*
*   @brief : this function is used as a callback function for external interrupt 0
*   @args  : the name  function that should be called whenever you need the ISR)
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int0Callback(void (*Local_PTR)(void));


/*
*   @brief : this function is used as a callback function for external interrupt 1
*   @args  : the name  function that should be called whenever you need the ISR)
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int1Callback(void (*Local_PTR)(void));


/*
*   @brief : this function is used as a callback function for external interrupt 2
*   @args  : the name  function that should be called whenever you need the ISR)
*   @return: no return
*   @synchronous / Asynchronous : Synchronous
*   @ Reentrant / Non Reentrant : Reentrant
*/
void M_ExtInt_Void_Int2Callback(void (*Local_PTR)(void));


#endif
