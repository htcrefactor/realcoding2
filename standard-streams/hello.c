#include <stdio.h>

int main() {
	int a; 
	fscanf(stdin, "%d", &a); 
	
	if (a > 0) fprintf(stderr, "Error: It is postive\n"); 
	else fprintf(stderr, "Error: It is negative\n");
	
    fprintf(stdout, "Hello World %10d\n", a);
    
    return 0;
}
