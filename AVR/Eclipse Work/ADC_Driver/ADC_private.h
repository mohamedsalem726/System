/*
 * ADC_private.h
 *
 *  Created on: Nov 9, 2020
 *      Author: Mohamed Salem
 */

#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

typedef struct
{
	volatile uint16 ADCL;
	volatile uint8 ADCSRA;
	volatile uint8 ADMUX;
	volatile uint8 ACSR;
	volatile uint8 RES[21];
	volatile uint8 SFIOR;
}ADC_Registers;

#define  ADC             ((ADC_Registers*)(0x24))

#endif /* ADC_PRIVATE_H_ */
