/*
 * pedestrian.c
 *
 *  Created on: Dec 6, 2022
 *      Author: pc
 */


#include "pedestrian.h"
#include "main.h"

// 0-1 Green
//int counter_Pedes_On = 0;
//
int dutycycle = 0;
int delay = 380;
int count = 0;
void pedestrian_cramble(){
	switch (status_pedes){
	case Pedes_Off:
		SetPedesOff();
		Buzzer_Off();
		if (isButtonflag(butp) == 1){
			count = 0;
			if (status_ver == AUTO_RED){
				status_pedes = Pedes_Go;
				dutycycle = 0;
				delay = 380;
				clearTimer6();
				Buzzer_On();
				count++;
			}else {
				status_pedes = Pedes_Stop;
				Buzzer_Off();
				count++;
			}
		}
		break;
	case Pedes_Go:
		SetPedesGreen();
		Buzzer_On();
		if (status_ver == AUTO_GREEN || status_ver == AUTO_YELLOW){
			if (count >= Ncycle_Pe_off * 2) { // 2 cycle => Off
				status_pedes = Pedes_Off;
				Buzzer_Off();
			}
			else {
				status_pedes = Pedes_Stop;
				Buzzer_Off();
				count++;
			}
		}
		break;
	case Pedes_Stop:
		SetPedesRed();
		Buzzer_Off();
		if (status_ver == AUTO_RED){
			if (count >= Ncycle_Pe_off * 2) {//2 cycle => Off
				status_pedes = Pedes_Off;
				Buzzer_Off();
			}
			else {
				status_pedes = Pedes_Go;
				dutycycle = 0;
				delay = 380;
				clearTimer6();
				Buzzer_On();
				count++;
			}
		}
		break;
	default:
		break;
	}
}
