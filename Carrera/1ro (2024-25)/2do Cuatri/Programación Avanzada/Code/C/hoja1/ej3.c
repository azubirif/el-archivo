#include <stdio.h>

int main(int argc, char *argv[])
{
	int cel;

	printf("Dime la temperatura en Celsius (C): ");

	scanf("%d", &cel);

	printf("La temperatura en Fahrenheit es %.2f (F)\n", cel*1.8 + 32);

	return 0;
}
