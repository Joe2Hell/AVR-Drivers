 /******************************************************************************
 *
 * File Name: InterruptVectorTable.h
 *
 * Description: Contains vector table easy defines and a short form for isr function callback
 *
 * Author: Mohamed Youssef
 *
 * Date : 21/3/2024
 *
 *******************************************************************************/

#ifndef INTERRUPT_VECTOR_TABLE_H
#define INTERRUPT_VECTOR_TABLE_H


/*       Source          Vector Number                      Interrupt Definition                                                                  Program Address     */
 #define RESET      			__vector_1                    //  External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset, and JTAG AVR Reset       0x00
 #define INT0 					__vector_2                    //  External Interrupt Request 0                                                            0x02
 #define INT1 					__vector_3                    //  External Interrupt Request 1                                                            0x04
 #define INT2 					__vector_4                    //  External Interrupt Request 2                                                            0x06
 #define TIMER_2_COMP      __vector_5                    //  Timer/Counter2 Compare Match                                                            0x08
 #define TIMER_2_OVF			__vector_6                    //  Timer/Counter2 Overflow                                                                 0x0A
 #define TIMER_1_CAPT      __vector_7                    //  Timer/Counter1 Capture Event                                                            0x0C
 #define TIMER_1_COMPA     __vector_8                    //  Timer/Counter1 Compare Match A                                                          0x0E
 #define TIMER_1_COMPB     __vector_9                    //  Timer/Counter1 Compare Match B                                                          0x10
 #define TIMER_1_OVF			__vector_10                   //  Timer/Counter1 Overflow                                                                 0x12
 #define TIMER_0_COMP		__vector_11                   //  Timer/Counter0 Compare Match                                                            0x14
 #define TIMER_0_OVF 		__vector_12                   //  Timer/Counter0 Overflow                                                                 0x16
 #define SPI_STC   			__vector_13                   //  Serial Transfer Complete                                                                0x18
 #define USART_RXC			__vector_14                   //  USART, Rx Complete                                                                      0x1A
 #define USART_UDRE			__vector_15                   //  USART Data Register Empty                                                               0x1C
 #define USART_TXC			__vector_16                   //  USART, Tx Complete                                                                      0x1E
 #define ADC               __vector_17                   //  ADC Conversion Complete                                                                 0x20
 #define EE_READY				__vector_18                   //  EEPROM Ready                                                                            0x22
 #define ANA_COMP				__vector_19                   //  Analog Comparator                                                                       0x24
 #define TWI					__vector_20                   //  Two-wire Serial Interface                                                               0x26
 #define SPM_RDY				__vector_21                   //  Store Program Memory Ready                                                              0x28



// Define a macro for the ISR long boring function, now it will be easier
#define ISR_VECTOR(vector_name) void ##vector_name(void) __attribute__((signal));   \
void ISR_VECTOR(void)   
/*        ||            ||        
        This is the     \\
          name of        \\
       callback function  \\
                           ||
                        Replace this
                        with the hash
                        define of the
                        vector table you
                        want.

*/





#endif