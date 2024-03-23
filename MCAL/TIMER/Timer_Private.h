 /******************************************************************************
 *
 * File Name: Timer_Private.h
 *
 * Description: conatins addresses of needed registers
 *
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 23/3/2024
 *
 *******************************************************************************/
#ifndef TIMER_PRIVATE_H
#define TIMER_PRIVATE_H

#define TCCR0       (*(volatile uint8*)(0x53))
#define TCNT0       (*(volatile uint8 *)(0x52))
#define OCR0        (*(olatile uint8 *)(0x5C))
#define TIMSK       (*(volatile uint8 *)(0x59))
#define TIFR        (*(volatile uint8 *)(0x58))
#define SFIOR       (*(volatile uint8 *)(0x50))









#endif