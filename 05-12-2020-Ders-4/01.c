#include <stdio.h>
#include<stdlib.h>

int sumof3(int, int, int);
double average3(int, int, int);
int powerof(int, int);
void count(int);
int toplama(int);

int main() {

	
	printf("%d\n", sumof3(3, 4, 4)); // dönüş değeri void olmayan fonksiyonları değişkenler gibi kullanabiliriz
	printf("%lf\n", average3(3, 4, 4));
	printf("%d\n", powerof(sumof3(1,1,2), 2));// uygun return tipine sahip fonksiyonları parametre olarak gönderebiliriz

	//-----------------------------------
	for (int i = 5; i > 0; i--)
	{
		printf("%d\t", i);
	}
	printf("\n");
	// üstteki for döngüsünün yaptığı işi recursion mantığı ile count() fonksiyonunda yazdık
	count(5);// return değeri void olduğu için herhangi bir atama yapmadık, 
	// çağırdığımızda fonksiyonun kendi içindeki print() fonksiyonlarından output aldık
	//-----------------------------------
	printf("\n%d\n", toplama(4));

	system("pause");
}

int sumof3(int a, int b, int c) {
	
	return a + b + c; // (a + b + c) değerini fonksiyonun çağırıldığı yere döndürdük
}

double average3(int a, int b, int c)//3 sayının ortalaması
{
	return (double)sumof3(a, b, c)/3; // sumof3() fonksiyonunu burda kullanarak toplama işlemini ona yaptırdık
} 

int powerof(int a, int pow) { // üst alma foknsiyonu
	int sonuc = 1; // üstüne çarparak ekleyeceğimiz için başlangıç değerimizi 1 yaptık
	for (int i = 0; i < pow; i++) // girilen üst kadar döndürdük
	{
		sonuc = sonuc * a;
	}
	return sonuc;
}

void count(int a) // girilen değerden 1 e kadar eksilterek sayan fonksiyon
{
	if (a == 0)
		return;
	printf("%d\t", a);
	count(a - 1);
	printf("%d", a);
}

int toplama(int a) // girilen değerin ve altındaki bütün tam sayıların toplamı (0 a kadar)
{
	if (a == 0)
		return 0;
	int sonuc = a + toplama(a - 1);// 4 + toplama(3) x 3 + toplama(2) x 2 + toplama(1) x 1 + toplama(0)
	return sonuc;
}