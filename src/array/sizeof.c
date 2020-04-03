/*
 * sizeof.c
 *
 *  Created on: Mar 16, 2020
 *      Author: VKUNDURTHI
 */
#include <stdio.h>
int main() {
	int arr[] = {1,3,3,4,4,5,2,3345,456,56,23,4546,456,4356,34,5,3,3,3,3,3,3,5,56,34,4,3,5,4

	};

	/**
	 * number of elements = sizeof(arr) / sizeof(arr[0]);
	 *
	 * sizeof(arr) = integer range * number of elements
	 * 				 4 * 15 (say)
	 * 				 60
	 *
	 * sizeof(arr[0]) = bytes of any index value
	 * 					arr[0] ==> 1 ==> 4 bytes
	 *
	 * 	finally number of elements = 60 / 4 ==> 15
	 */

	printf("Size of array is : %d", sizeof(arr) / sizeof(arr[0]));
	return 0;
}
