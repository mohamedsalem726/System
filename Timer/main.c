/*
 * Timer.c
 *
 * Created: 10/21/2020 4:57:54 PM
 * Author : Mohamed Salem
 */ 

#include "Timer.h"
#include "LED.h"
#include <avr/interrupt.h>

extern uint32 Number_OverFlows ;
extern uint32 CounterRegisterInit_Value ;


int main(void)
{
    
	LED0_Init();
	
	Timer0_Init();
	Timer0_SetDelay(500);
	Timer0_Start();
	
	
    while (1) 
    {
    }
}



ISR(TIMER0_OVF_vect)
{
    static uint32 cnt = 0;
	
	cnt++;
	
	if(cnt == Number_OverFlows)
	{
		LED0_Toggle();
		cnt = 0;
		TCNT0 = CounterRegisterInit_Value ;
		
	}

	
}