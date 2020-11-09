/*
 * ADC_Driver03.c
 *
 * Created: 10/18/2020 6:05:38 PM
 * Author : Mohamed Salem
 */ 

#include "Temp.h"
#include "LCD.h"



int main(void)
{
	uint16 temp = 0;
	
   LCD_Init();
   TempSensor_Init();
   
    while (1) 
    {
		
		temp = TempSensor_Read() ;
		
		LCD_Clear();
		
		LCD_WriteInteger(temp);
		
    }
}

