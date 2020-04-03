/*
 * DoublePointer.c
 *
 *  Created on: Mar 10, 2020
 *      Author: VKUNDURTHI
 */

#include <stdio.h>

int main() {
	int number = 50;
	int *p = NULL;
	int **pp = NULL;
	p = &number;
	pp = &p;

	printf("Address of number = %p", &number);
	printf("\n Address of *P = %p", p);
	// printf("\n Address of **pp = %p", pp);

	printf("\n Value of number = %d", number);
	printf("\n Value of *P = %d", *p);
	printf("\n Value of **pp = %d", **pp);

	return 0;
}

