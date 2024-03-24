 /******************************************************************************
 *
 * File Name: EXT_Interrupt_Config.h
 *
 * Description: Contains External interrupts configurations
 *
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 19/3/2024
 *
 *******************************************************************************/

#ifndef EXT_INTERRUPT_CONFIG_H
#define EXT_INTERRUPT_CONFIG_H




/*  in your init funciton in application, choose one of the following triggers
LowLevelTrigger                
AnyLogicalChange               
FallingEdgeTrigger  <----- Default
RisingEdgeTrigger
*/


#define LowLevelTrigger             0
#define AnyLogicalChangeTrigger     1
#define FallingEdgeTrigger          2
#define RisingEdgeTrigger           3

#define INT0_ID        6
#define INT1_ID        7
#define INT2_ID        5






enum InterruptSenseControl {
    ISC00,
    ISC01,
    ISC10,
    ISC11,
    Placeholder4,
    placeholder5,
    ISC2
};





#endif
