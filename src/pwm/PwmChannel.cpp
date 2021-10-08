#include <Arduino.h>
#include <pwm/PwmChannel.h>

PwmChannel::PwmChannel(PwmTimer* timer, int pin, float dutyCyle): timer(timer), pin(pin) {
    setDutyCyle(dutyCyle);
    pinMode(pin, OUTPUT);
}

void PwmChannel::loop() {
    if(timer->isSignalHigh(dutyUnits)) {
        digitalWrite(pin, HIGH);
    } else {
        digitalWrite(pin, LOW);
    }
}

void PwmChannel::setDutyCyle(float dutyCyle) {
    this->dutyUnits = dutyCyle * timer->getPeriod();
}

unsigned int PwmChannel::getDutyUnits() {
    return this->dutyUnits;
}
