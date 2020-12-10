#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int us_alma(int, int);

int main() {

	// us alma fonksiyonumuzu denediğimiz yer
	/*int taban = 2, us = 3;
	int sonuc = 1;

	for (int i = 0; i < us; i++)
	{
		sonuc = sonuc * taban;
	}
	printf("sonuc: %d\n", sonuc);

	printf("sonuc: %d\n", us_alma(2, 3));*/


	int arr[10];// 0 1 2 3 4 5 6 7 8 9 
	/*arr[0] = 2;
	arr[1] = 8;
	arr[2] = 3;
	printf("%d  %d  %d ", arr[0], arr[1], arr[2]);*/
	int num;
	printf("Kac sayi gireceksiniz? (en fazla 10 sayi girebilirsiniz)\n");
	scanf_s("%d", &num);
	printf("\n");

	// inputları alıyoruz
	for (int i = 0; i < num; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	//ortlalama hesabı
	double toplam = 0, ort;
	for (int i = 0; i < num; i++)
	{
		toplam += arr[i];
	}
	ort = toplam / num;

	// standart sapma hesabının kesirli ifadesinin üst tarafı
	double ust_taraf = 0;
	for (int i = 0; i < num; i++)
	{
		ust_taraf += us_alma(abs(arr[i] - ort), 2);
	}

	//denklemin geri kalanı
	double sonuc;
	sonuc = sqrt(ust_taraf/(double)(num-1));

	printf("Ort: %lf\nSS: %lf\n", ort, sonuc);
	system("pause");
}

int us_alma(int taban, int us) {
	if (us == 0)
		return 1;
	return taban * us_alma(taban, us - 1); // 2^3 -> 2*2^2 -> 2*2^1 -> 2*2^0
}