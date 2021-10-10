#include <Arduino.h>
#include <hardware/Potentiometer.h>

const int POTENTIOMETER_TOLERANCE = 30;

Potentiometer::Potentiometer(float offLock, float onLock, int apin, PotentiometerCallback* callback): offLock(offLock), onLock(onLock), apin(apin), callback(callback) {
}

void Potentiometer::loop() {
    int val = analogRead(this->apin);
    if(abs(last-val) < POTENTIOMETER_TOLERANCE) {
        return;
    }

    last = val;

    float fval = val / 1000.0f;
    if(fval<=offLock) {
        fval = 0;
    } else if(fval >= onLock) {
        fval = 1.0;
    }

    callback->onChange(fval);
}