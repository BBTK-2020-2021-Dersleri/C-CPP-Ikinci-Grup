#include "stdio.h"
#include "stdlib.h"

int main()
{
	int true_num, guess, deneme_say�s� = 0;
	srand(time(NULL));
	true_num = rand() % 101;//[0, 100]

	while (1)
	{
		printf("Tahmini giriniz: ");
		scanf_s("%d", &guess);

		deneme_say�s�++;

		if (true_num == guess)//e�er tahmin do�ruysa
		{
			printf("Tebrikler!\n");
			break;
		}
		else if (true_num > guess)//e�er tahmin say�dan k���kse
		{
			printf("Daha b�y�k bir say� girin.\n");
		}
		else if (true_num < guess) //e�er tahmin say�dan b�y�kse
		{
			printf("Daha k���k bir say� girin.\n");
		}

	}

	printf("%d denemede kazand�n�z!\n\n", deneme_say�s�);

	system("pause");
}