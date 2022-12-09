/*
 * led_display.h
 *
 *  Created on: Oct 29, 2022
 *      Author: pc
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

void display7SEG(int num);

void update7SEG(int index);

void SetLed7Seg1On();
void SetLed7Seg2On();
void SetLed7Seg3On();
void SetLed7Seg4On();
void SetLed7Seg12On();
void SetLed7Seg34On();
void SetLed7SegallOn();
void SetLed7SegallOff();

void updateLedBuffer(int led1_2,int led3_4);

void BlinkyRedVer();
void BlinkyGreenVer();
void BlinkyYellowVer();

void BlinkyRedHor();
void BlinkyGreenHor();
void BlinkyYellowHor();

void SetRedVerHor();

void SetOffVer();
void SetRedVer();
void SetGreenVer();
void SetYellowVer();

void SetOffHor();
void SetRedHor();
void SetGreenHor();
void SetYellowHor();
void SetPedesGreen();
void SetPedesRed();
void SetPedesOff();
#endif /* INC_LED_DISPLAY_H_ */
