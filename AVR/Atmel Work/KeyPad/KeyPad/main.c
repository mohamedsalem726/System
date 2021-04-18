/*
 * KeyPad.c
 *
 * Created: 10/13/2020 3:50:23 PM
 * Author : Mohamed Salem
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
		val = KeyPad_GetValue() ;
		
		if(val)
		{
			LCD_WriteChar(val);
			val = 0;
		}
		
    }
}

