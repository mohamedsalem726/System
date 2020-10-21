/*
 * Timer.c
 *
 * Created: 10/21/2020 5:15:53 PM
 *  Author: Mohamed Salem
 */ 



#include "Timer.h"





uint32 CounterRegisterInit_Value = 0;
uint32 Number_OverFlows = 0;



void Timer0_Init(void)
{
	/* Select Normal Mode*/ 
	CLR_BIT(TCCR0,3);
	CLR_BIT(TCCR0,6);
	
	/* Enable Interrupt*/
	SET_BIT(SREG,7);
	SET_BIT(TIMSK,0);
	
}

void Timer0_SetDelay(uint32 Delay_ms)
{
	
	uint8 Tick_Time = (64 / 16);
	
	uint32 Total_TicksNumbers = (Delay_ms * 1000)   /   Tick_Time ;
	
	Number_OverFlows = Total_TicksNumbers / 256 ;
	
	CounterRegisterInit_Value = 256 - (Total_TicksNumbers % 256);
	
	TCNT0 = CounterRegisterInit_Value;
	
	Number_OverFlows++;
	
	
}

void Timer0_Start(void)
{
	SET_BIT(TCCR0 , 0);
	SET_BIT(TCCR0 , 1);
	CLR_BIT(TCCR0 , 2);
}

void Timer0_Stop(void)
{
	CLR_BIT(TCCR0 , 0);
	CLR_BIT(TCCR0 , 1);
	CLR_BIT(TCCR0 , 2);
}