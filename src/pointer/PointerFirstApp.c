/*
 * PointerFirstApp.c
 *
 *  Created on: Mar 10, 2020
 *      Author: VKUNDURTHI
 */

#include <stdio.h>

int main() {

	int number = 50;
	int *p; // integer pointer

	p = &number;
	printf("Address of p pointer = %p\n",p);
	printf("Value of pointer variable = %d", *p);
	return 0;
}

