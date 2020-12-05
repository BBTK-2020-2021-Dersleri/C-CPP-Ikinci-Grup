#include "stdio.h"
#include "stdlib.h"

int main()
{
	int true_num, guess, deneme_sayýsý = 0;
	srand(time(NULL));
	true_num = rand() % 101;//[0, 100]

	while (1)
	{
		printf("Tahmini giriniz: ");
		scanf_s("%d", &guess);

		deneme_sayýsý++;

		if (true_num == guess)//eðer tahmin doðruysa
		{
			printf("Tebrikler!\n");
			break;
		}
		else if (true_num > guess)//eðer tahmin sayýdan küçükse
		{
			printf("Daha büyük bir sayý girin.\n");
		}
		else if (true_num < guess) //eðer tahmin sayýdan büyükse
		{
			printf("Daha küçük bir sayý girin.\n");
		}

	}

	printf("%d denemede kazandýnýz!\n\n", deneme_sayýsý);

	system("pause");
}