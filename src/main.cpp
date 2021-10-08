#include "Arduino.h"
#include <config/LaserConfig.h>

void setup() {
	pwmRed.setDutyCyle(1.0);
}

void loop() {
	pwmLooper.loop();
	delay(1);
}