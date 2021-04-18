/*
 * main.c
 *
 *  Created on: Nov 9, 2020
 *      Author: Mohamed Salem
 */

#include "STD.h"
#include "Bit_Math.h"
#include "DIO_interface.h"
#include "DIO_config.h"
#include "DIO_private.h"

void DIO_SetPortDir(uint8 Port , uint8 Dir)
{
	switch(Port)
	{
		case DIO_PORTA :

		DIOA->DDR = Dir ;

		break;

		case DIO_PORTB :

		DIOB->DDR = Dir ;

		break;

		case DIO_PORTC :

		DIOC->DDR = Dir ;

		break;

		case DIO_PORTD :

		DIOD->DDR = Dir ;

		break;

		default:
		break;
	}
}


void DIO_SetPinDir(uint8 Port, uint8 Pin , uint8 Dir)
{

	switch (Dir)
	{

	case DIO_PIN_OUTPUT :

	  switch(Port)
	  {
		case DIO_PORTA :

		SET_BIT(DIOA->DDR, Pin);

		break;

		case DIO_PORTB :

		SET_BIT(DIOB->DDR, Pin);

		break;

		case DIO_PORTC :

		SET_BIT(DIOC->DDR, Pin);

		break;

		case DIO_PORTD :

		SET_BIT(DIOD->DDR, Pin);

		break;

		default:
		break;
	}


	break;

	case DIO_PIN_INPUT :

	switch(Port)
	{
		case DIO_PORTA :

		CLR_BIT(DIOA->DDR, Pin);

		break;

		case DIO_PORTB :

		CLR_BIT(DIOB->DDR, Pin);

		break;

		case DIO_PORTC :

		CLR_BIT(DIOC->DDR, Pin);

		break;

		case DIO_PORTD :

		CLR_BIT(DIOD->DDR, Pin);

		break;

		default:
		break;
	}


	break;


	default:
	break;

	}

}


void DIO_SetPortValue(uint8 Port , uint8 Val)
{
	switch(Port)
	{
		case DIO_PORTA :

		DIOA->PORT = Val ;

		break;

		case DIO_PORTB :

		DIOB->PORT = Val ;

		break;

		case DIO_PORTC :

		DIOC->PORT = Val ;

		break;

		case DIO_PORTD :

		DIOD->PORT = Val ;

		break;

		default:
		break;
	}
}


void DIO_SetPinValue(uint8 Port ,uint8 Pin ,  uint8 Val)
{
	switch (Val)
	{

		case DIO_PIN_HIGH :

		switch(Port)
		{
			case DIO_PORTA :

			SET_BIT(DIOA->PORT, Pin);

			break;

			case DIO_PORTB :

			SET_BIT(DIOB->PORT, Pin);

			break;

			case DIO_PORTC :

			SET_BIT(DIOC->PORT, Pin);

			break;

			case DIO_PORTD :

			SET_BIT(DIOD->PORT, Pin);

			break;

			default:
			break;
		}


		break;

		case DIO_PIN_LOW :

		switch(Port)
		{
			case DIO_PORTA :

			CLR_BIT(DIOA->PORT, Pin);

			break;

			case DIO_PORTB :

			CLR_BIT(DIOB->PORT, Pin);

			break;

			case DIO_PORTC :

			CLR_BIT(DIOC->PORT, Pin);

			break;

			case DIO_PORTD :

			CLR_BIT(DIOD->PORT, Pin);

			break;

			default:
			break;
		}


		break;


		default:
		break;

	}
}


void DIO_ReadPort(uint8 Port , uint8* Val)
{
	switch (Port)
	{
		case DIO_PORTA :
		*Val = DIOA->PIN;
		break;

		case DIO_PORTB :
		*Val = DIOB->PIN;
		break;

		case DIO_PORTC :
		*Val = DIOC->PIN;
		break;

		case DIO_PORTD :
		*Val = DIOD->PIN;
		break;

		default:
		break;
	}

}

void DIO_ReadPin(uint8 Port , uint8 Pin , uint8* Val)
{
	switch (Port)
	{
		case DIO_PORTA :
		*Val = GET_BIT(DIOA->PIN,Pin);
		break;

		case DIO_PORTB :
		*Val = GET_BIT(DIOB->PIN,Pin);
		break;

		case DIO_PORTC :
		*Val = GET_BIT(DIOC->PIN,Pin);
		break;

		case DIO_PORTD :
		*Val = GET_BIT(DIOD->PIN,Pin);
		break;

		default:
		break;
	}
}

void DIO_TogglePin(uint8 Port , uint8 Pin)
{
		switch(Port)
		{
			case DIO_PORTA :

			Toggle_BIT(DIOA->PORT, Pin);

			break;

			case DIO_PORTB :

			Toggle_BIT(DIOB->PORT, Pin);

			break;

			case DIO_PORTC :

			Toggle_BIT(DIOC->PORT, Pin);

			break;

			case DIO_PORTD :

			Toggle_BIT(DIOD->PORT, Pin);

			break;

			default:
			break;
		}
}
