#include <stdio.h>

int main(int argc, char *argv[])
{
	float a, b;

	printf("Dame dos números separados por espacios: ");

	scanf("%f %f", &a, &b);

	printf("%d", a > b);

	return 0;
}
