/*
 * Variables.c
 *
 *  Created on: Mar 6, 2020
 *      Author: VKUNDURTHI
 */
#include<stdio.h>
#include "ExternVariable.h"
int a = 100; // global variable
// extern int var;
int main() {
	/**
	 * 1. Local variable
	 * 2. Global variable
	 * 3. Static variable
	 * 4. Automatic variable
	 * 5. Extern variable
	 */

	int x = 10; // local variable also automatic varibles
	static int y = 20;
	auto int z= 30; // auto variable

	printf("a = %d\n", a);
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}
