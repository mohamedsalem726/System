/*
 * External_Interrupt.c
 *
 * Created: 10/15/2020 4:36:30 PM
 * Author : Mohamed Salem
 */ 

#include "External_Interrupt.h"
#include "LED.h"
#include <avr/interrupt.h>


int main(void)
{
   
   ExternalINT0_Init();
   LED0_Init();
   
    while (1) 
    {
		
    }
}

ISR(INT0_vect)
{
	LED0_Toggle();
}