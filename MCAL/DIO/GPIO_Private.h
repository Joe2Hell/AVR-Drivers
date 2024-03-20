 /******************************************************************************
 *
 * File Name: GPIO_Private.h
 *
 * Description: conatins addresses of needed registers
 * 
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 19/3/2024
 *
 *******************************************************************************/


#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

#define SFIOR   (*(volatile uint8 *)(0x50))


#define PORTA   (*(volatile uint8 *)(0x3B))
#define DDRA    (*(volatile uint8 *)(0x3A))
#define PINA    (*(volatile uint8*)(0x39))

#define PORTB   (*(volatile uint8 *)(0x38))
#define DDRB    (*(volatile uint8 *)(0x37))
#define PINB    (*(volatile uint8*)(0x36))

#define PORTC   (*(volatile uint8 *)(0x34))
#define DDRC    (*(volatile uint8 *)(0x33))
#define PINC    (*(volatile uint8*)(0x32))

#define PORTD   (*(volatile uint8 *)(0x32))
#define DDRD    (*(volatile uint8 *)(0x31))
#define PIND    (*(volatile uint8*)(0x30))




#endif