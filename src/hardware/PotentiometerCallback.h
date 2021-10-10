#ifndef LASER_CONTROLLER_HARWARE_POTENTIOMETER_CALLBACK
#define LASER_CONTROLLER_HARWARE_POTENTIOMETER_CALLBACK

class PotentiometerCallback {
public:
    virtual void onChange(float value) = 0;
};

#endif