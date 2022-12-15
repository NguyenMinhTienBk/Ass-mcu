/*
 * fsm_manual.c
 *
 *  Created on: Oct 7, 2022
 *      Author: pc
 */

#include "fsm_mode_Led7Seg.h"
//int Ts = 10;
//int count = 1;
void fsm_mode_led7seg(){

	switch (status_led7seg){
		case INIT:
				status_led7seg = MODE1_led7seg_1;
				//updateLedBuffer(led12,led34);
				//SetLed7Seg1On();
				//update7SEG(index_led);
				index_led++;
//				setTimer3(Ts);
				setTimer3(250);
			break;
		case MODE1_led7seg_1:
			if (timer3_flag == 1){
//				updateLedBuffer(led12,led34);
				status_led7seg = MODE1_led7seg_2;
//				SetLed7Seg2On();
//				update7SEG(index_led);
				index_led++;
//				setTimer3(Ts);
				setTimer3(250);
			}
			break;
		case MODE1_led7seg_2:
			if (timer3_flag == 1){
//				updateLedBuffer(led12,led34);
				status_led7seg = MODE1_led7seg_3;
//				SetLed7Seg3On();
//				update7SEG(index_led);
				index_led++;
//				setTimer3(Ts);
				setTimer3(255);
			}
			break;
		case MODE1_led7seg_3:

			if (timer3_flag == 1){
//				updateLedBuffer(led12,led34);
				status_led7seg = MODE1_led7seg_4;
//				SetLed7Seg4On();
//				update7SEG(index_led);
				index_led = 0;
//			    if ((Ts * 4) * count >= 1000){
//			    	led12--;
//			    	led34--;
//			    	count = 1;
//			    }
//			    else count++;
//				setTimer3(Ts);
				if (led12 - 1 != 0 ) led12--;
				if (led34 - 1 != 0 ) led34--;
				setTimer3(250);
			}
			break;
		case MODE1_led7seg_4:
			if (timer3_flag == 1){
//				updateLedBuffer(led12,led34);
				status_led7seg = MODE1_led7seg_1;
//				SetLed7Seg1On();
//				update7SEG(index_led);
				index_led++;
				setTimer3(250);
			}
			break;
		case MODE_MODIFY_led7seg_1:
			if (timer3_flag == 1){
//				updateLedBuffer(led12,led34);
				status_led7seg = MODE_MODIFY_led7seg_2;
//				SetLed7Seg2On();
//				update7SEG(index_led);
				index_led++;
				setTimer3(250);
			}
			break;
		case MODE_MODIFY_led7seg_2:
			if (timer3_flag == 1){
//				updateLedBuffer(led12,led34);
				status_led7seg = MODE_MODIFY_led7seg_3;
//				SetLed7Seg3On();
//				update7SEG(index_led);
				index_led++;
				setTimer3(250);
			}
			break;
		case MODE_MODIFY_led7seg_3:
			if (timer3_flag == 1){
//				updateLedBuffer(led12,led34);
				status_led7seg = MODE_MODIFY_led7seg_4;
//				SetLed7Seg4On();
//				update7SEG(index_led);
				index_led = 0;
				setTimer3(250);
			}
			break;
		case MODE_MODIFY_led7seg_4:
			if (timer3_flag == 1){
//				updateLedBuffer(led12,led34);
				status_led7seg = MODE_MODIFY_led7seg_1;
//				SetLed7Seg1On();
//				update7SEG(index_led);
				index_led++;
				setTimer3(250);
			}
			break;
		default:
			break;
	}
}
