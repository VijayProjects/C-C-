/*
 * ArithmeticPointer.c
 *
 *  Created on: Mar 10, 2020
 *      Author: VKUNDURTHI
 */

#include <stdio.h>

int main() {
	int number = 50;
	int *p = NULL;
	p = &number;
	printf("Before increment Address of p = %u", p);
	p += 1;

	printf("\nAfter increment Address of p = %u", p);

	p -= 1;
	printf("\nAfter decrement Address of p = %u", p);
	return 0;
}
