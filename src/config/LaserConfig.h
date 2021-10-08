#ifndef LASER_CONTROLLER_CONFIG
#define LASER_CONTROLLER_CONFIG

#include <pwm/PulseWidthModulation.h>
#include <pwm/PwmChannel.h>
#include <pwm/PwmLooper.h>

const int PWM_PERIOD = 1000;

const int PIN_RED = 13;
const int PIN_GREEN = 12;
const int PIN_BLUE = 11;

extern PulseWidthModulation pwm;
extern PwmChannel pwmRed;
extern PwmChannel pwmGreen;
extern PwmChannel pwmBlue;
extern PwmLooper pwmLooper;

#endif