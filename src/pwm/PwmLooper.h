#ifndef LASER_CONTROLLER_PWM_LOOPER
#define LASER_CONTROLLER_PWM_LOOPER

#include <pwm/PwmTimer.h>
#include <pwm/PwmChannel.h>

class PwmLooper {
public:
    PwmLooper(PwmTimer* timer, PwmChannel* red, PwmChannel* green, PwmChannel* blue);
    void loop();
private:
    PwmTimer* timer;
    PwmChannel* red;
    PwmChannel* green;
    PwmChannel* blue;
};

#endif