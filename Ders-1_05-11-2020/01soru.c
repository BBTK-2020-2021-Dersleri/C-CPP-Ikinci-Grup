#include "stdio.h" 
#include "stdlib.h"

int main()
{

	int kw;
	float tutar;
	printf("Enter the kW: ");
	scanf_s("%d", &kw);
	/*printf("%d\n", kw);*/

	if (kw < 100)
	{
		tutar = kw * 0.10;
	}
	else if (kw >= 100 && kw < 200)
	{
		tutar = 99 * 0.10 + (kw - 99)*0.2;
	}
	else if (kw >= 200 && kw < 300)
	{
		tutar = 99 * 0.10 + 100 * 0.2 + (kw - 199) * 0.3;
	}
	else if (300 <= kw)
	{
		tutar = 99 * 0.1 + 100 * 0.2 + 100 * 0.3 + (kw - 299) * 0.4;
	}
	// her if de önceki deðerlerin tutarýný hesaplayýp kalan fazlalýðý da gerekli sayýyla çarpýp üzerine ekliyoruz
	printf("%.2f\n", tutar);// .2f virgülden sonra iki basamak bastýrýyor

	system("pause");
}