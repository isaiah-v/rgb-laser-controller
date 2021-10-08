#include <Arduino.h>
#include <pwm/PwmTimer.h>

PwmTimer::PwmTimer(unsigned int period): period(period), currentPeriodUnits(0) {
}

void PwmTimer::loop() {
    this->currentPeriodUnits = micros() % this->period;
}

void PwmTimer::setPeriod(unsigned int period) {
    this->period = period;
}

unsigned int PwmTimer::getPeriod() {
    return period;
}

bool PwmTimer::isSignalHigh(float dutyCycle) {
    return isSignalHigh((unsigned int)(dutyCycle*period));
}

bool PwmTimer::isSignalHigh(unsigned int dutyUnits) {
    return dutyUnits!=0 && currentPeriodUnits <= dutyUnits;
}

unsigned int PwmTimer::getCurrentPeriodUnits() {
    return this->currentPeriodUnits;
}
