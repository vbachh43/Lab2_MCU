/*
 * software_timer.h
 *
 *  Created on: Oct 5, 2023
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_counter;
extern int timer0_flag;
extern int TIMER_CYCLE;

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;

extern int timer_m_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void setTimer_m(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
