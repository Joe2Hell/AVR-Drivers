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
#include "../../SERVICE/InterruptVectorTable.h"

/*Static function since we don't want any external process to fiddle with it
(*INTx_FPTR) declares INTx_FPTR as a pointer to function  that takes no arguments (Void) and returns nothing (Void)
finally assigning that pointer to NULL to avoid dangling pointers*/

/*Each external interrupt gets a pointer to function*/
void static (*INT0_FPTR) (void) = NULL_PTR; 
void static (*INT1_FPTR) (void) = NULL_PTR; 
void static (*INT2_FPTR) (void) = NULL_PTR; 


void M_ExtInt_Void_Int0Init(void)
{
    // to enable specific interrupt
    SET_BIT(GICR, INT0_ID);

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
    SET_BIT(GICR, INT1_ID);

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
    SET_BIT(GICR, INT2_ID);

    #if TriggerType == FallingEdgeTrigger
        CLR_BIT(MCUSCR,ISC2);

    #else TriggerType == RisingEdgeTrigger
        SET_BIT(MCUSCR,ISC2);
 
    #endif

}


void M_ExtInt_Void_Int0DeInit(void){
    // to disable specific interrupt
    CLR_BIT(GICR, INT0_ID);
}

void M_ExtInt_Void_Int1DeInit(void){
    // to disable specific interrupt
    CLR_BIT(GICR, INT1_ID);
}

void M_ExtInt_Void_Int2DeInit(void){
    // to disable specific interrupt
    CLR_BIT(GICR, INT2_ID);
}



void M_ExtInt_Void_Int0Callback(void(*Local_PTR)(void)){

    INT0_FPTR = Local_PTR;
}

ISR_VECTOR(INT0){

    INT0_FPTR();
}


void M_ExtInt_Void_Int1Callback(void(*Local_PTR)(void)){

    INT1_FPTR = Local_PTR;
}

ISR_VECTOR(INT1){

    INT1_FPTR();
}




void M_ExtInt_Void_Int2Callback(void(*Local_PTR)(void)){

    INT2_FPTR = Local_PTR;
}

ISR_VECTOR(INT2){

    INT2_FPTR();
}