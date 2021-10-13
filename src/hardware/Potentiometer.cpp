#include <Arduino.h>
#include <hardware/Potentiometer.h>

const int POTENTIOMETER_TOLERANCE = 30;

Potentiometer::Potentiometer(int offSignal, int onSignal, int apin, PotentiometerCallback* callback)
    : offSignal(offSignal), onSignal(onSignal), apin(apin), callback(callback) {
}

void Potentiometer::loop() {
    int val = analogRead(this->apin);
    if(abs(last-val) < POTENTIOMETER_TOLERANCE) {
        return;
    }

    last = val;

    if(val < offSignal) {
        callback->onChange(0.0);
        return;
    } else if(val > onSignal) {
        callback->onChange(1.0);
        return;
    }

    float fvalue = (val-offSignal) / (float)(onSignal-offSignal);
    callback->onChange(fvalue);
}