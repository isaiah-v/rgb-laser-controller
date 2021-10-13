#include <controller/PwmChannelPotentiometerCallback.h>

PwmChannelPotentiometerCallback::PwmChannelPotentiometerCallback(Pwm* pwm, PwmChannel channel): pwm(pwm), channel(channel) {
}

void PwmChannelPotentiometerCallback::onChange(float value) {
    pwm->setDutyCycle(channel, value);
}
