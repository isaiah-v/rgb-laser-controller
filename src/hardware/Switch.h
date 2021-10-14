#ifndef LASER_CONTROLLER_HARWARE_SWITCH
#define LASER_CONTROLLER_HARWARE_SWITCH

class Switch {
public:
    Switch(const uint8_t pin);
    bool isOn();
private:
    const uint8_t pin;
};

#endif
