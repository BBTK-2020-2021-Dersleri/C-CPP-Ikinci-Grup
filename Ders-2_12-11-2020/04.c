#include <stdio.h>
#include <stdlib.h>

// Soru 3

int main() {

	int num;
	printf("Input: ");
	scanf_s("%d", &num);

	while (1) {
		for (int i = 0; i < num % 10; i++)
			printf("*");

		printf("\n");
		// 1567 / 10 = 156
		num = num / 10;
		if (num < 1)
			break;
	}

	system("pause");
}