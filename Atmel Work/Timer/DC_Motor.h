/*
 * DC_Motor.h
 *
 * Created: 10/23/2020 1:57:22 PM
 *  Author: Mohamed Salem
 */ 


#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_


#include "Timer.h"
#include "DIO.h"


void DC_Motor_Init(void);

void DC_Motor_SeetSpeed(uint16 speed);

void DC_Motor_Start(void);

void DC_Motor_Stop(void);


#endif /* DC_MOTOR_H_ */