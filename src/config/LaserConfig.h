#ifndef LASER_CONTROLLER_CONFIG
#define LASER_CONTROLLER_CONFIG

#include <pwm/Pwm.h>
#include <pwm/PwmController.h>
#include <controller/PwmChannelPotentiometerCallback.h>
#include <controller/PwmTimerPotentiometerCallback.h>
#include <hardware/Potentiometer.h>

const unsigned int PWM_DEFAULT_PERIOD = 0;
const float PWM_DEFAULT_DUTY_CYCLE = 0.00;

// Potentiometer anolog input pins
const uint8_t POTENTIOMETER_PIN_PERIOD  = A5;
const uint8_t POTENTIOMETER_PIN_RED     = A4;
const uint8_t POTENTIOMETER_PIN_GREEN   = A3;
const uint8_t POTENTIOMETER_PIN_BLUE    = A2;

// Potentiometer limits
const int POTENTIOMETER_SIGNAL_OFF  = 200;
const int POTENTIOMETER_SIGNAL_ON   = 950;

// Pwm digital ouput pins
const uint8_t PWM_PIN_RED   = 12;
const uint8_t PWM_PIN_GREEN = 11;
const uint8_t PWM_PIN_BLUE  = 10;

// PWM period limits
const unsigned int PWM_PERIOD_MIN   = 4000;
const unsigned int PWM_PERIOD_MAX   = 65535;


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