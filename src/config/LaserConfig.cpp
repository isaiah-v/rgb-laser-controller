#include <config/LaserConfig.h>

PulseWidthModulation pwm = PulseWidthModulation(PWM_PERIOD);
PwmChannel pwmRed = PwmChannel(&pwm, PIN_RED);
PwmChannel pwmGreen = PwmChannel(&pwm, PIN_GREEN);
PwmChannel pwmBlue = PwmChannel(&pwm, PIN_BLUE);
PwmLooper pwmLooper = PwmLooper(&pwm, &pwmRed, &pwmGreen, &pwmBlue);