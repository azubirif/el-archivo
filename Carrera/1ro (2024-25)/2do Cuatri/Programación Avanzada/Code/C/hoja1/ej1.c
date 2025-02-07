#include <stdio.h>

int main(int argc, char *argv[])
{
	int edad;

	printf("Dime la edad del perro: ");
	scanf("%d", &edad);

	edad = (edad - 2) * 4 + 21;

	printf("Edad en humano: %d", edad);

	return 0;
}
