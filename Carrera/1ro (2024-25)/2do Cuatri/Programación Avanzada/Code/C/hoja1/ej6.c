#include <stdio.h>

int main(int argc, char *argv[])
{
	char pw[] = "password123";

	char pw2[50];

	printf("Introduce la contraseña: ");

	scanf("%s", pw2);

	short i;

	int correct = 1;

	for (i = 0; i < 50; ++i) {
		if (pw[i] != pw2[i])
		{
			printf("0");
			correct = 0;
			break;
		}
		if (pw2[i] == '\0') break;
	}

	if (correct) printf("1");

	return 0;
}
