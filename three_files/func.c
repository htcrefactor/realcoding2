// func.c file
#include "func.h"
#include <stdio.h>

int global_id = 201620989;
char global_name[] = "Hyung-Taik Choi";

int func_name_or_id(void) {
#ifdef PRINT_ID
	printf("Name: %s\n", global_name);
	return 1;
#else
	printf("ID: %d\n", global_id);
	return 0;
#endif
}
