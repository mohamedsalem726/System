/*
 * LCD_03.c
 *
 * Created: 09/10/2020 11:50:48 ص
 * Author : Ali
 */ 

#include "LCD.h"


int main(void)
{
   
   LCD_Init();
   LCD_WriteString("FLORO ");
   LCD_WriteString("3AYEZ ");
   LCD_Goto(1,0);
   LCD_WriteString("YTGAWEZ ");
   
    while (1) 
    {
    }
}

