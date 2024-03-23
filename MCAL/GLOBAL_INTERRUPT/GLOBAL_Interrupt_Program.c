 /******************************************************************************
 *
 * File Name: GLOBAL_Interrupt_Program.c
 *
 * Description: Contains main functions body and their implementation
 *
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 19/3/2024
 *
 *******************************************************************************/

#include "GLOBAL_Interrupt_Config.h"
#include "GLOBAL_Interrupt_Interface.h"
#include "GLOBAL_Interrupt_Private.h"



void M_ExtInt_Void_GIE(void)
{
    SET_BIT(SREG,I_ID);
}

void M_ExtInt_Void_GID(void)
{
    CLR_BIT(SREG,I_ID);
}
