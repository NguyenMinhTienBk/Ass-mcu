/*
 * pedestrian.h
 *
 *  Created on: Dec 6, 2022
 *      Author: pc
 */

#ifndef INC_PEDESTRIAN_H_
#define INC_PEDESTRIAN_H_
#include "global.h"
#include "button.h"
#include "led_display.h"
#include "input_reading.h"

#include "software_timer.h"

#define Ncycle_Pe_off	2 // Number of cycle led pedestrian off
void pedestrian_cramble();
void Buzzer_On();
void Buzzer_Off();
extern int dutycycle;
extern int delay;
#endif /* INC_PEDESTRIAN_H_ */
