/*
 * TM167.h
 *
 *  Created on: Dec 15, 2022
 *      Author: pc
 */

#ifndef INC_TM1637_H_
#define INC_TM1637_H_

#include "stm32f1xx_hal.h"

void TM1637_Init(void);
void TM1637_Demo(void);
void TM1637_DisplayDecimal(int v, int displaySeparator);
void TM1637_SetBrightness(char brightness);
void TM1637_Start(void);
void TM1637_Stop(void);
void TM1637_ReadResult(void);
void TM1637_WriteByte(unsigned char b);
void TM1637_DelayUsec(unsigned int i);
void TM1637_ClkHigh(void);
void TM1637_ClkLow(void);
void TM1637_DataHigh(void);
void TM1637_DATALow(void);

#endif /* INC_TM1637_H_ */
