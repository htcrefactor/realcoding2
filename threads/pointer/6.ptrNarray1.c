#include <stdio.h>

int main(void)
{
	short arr[5] = {1, 2, 3, 4, 5};
	short *p;
	int i;

	for(i=0, p=arr; i<5; i++) {
		printf("%d,%d\n", arr[i], ....);
		printf("%d,%d\n", ....., *(p+i));
	}

	return 0;
}
