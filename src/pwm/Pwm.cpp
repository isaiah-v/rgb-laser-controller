#include <Arduino.h>
#include <pwm/Pwm.h>

Pwm::Pwm(unsigned int period): period(period), currentPeriodUnits(0) {
}

void Pwm::loop() {
    currentPeriodUnits = micros() % period;
}

void Pwm::setPeriod(unsigned int period) {
    if(this->period==period) {
        return;
    }

    Serial.print("P: ");
    Serial.println(period);
    
    this->period = period;

    // recalc dudty units
    redDutyUnits = toDutyUnits(redDutyCycle);
    greenDutyUnits = toDutyUnits(greenDutyCycle);
    blueDutyUnits = toDutyUnits(blueDutyCycle);
}

unsigned int Pwm::getPeriod() {
    return period;
}

void Pwm::setDutyCycle(PwmChannel channel, float dutyCycle) {
    switch(channel) {
    case RED:
        setDutyCycleRed(dutyCycle);
        break;
    case GREEN:
        setDutyCycleGreen(dutyCycle);
        break;
    case BLUE:
        setDutyCycleBlue(dutyCycle);
        break;
    }
}

void Pwm::setDutyCycleRed(float dutyCycle) {
    if(redDutyCycle==dutyCycle) {
        return;
    }

    Serial.print("R: ");
    Serial.println(dutyCycle);

    this->redDutyCycle = dutyCycle;
    this->redDutyUnits = toDutyUnits(dutyCycle);
}

void Pwm::setDutyCycleGreen(float dutyCycle) {
    if(greenDutyCycle==dutyCycle) {
        return;
    }

    Serial.print("G: ");
    Serial.println(dutyCycle);
    
    this->greenDutyCycle = dutyCycle;
    this->greenDutyUnits = toDutyUnits(dutyCycle);
}

void Pwm::setDutyCycleBlue(float dutyCycle) {
    if(blueDutyCycle==dutyCycle) {
        return;
    }
    
    Serial.print("B: ");
    Serial.println(dutyCycle);
    
    this->blueDutyCycle = dutyCycle;
    this->blueDutyUnits = toDutyUnits(dutyCycle);
}

bool Pwm::isSignalHigh(PwmChannel channel) {
    switch(channel) {
    case RED:
        return isSignalHighRed();
    case GREEN:
        return isSignalHighGreen();
    case BLUE:
        return isSignalHighBlue();
    }
    return false;
}

bool Pwm::isSignalHighRed() {
    return isSignalHigh(this->redDutyUnits);
}

bool Pwm::isSignalHighGreen() {
    return isSignalHigh(this->greenDutyUnits);
}

bool Pwm::isSignalHighBlue() {
    return isSignalHigh(this->blueDutyUnits);
}

bool Pwm::isSignalHigh(unsigned int dutyUnits) {
    return dutyUnits!=0 && currentPeriodUnits <= dutyUnits;
}

unsigned int Pwm::toDutyUnits(float dutyCycle) {
    return this->period * dutyCycle;
}
