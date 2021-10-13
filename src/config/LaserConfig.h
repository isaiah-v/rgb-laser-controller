#ifndef LASER_CONTROLLER_CONFIG
#define LASER_CONTROLLER_CONFIG

#include <pwm/Pwm.h>
#include <pwm/PwmController.h>
#include <controller/PwmChannelPotentiometerCallback.h>
#include <controller/PwmTimerPotentiometerCallback.h>
#include <hardware/Potentiometer.h>

const unsigned int PWM_DEFAULT_PERIOD = 20000;
const float PWM_DEFAULT_DUTY_CYCLE = 0.00;

const int PIN_RED = 12;
const int PIN_GREEN = 11;
const int PIN_BLUE = 10;

extern Pwm pwm;
extern PwmController pwmController;

extern PwmTimerPotentiometerCallback timerPotentiometerCallback;
extern PwmChannelPotentiometerCallback redPotentiometerCallback;
extern PwmChannelPotentiometerCallback greenPotentiometerCallback;
extern PwmChannelPotentiometerCallback bluePotentiometerCallback;

extern Potentiometer timmerPotentiometer;
extern Potentiometer redPotentiometer;
extern Potentiometer greenPotentiometer;
extern Potentiometer bluePotentiometer;

#endif