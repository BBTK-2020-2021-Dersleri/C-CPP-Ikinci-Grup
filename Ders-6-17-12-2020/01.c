#include <stdio.h>
#include <stdlib.h>

void main() {

	long int num, hold1, hold2, flag = 0, holdnum;

	printf("sayi giriniz: ");
	scanf_s("%d", &num);
	holdnum = num;
	hold1 = num % 10;
	num /= 10;

	while (num != 0) {
		hold2 = num % 10;
		num /= 10;
		if (hold1 != hold2 + 1 && hold1 != hold2 - 1) {
			flag = 1;
			break;
		}
		hold1 = hold2;
	}

	if (flag == 0) {
		printf("%ld is a step number  \n\n", holdnum);
	}
	else
		printf("%ld is not a step number  \n\n", holdnum);

	system("pause");

}