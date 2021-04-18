/*
 * Interrupt_Private.h
 *
 *  Created on: Nov 21, 2020
 *      Author: Mohamed Salem
 */

#ifndef INTERRUPT_PRIVATE_H_
#define INTERRUPT_PRIVATE_H_


typedef struct
{
	volatile uint8 MCUCSR;
	volatile uint8 MCUCR;
	volatile uint8 GIFR;
	volatile uint8 GICR;
	volatile uint8 RES[2];
	volatile uint8 SREG;
}Interrupt_Registers;


#define  Interrupt        ((Interrupt_Registers*)(0x54))

#endif /* INTERRUPT_PRIVATE_H_ */
