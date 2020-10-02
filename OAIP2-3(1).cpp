#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;

	printf("Enter a: ");
	scanf_s("%f", &a);

	printf("Enter b: ");
	scanf_s("%f", &b);

	printf("Enter c: ");
	scanf_s("%f", &c);

	float S, p;

	p = (a + b + c) / 2;
	S = sqrt(p*(p - a)*(p - b)*(p - c));

	printf("S is %.3f\n", S);

	return 0;
}