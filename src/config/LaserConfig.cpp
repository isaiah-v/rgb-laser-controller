#include <Arduino.h>
#include <config/LaserConfig.h>

Pwm pwm = Pwm(PWM_DEFAULT_PERIOD);
PwmController pwmController = PwmController(
    &pwm,
    PWM_PIN_RED,
    PWM_PIN_GREEN,
    PWM_PIN_BLUE);

PwmTimerPotentiometerCallback timerPotentiometerCallback = PwmTimerPotentiometerCallback(PWM_PERIOD_MIN, PWM_PERIOD_MAX, &pwm);
PwmChannelPotentiometerCallback redPotentiometerCallback = PwmChannelPotentiometerCallback(&pwm, PwmChannel::RED);
PwmChannelPotentiometerCallback greenPotentiometerCallback = PwmChannelPotentiometerCallback(&pwm, PwmChannel::GREEN);
PwmChannelPotentiometerCallback bluePotentiometerCallback = PwmChannelPotentiometerCallback(&pwm, PwmChannel::BLUE);

Potentiometer timmerPotentiometer = Potentiometer(
    POTENTIOMETER_SIGNAL_OFF,
    POTENTIOMETER_SIGNAL_ON,
    POTENTIOMETER_PIN_PERIOD,
    &timerPotentiometerCallback);

Potentiometer redPotentiometer = Potentiometer(
    POTENTIOMETER_SIGNAL_OFF,
    POTENTIOMETER_SIGNAL_ON,
    POTENTIOMETER_PIN_RED,
    &redPotentiometerCallback);

Potentiometer greenPotentiometer = Potentiometer(
    POTENTIOMETER_SIGNAL_OFF,
    POTENTIOMETER_SIGNAL_ON,
    POTENTIOMETER_PIN_GREEN,
    &greenPotentiometerCallback);

Potentiometer bluePotentiometer = Potentiometer(
    POTENTIOMETER_SIGNAL_OFF,
    POTENTIOMETER_SIGNAL_ON,
    POTENTIOMETER_PIN_BLUE,
    &bluePotentiometerCallback);
