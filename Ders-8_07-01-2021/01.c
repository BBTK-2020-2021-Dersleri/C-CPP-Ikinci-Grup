#include "stdlib.h"
#include "stdio.h"
#define SIZE 30

int f(int);

int main() {

	int plane[SIZE][SIZE] = {0};

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (j == f(i)) {
				plane[SIZE - j - 1][i] = 1;
			}
		}
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		printf("%3d|", SIZE - i - 1);
		for (int j = 0; j < SIZE; j++)
		{
			if (plane[i][j] == 1)
				printf(" * ");
			else
				printf("   ");
		}
		printf("\n");
	}
	for (int i = 0; i < SIZE; i++)
		printf("---");
	printf("\n   ");
	for (int i = 0; i < SIZE; i++)
		printf("%3d", i);
	printf("\n");
	system("pause");
}

int f(int x) {
	return x;
}
