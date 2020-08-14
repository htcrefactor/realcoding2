#include <wiringPi.h>

#define GPIO_WPI_RED 1
#define GPIO_PERIOD_RED 1

extern void blinkLed(int pin, int turns, int period);