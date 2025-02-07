#include <stdio.h>

int main(int argc, char *argv[])
{
	float coste;

	printf("Dime el coste de la comida: ");

	scanf("%f", &coste);

	printf("Con un 20 por ciento de propina: %.3f euros.\nCon un 15 por ciento de propina: %.3f euros.",0.2*coste, 0.15*coste);

	return 0;
}
