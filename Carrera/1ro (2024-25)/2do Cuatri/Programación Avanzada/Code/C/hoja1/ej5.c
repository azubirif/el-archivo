#include <stdio.h>

int main(int argc, char *argv[])
{
	float a,b;

	printf("Dame dos números: ");

	scanf("%f %f", &a, &b);

	printf("%.3f / %.3f = %.3f", a,b, a / b);

	return 0;
}
