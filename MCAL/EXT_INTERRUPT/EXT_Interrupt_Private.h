 /******************************************************************************
 *
 * File Name: EXT_Interrupt_Private.h
 *
 * Description: conatins addresses of needed registers
 *
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 20/3/2024
 *
 *******************************************************************************/
#ifndef EXT_INTERRUPT_PRIVATE_H
#define EXT_INTERRUPT_PRIVATE_H



#define  MCUCR      (*(volatile uint8*)(0x55))

#define  MCUSCR     (*(volatile uint8*)(0x54))

#define  GICR       (*(volatile uint8*)(0x5B))

#define  GIFR       (*(volatile uint8*)(0x5A))




#endif