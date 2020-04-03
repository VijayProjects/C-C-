/*
 * CallByValue.c
 *
 *  Created on: Mar 9, 2020
 *      Author: VKUNDURTHI
 */

/**
 * call by value method both formal and actual parameters have same address as memory,
 * so if you change formal argument values those will be reflected to actual arguments
 */

#include <stdio.h>

void change(int *value) {
	printf("\nValue address is : %p", value);
	printf("\nBefore changing value inside the change function: %d", *value);

	(*value) += *value;

	printf("\nAfter changing value inside the printchangeResult function: %d", *value);
}

int main() {
	int value = 100;
	printf("Before calling change() value is : %d", value);
	printf("\nBefore calling change() Address is : %p", &value);
	change(&value);
	printf("\nAfter calling change() value is : %d", value);
	return 0;
}
