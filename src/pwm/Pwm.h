#ifndef LASER_CONTROLLER_PWM
#define LASER_CONTROLLER_PWM

enum PwmChannel {
    RED, GREEN, BLUE
};

/**
 * The component that manages the pwm timming
 */
class Pwm {
public:

    /**
     * Creates a PulseWidthModulation instance.
     * 
     * @param period - the cycle period in microseconds
     */
    Pwm(unsigned int period);
    
    void setPeriod(unsigned int period);

    /**
     * Gets the set period in microseconds
     * 
     * @returns the period in micros
     * econds
     */
    unsigned int getPeriod();
    
    /**
     * Called on every interation of the event loop to update the current state
     */
    void loop();

    bool isSignalHigh(PwmChannel channel);
    bool isSignalHighRed();
    bool isSignalHighGreen();
    bool isSignalHighBlue();

    void setDutyCycle(PwmChannel channel, float dutyCycle);
    void setDutyCycleRed(float dutyCycle);
    void setDutyCycleGreen(float dutyCycle);
    void setDutyCycleBlue(float dutyCycle);
    
private:
    unsigned int period;
    unsigned int currentPeriodUnits;
    
    float redDutyCycle;
    float greenDutyCycle;
    float blueDutyCycle;

    unsigned int redDutyUnits;
    unsigned int greenDutyUnits;
    unsigned int blueDutyUnits;
    
    bool isSignalHigh(unsigned int dutyUnits);
    unsigned int toDutyUnits(float dutyCycle);
};

#endif
