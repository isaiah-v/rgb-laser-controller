#include "Arduino.h"
#include <config/LaserConfig.h>

void setup() {
}

void loop() {
	timmerPotentiometer.loop();
	redPotentiometer.loop();
	greenPotentiometer.loop();
	bluePotentiometer.loop();
	pwmLooper.loop();
}