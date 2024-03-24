 /******************************************************************************
 *
 * File Name: EXT_Interrupt_Config.h
 *
 * Description: Contains main functions body and their implementation
 * 
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 23/3/2024
 *
 *******************************************************************************/
#include "../TIMER0/Timer_Config.h"
#include "../TIMER0/Timer_Interface.h"
#include "../TIMER0/Timer_Private.h"




/*Timer 0 Normal overflow*/
static  void (*F_CallBackPtr_T0OV)(void) = NULL_PTR;


/*Timer 0 CTC */
static  void (*F_CallBackPtr_T0CTC)(void) = NULL_PTR;


void M_Timer0_Void_Init(uint8 TimerMode)
{
	if (TimerMode == E_TimerMode_Normal) {
	// always set this bit when in NON-PWM modes
		SET_BIT(TCCR0,FOC0);
		// enable interrupt
		SET_BIT(TIMSK, TOIE0);

		// choose normal mode
		CLR_BIT(TCCR0, WGM00);
		CLR_BIT(TCCR0, WGM01);
		// disable compare output
		CLR_BIT(TCCR0, COM00);
		CLR_BIT(TCCR0, COM01);

	}



	else if (TimerMode == E_TimerMode_PWM_PhaseCorrect) {
		SET_BIT(TCCR0, WGM00);
		CLR_BIT(TCCR0, WGM01);

	}else if (TimerMode == E_TimerMode_CTC) {
		// always set this bit when in NON-PWM modes
		SET_BIT(TCCR0,FOC0);
		// setting timer mode as CTC
		CLR_BIT(TCCR0, WGM00);
		SET_BIT(TCCR0, WGM01);
		// writing number in CTC

		// enabling interrupt on CTC
		SET_BIT(TIMSK, OCIE0);


	}else if (TimerMode == E_TimerMode_FastPWM) {
		SET_BIT(TCCR0, WGM00);
		SET_BIT(TCCR0, WGM01);
	}


}

void M_Timer0_Void_PrescalerInit(uint8 Prescaler){

	if (Prescaler == E_Prescaler_Prescaler1) {
		SET_BIT(TCCR0, CS00);
		CLR_BIT(TCCR0, CS01);
		CLR_BIT(TCCR0, CS02);

	}else if (Prescaler == E_Prescaler_Prescaler8) {
		CLR_BIT(TCCR0, CS00);
		SET_BIT(TCCR0, CS01);
		CLR_BIT(TCCR0, CS02);

	}else if (Prescaler == E_Prescaler_Prescaler64) {
		SET_BIT(TCCR0, CS00);
		SET_BIT(TCCR0, CS01);
		CLR_BIT(TCCR0, CS02);

	}else if (Prescaler == E_Prescaler_Prescaler256) {
		CLR_BIT(TCCR0, CS00);
		CLR_BIT(TCCR0, CS01);
		SET_BIT(TCCR0, CS02);

	}else if (Prescaler == E_Prescaler_Prescaler1024) {
		SET_BIT(TCCR0, CS00);
		CLR_BIT(TCCR0, CS01);
		SET_BIT(TCCR0, CS02);

	}else if (Prescaler == E_Prescaler_Prescaler_ExtSrc_FallingEdge) {
		CLR_BIT(TCCR0, CS00);
		SET_BIT(TCCR0, CS01);
		SET_BIT(TCCR0, CS02);

	}else if (Prescaler == E_Prescaler_Prescaler_ExtSrc_RisingEdge) {
		SET_BIT(TCCR0, CS00);
		SET_BIT(TCCR0, CS01);
		SET_BIT(TCCR0, CS02);
	}
}


void M_Timer0_Write_Preload(uint8 OverflowValue)
{
	TCNT0 = OverflowValue;
}

void M_Timer0_Write_CmpMatchValue(uint8 CompareMatchValue)
{
	OCR0 = CompareMatchValue;
}



void M_Timer0_Void_NCallback(void(*Local_PTR)(void)){

    F_CallBackPtr_T0OV = Local_PTR;
}

ISR(V_TIMER_0_OVF){

    F_CallBackPtr_T0OV();
}

void M_Timer0_Void_CTCCallback(void(*Local_PTR)(void)){

    F_CallBackPtr_T0CTC = Local_PTR;
}

ISR(V_TIMER_0_COMP){

    F_CallBackPtr_T0CTC();
}
