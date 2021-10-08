#include <pwm/PwmLooper.h>

PwmLooper::PwmLooper(PulseWidthModulation* pwm, PwmChannel* red, PwmChannel* green, PwmChannel* blue):
    pwm(pwm), red(red), green(green), blue(blue) {
}

void PwmLooper::loop() {
    pwm->loop();
    red->loop();
    green->loop();
    blue->loop();
}