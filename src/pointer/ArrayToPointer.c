/*
 * ArrayToPointer.c
 *
 *  Created on: Mar 12, 2020
 *      Author: VKUNDURTHI
 */

#include <stdio.h>

int show();
int showAdd(int b);

int (*arr[3])();
int (*(*ptr)[3])();

int main() {
	int result;
	arr[0] = show;
	arr[1] = showAdd;
	ptr = &arr;
	result = (**ptr)();
	printf("print the function value = %d", result);
	(*(*ptr + 1))(result);
	return 0;
}

int show() {
	int a = 65;
	return a;
}

int showAdd(int b) {
	printf("\nprint values after add show function return value = %d", b + 90);
	return 0;
}
