#include <stdlib.h>
#include <stdio.h>

void main()
{
	int inp, sayi;
	scanf_s("%d", &inp);
	sayi = inp * inp;
	for (int i = 0; i < inp; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("   ");
		}
		for (int j = 0; j < (2*inp) - 1 - 2*i; j++)
		{
			printf("%d", sayi);
			sayi--;
		}
		printf("\n");
	}

	system("pause");
}