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
#include "../DIO/GPIO_Interface.h"
#include "../../SERVICE/InterruptVectorTable.h"
#include "../DIO/GPIO_Config.h"

/*Static function since we don't want any external process to fiddle with it
(*INTx_FPTR) declares INTx_FPTR as a pointer to function  that takes no arguments (Void) and returns nothing (Void)
finally assigning that pointer to NULL to avoid dangling pointers*/

/*Each external interrupt gets a pointer to function*/
static  void (*F_CallBackPtr_INT0)(void) = NULL_PTR;
static  void (*F_CallBackPtr_INT1)(void) = NULL_PTR;
static  void (*F_CallBackPtr_INT2)(void) = NULL_PTR;

ISR(V_INT0)
{
	F_CallBackPtr_INT0();
}

ISR(V_INT1)
{
	F_CallBackPtr_INT1();
}

ISR(V_INT2)
{
	F_CallBackPtr_INT2();
}


void M_ExtInt_Void_Int0Init(uint8 TriggerType)
{
    // to enable specific interrupt
    SET_BIT(GICR, INT0_ID);
    // to set pin as input
    M_GPIO_Void_SetPinDirection(PORTD_REG,PIN2_ID,INPUT);

    switch (TriggerType) {
    case LowLevelTrigger:
        CLR_BIT(MCUCR,ISC00);
        CLR_BIT(MCUCR,ISC01);		break;
    case AnyLogicalChangeTrigger:
        SET_BIT(MCUCR,ISC00);
        CLR_BIT(MCUCR,ISC01);		break;
    case FallingEdgeTrigger:
        CLR_BIT(MCUCR,ISC00);
        SET_BIT(MCUCR,ISC01);		break;
    case RisingEdgeTrigger:
        SET_BIT(MCUCR,ISC00);
        SET_BIT(MCUCR,ISC01);		break;
    default:
    	break;
	}


}


void M_ExtInt_Void_Int1Init(uint8 TriggerType)
{
    // to enable specific interrupt
    SET_BIT(GICR, INT1_ID);
    // to set pin as input
    M_GPIO_Void_SetPinDirection(PORTD_REG,PIN3_ID,INPUT);

    switch (TriggerType) {
    case LowLevelTrigger:
    	CLR_BIT(MCUCR,ISC10);
    	CLR_BIT(MCUCR,ISC11);		break;
    case AnyLogicalChangeTrigger:
    	SET_BIT(MCUCR,ISC10);
    	CLR_BIT(MCUCR,ISC11);		break;
    case FallingEdgeTrigger:
    	CLR_BIT(MCUCR,ISC10);
    	SET_BIT(MCUCR,ISC11);		break;
    case RisingEdgeTrigger:
    	SET_BIT(MCUCR,ISC10);
    	SET_BIT(MCUCR,ISC11);		break;
    default:
    	break;
    	}

}

void M_ExtInt_Void_Int2Init(uint8 TriggerType)
{
    // to enable specific interrupt
    SET_BIT(GICR, INT2_ID);
    switch (TriggerType) {
    case FallingEdgeTrigger:
        CLR_BIT(MCUSCR,ISC2);		break;
    case RisingEdgeTrigger:
    	SET_BIT(MCUSCR,ISC2);		break;
    default:
    	break;
    }

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





void M_ExtInt_Void_Int0Callback(void(*A_Local_PTR)(void))
{

	F_CallBackPtr_INT0  = A_Local_PTR;
}

void M_ExtInt_Void_Int1Callback(void(*A_Local_PTR)(void))
{

	F_CallBackPtr_INT1 = A_Local_PTR;
}


void M_ExtInt_Void_Int2Callback(void(*A_Local_PTR)(void))
{

	F_CallBackPtr_INT2 = A_Local_PTR;
}


