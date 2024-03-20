 /******************************************************************************
 *
 * File Name: RegisterSummary.c
 *
 * Description: contains summary of needed registers
 *
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 19/3/2024
 *
 *******************************************************************************/


1- SREG (Status Register)

    x- SREG register contains various status flags related to the operation of the CPU.

    x- we are only concerned with bit 7 (I) or GIE (to enable or disable global interrupt)

    x- When bit 7 (I) is set to 1, it enables global interrupts
    x- When bit 7 (I) is set to 0, it disables global interrupts

    x- it is cleared by hardware after an interrupt has occurred, and is set by the RETI instruction to enable subsequent interrupts. // assembly instruction found in insturctio nset summary

    x- Read & write
