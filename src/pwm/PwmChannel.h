#ifndef LASER_CONTROLLER_PWM_CHANNEL
#define LASER_CONTROLLER_PWM_CHANNEL

#include <pwm/PwmTimer.h>

class PwmChannel {
public:
    PwmChannel(PwmTimer* timer, int pin, float dutyCyle);
    void loop();
    void setDutyCyle(float dutyCyle);
    unsigned int getDutyUnits();
private:
    PwmTimer* timer;
    int pin;
    unsigned int dutyUnits;
};

#endif