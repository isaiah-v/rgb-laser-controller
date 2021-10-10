#ifndef LASER_CONTROLLER_POTENTIOMETER_PWM_CHANNEL
#define LASER_CONTROLLER_POTENTIOMETER_PWM_CHANNEL

#include <hardware/PotentiometerCallback.h>
#include <pwm/PwmChannel.h>

class PwmChannelPotentiometerCallback: public PotentiometerCallback {
public:
    PwmChannelPotentiometerCallback(PwmChannel* pwmChannel);
	void onChange(float value);
private:
    PwmChannel* pwmChannel;
}; 

#endif