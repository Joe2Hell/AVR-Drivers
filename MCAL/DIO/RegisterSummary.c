 /******************************************************************************
 *
 * File Name: RegisterSummary.c
 *
 * Description: contains summary of needed registers
 *
 * Author: Mohamed Youssef
 *
 * Date : 19/3/2024
 *
 *******************************************************************************/

1- DDR (Data Direction Register)

    x- DDR registers control the direction of data flow for each pin of the microcontroller.

    x- Each bit in the DDR register corresponds to a pin on the microcontroller.

    x- When a bit in the DDR register is set to 1, it configures the corresponding pin as an output pin. 
    x- When its set to 0, the pin is configured as an input pin.

    x- Setting a pin as an output pin means it can drive (source or sink) current, while setting it as an input pin means its capable of reading external signals.

    x- Read & write


2- PORT (Port Output register) 

    x- PORT registers control the output values on the pins configured as output pins by the DDR register.

    x- Each bit in the PORT register corresponds to a pin on the microcontroller.

    x- When a bit in the PORT register is set to 1, it sets the corresponding output pin to a logic high (often Vcc, the supply voltage).
    x- When its set to 0, it sets the pin to a logic low (often ground).

    x- The state of the PORT register determines whether the output pins are driving high or low.

    x- Read & Write


3- PIN (Port Input register)    

    x- PIN registers are used to read the state of the input pins, regardless of whether they are configured as input or output.

    x- Each bit in the PIN register corresponds to a pin on the microcontroller.

    x- When a pin is configured as an input (DDR bit is 0), reading the PIN register gives the current logic state of that pin. 

    x- If the pin is at a logic high level, the corresponding bit in the PIN register will be 1
    x- and if its at a logic low level, the corresponding bit will be 0.

    x- Read only


4- SFIOR (Special Function Input Output Register)   

    x- it does a lot of function but we are only concerned with Bit number 2

    x- Bit 2 corresponds for PUD (Pull Up Disable)

    x- If PUD is set to logic low level, the internal pull ups are enabled
    x- and If PUD is set to logic high level, the internal pull ups are disabled

    x- Read and Write









