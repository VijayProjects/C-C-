/*
 * 2DFirstApp.c
 *
 *  Created on: Mar 10, 2020
 *      Author: VKUNDURTHI
 */

#include <stdio.h>

int main() {

	// int a [4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // method 1 and difficult way
	int arr[4][3] = { { 1, 2, 3 }, { 2, 3, 1 }, {3, 1, 2}, {1, 2, 3} }; // method 2 and easy

	// printing as matrix format

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
