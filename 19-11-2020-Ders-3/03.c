#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main()
{
	double a, b, c, root1, root2;

	printf("Enter a: ");
	scanf_s("%lf", &a);
	printf("Enter b: ");
	scanf_s("%lf", &b);
	printf("Enter c: ");
	scanf_s("%lf", &c);

	printf("\nEquation: (%.2lf)x^2 + (%.2lf)x + (%.2lf)\n\n", a, b, c);

	if (pow(b, 2) - 4 * a*c > 0 && a != 0) {

		root1 = (-b + sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
		root2 = (-b - sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);

		printf("Root1 -> %lf\n", root1);
		printf("Root2 -> %lf\n\n", root2);
	}
	else
		printf("Can not solvealble.!\n\n");

	system("pause");
}