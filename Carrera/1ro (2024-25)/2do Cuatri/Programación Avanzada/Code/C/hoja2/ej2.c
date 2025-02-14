#include<stdio.h>

int main(int argc, char const *argv[])
{
    int edad;

    printf("Introduce la edad: ");
    scanf("%d", &edad);

    if (edad >= 18) printf("Es mayor de edad\n");
    else printf("Es menor de edad\n");

    return 0;
}
