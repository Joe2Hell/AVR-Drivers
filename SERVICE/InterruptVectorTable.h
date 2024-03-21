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


/*       Source                 Vector Number       Interrupt Definition                                                                    Program Address     */
 #define RESET      			1                    //  External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset, and JTAG AVR Reset       0x00
 #define INT0 					2                    //  External Interrupt Request 0                                                            0x02
 #define INT1 					3                    //  External Interrupt Request 1                                                            0x04
 #define INT2 					4                    //  External Interrupt Request 2                                                            0x06
 #define TIMER_2_COMP           5                    //  Timer/Counter2 Compare Match                                                            0x08
 #define TIMER_2_OVF			6                    //  Timer/Counter2 Overflow                                                                 0x0A
 #define TIMER_1_CAPT       	7                    //  Timer/Counter1 Capture Event                                                            0x0C
 #define TIMER_1_COMPA     		8                    //  Timer/Counter1 Compare Match A                                                          0x0E
 #define TIMER_1_COMPB  		9                    //  Timer/Counter1 Compare Match B                                                          0x10
 #define TIMER_1_OVF			10                   //  Timer/Counter1 Overflow                                                                 0x12
 #define TIMER_0_COMP			11                   //  Timer/Counter0 Compare Match                                                            0x14
 #define TIMER_0_OVF 			12                   //  Timer/Counter0 Overflow                                                                 0x16
 #define SPI_STC   				13                   //  Serial Transfer Complete                                                                0x18
 #define USART_RXC				14                   //  USART, Rx Complete                                                                      0x1A
 #define USART_UDRE				15                   //  USART Data Register Empty                                                               0x1C
 #define USART_TXC				16                   //  USART, Tx Complete                                                                      0x1E
 #define ADC                    17                   //  ADC Conversion Complete                                                                 0x20
 #define EE_READY				18                   //  EEPROM Ready                                                                            0x22
 #define ANA_COMP				19                   //  Analog Comparator                                                                       0x24
 #define TWI					20                   //  Two-wire Serial Interface                                                               0x26
 #define SPM_RDY				21                   //  Store Program Memory Ready                                                              0x28



// Define a macro for the ISR long boring function, now it will be easier
#define ISR_VECTOR(vector_name) void ##vector_name(void) __attribute__((signal))
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