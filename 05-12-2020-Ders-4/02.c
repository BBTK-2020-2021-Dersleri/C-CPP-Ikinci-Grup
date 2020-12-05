#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sumof3(int, int, int);
double average3(int, int, int);
void notprint(long long int, int, int, int);
bool is_valid(long long int, int, int, int);

int main() {

	notprint(152120181071, 105, 55, 20);
	notprint(152120181042, 80, 56, 60);

	system("pause");
}

void notprint(long long int id, int mat, int fizik, int spor) {
	float ortalama = average3(mat, fizik, spor);
	printf("*********************************************\n");
	if (is_valid(id, mat, fizik, spor)) // eğer inputlarım geçerli ise
	{
		printf("%lld numarali ogrencinin yil sonu notları:\n", id);
		printf("Matematik: %d\n", mat);
		printf("Fizik:     %d\n", fizik);
		printf("Spor:      %d\n", spor);
		printf("          -------\n");
		printf("Ortalama:  %lf\n", ortalama);
		if (ortalama >= 50) {
			printf("Gecti.\n");
		}
		else {
			printf("Gecemedi!\n");
		}
	}
	else 
	{
		printf("Yanlis input!\n");
	}

	printf("*********************************************\n");

}

bool is_valid(long long int id, int mat, int fizik, int spor) {
	if (mat < 0 || mat > 100)
		return 0;
	if (fizik < 0 || fizik > 100)
		return 0;
	if (spor < 0 || spor > 100)
		return 0;
	if (id < 100000000000 || id >= 1000000000000)
		return 0;
	return 1;
}

int sumof3(int a, int b, int c) {

	return a + b + c;
}

double average3(int a, int b, int c) {

	return (double)sumof3(a, b, c) / 3;
}
