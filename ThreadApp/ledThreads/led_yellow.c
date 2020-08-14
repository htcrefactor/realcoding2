#define GPIO_WPI_YELLOW 5
#define GPIO_PERIOD_YELLOW 3

#include "led.h"

void* thread_function_yellow(void* arg) {
    blinkLed(GPIO_WPI_YELLOW, GPIO_PERIOD_YELLOW, arg);
    pthread_exit("thread_yellow end");
}