﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {

	setlocale(LC_ALL, "Russian");

	int A, B, s;
	printf("введите целое число А:\n");
	scanf("%d", &A);
	printf("введите целое число B:\n");
	scanf("%d", &B);

	if (A > B && B > 0) {
		s = A % B;
		printf("длина незанятой части отрезка А: %d", s);
	}
	else {
		printf("введите числа заново");
	}
	return 0;

}