#ifndef LASER_CONTROLLER_POTENTIOMETER_PWM
#define LASER_CONTROLLER_POTENTIOMETER_PWM

#include <hardware/PotentiometerCallback.h>
#include <pwm/Pwm.h>

class PwmTimerPotentiometerCallback: public PotentiometerCallback {
public:
    PwmTimerPotentiometerCallback(unsigned int minPeriod, unsigned int maxPeriod, Pwm* pwm);
	void onChange(float value);
private:
    unsigned int minPeriod;
    unsigned int maxPeriod;
    Pwm* pwm;
}; 

#endif