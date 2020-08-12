#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

#define SCORES_SIZE 10

float avg = 0;
short sum = 0;
short scores[SCORES_SIZE] = {};

int compare(const void* first, const void* second) {
	if (*(short*)first > *(short*)second) return 1;
    else if (*(short*)first < *(short*)second) return -1;
    else return 0;
}

void* pthread1StartRoutine(void* arg) {
	for(int i = 0 ; i < SCORES_SIZE ; i++) {
		sum = sum + scores[i];
	}

	printf("Sum = %hd\n", sum);

	avg = (float)sum / SCORES_SIZE;
	printf("Average = %0.2f\n", avg);
}

void* pthread2StartRoutine(void* arg) {
	qsort(scores, SCORES_SIZE, sizeof(short), compare);
	for(int i = SCORES_SIZE - 1 ; i >= 0 ; i--) {
		printf("%hd\n", scores[i]);
	}
}

int main(void) {
	for(int i = 0 ; i < SCORES_SIZE ; i++) {
		scanf("%hd", &scores[i]);
	}

	pthread_t sthread1;
	pthread_t sthread2;

	pthread_attr_t attr;
	int status;

	printf("Main_Thread Start\n");
	status = pthread_create(&sthread1, NULL, pthread1StartRoutine, NULL);
	printf("Status: %d\n", status);
	status = pthread_create(&sthread2, NULL, pthread2StartRoutine, NULL);
	printf("Status: %d\n", status);
	
	if (status != 0) {
		perror("Thread create");
		exit(1);
	}

	pthread_exit(NULL);

	return 0;
}