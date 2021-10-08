#ifndef LASER_CONTROLLER_PWM_LOOPER
#define LASER_CONTROLLER_PWM_LOOPER

#include <pwm/PulseWidthModulation.h>
#include <pwm/PwmChannel.h>

class PwmLooper {
public:
    PwmLooper(PulseWidthModulation* pwm, PwmChannel* red, PwmChannel* green, PwmChannel* blue);
    void loop();
private:
    PulseWidthModulation* pwm;
    PwmChannel* red;
    PwmChannel* green;
    PwmChannel* blue;
};

#endif