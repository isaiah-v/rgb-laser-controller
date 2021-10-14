#include <Arduino.h>
#include <pwm/PwmController.h>

PwmController::PwmController(Pwm* pwm, const uint8_t redPin, const uint8_t greenPin, const uint8_t bluePin): pwm(pwm), redPin(redPin), greenPin(greenPin), bluePin(bluePin) {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}
void PwmController::loop() {
    pwm->loop();
    digitalWrite(redPin, pwm->isSignalHighRed() ? HIGH : LOW);
    digitalWrite(greenPin, pwm->isSignalHighGreen() ? HIGH : LOW);
    digitalWrite(bluePin, pwm->isSignalHighBlue() ? HIGH : LOW);
}