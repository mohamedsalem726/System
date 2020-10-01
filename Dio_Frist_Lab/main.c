/*
 * Dio_Frist_Lab.c
 *
 * Created: 9/26/2020 1:30:13 PM
 * Author : Mohamed Salem
 */ 

#include "Atmega32_Register.h"
#include "Bit_Math.h"


int main(void)
{
   
   SET_BIT(DDRC,2);
   SET_BIT(PORTC,2);
   SET_BIT(DDRC,7);
   SET_BIT(PORTC,7);
   SET_BIT(DDRD,3);
   SET_BIT(PORTD,3);
   
   
    while (1) 
    {
    }
}

