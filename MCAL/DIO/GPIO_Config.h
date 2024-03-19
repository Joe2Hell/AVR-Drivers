 /******************************************************************************
 *
 * File Name: GPIO_Config.h
 *
 * Description: Contains DIO configurations
 *
 * Author: Mohamed Youssef
 *
 * Date : 19/3/2024
 *
 *******************************************************************************/


#ifndef GPIO_Config_h
#define GPIO_Config_h

#define      PUD      2

enum PORT_REGISTERS   {
    PORTA_REG,
    PORTB_REG,
    PORTC_REG,
    PORTD_REG
};


enum StateLowHigh  {
    LOGIC_LOW,
    LOGIC_HIGH
};

enum StateInputOutput  {
    INPUT,
    OUTPUT
};

enum PINS {
    PIN0_ID,
    PIN1_ID,
    PIN2_ID,
    PIN3_ID,
    PIN4_ID,
    PIN5_ID,
    PIN6_ID,
    PIN7_ID
};


#endif