/*
 * Sorting.c
 *
 *  Created on: Mar 9, 2020
 *      Author: VKUNDURTHI
 */
#include <stdio.h>

void sortArray(int arr[]) {
	int temp;
	for (int i = 0; i <= 6; i++) {
		for (int j = i + 1; j <= 6; j++) {
			if (arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int k = 0; k <= 6; k++) {

		printf("%d, ",arr[k]);
	}
}
int main() {
	int arr[] = { 20, 10, 2, 30, 5, 4, 15 };

	sortArray(arr);
	return 0;
}

