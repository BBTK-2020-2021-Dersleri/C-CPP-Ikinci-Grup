#include "stdio.h" 
#include "stdlib.h"

int main()
{
	/* 
	* yorum içindeki switch-case ve açýk if else ler ayný görevi yapýyor
	*/
	int x = 8;
	/*switch (x)
	{
	case 5:
		printf("x = 5\n");
		break;
	case 3:
		printf("x = 3\n");
		break;
	default:
		printf("x 3 ve ya 5 e esit degil\n");
		break;
	}*/
	if (x == 5)
		printf("x = 5\n");
	else if (x == 3)
		printf("x = 3\n");
	else
		printf("x 3 ve ya 5 e esit degil\n");
	
	
	system("pause");
}