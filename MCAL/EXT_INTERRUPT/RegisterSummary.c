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


2- MCUCR (MCU Control register) 

    x- The MCU Control Register contains control bits for interrupt sense control and general MCU functions.

    x- we are only concerned with Bit 0, bit 1, bit 2 and bit 3             //Interrupt sense control
                                  ISC00  ISC01  ISC10     ISC11
    
    
    x- for bits 0 and 1  (Interrupt 0 Sense control)
    ISC01   ISC00
    0       0       The low level of INT0 generates an interrupt request.               //as long as low
    0       1       Any logical change on INT0 generates an interrupt request.
    1       0       The falling edge of INT0 generates an interrupt request.            //preferred
    1       1       The rising edge of INT0 generates an interrupt request. 

    x- for bits 2 and 3  (Interrupt 1 Sense control)
    ISC11   ISC10
    0       0       The low level of INT1 generates an interrupt request.               //as long as low
    0       1       Any logical change on INT1 generates an interrupt request.
    1       0       The falling edge of INT1 generates an interrupt request.            //preferred
    1       1       The rising edge of INT1 generates an interrupt request. 

    x- Read & Write


3- MCUCSR (MCU Control & Status register)    

    x- a register that contains control and status bits related to the operation of the microcontroller.

    x- We are only concerned with BIT 6 (ISC2)

    x- When bit 6 (ISC2) is set to 1, The rising edge of INT0 generates an interrupt request. 
    x- When bit 6 (ISC2) is set to 0, The falling edge of INT0 generates an interrupt request.

    x- Read & Write


4- GICR (General Interrupt Control Register)   

    x- it is used in to enable or disable external interrupts.

    x- we are only concerned with Bit 5, bit 6 and bit 7           //Interrupt enable
                                 INT2   INT0      INT1   

    x- When bit x (INTx) is set to 1, The external interrupt pin is enabled
    x- When bit x (INTx) is set to 0, The external interrupt pin is disabled

    x- Read and Write


5- GIFR (General Interrupt flag Register)   

    x- it is used to indicate the source of pending external interrupts         // this works even if we disable interrupts themselves

    x- we are only concerned with Bit 5, bit 6 and bit 7           //Interrupt flag
                                 INTF2   INTF0      INTF1   

    x- When bit x (INTFx) is set to 1, The flag is cleared
    x- When bit x (INTFx) is set to 0, The flag is set

    x- The flag is cleared when the interrupt routine is executed

    x- Read and Write

