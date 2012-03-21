/** @file beaglepwm
 *  @brief support for PWM operations
 */
#ifndef _BEAGLEPWM_H
#define _BEAGLEPWM_H

#define CM_PER_REG_START 0x44e00000
#define CM_PER_REG_LENGTH 1024
#define CM_PER_EPWMSS0_CLKCTRL_OFFSET 0xd4
#define CM_PER_EPWMSS1_CLKCTRL_OFFSET 0xcc
#define CM_PER_EPWMSS2_CLKCTRL_OFFSET 0xd8

#define PWM_CLOCK_ENABLE 0x2
#define PWM_CLOCK_DISABLE 0x0

#define PWM_LIST_MAX 3


/**
 *
 */
extern void pwm_enable(unsigned pwmNumber);

#endif /* _BEAGLEPWM_H */
