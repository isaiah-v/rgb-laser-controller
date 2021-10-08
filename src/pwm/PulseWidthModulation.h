#ifndef LASER_CONTROLLER_PWM_CALC
#define LASER_CONTROLLER_PWM_CALC

/**
 * A basic PWM module
 */
class PulseWidthModulation {
public:

    /**
     * Creates a PulseWidthModulation instance.
     * 
     * @param period - the cycle period in microseconds
     */
    PulseWidthModulation(int period);
    
    /**
     * Gets the set period in microseconds
     * 
     * @returns the period in micros
     * econds
     */
    int getPeriod();
    
    /**
     * Called on every interation of the event loop to update the current state
     */
    void loop();

    /**
     * Returns a boolean value indicating if the sinal should be high based on the given duty-cycle
     * 
     * @param dutyCycle - a void between 0 and 1 representing the duty cycle
     * @returns true if the signal should be high
     */
    bool isSignalHigh(float dutyCycle);
    
    /**
     * Returns a number between 0 and 1 representing the percentage in which the current period is spent.
     * For example, 0.3 would imply that 30% of the current period has elapsed.
     * 
     * @returns the current period radio
     */
    float getCurrentPeriodRadio();
private:
    const int period;
    float currentPeriodRadio;
};

#endif
