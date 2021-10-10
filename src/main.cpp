#include "Arduino.h"
#include <config/LaserConfig.h>

void setup() {
	pwmRed.setDutyCyle(0.15);
}

void loop() {
	timmerPotentiometer.loop();
	//redPotentiometer.loop();
	//greenPotentiometer.loop();
	//bluePotentiometer.loop();
	pwmLooper.loop();
}