#ifndef LASER_CONTROLLER_POTENTIOMETER_PWM_CHANNEL
#define LASER_CONTROLLER_POTENTIOMETER_PWM_CHANNEL

#include <hardware/PotentiometerCallback.h>
#include <pwm/Pwm.h>

class PwmChannelPotentiometerCallback: public PotentiometerCallback {
public:
    PwmChannelPotentiometerCallback(Pwm* pwm, PwmChannel channel);
	void onChange(float value);
private:
    Pwm* pwm;
    PwmChannel channel;
}; 

#endif