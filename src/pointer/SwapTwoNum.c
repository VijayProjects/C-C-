/*
 * PointerFirstApp.c
 *
 *  Created on: Mar 10, 2020
 *      Author: VKUNDURTHI
 */

#include <stdio.h>

int main() {

	int a = 10, b = 20, *x, *y;

	x = &a; y = &b;
	printf("Before swap--->x=%u, y=%u",*x, *y);
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
	printf("\nAfter swap--->x=%u, y=%u",*x, *y);
	return 0;
}

