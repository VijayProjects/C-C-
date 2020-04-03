/*
 * MatrixMultiplication.c
 *
 *  Created on: Mar 16, 2020
 *      Author: VKUNDURTHI
 */

#include <stdio.h>
#define MAX 50
int main() {
	int arows, acolumns, brows, bcolumns;
	int a[MAX][MAX], b[MAX][MAX];
	int i, j;
	setbuf(stdout, NULL);

	printf("Enter number of rows and columns for A Matrix: ");
	scanf("%d %d", &arows, &acolumns);
	printf("Enter %d X %d Matrix Array:", arows, acolumns);

	for(i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	return 0;
}

