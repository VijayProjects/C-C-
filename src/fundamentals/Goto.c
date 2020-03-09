/*
 * Goto.c
 *
 *  Created on: Mar 9, 2020
 *      Author: VKUNDURTHI
 */
#include <stdio.h>
#include <stdbool.h>

int main() {

	int num, i = 1;
	printf("Enter a number which table you want to print:\n");
	scanf("%d", &num);

	table:
	printf("%d x %d = %d\n", num, i, num * i);
	i++;
	if (i <= 10) {
		goto table;
	}
	// return 0;
}

