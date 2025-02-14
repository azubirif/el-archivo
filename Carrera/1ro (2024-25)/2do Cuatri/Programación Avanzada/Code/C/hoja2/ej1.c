#include<stdio.h>

int main(int argc, char const *argv[])
{
    float t;
    printf("Introduce la temperatura: ");
    scanf("%f", &t);

    if (t == 0) printf("La temperatura es 0");
    else if (t > 0) printf("La temperatura es mayor a 0");
    else printf("La temperatura es menor a 0");

    printf("\n");

    return 0;
}
