#include "stdio.h"
#include "stdlib.h"

//Y�ld�z bast�rma i�lemi/soru 2

int main() {

	int row;
	printf("Input number of rows: ");
	scanf_s("%d", &row);

	for (int i = 1; i <= row; i++) {

		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	printf("\n");
	printf("\n");

	for (int i = row; i > 0; i--) {

		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	printf("\n");
	printf("\n");

	for (int i = row; i > 0; i--) {

		for (int j = 1; j <= i; j++)
			printf(" ");

		for (int k = row; k >= i; k--)
			printf("*");

		printf("\n");
	}


	system("pause");
}