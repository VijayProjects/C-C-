/*
 * 3DArray.c
 *
 *  Created on: Mar 16, 2020
 *      Author: VKUNDURTHI
 */

#include <stdio.h>

int main() {
	int arr[2][2][3] = {
			{ { 1, 2, 3 }, { 4, 5, 6 } },
			{ { 1, 2, 3 },{ 4, 5, 6 } } };
	for (int i = 0; i < 2; i++) {

		for (int j = 0 ; j < 2; j++) {

			for (int k = 0; k < 3; k++) {
				printf("%4d", arr[i][j][k]);
			}
			printf("\n");
		}

		printf("\n\n");
	}
	return 0;

}

