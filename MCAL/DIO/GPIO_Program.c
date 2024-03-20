 /******************************************************************************
 *
 * File Name: GPIO_Program.c
 *
 * Description: Contains main functions body and their implementation
 * 
 * Layer : MCAL
 * 
 * Author: Mohamed Youssef
 *
 * Date : 19/3/2024
 *
 *******************************************************************************/

#include "GPIO_Private.h"
#include "GPIO_Interface.h"
#include "GPIO_Config.h"



void M_GPIO_Void_SetPinDirection(uint8 PORT_ID, uint8 PIN_ID, uint8 STATE )
{
        switch (STATE)
        {
        case OUTPUT:
            switch (PORT_ID)
            {
            case PORTA_REG:
                SET_BIT(DDRA,PIN_ID);   break;
            case PORTB_REG:
                SET_BIT(DDRB,PIN_ID);   break;
            case PORTC_REG:
                SET_BIT(DDRC,PIN_ID);   break;
            case PORTD_REG:
                SET_BIT(DDRD,PIN_ID);   break;
            
            default:                break;
            }
            break;

        case INPUT:
            switch (PORT_ID)
            {
            case PORTA_REG:
                CLR_BIT(DDRA,PIN_ID);   break;
            case PORTB_REG:
                CLR_BIT(DDRB,PIN_ID);   break;
            case PORTC_REG:
                CLR_BIT(DDRC,PIN_ID);   break;
            case PORTD_REG:
                CLR_BIT(DDRD,PIN_ID);   break;
            
            default:
                break;
            }
            default:                break;
        }
}


void M_GPIO_Void_SetPinValue(uint8 PORT_ID, uint8 PIN_ID, uint8 STATE)
{
    switch (STATE)
        {
        case LOGIC_HIGH:
        switch (PORT_ID)
            {
            case PORTA_REG:
                SET_BIT(PORTA,PIN_ID);   break;
            case PORTB_REG:
                SET_BIT(PORTB,PIN_ID);   break;
            case PORTC_REG:
                SET_BIT(PORTC,PIN_ID);   break;
            case PORTD_REG:
                SET_BIT(PORTD,PIN_ID);   break;

            default:                break;
            }
        break;

        case LOGIC_LOW:
        switch (PORT_ID)
            {
            case PORTA_REG:
                CLR_BIT(PORTA,PIN_ID);   break;
            case PORTB_REG:
                CLR_BIT(PORTB,PIN_ID);   break;
            case PORTC_REG:
                CLR_BIT(PORTC,PIN_ID);   break;
            case PORTD_REG:
                CLR_BIT(PORTD,PIN_ID);   break;

            default:
                break;
            }
        default:                break;
        }
}

uint8 M_GPIO_uint8_ReadPin(uint8 PORT_ID, uint8 PIN_ID)
{
    switch (PORT_ID)
    {
            case PORTA_REG:
                IS_BIT_SET(PINA,PIN_ID);   break;
            case PORTB_REG:
                IS_BIT_SET(PINB,PIN_ID);   break;
            case PORTC_REG:
                IS_BIT_SET(PINC,PIN_ID);   break;
            case PORTD_REG:
                IS_BIT_SET(PIND,PIN_ID);   break;
             default:                break;
    }
}


void M_GPIO_Void_TogglePin(uint8 PORT_ID, uint8 PIN_ID)
{
    switch (PORT_ID)
    {
            case PORTA_REG:
                TOG_BIT(PORTA,PIN_ID);   break;
            case PORTB_REG:
                TOG_BIT(PORTB,PIN_ID);   break;
            case PORTC_REG:
                TOG_BIT(PORTC,PIN_ID);   break;
            case PORTD_REG:
                TOG_BIT(PORTD,PIN_ID);   break;
             default:                break;
    }
}


void M_GPIO_Void_DisableAllPullUpResistors(void)
{
    SET_BIT(SFIOR, PUD);
}
