#include <Arduino.h>
#include <config/LaserConfig.h>

Pwm pwm = Pwm(PWM_DEFAULT_PERIOD);
PwmController pwmController = PwmController(&pwm, PIN_RED, PIN_GREEN, PIN_BLUE);

PwmTimerPotentiometerCallback timerPotentiometerCallback = PwmTimerPotentiometerCallback(8000, 65535, &pwm);
PwmChannelPotentiometerCallback redPotentiometerCallback = PwmChannelPotentiometerCallback(&pwm, PwmChannel::RED);
PwmChannelPotentiometerCallback greenPotentiometerCallback = PwmChannelPotentiometerCallback(&pwm, PwmChannel::GREEN);
PwmChannelPotentiometerCallback bluePotentiometerCallback = PwmChannelPotentiometerCallback(&pwm, PwmChannel::BLUE);

Potentiometer timmerPotentiometer = Potentiometer(200, 950, A5, &timerPotentiometerCallback);
Potentiometer redPotentiometer = Potentiometer(200, 950, A4, &redPotentiometerCallback);
Potentiometer greenPotentiometer = Potentiometer(200, 950, A3, &greenPotentiometerCallback);
Potentiometer bluePotentiometer = Potentiometer(200, 950, A2, &bluePotentiometerCallback);
