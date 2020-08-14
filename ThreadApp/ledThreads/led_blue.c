#define GPIO_WPI_BLUE 4
#define GPIO_PERIOD_BLUE 2

#include "led.h"

void* thread_function_blue(void* arg) {
    blinkLed(GPIO_WPI_BLUE, GPIO_PERIOD_BLUE, arg);
    pthread_exit("thread_blue end");
}