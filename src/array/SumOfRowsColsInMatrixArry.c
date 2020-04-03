/*
 * SumOfRowsColsInMatrixArry.c
 *
 *  Created on: Mar 16, 2020
 *      Author: VKUNDURTHI
 */

#include <stdio.h>

int main() {
	int sum = 0;
	int arr[5][5] = {
			{8, 3, 9, 0, 10},
			{3, 5, 17, 1, 1},
			{2, 8, 6, 23, 1},
			{15, 7, 3, 2, 9},
			{6, 14, 2, 6, 0}
	};

	for (int i = 0; i < 4; i++) {
		for(int j = 0; j < 5; j++) {
			sum += arr[i][j];
		}
		printf("%4d", sum);
		sum = 0;
	}

	printf("\n");
	for (int i = 0; i < 4; i++) {
		for(int j = 0; j < 5; j++) {
			sum += arr[j][i];
		}
		printf("%4d", sum);
		sum = 0;
	}

	return 0;
}

