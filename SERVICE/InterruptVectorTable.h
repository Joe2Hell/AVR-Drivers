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

#define NULL_PTR  ((void*) 0)

/*       Source         	 Vector Number                Interrupt Definition                                                                  Program Address     */
 #define V_RESET      	 	__vector_0                    //  External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset, and JTAG AVR Reset       0x00
 #define V_INT0 			   __vector_1                    //  External Interrupt Request 0                                                            0x02
 #define V_INT1 		 	   __vector_2                    //  External Interrupt Request 1                                                            0x04
 #define V_INT2 		 	   __vector_3                    //  External Interrupt Request 2                                                            0x06
 #define V_TIMER_2_COMP  	__vector_4                    //  Timer/Counter2 Compare Match                                                            0x08
 #define V_TIMER_2_OVF		__vector_5                    //  Timer/Counter2 Overflow                                                                 0x0A
 #define V_TIMER_1_CAPT  	__vector_6                    //  Timer/Counter1 Capture Event                                                            0x0C
 #define V_TIMER_1_COMPA 	__vector_7                    //  Timer/Counter1 Compare Match A                                                          0x0E
 #define V_TIMER_1_COMPB   __vector_8                    //  Timer/Counter1 Compare Match B                                                          0x10
 #define V_TIMER_1_OVF 	 	__vector_9                    //  Timer/Counter1 Overflow                                                                 0x12
 #define V_TIMER_0_COMP		__vector_10                   //  Timer/Counter0 Compare Match                                                            0x14
 #define V_TIMER_0_OVF 	 	__vector_11                   //  Timer/Counter0 Overflow                                                                 0x16
 #define V_SPI_STC   		__vector_12                   //  Serial Transfer Complete                                                                0x18
 #define V_USART_RXC		   __vector_13                   //  USART, Rx Complete                                                                      0x1A
 #define V_USART_UDRE		__vector_14                   //  USART Data Register Empty                                                               0x1C
 #define V_USART_TXC		   __vector_15                   //  USART, Tx Complete                                                                      0x1E
 #define V_ADC             __vector_16                   //  ADC Conversion Complete                                                                 0x20
 #define V_EE_READY			__vector_17                   //  EEPROM Ready                                                                            0x22
 #define V_ANA_COMP			__vector_18                   //  Analog Comparator                                                                       0x24
 #define V_TWI			   	__vector_19                   //  Two-wire Serial Interface                                                               0x26
 #define V_SPM_RDY		   __vector_20                   //  Store Program Memory Ready                                                              0x28



// Define a macro for the ISR long boring function, now it will be easier
#define ISR(Vector_name)  void Vector_name (void) __attribute__((signal,used)); \
void Vector_name (void)
/*        ISR            			||
         is the     			   	\\
          name of        		     \\
       callback function 			  \\
                           	   	   	  ||
								Replace this
								with the hash
								define of the
								vector table you
								want.

*/





#endif