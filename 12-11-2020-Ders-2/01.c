#include "stdio.h"
#include "stdlib.h"
#include "math.h"

// Soru 1

int main() {

	int num, copynum, digit=0, remainder, sum=0;

	printf("sayýyý giriniz: ");
	scanf_s("%d", &num);

	copynum = num;

	while (copynum != 0) {//satýr bulma iþlemi
		digit++;
		copynum /= 10;
	}

	copynum = num;


	/*
	1
	153 % 10 = 3
	sum = 3^3
	153 / 10 = 15

	2
	15 % 10 = 5
	sum 3^3 + 5^3
	15 / 10 = 1

	3
	1 % 10 = 1
	sum 3^3 + 5^3 + 1^3
	1 / 10 = 0
	
	*/
	while (copynum != 0) {//armstrong sayý bulma
		remainder = copynum % 10;
		sum += pow(remainder, digit);
		copynum = copynum / 10;
	}

	if (num == sum)
		printf("\narmstrong sayisidir\n");
	else
		printf("armstrong sayisi degildir");

	system("pause");
}