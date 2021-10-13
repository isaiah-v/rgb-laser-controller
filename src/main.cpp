#include "Arduino.h"
#include <config/LaserConfig.h>

void setup() {
	Serial.begin(9600);
}

void loop() {
	timmerPotentiometer.loop();
	redPotentiometer.loop();
	greenPotentiometer.loop();
	bluePotentiometer.loop();
	pwmController.loop();
}