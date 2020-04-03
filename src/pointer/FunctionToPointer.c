/*
 * FunctionToPointer.c
 *
 *  Created on: Mar 12, 2020
 *      Author: VKUNDURTHI
 */

#include <stdio.h>

int addition();

int main() {

	setbuf(stdout, NULL);
	int result;
	int (*ptr)();
//	result = addition(); normal way to call function

	// call function using pointer
	ptr = &addition;
	result = (*ptr)();
	printf("\nSum of two values = %d", result);
	return 0;
}

int addition() {
	int a, b;
	printf("Enter two number to sum?:");
	scanf("%d %d", &a, &b);
	return a + b;
}
