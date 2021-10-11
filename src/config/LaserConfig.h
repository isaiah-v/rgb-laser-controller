#ifndef LASER_CONTROLLER_CONFIG
#define LASER_CONTROLLER_CONFIG

#include <pwm/PwmTimer.h>
#include <pwm/PwmChannel.h>
#include <pwm/PwmLooper.h>
#include <controller/PwmChannelPotentiometerCallback.h>
#include <controller/PwmTimerPotentiometerCallback.h>
#include <hardware/Potentiometer.h>

const unsigned int PWM_DEFAULT_PERIOD = 20000;
const float PWM_DEFAULT_DUTY_CYCLE = 0.00;

const int PIN_RED = 12;
const int PIN_GREEN = 11;
const int PIN_BLUE = 10;

extern PwmTimer pwmTimer;
extern PwmChannel pwmRed;
extern PwmChannel pwmGreen;
extern PwmChannel pwmBlue;
extern PwmLooper pwmLooper;

extern PwmTimerPotentiometerCallback timerPotentiometerCallback;
extern PwmChannelPotentiometerCallback redPotentiometerCallback;
extern PwmChannelPotentiometerCallback greenPotentiometerCallback;
extern PwmChannelPotentiometerCallback bluePotentiometerCallback;

extern Potentiometer timmerPotentiometer;
extern Potentiometer redPotentiometer;
extern Potentiometer greenPotentiometer;
extern Potentiometer bluePotentiometer;

#endif