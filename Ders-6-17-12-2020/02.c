#include <stdio.h>
#include <stdlib.h>

void main() {
	int arr[20] = { NULL }, range, del, add, num;

	printf("girmek istediginiz sayi adetini yaziniz(max 20): ");
	scanf_s("%d", &range);

	for (int i = 0; i < range; i++) {
		printf("Konum - %d --> ", i);
		scanf_s("%d", &arr[i]);
	}

	printf("silmek istediginiz konumu giriniz: ");
	scanf_s("%d", &del);

	for (int i = del; i < range; i++) {
		arr[i] = arr[i + 1];
	}

	range--;

	printf("son durumda array: \n\n");
	for (int i = 0; i < range; i++) {
		printf("Konum - %d --> %d\n", i, arr[i]);
	}
	printf("\n\n");

	printf("sayi girmek istediginiz konumu seciniz: ");
	scanf_s("%d", &add);
	
	range++;

	if (add <= range) {

		for (int i = range; i > add; i--) {
			arr[i] = arr[i - 1];
		}
	}

	printf("eklemek istediginiz sayiyi yaziniz: ");
	scanf_s("%d", &arr[add]);


	printf("son durumda array: \n\n");
	for (int i = 0; i < 20; i++) {
		if(arr[i] != NULL)
			printf("Konum - %d --> %d\n", i, arr[i]);
	}
	printf("\n\n");


	system("pause");
}