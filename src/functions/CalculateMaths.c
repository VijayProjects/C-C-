/*
 * CalculateMaths.c
 *
 *  Created on: Mar 9, 2020
 *      Author: VKUNDURTHI
 */
#include<stdio.h>

int sum(int num1, int num2);
double square(int num);

void displayResult(int sum, double square);

int main() {
	int sumValue = sum(100, 200);
	double squareValue = square(25);
	displayResult(sumValue, squareValue);
	return 0;
}

// function for sum of integer values

int sum (int num1, int num2) {
	return num1 + num2;
}

// function for find square value for given number

double square (int num) {
	return num * num;
}

// function for display results

void displayResult(int sum, double square) {

	printf("Sum value is : %d\n", sum);
	printf("Square value is : %lf", square);
}
