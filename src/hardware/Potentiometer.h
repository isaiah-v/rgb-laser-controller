#ifndef LASER_CONTROLLER_HARWARE_POTENTIOMETER
#define LASER_CONTROLLER_HARWARE_POTENTIOMETER

#include <hardware/PotentiometerCallback.h>

class Potentiometer {
public:
    Potentiometer(float offLock, float onLock, int apin, PotentiometerCallback* callback);
    void loop();
private:
    int last;
    float offLock;
    float onLock;
    int apin;
    PotentiometerCallback* callback;
};

#endif