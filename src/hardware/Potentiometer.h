#ifndef LASER_CONTROLLER_HARWARE_POTENTIOMETER
#define LASER_CONTROLLER_HARWARE_POTENTIOMETER

#include <hardware/PotentiometerCallback.h>

class Potentiometer {
public:
    Potentiometer(int offSignal, int onSignal, uint8_t apin, PotentiometerCallback* callback);
    void loop();
private:
    int last;
    int offSignal;
    int onSignal;
    uint8_t apin;
    PotentiometerCallback* callback;
};

#endif
