#include <stdio.h>
#include <stdlib.h>

//yildizlarla diamond sekli bastirma

int main() {

	int row;
	printf("Input : ");
	scanf_s("%d", &row);

	//ust kisim
	for (int i = 0; i <row; i++) {
		for (int j = i; j < row; j++)
			printf(" ");

		for (int k = i; k > 0; k--)
			printf("*");

		for (int l = 1; l < i; l++)
			printf("*");
		printf("\n");
		
	
	}
	//alt kisim
	for (int i = 0; i < row; i++) {

		for (int l = 0; l < i; l++)
			printf(" ");

		for (int k = i; k < row; k++)
			printf("*");
		for (int k = i +1; k < row; k++)
			printf("*");

		printf("\n");
	}

	system("pause");
}