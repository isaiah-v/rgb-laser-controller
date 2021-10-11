#include <Arduino.h>
#include <pwm/PwmChannel.h>

PwmChannel::PwmChannel(PwmTimer* timer, int pin, float dutyCyle): timer(timer), pin(pin), dutyCyle(dutyCyle) {
    setDutyCyle(dutyCyle);
    pinMode(pin, OUTPUT);
}

void PwmChannel::loop() {
    if(timer->isSignalHigh(dutyCyle)) {
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
