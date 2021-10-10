#include <Arduino.h>
#include <config/LaserConfig.h>

PwmTimer pwmTimer = PwmTimer(PWM_DEFAULT_PERIOD);
PwmChannel pwmRed = PwmChannel(&pwmTimer, PIN_RED, PWM_DEFAULT_DUTY_CYCLE);
PwmChannel pwmGreen = PwmChannel(&pwmTimer, PIN_GREEN, PWM_DEFAULT_DUTY_CYCLE);
PwmChannel pwmBlue = PwmChannel(&pwmTimer, PIN_BLUE, PWM_DEFAULT_DUTY_CYCLE);
PwmLooper pwmLooper = PwmLooper(&pwmTimer, &pwmRed, &pwmGreen, &pwmBlue);

PwmTimerPotentiometerCallback timerPotentiometerCallback = PwmTimerPotentiometerCallback(10000, 65535, &pwmTimer);
//PwmChannelPotentiometerCallback redPotentiometerCallback = PwmChannelPotentiometerCallback(&pwmRed);
//PwmChannelPotentiometerCallback greenPotentiometerCallback = PwmChannelPotentiometerCallback(&pwmGreen);
//PwmChannelPotentiometerCallback bluePotentiometerCallback = PwmChannelPotentiometerCallback(&pwmGreen);

Potentiometer timmerPotentiometer = Potentiometer(0.12, 0.95, A5, &timerPotentiometerCallback);
//Potentiometer redPotentiometer = Potentiometer(0.12, 0.95, A4, &redPotentiometerCallback);
//Potentiometer greenPotentiometer = Potentiometer(0.12, 0.95, A3, &greenPotentiometerCallback);
//Potentiometer bluePotentiometer = Potentiometer(0.12, 0.95, A2, &bluePotentiometerCallback);