/*
 * AnalogClock.h
 *
 *  Created on: 2026. 10. 23.
 *      Author: kccistc
 */

#ifndef SRC_AP_ANALOGCLOCK_ANALOGCLOCK_H_
#define SRC_AP_ANALOGCLOCK_ANALOGCLOCK_H_

#include "../../driver/stepmotor/stepmotor.h"

typedef struct {
	uint8_t hour;
	uint8_t min;
	uint8_t sec;
	uint8_t msec;
} clockNeedle_time_t;

void ClockNeedle_init(void);
void ClockNeedle_ISR(void);
void ClockNeedle_setTime(clockNeedle_time_t *t);

#endif /* SRC_AP_ANALOGCLOCK_ANALOGCLOCK_H_ */
