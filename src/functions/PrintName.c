/*
 * PrintName.c
 *
 *  Created on: Mar 9, 2020
 *      Author: VKUNDURTHI
 */
#include<stdio.h>

/*void printName () {
	printf("Hello!, C language function");
}*/
void printName();
int main() {
	// calling printName() funtion
	printName();
	return 0;
}

void printName () {
	printf("Hello!, C language function");
}

/**
 * Note1: If we implementing function before main function, No need to declare function
 * Note2: If we implementing function after main function, We must to declare function at the top
 */
