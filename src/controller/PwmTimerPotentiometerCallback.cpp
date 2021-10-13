#include <controller/PwmTimerPotentiometerCallback.h>

PwmTimerPotentiometerCallback::PwmTimerPotentiometerCallback(unsigned int minPeriod, unsigned int maxPeriod, Pwm* pwm):
    minPeriod(minPeriod), maxPeriod(maxPeriod), pwm(pwm) {
}

void PwmTimerPotentiometerCallback::onChange(float value) {
    pwm->setPeriod((maxPeriod-minPeriod)*value + minPeriod);
}
