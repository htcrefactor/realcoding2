#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
......

int d1=10, d2;

____ hello_thread(_______)
{
	int i=200;
	
	printf("Hello_Thread Start(d1:%d, d2:%d, i:%d)!!\n", d1,d2,i);
	for(i=1; i<=5; i++) {
		printf("Hello_Thread_%d!!\n", i);
		d1++;
		d2++;
		sleep(1);
	}
	printf("Hello_Thread End(d1:%d, d2:%d, i:%d)!!\n", d1,d2,i);
	return arg;
}

int main(void)
{
	pthread_t tid;
	int status;
	int i=100;
	
	printf("Main_Thread Start(d1:%d, d2:%d, i:%d)!!\n", d1,d2,i);
	status = ________________
	if(status != 0) {
		perror("thread create");
		exit(1);
	}	
	
	for(i=1; i<=8; i++) {
		printf("Main_Thread_%d!!\n", i);
		sleep(1);
	}
	printf("Main_Thread End(d1:%d, d2:%d, i:%d)!!\n", d1,d2,i);
    return 0;
}