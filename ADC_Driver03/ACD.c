/*
 * ACD.c
 *
 * Created: 10/18/2020 6:08:11 PM
 *  Author: Mohamed Salem
 */ 

#include "ACD.h"



void ADC_Init(void)
{
	#if    ADC_VOLTAGE_REFRENCE    ==    ADC_VREF_AVCC
	
	SET_BIT(ADMUX , 6);
	CLR_BIT(ADMUX , 7);
	
	#elif  ADC_VOLTAGE_REFRENCE    ==    ADC_VREF_INTERNAL
	
	SET_BIT(ADMUX , 6);
	SET_BIT(ADMUX , 7);
	
	#elif  ADC_VOLTAGE_REFRENCE    ==    ADC_VREF_AREF
	
	CLR_BIT(ADMUX , 6);
	CLR_BIT(ADMUX , 7);
	
	#endif
	
	#if    ADC_ADJUST        ==       ADC_RIGHT_ADJUST
	
	CLR_BIT(ADMUX , 5);
	
	#elif  ADC_ADJUST        ==       ADC_LEFT_ADJUST
	
	SET_BIT(ADMUX , 5);
	
	#endif
	
	#if    ADC_CHANNEL       ==        ADC_CHANNEL_0
	
	CLR_BIT(ADMUX , 0);
	CLR_BIT(ADMUX , 1);
	CLR_BIT(ADMUX , 2);
	CLR_BIT(ADMUX , 3);
	CLR_BIT(ADMUX , 4);
	
	#elif  ADC_CHANNEL       ==        ADC_CHANNEL_1
	
	SET_BIT(ADMUX , 0);
	CLR_BIT(ADMUX , 1);
	CLR_BIT(ADMUX , 2);
	CLR_BIT(ADMUX , 3);
	CLR_BIT(ADMUX , 4);
	
    #elif  ADC_CHANNEL       ==        ADC_CHANNEL_2
	
	CLR_BIT(ADMUX , 0);
	SET_BIT(ADMUX , 1);
	CLR_BIT(ADMUX , 2);
	CLR_BIT(ADMUX , 3);
	CLR_BIT(ADMUX , 4);
	
	#elif  ADC_CHANNEL       ==        ADC_CHANNEL_3
	
	SET_BIT(ADMUX , 0);
	SET_BIT(ADMUX , 1);
	CLR_BIT(ADMUX , 2);
	CLR_BIT(ADMUX , 3);
	CLR_BIT(ADMUX , 4);
	
	#elif  ADC_CHANNEL       ==        ADC_CHANNEL_4
	
	CLR_BIT(ADMUX , 0);
	CLR_BIT(ADMUX , 1);
	SET_BIT(ADMUX , 2);
	CLR_BIT(ADMUX , 3);
	CLR_BIT(ADMUX , 4);
	
	#elif  ADC_CHANNEL       ==        ADC_CHANNEL_5
	
	SET_BIT(ADMUX , 0);
	CLR_BIT(ADMUX , 1);
	SET_BIT(ADMUX , 2);
	CLR_BIT(ADMUX , 3);
	CLR_BIT(ADMUX , 4);
	
	#elif  ADC_CHANNEL       ==        ADC_CHANNEL_6
	
	CLR_BIT(ADMUX , 0);
	SET_BIT(ADMUX , 1);
	SET_BIT(ADMUX , 2);
	CLR_BIT(ADMUX , 3);
	CLR_BIT(ADMUX , 4);
	
	#elif  ADC_CHANNEL       ==        ADC_CHANNEL_7
	
	SET_BIT(ADMUX , 0);
	SET_BIT(ADMUX , 1);
	SET_BIT(ADMUX , 2);
	CLR_BIT(ADMUX , 3);
	CLR_BIT(ADMUX , 4);
	
	
	#endif
	
	#if    ADC_CONVERSION_TRIGGER   ==    ACD_AUTO_TRIGGER
	
	SET_BIT(ADCSRA , 5);
	
	#elif  ADC_CONVERSION_TRIGGER   ==    ACD_MANUAL_TRIGGER
	
	CLR_BIT(ADCSRA , 5);
	
	#endif
	
	#if      ADC_PRESCALER     ==         PRESCALER_2
	
	SET_BIT(ADCSRA , 0);
	CLR_BIT(ADCSRA , 1);
	CLR_BIT(ADCSRA , 2);
	
	#elif    ADC_PRESCALER     ==         PRESCALER_4
	
	CLR_BIT(ADCSRA , 0);
	SET_BIT(ADCSRA , 1);
	CLR_BIT(ADCSRA , 2);
	
	#elif    ADC_PRESCALER     ==         PRESCALER_8
	
    SET_BIT(ADCSRA , 0);
    SET_BIT(ADCSRA , 1);
    CLR_BIT(ADCSRA , 2);
	
	#elif    ADC_PRESCALER     ==         PRESCALER_16
	
	CLR_BIT(ADCSRA , 0);
	CLR_BIT(ADCSRA , 1);
	SET_BIT(ADCSRA , 2);
	
	#elif    ADC_PRESCALER     ==         PRESCALER_32
	
	SET_BIT(ADCSRA , 0);
	CLR_BIT(ADCSRA , 1);
	SET_BIT(ADCSRA , 2);
	
	#elif    ADC_PRESCALER     ==         PRESCALER_64
	
	CLR_BIT(ADCSRA , 0);
	SET_BIT(ADCSRA , 1);
	SET_BIT(ADCSRA , 2);
	
	#elif    ADC_PRESCALER     ==         PRESCALER_128
	
	SET_BIT(ADCSRA , 0);
	SET_BIT(ADCSRA , 1);
	SET_BIT(ADCSRA , 2);
	
	#endif
	
	#if     ADC_INTERRUPT_STATUS   ==     INTERRUPT_ENABLE
	
	SET_BIT(ADCSRA , 3);
	
	#elif   ADC_INTERRUPT_STATUS   ==     INTERRUPT_DISABLED
	
	CLR_BIT(ADCSRA , 3);
	
	#endif
	
	//Enable ADC
	SET_BIT(ADCSRA , 7);
	
	
}


uint16 ADC_Read(void)
{
	uint16 value = 0;
	
	SET_BIT(ADCSRA , 6);
	
	while (GET_BIT(ADCSRA , 4) == 0);
	
	value = ADC_ADJUST ;
	
	return value;
	
}