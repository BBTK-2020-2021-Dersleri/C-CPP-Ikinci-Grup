#include <stdio.h>
#include <stdlib.h>


// i�i bo� y�ld�zl� ��gen

int main() {

	int row;
	printf("Input: ");
	scanf_s("%d", &row);

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1 || j == i || i == row)
				printf("*");
			else
				printf(" ");
			
		}
		printf("\n");
	}


	system("pause");
}