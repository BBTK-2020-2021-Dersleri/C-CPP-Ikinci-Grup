#include "stdio.h" 
#include "stdlib.h"

int main()
{
	/*
	* yorum sat�rlar� aras�nda kalan kod par�alar� ayn� g�revleri g�r�yor
	*/
	//-------------------------
	int x = 6;
	printf("%d\n", x);
	x++;
	while (x < 5)
	{
		printf("%d\n", x);
		x++;
	}
	//-------------------------
	x = 6;
	printf("-----\n");
	do 
	{
		printf("%d\n", x);
		x++;

	} while (x < 5);
	//-------------------------
	
	system("pause");
}