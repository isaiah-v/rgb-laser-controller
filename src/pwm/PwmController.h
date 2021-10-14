#ifndef LASER_CONTROLLER_PWM_CONTROLLER
#define LASER_CONTROLLER_PWM_CONTROLLER

#include <pwm/Pwm.h>

class PwmController {
public:
    PwmController(Pwm* pwm, const uint8_t redPin, const uint8_t greenPin, const uint8_t bluePin);
    void loop();
private:
    Pwm* pwm;
    const uint8_t redPin;
    const uint8_t greenPin;
    const uint8_t bluePin;
};

#endif