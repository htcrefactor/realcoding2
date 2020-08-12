// Input: 30 short values of score data 
// short s / scanf("%hd", &s);

// Main: makes sthread1, sthread2 work and leaves
// sthread1: avg, sum
// sthread2: sort and print
// man pthread_create

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

#define SCORES_SIZE 10

float avg = 0;
short sum = 0;
short scores[SCORES_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int compare(const void* first, const void* second) {
	if (*(short*)first > *(short*)second) return 1;
    else if (*(short*)first < *(short*)second) return -1;
    else return 0;
}

// void* hello_thread(void* arg) {
// 	int i = 200;

// 	printf("Hello_Thread Start(d1:%d, d2:%d, i:%d)!!\n", d1, d2, i);
// 	for (i = 1; i <= (int)arg; i++) {
// 		printf("Hello_Thread_%d!!\n", i);
// 		d1++;
// 		d2++;
// 		sleep(1);
// 	}
// 	printf("Hello_Thread End(d1:%d, d2:%d, i:%d)!!\n", d1, d2, i);
// 	//return arg;
// 	pthread_exit(arg);
// }

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
	// for(int i = 0 ; i < SCORES_SIZE ; i++) {
	// 	scanf("%hd", scores[i]);
	// }

	pthread_t sthread1;
	pthread_t sthread2;

	pthread_attr_t attr; // Find attributes by googling.
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

	// Do not kill shared global memory so child threads can still use this data.
	pthread_exit(NULL);

	return 0;
}