 /******************************************************************************
 *
 * File Name: EXT_Interrupt_Program.c
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
#include "EXT_Interrupt_Interface.h"
#include "EXT_Interrupt_Config.h"
#include "EXT_Interrupt_Private.h"


void M_ExtInt_Void_Int0Init(void)
{
    // to enable specific interrupt
    SET_BIT(GICR, INT0);

    #if TriggerType == LowLevelTrigger
        CLR_BIT(MCUCR,ISC00);
        CLR_BIT(MCUCR,ISC01);

    #elif TriggerType == AnyLogicalChange
        SET_BIT(MCUCR,ISC00);
        CLR_BIT(MCUCR,ISC01);

    #elif TriggerType == FallingEdgeTrigger //default
        CLR_BIT(MCUCR,ISC00);
        SET_BIT(MCUCR,ISC01);

    #else TriggerType == RisingEdgeTrigger
        SET_BIT(MCUCR,ISC00);    
        SET_BIT(MCUCR,ISC01);
    #endif

}


void M_ExtInt_Void_Int1Init(void)
{
    // to enable specific interrupt
    SET_BIT(GICR, INT1);

    #if TriggerType == LowLevelTrigger
        CLR_BIT(MCUCR,ISC10);
        CLR_BIT(MCUCR,ISC11);

    #elif TriggerType == AnyLogicalChange
        SET_BIT(MCUCR,ISC10);
        CLR_BIT(MCUCR,ISC11);

    #elif TriggerType == FallingEdgeTrigger //default
        CLR_BIT(MCUCR,ISC10);
        SET_BIT(MCUCR,ISC11);

    #else TriggerType == RisingEdgeTrigger
        SET_BIT(MCUCR,ISC10);
        SET_BIT(MCUCR,ISC11);    
    #endif

}

void M_ExtInt_Void_Int2Init(void)
{
    // to enable specific interrupt
    SET_BIT(GICR, INT2);

    #if TriggerType == FallingEdgeTrigger
        CLR_BIT(MCUSCR,ISC2);

    #else TriggerType == RisingEdgeTrigger
        SET_BIT(MCUSCR,ISC2);
 
    #endif

}




