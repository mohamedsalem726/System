/*
 * Timer.c
 *
 * Created: 10/21/2020 4:57:54 PM
 * Author : Mohamed Salem
 */ 

//#include "Timer.h"
//#include "LED.h"
#include <avr/interrupt.h>
#include "DC_Motor.h"

extern uint32 Number_OverFlows ;
extern uint32 CounterRegisterInit_Value ;


int main(void)
{
   /* 
	LED0_Init();
	
	Timer1_Init();
	Timer1_SetDelay(1000);
	Timer1_Start();*/
	
	DC_Motor_Init();
	
	DC_Motor_SeetSpeed(10);
	
	DC_Motor_Start();
	
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

ISR(TIMER1_COMPA_vect)
{
	static uint32 counter = 0;
	
	counter++;
	
	if(counter == 1)
	{
		LED0_Toggle();
		counter = 0;
	}
}