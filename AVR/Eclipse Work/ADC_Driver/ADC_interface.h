/*
 * ADC_interface.h
 *
 *  Created on: Nov 9, 2020
 *      Author: Mohamed Salem
 */

#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

#define    ADC_VREF_AVCC       0
#define    ADC_VREF_INTERNAL   1
#define    ADC_VREF_AREF       2

#define    ADC_CHANNEL_0       0
#define    ADC_CHANNEL_1       1
#define    ADC_CHANNEL_2       2
#define    ADC_CHANNEL_3       3
#define    ADC_CHANNEL_4       4
#define    ADC_CHANNEL_5       5
#define    ADC_CHANNEL_6       6
#define    ADC_CHANNEL_7       7

#define   ADC_AUTO_TRIGGER     0

#define   ADC_RIGHT_ADJUST     0
#define   ADC_LEFT_ADJUST      1

#define   INTERRUPT_ENABLE     1
#define   INTERRUPT_DISABLED   0


#define   PRESCALER_2          1
#define   PRESCALER_4          2
#define   PRESCALER_8          3
#define   PRESCALER_16         4
#define   PRESCALER_32         5
#define   PRESCALER_64         6
#define   PRESCALER_128        7



void ADC_Init(void);

uint16 ADC_Read(void);

#endif /* ADC_INTERFACE_H_ */
