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
#include "Timer_Config.h"
#include "Timer_Interface.h"
#include "Timer_Private.h"


void M_Timer0_Void_Init(void)
{
    #if Prescaler == E_Prescaler_Prescaler1
    // setting timer prescaler as 1
    SET_BIT(TCCR0, CS00);
    CLR_BIT(TCCR0, CS01);
    CLR_BIT(TCCR0, CS02);

    #elif Prescaler == E_Prescaler_Prescaler8
    //  setting timer prescaler as 8
    CLR_BIT(TCCR0, CS00);
    SET_BIT(TCCR0, CS01);
    CLR_BIT(TCCR0, CS02);

    #elif Prescaler == E_Prescaler_Prescaler64
     // setting timer prescaler as 64
    SET_BIT(TCCR0, CS00);
    SET_BIT(TCCR0, CS01);
    CLR_BIT(TCCR0, CS02);

    #elif Prescaler == E_Prescaler_Prescaler256
    // setting timer prescaler as 256
    CLR_BIT(TCCR0, CS00);
    CLR_BIT(TCCR0, CS01);
    SET_BIT(TCCR0, CS02);
    
    #elif Prescaler == E_Prescaler_Prescaler1024
    // setting timer prescaler as 1024
    SET_BIT(TCCR0, CS00);
    CLR_BIT(TCCR0, CS01);
    SET_BIT(TCCR0, CS02);

    #elif Prescaler == E_Prescaler_Prescaler_ExtSrc_FallingEdge
    // setting timer prescaler on External clock source on T0 pin. Clock on falling edge.
    CLR_BIT(TCCR0, CS00);
    SET_BIT(TCCR0, CS01);
    SET_BIT(TCCR0, CS02);

    #elif Prescaler == E_Prescaler_Prescaler_ExtSrc_RisingEdge
    // setting timer prescaler on External clock source on T0 pin. Clock on rising  edge.
    SET_BIT(TCCR0, CS00);
    SET_BIT(TCCR0, CS01);
    SET_BIT(TCCR0, CS02);
    #endif



    #if TimerMode == E_TimerMode_Normal
    // setting timer mode as normal
    CLR_BIT(TCCR0, WGM00);
    CLR_BIT(TCCR0, WGM01);
    // enabling/disabling interrupt on overflow
    switch (Int_Enable_Normal)
    {
    case E_Int_Enable_Normal:
        SET_BIT(TIMSK, TOIE0);
        break;
    case E_Int_Disable_Normal:
        CLR_BIT(TIMSK, TOIE0);
        break;
    }






    #elif TimerMode == E_TimerMode_PWM_PhaseCorrect
    // setting timer mode as PWM Phase correct
    SET_BIT(TCCR0, WGM00);
    CLR_BIT(TCCR0, WGM01);



    #elif TimerMode == E_TimerMode_CTC
    // setting timer mode as CTC
    CLR_BIT(TCCR0, WGM00);
    SET_BIT(TCCR0, WGM01);
    // enabling/disabling interrupt on CTC
    switch (E_Int_Enable_CTC)
    {
    case E_Int_Enable_CTC:
        SET_BIT(TIMSK, OCIE0);
        break;
    case E_Int_Disable_CTC:
        CLR_BIT(TIMSK, OCIE0);
        break;
    }



    #elif TimerMode == E_TimerMode_FastPWM
    // setting timer mode as Fast PWM
    SET_BIT(TCCR0, WGM00);
    SET_BIT(TCCR0, WGM01);
    #endif



void M_Timer0_Write_Preload(void)
    {
        TCNT0 = Preload;
    }

}