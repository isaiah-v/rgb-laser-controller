#include <config/LaserConfig.h>

PwmTimer pwmTimer = PwmTimer(PWM_DEFAULT_PERIOD);
PwmChannel pwmRed = PwmChannel(&pwmTimer, PIN_RED, PWM_DEFAULT_DUTY_CYCLE);
PwmChannel pwmGreen = PwmChannel(&pwmTimer, PIN_GREEN, PWM_DEFAULT_DUTY_CYCLE);
PwmChannel pwmBlue = PwmChannel(&pwmTimer, PIN_BLUE, PWM_DEFAULT_DUTY_CYCLE);
PwmLooper pwmLooper = PwmLooper(&pwmTimer, &pwmRed, &pwmGreen, &pwmBlue);