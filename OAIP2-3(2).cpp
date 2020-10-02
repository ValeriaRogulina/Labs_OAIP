#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, x;

	printf("Enter a: ");
	scanf_s("%f", &a);

	printf("Enter b: ");
	scanf_s("%f", &b);

	printf("Enter x: ");
	scanf_s("%f", &x);

	float y, z;

	y = a * pow(x, 2) - 4 * b;

	if (y != 0) {
		z = (a * x - b) / y;
		printf("Z is %.3f\n", z);
	}
	else {
		printf("z not defined");
	}

	return 0;
}
