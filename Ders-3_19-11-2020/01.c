#include <stdlib.h>
#include<stdio.h>
#include<time.h>

int main() {
	srand(time(NULL));
	int n,sayý,sum=0,min,max;
	double ortalama;
	printf("Sayi giriniz: ");
	scanf_s("%d", &n);
	 
	for (int i = 0; i < n; i++) {
		sayý = rand()%100;
		if (i == 0) {
			min = sayý;
			max = sayý;
		}
		if (min > sayý)
			min = sayý;
		if (max < sayý)
			max = sayý;

		printf("%d\t", sayý);
		sum += sayý;
		//sum=sum+sayý;
	}
	printf("\nToplam: %d\n", sum);
	ortalama = (double)sum / n;
	printf("Ortalama: %f\n", ortalama);
	printf("Minimum: %d\n", min);
	printf("Maximum: %d\n", max);

	system("pause");
}