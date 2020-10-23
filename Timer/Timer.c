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
	#if Time0_Mode == NROMAL_Mode
	/* Select Normal Mode */ 
	CLR_BIT(TCCR0,3);
	CLR_BIT(TCCR0,6);
	
	#endif
	
	/* Enable Interrupt */
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
	/* Start Timer0 */
	SET_BIT(TCCR0 , 0);    /*  Prescaler  CLK/64  */
	SET_BIT(TCCR0 , 1);
	CLR_BIT(TCCR0 , 2);
}

void Timer0_Stop(void)
{
	/* Stop Timer0 */
	CLR_BIT(TCCR0 , 0);
	CLR_BIT(TCCR0 , 1);
	CLR_BIT(TCCR0 , 2);
}




void Timer1_Init(void)
{
	#if Time1_Mode ==  CTC_Mode
	/* Select CTC Mode */
	SET_BIT(TCCR1B , 3);
	
	#endif
	
	/* Enable Interrupt */
	SET_BIT(SREG , 7);
	SET_BIT(TIMSK , 4);
	
}

void Timer1_SetDelay(uint32 Delay_ms)
{
	uint32 Tick_Time = 1024 / 16 ;
	uint32 Total_TicksNumbers = (Delay_ms * 1000) / Tick_Time ;
	OCR1 = Total_TicksNumbers - 1 ;
}

void Timer1_Start(void)
{
	/* Start Timer1 */
	SET_BIT(TCCR1B ,0);     /*  Prescaler  CLK/1024  */
	CLR_BIT(TCCR1B ,1);       
	SET_BIT(TCCR1B ,2);
}

void Timer1_Stop(void)
{
	/* Stop Timer1 */
	CLR_BIT(TCCR1B ,0);
	CLR_BIT(TCCR1B ,1);
	CLR_BIT(TCCR1B ,2);
}


void PWM0_Init(void)
{
	/* SET PIN OUTPUT*/
	SET_BIT(DDRB ,3);
	
	#if  PWM_Mode  ==   PWM0_Fast
	
	SET_BIT(TCCR0,3);
	SET_BIT(TCCR0,6);
	
	#endif
	
}

void PWM0_Generate(uint8 Duty_Cycle)
{
	#if  Time0_CYCLE_Mode    ==   NonInverted_Cycle
	
	OCR0 = ((Duty_Cycle * 256) / 100 ) - 1;  
	
	#endif
}

void PWM0_Start(void)
{
	/* Prescaler CLK/8 */
	SET_BIT(TCCR0 , 1);
}