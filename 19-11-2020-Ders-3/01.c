#include <stdlib.h>
#include<stdio.h>
#include<time.h>

int main() {
	srand(time(NULL));
	int n,say�,sum=0,min,max;
	double ortalama;
	printf("Sayi giriniz: ");
	scanf_s("%d", &n);
	 
	for (int i = 0; i < n; i++) {
		say� = rand()%100;
		if (i == 0) {
			min = say�;
			max = say�;
		}
		if (min > say�)
			min = say�;
		if (max < say�)
			max = say�;

		printf("%d\t", say�);
		sum += say�;
		//sum=sum+say�;
	}
	printf("\nToplam: %d\n", sum);
	ortalama = (double)sum / n;
	printf("Ortalama: %f\n", ortalama);
	printf("Minimum: %d\n", min);
	printf("Maximum: %d\n", max);

	system("pause");
}