// Input: 30 int values of score data
// Main: makes sthread1, sthread2 work and leaves
// sthread1: avg, sum
// sthread2: sort and print
// man pthread_create

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

int d1 = 10, d2;

void* hello_thread(void* arg) {
	int i = 200;

	printf("Hello_Thread Start(d1:%d, d2:%d, i:%d)!!\n", d1, d2, i);
	for (i = 1; i <= (int)arg; i++) {
		printf("Hello_Thread_%d!!\n", i);
		d1++;
		d2++;
		sleep(1);
	}
	printf("Hello_Thread End(d1:%d, d2:%d, i:%d)!!\n", d1, d2, i);
	//return arg;
	pthread_exit(arg);
}

int main(void) {
	pthread_t tid;
	pthread_attr_t attr; // Find attributes by googling.
	int status;
	int i = 100;

	printf("Main_Thread Start(d1:%d, d2:%d, i:%d)!!\n", d1, d2, i);
	status = pthread_create(&tid, NULL, hello_thread, (void*)15);
	
	if (status != 0) {
		perror("thread create");
		exit(1);
	}

	for (i = 1; i <= 5; i++) {
		printf("Main_Thread_%d!!\n", i);
		sleep(1);
	}

	printf("Main_Thread End(d1:%d, d2:%d, i:%d)!!\n", d1, d2, i);
	// Do not kill shared global memory so child threads can still use this data.
	pthread_exit(NULL);
	return 0;
}