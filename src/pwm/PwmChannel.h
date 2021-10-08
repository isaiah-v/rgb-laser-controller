#ifndef LASER_CONTROLLER_PWM_CHANNEL
#define LASER_CONTROLLER_PWM_CHANNEL

#include <pwm/PulseWidthModulation.h>

class PwmChannel {
public:
    PwmChannel(PulseWidthModulation* pwm, int pin);
    void loop();
    void setDutyCyle(float dutyCyle);
    float getDutyCyle();
private:
    PulseWidthModulation* pwm;
    int pin;
    float dutyCyle;
};

#endif