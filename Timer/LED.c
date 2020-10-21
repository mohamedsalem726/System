/*
 * LED.c
 *
 * Created: 10/3/2020 11:23:56 AM
 *  Author: Mohamed Salem
 */ 





#include "LED.h"
#include "DIO.h"


void LED0_Init(void)
{
	DIO_SetPinDir(DIO_PORTC , DIO_PIN2 , DIO_PIN_OUTPUT);
}
void LED1_Init(void)
{
	SET_BIT(DDRC,7);
}
void LED2_Init(void)
{
	SET_BIT(DDRD,3);
}

void LED0_ON(void)
{
	DIO_SetPinVal(DIO_PORTC , DIO_PIN2 , DIO_PIN_HIGH);
}
void LED1_ON(void)
{
	SET_BIT(PORTC,7);
}
void LED2_ON(void)
{
	SET_BIT(PORTD,3);
}

void LED0_OFF(void)
{
	DIO_SetPinVal(DIO_PORTC ,DIO_PIN2 ,DIO_PIN_LOW);
}
void LED1_OFF(void)
{
	CLR_BIT(PORTC,7);
}
void LED2_OFF(void)
{
	CLR_BIT(PORTD,3);
}

void LED0_Toggle(void)
{
	Toggle_BIT(PORTC,2);
}
void LED1_Toggle(void)
{
	Toggle_BIT(PORTC,7);
}
void LED2_Toggle(void)
{
	Toggle_BIT(PORTD,3);
}