#include <pwm/PwmLooper.h>

PwmLooper::PwmLooper(PwmTimer* timer, PwmChannel* red, PwmChannel* green, PwmChannel* blue):
    timer(timer), red(red), green(green), blue(blue) {
}

void PwmLooper::loop() {
    timer->loop();
    red->loop();
    green->loop();
    blue->loop();
}