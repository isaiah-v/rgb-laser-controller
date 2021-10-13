#ifndef LASER_CONTROLLER_PWM_CONTROLLER
#define LASER_CONTROLLER_PWM_CONTROLLER

#include <pwm/Pwm.h>

class PwmController {
public:
    PwmController(Pwm* pwm, const int redPin, const int greenPin, const int bluePin);
    void loop();
private:
    Pwm* pwm;
    const int redPin;
    const int greenPin;
    const int bluePin;
};

#endif