#ifndef LASER_CONTROLLER_POTENTIOMETER_PWM_TIMER
#define LASER_CONTROLLER_POTENTIOMETER_PWM_TIMER

#include <hardware/PotentiometerCallback.h>
#include <pwm/PwmTimer.h>

class PwmTimerPotentiometerCallback: public PotentiometerCallback {
public:
    PwmTimerPotentiometerCallback(unsigned int minPeriod, unsigned int maxPeriod, PwmTimer* pwmTimer);
	void onChange(float value);
private:
    unsigned int minPeriod;
    unsigned int maxPeriod;
    PwmTimer* pwmTimer;
}; 

#endif