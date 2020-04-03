/*
 * CallByValue.c
 *
 *  Created on: Mar 9, 2020
 *      Author: VKUNDURTHI
 */

/**
 * call by value method both formal and actual parameters have separate memory,
 * so if you change formal argument values those don't reflect to actual arguments
 */

#include <stdio.h>

void printResult(int value) {
	printf("\nBefore changing value inside the printResult function: %d", value);

	value += value;

	printf("\nAfter changing value inside the printResult function: %d", value);
}

int main() {
	int value = 100;
	printf("Before calling printResult() value is : %d", value);
	printResult(value);
	printf("\nAfter calling printResult() value is : %d", value);
	return 0;
}
