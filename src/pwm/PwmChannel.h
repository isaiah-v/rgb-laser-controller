#ifndef LASER_CONTROLLER_PWM_CHANNEL
#define LASER_CONTROLLER_PWM_CHANNEL

#include <pwm/PwmTimer.h>

class PwmChannel {
public:
    PwmChannel(PwmTimer* timer, int pin, float dutyCyle);
    void loop();
    void setDutyCyle(float dutyCyle);
    float getDutyCyle();
private:
    PwmTimer* timer;
    int pin;
    float dutyCyle;
};

#endif