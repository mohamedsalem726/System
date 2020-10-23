/*
 * DC_Motor.c
 *
 * Created: 10/23/2020 1:57:02 PM
 *  Author: Mohamed Salem
 */ 

#include "DC_Motor.h"




void DC_Motor_Init(void)
{
    DIO_SetPinDir(DIO_PORTC,DIO_PIN3,DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTC,DIO_PIN4,DIO_PIN_OUTPUT);
	
	PWM0_Init();
}

void DC_Motor_SeetSpeed(uint16 speed)
{
	speed *= 10;
	
	PWM0_Generate(speed);
}

void DC_Motor_Start(void)
{
	DIO_SetPinVal(DIO_PORTC,DIO_PIN3,DIO_PIN_HIGH);
	DIO_SetPinVal(DIO_PORTC,DIO_PIN4,DIO_PIN_LOW);
	
	PWM0_Start();
}

void DC_Motor_Stop(void)
{
	DIO_SetPinVal(DIO_PORTC,DIO_PIN3,DIO_PIN_HIGH);
	DIO_SetPinVal(DIO_PORTC,DIO_PIN4,DIO_PIN_HIGH);
}
