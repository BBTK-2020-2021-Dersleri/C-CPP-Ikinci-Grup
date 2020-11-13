#include <stdio.h>
#include <stdlib.h>



int main() {
	int size, num=0;
	printf("enter size: ");
	scanf_s("%d", &size);


	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			printf("%d", num);
			num++;
		}
		
		printf("\n");
	}


	system("pause");
}