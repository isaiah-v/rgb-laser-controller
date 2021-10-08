#include <Arduino.h>
#include <pwm/PwmChannel.h>

PwmChannel::PwmChannel(PulseWidthModulation* pwm, int pin) : pwm(pwm), pin(pin) {
    pinMode(pin, OUTPUT);
}

void PwmChannel::loop() {
    if(pwm->isSignalHigh(this->dutyCyle)) {
        digitalWrite(pin, HIGH);
    } else {
        digitalWrite(pin, LOW);
    }
}

void PwmChannel::setDutyCyle(float dutyCyle) {
    this->dutyCyle = dutyCyle;
}

float PwmChannel::getDutyCyle() {
    return this->dutyCyle;
}
