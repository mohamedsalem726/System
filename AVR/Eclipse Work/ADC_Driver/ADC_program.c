/*
 * ADC_program.c
 *
 *  Created on: Nov 9, 2020
 *      Author: Mohamed Salem
 */


#include "STD.h"
#include "Bit_Math.h"
#include "ADC_interface.h"
#include "ADC_config.h"
#include "ADC_private.h"


void ADC_Init(void)
{
	#if   ADC_VOLTAGE_REFRENCE   ==      ADC_VREF_AVCC

	SET_BIT(ADC->ADMUX,6);
	CLR_BIT(ADC->ADMUX,7);

	#elif  ADC_VOLTAGE_REFRENCE  ==     ADC_VREF_INTERNAL

	SET_BIT(ADC->ADMUX,6);
	SET_BIT(ADC->ADMUX,6);

    #elif  ADC_VOLTAGE_REFRENCE  ==     ADC_VREF_AREF

    CLR_BIT(ADC->ADMUX,6);
    CLR_BIT(ADC->ADMUX,7);

	#endif

	#if    ADC_ADjUST            ==     ADC_RIGHT_ADJUST

	CLR_BIT(ADC->ADMUX,5);

    #elif  ADC_ADjUST            ==     ADC_LEFT_ADJUST

	CLR_BIT(ADC->ADMUX,5);

	#endif


    #if     ADC_CHANNEL           ==     ADC_CHANNEL_0

	CLR_BIT((ADC->ADMUX , 0);
	CLR_BIT((ADC->ADMUX , 1);
	CLR_BIT((ADC->ADMUX , 2);

	#elif  ADC_CHANNEL           ==     ADC_CHANNEL_1

	SET_BIT(ADC->ADMUX , 0);

    #elif  ADC_CHANNEL           ==     ADC_CHANNEL_2

	SET_BIT(ADC->ADMUX , 1);

    #elif  ADC_CHANNEL           ==     ADC_CHANNEL_3

	SET_BIT(ADC->ADMUX , 0);
	SET_BIT(ADC->ADMUX , 1);

    #elif  ADC_CHANNEL           ==     ADC_CHANNEL_4

    SET_BIT(ADC->ADMUX , 2);

    #elif  ADC_CHANNEL           ==     ADC_CHANNEL_5

    SET_BIT(ADC->ADMUX , 0);
    SET_BIT(ADC->ADMUX , 2);

    #elif  ADC_CHANNEL           ==     ADC_CHANNEL_6

    SET_BIT(ADC->ADMUX , 1);
    SET_BIT(ADC->ADMUX , 2);

    #elif  ADC_CHANNEL           ==     ADC_CHANNEL_7

    SET_BIT(ADC->ADMUX , 0);
    SET_BIT(ADC->ADMUX , 1);
    SET_BIT(ADC->ADMUX , 2);

	#endif

	#if  ADC_CONVERSION_TRIGGER  ==    ADC_AUTO_TRIGGER

	SET_BIT(ADC->ADCSRA , 5);

	#endif

	#if    ADC_PRESCALER           ==         PRESCALER_2

	SET_BIT(ADC->ADCSRA ,0);
	CLR_BIT(ADC->ADCSRA ,1);
	CLR_BIT(ADC->ADCSRA ,2);

    #elif  ADC_PRESCALER           ==         PRESCALER_4

	CLR_BIT(ADC->ADCSRA ,0);
    SET_BIT(ADC->ADCSRA ,1);
    CLR_BIT(ADC->ADCSRA ,2);

    #elif  ADC_PRESCALER           ==         PRESCALER_8

    SET_BIT(ADC->ADCSRA ,0);
    SET_BIT(ADC->ADCSRA ,1);
    CLR_BIT(ADC->ADCSRA ,2);

    #elif  ADC_PRESCALER           ==         PRESCALER_16

    CLR_BIT(ADC->ADCSRA ,0);
    CLR_BIT(ADC->ADCSRA ,1);
    SET_BIT(ADC->ADCSRA ,2);

    #elif  ADC_PRESCALER           ==         PRESCALER_32

    SET_BIT(ADC->ADCSRA ,0);
    CLR_BIT(ADC->ADCSRA ,1);
    SET_BIT(ADC->ADCSRA ,2);

    #elif  ADC_PRESCALER           ==         PRESCALER_64

    CLR_BIT(ADC->ADCSRA ,0);
    SET_BIT(ADC->ADCSRA ,1);
    SET_BIT(ADC->ADCSRA ,2);

    #elif  ADC_PRESCALER           ==         PRESCALER_128

    SET_BIT(ADC->ADCSRA ,0);
    SET_BIT(ADC->ADCSRA ,1);
    SET_BIT(ADC->ADCSRA ,2);

	#endif

	#if    ADC_INTERRUPT_STATUS   ==     INTERRUPT_DISABLED

	CLR_BIT(ADC->ADCSRA , 3);

    #elif  ADC_INTERRUPT_STATUS   ==     INTERRUPT_ENABLE

	SET_BIT(ADC->ADCSRA ,3);

	#endif


	//Enable  ADC
	SET_BIT(ADC->ADCSRA , 7);


}






uint16 ADC_Read(void)
{
	uint16 value = 0;

	SET_BIT(ADC->ADCSRA , 6);

	while(GET_BIT(ADC->ADCSRA,4) == 0);

	value = ADC->ADCL ;

	return value;

}
