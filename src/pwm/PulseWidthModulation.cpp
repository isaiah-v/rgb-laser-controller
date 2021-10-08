#include <Arduino.h>
#include <pwm/PulseWidthModulation.h>

PulseWidthModulation::PulseWidthModulation(int period): period(period), currentPeriodRadio(-1.0) {
}

void PulseWidthModulation::loop() {
    this->currentPeriodRadio = (micros() % this->period) / this->period;
}

int PulseWidthModulation::getPeriod() {
    return period;
}

bool PulseWidthModulation::isSignalHigh(float dutyCycle) {
    return this->currentPeriodRadio <= dutyCycle;
}

float PulseWidthModulation::getCurrentPeriodRadio() {
    return this->currentPeriodRadio;
}
