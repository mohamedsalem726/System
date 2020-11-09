/*
 * KeyPad03.c
 *
 * Created: 10/10/2020 10:28:40 ?
 * Author : Ali
 */ 

#include "KeyPad.h"
#include "LCD.h"


int main(void)
{
	uint8 val = 0;
	
   LCD_Init();
   KeyPad_Init();
 
    while (1) 
    {
		val  =  KeyPad_GetValue() ;
		
		if(val)
		{
			LCD_WriteChar(val);
			val = 0;
		}
		
    }
}

