#include <stdio.h>

int main(void)
{
	short arr[5] = {1, 2, 3, 4, 5};
	short *p;
	int i;

	p = &arr[0];
	printf("%d,%d\n", arr[1], p[3]);

	p = &arr[1];
	printf("%d,%d\n", arr[1], p[3]);

#if 0
	for(i=0, p=arr; i<5; i++) {
		printf("%d,%d\n", arr[i], p[i]);
		printf("%d,%d\n", *(arr + i), *(p+i));
	}
#endif

	for(i=0, p=arr; i<5; i++, p++) {
		printf("%d,%d\n", arr[i], p[i]);
	}
	
	/*This doens't work because arr is declared as short * const arr internally.
	for(i=0, p=arr; i<5; i++, arr++) {
		printf("%d,%d\n", p[i], *arr);
	}
	*/

	return 0;
}
