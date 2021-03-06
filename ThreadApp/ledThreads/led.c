#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "led.h"

void blinkLed(int pin, int turns, int period) {
    char buffer[64];
    pinMode(pin, OUTPUT);
	for(int i = 0 ; i < turns ; i++) {
		digitalWrite(pin, 1);

        sprintf(buffer, "LED :: PIN(%d) READ(1) COUNTER(%d)\n", pin, i);
		write(1, buffer, strlen(buffer));
		
        delay(period * 1000);
		
        digitalWrite(pin, 0);
        
        sprintf(buffer, "LED :: PIN(%d) READ(0) COUNTER(%d)\n", pin, i);
		write(1, buffer, strlen(buffer));
		
        delay(period * 1000);
	}
}