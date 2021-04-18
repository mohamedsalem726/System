/*
 * KeyPad.c
 *
 * Created: 10/13/2020 3:52:51 PM
 *  Author: Mohamed Salem
 */ 



#include  "KeyPad.h"
#define   F_CPU  8000000
#include  "util/delay.h"


#define  COL_INIT    0
#define  COL_FINAL   3

#define  ROW_INIT    4
#define  ROW_FINAL   7



uint8  KeyPad_Values[4][4] = {  {'7','8','9','/'},
	                           {'4','5','6','*'},
							   {'1','2','3','-'},
							   {'c','0','=','+'} };   
								   
							   
void KeyPad_Init(void)
{
	DIO_SetPinDir( KEYPAD_PORT , KEYPAD_COLOUM0 , DIO_PIN_OUTPUT);
	DIO_SetPinDir( KEYPAD_PORT , KEYPAD_COLOUM1 , DIO_PIN_OUTPUT);
	DIO_SetPinDir( KEYPAD_PORT , KEYPAD_COLOUM2 , DIO_PIN_OUTPUT);
	DIO_SetPinDir( KEYPAD_PORT , KEYPAD_COLOUM3 , DIO_PIN_OUTPUT);
	
	DIO_SetPinDir( KEYPAD_PORT , KEYPAD_ROW0 , DIO_PIN_INPUT);
	DIO_SetPinDir( KEYPAD_PORT , KEYPAD_ROW1 , DIO_PIN_INPUT);
	DIO_SetPinDir( KEYPAD_PORT , KEYPAD_ROW2 , DIO_PIN_INPUT);
	DIO_SetPinDir( KEYPAD_PORT , KEYPAD_ROW3 , DIO_PIN_INPUT);
	
	DIO_SetPullUp(KEYPAD_PORT , KEYPAD_ROW0);
	DIO_SetPullUp(KEYPAD_PORT , KEYPAD_ROW1);
	DIO_SetPullUp(KEYPAD_PORT , KEYPAD_ROW2);
	DIO_SetPullUp(KEYPAD_PORT , KEYPAD_ROW3);
	
	DIO_SetPinVal(KEYPAD_PORT , KEYPAD_COLOUM0 , DIO_PIN_HIGH);
	DIO_SetPinVal(KEYPAD_PORT , KEYPAD_COLOUM1 , DIO_PIN_HIGH);
	DIO_SetPinVal(KEYPAD_PORT , KEYPAD_COLOUM2 , DIO_PIN_HIGH);
	DIO_SetPinVal(KEYPAD_PORT , KEYPAD_COLOUM3 , DIO_PIN_HIGH);
	
}

uint8 KeyPad_GetValue(void)
{
	uint8 Col_Loc = 0;
	uint8 Row_Loc = 0;
	
	uint8 Value = 0;
	uint8 Temp = 0;
	
	for(Col_Loc = COL_INIT ; Col_Loc <= COL_FINAL ; Col_Loc++)
	{
		DIO_SetPinVal(KEYPAD_PORT , Col_Loc , DIO_PIN_LOW);
		
		for(Row_Loc = ROW_INIT ; Row_Loc <= ROW_FINAL ; Row_Loc++)
		{
			
		 	 Temp =  DIO_GetPinVal(KEYPAD_PORT , Row_Loc);
			 
			 if(!Temp)
			 {
				Value = KeyPad_Values[Row_Loc - ROW_INIT][Col_Loc - COL_INIT]; 
				
				while(!Temp)
				{
				   Temp =  DIO_GetPinVal(KEYPAD_PORT , Row_Loc);
				}
				_delay_ms(10);
			 }
			  
		}
		
		DIO_SetPinVal(KEYPAD_PORT , Col_Loc , DIO_PIN_HIGH);
		
	}
	
	return Value ;
}
