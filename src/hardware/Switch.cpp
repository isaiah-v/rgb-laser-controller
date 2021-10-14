#include <Arduino.h>
#include <hardware/Switch.h>

Switch::Switch(const uint8_t pin): pin(pin) {
    pinMode(pin, INPUT);
}

bool Switch::isOn() {
    return digitalRead(pin);
}