 /******************************************************************************
 *
 * File Name: Timer_Config.h
 *
 * Description: Contains Timer configurations
 *
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 23/3/2024
 *
 *******************************************************************************/
#ifndef TIMER_CONFIG_H
#define TIMER_CONFIG_H


//#define TimerMode  E_TimerMode_Normal          // modify this for timer mode select
/*  Timer mode             
Normal     <----- Default           
PWM Phase correct               
CTC  
FastPWM
*/
//#define Prescaler  E_Prescaler_Prescaler1024      /// modify this for prescaler select
/*  Prescaler mode             
Off            
1                   <----- Default    
8  
64
256
1042
External source falling edge
External source rising edge
*/



/*  Enable interrupt on normal             
Enable normal       <----- Default  
Disable normal
*/
#define Int_Enable_Normal  E_Int_Enable_Normal      // modify this to enable/disable interrupt on normal mode
#define Int_Enable_CTC  E_Int_Enable_CTC            // modify this to enable/disable interrupt on CTC mode



enum Prescaler_value {
    E_Prescaler_Prescaler1,
    E_Prescaler_Prescaler8,
    E_Prescaler_Prescaler64,
    E_Prescaler_Prescaler256,
    E_Prescaler_Prescaler1024,
    E_Prescaler_Prescaler_ExtSrc_FallingEdge,
    E_Prescaler_Prescaler_ExtSrc_RisingEdge
};

enum Timer_Mode {
    E_TimerMode_Normal,
    E_TimerMode_PWM_PhaseCorrect,
    E_TimerMode_CTC,
    E_TimerMode_FastPWM
};

enum CompareMatchMode_Non_PWM_Mode{
    E_CompareMatchMode_Normal,
    E_CompareMatchMode_Toggle,
    E_CompareMatchMode_Clear,
    E_CompareMatchMode_Set
};




#define WGM01   3
#define WGM00   6
#define FOC0	7

#define CS00    0
#define CS01    1
#define CS02    2

#define TOIE0   0
#define OCIE0   1

#define COM00	4
#define COM01	5








#endif
