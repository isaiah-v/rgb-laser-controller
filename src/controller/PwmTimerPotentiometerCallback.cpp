#include <controller/PwmTimerPotentiometerCallback.h>

PwmTimerPotentiometerCallback::PwmTimerPotentiometerCallback(unsigned int minPeriod, unsigned int maxPeriod, PwmTimer* pwmTimer):
    minPeriod(minPeriod), maxPeriod(maxPeriod), pwmTimer(pwmTimer) {
}

void PwmTimerPotentiometerCallback::onChange(float value) {
    unsigned int pvalue = (maxPeriod-minPeriod)*value + minPeriod;
    pwmTimer->setPeriod(pvalue);
}
