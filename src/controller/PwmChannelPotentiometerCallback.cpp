#include <controller/PwmChannelPotentiometerCallback.h>

PwmChannelPotentiometerCallback::PwmChannelPotentiometerCallback(PwmChannel* pwmChannel): pwmChannel(pwmChannel) {
}

void PwmChannelPotentiometerCallback::onChange(float value) {
    pwmChannel->setDutyCyle(value);
}
