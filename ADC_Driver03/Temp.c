/*
 * Temp.c
 *
 * Created: 10/19/2020 12:54:32 AM
 *  Author: Mohamed Salem
 */ 


#include "Temp.h"


void  TempSensor_Init(void)
{
	ADC_Init();
}


uint16  TempSensor_Read(void)
{
	uint16 Digtial_OutPut = 0;
	uint16 Temp = 0;
	
	Digtial_OutPut = ADC_Read();
	
	Temp = (Digtial_OutPut*500) / 1024 ;
	
	return Temp;
	
}