#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/types.h>
#include <errno.h>
#include <unistd.h>
#include <sys/syscall.h>

#include "led.h"
#include "led_blue.h"
#include "led_yellow.h"

#define NOMUTEX

#ifndef NOMUTEX
pthread_mutex_t mutex_id;
#endif

int main(int argc, char *argv[]) 
{
    if (argc != 1 && argc != 3)
    {
        printf("Usage : LedThreads.exe [GPIO_NO] [BLINK_NO]\n");
        exit(-1);
    }

    pthread_t tid_blue, tid_yellow;
    void *thread_result;

#ifndef NOMUTEX
    if (pthread_mutex_init(&mutex_id, NULL) != 0)
    {
        perror("pthread_mutex_init");
        exit(errno);
    }
#endif

    if (wiringPiSetup() == -1)
    {
        perror("wiringPiSetup()\n");
        return -1;
    }

    if (argc == 1)
    {
        blinkLed(GPIO_WPI_RED, 10, 1);
    }

    else
    {
        if (strcmp(argv[1], "1") == 0)
        {
            if (pthread_create(&tid_blue, NULL, thread_function_blue, argv[2]) != 0)
            {
                perror("pthread_create");
                exit(1);
            }
        }

        else if (strcmp(argv[1], "2") == 0)
        {
            if (pthread_create(&tid_yellow, NULL, thread_function_yellow, argv[2]) != 0)
            {
                perror("pthread_create");
                exit(1);
            }
        }

        else if (strcmp(argv[1], "3") == 0)
        {
            if (pthread_create(&tid_blue, NULL, thread_function_blue, argv[2]) != 0)
            {
                perror("pthread_create");
                exit(1);
            }

            if (pthread_create(&tid_yellow, NULL, thread_function_yellow, argv[2]) != 0)
            {
                perror("pthread_create");
                exit(1);
            }

            if (pthread_join(tid_blue, &thread_result) != 0)
            {
                perror("pthread_join");
                exit(1);
            }

            if (pthread_join(tid_yellow, &thread_result) != 0)
            {
                perror("pthread_join");
                exit(1);
            }
        }

        else
        {
            printf("Usage : LedThreads.exe [GPIO_NO] [BLINK_NO]\n");
            printf("[GPIO_NO] = {1: BLUE ONLY, 2: YELLOW ONLY, 3: BOTH} [BLINK_NO] = {N}\n");
            exit(-1);
        }
    }

#ifndef NOMUTEX
    pthread_mutex_destroy(&mutex_id);
#endif
    pthread_exit(NULL);
    printf("Execution Finished :: %s\n", (char *)thread_result);
    return 0;
}