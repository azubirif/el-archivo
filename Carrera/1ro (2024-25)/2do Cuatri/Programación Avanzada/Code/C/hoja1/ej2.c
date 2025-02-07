#include<stdio.h>

int main(int argc, char *argv[])
{
	char palabra[50];

	printf("Dime una palabra (máximo 50 caracteres): ");

	scanf("%s", palabra);

	short i;

	short l;

	for (i = 0; i < 50; ++i) {
		if (palabra[i] == '\0') //Como no sabemos cuanto mide, buscamos el caracter NULL
		{
			l = i;
			break;
		}
	}

	printf("La palabra tiene %d caracteres.\n", l);

	return 0;
}
