/*
 * 3DArray1.c
 *
 *  Created on: Mar 16, 2020
 *      Author: VKUNDURTHI
 */

#include <stdio.h>

int main() {

	int arr[3][3][4] = {
			{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 3}},
			{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 3}},
			{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 3}}
	};
	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			for (int k = 0 ; k < 4; k++) {
				printf("%4d", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;
}

