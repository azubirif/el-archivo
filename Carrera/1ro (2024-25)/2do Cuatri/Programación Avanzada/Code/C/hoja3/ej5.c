#include<stdio.h>

float calcularPrecioFinal(float precio, float perc)
{
    return precio * (100 - perc) / 100;
}

int main()
{
    float p, d;
    printf("Dame precio y porcentaje: ");
    scanf("%f %f", &p, &d);

    printf("Precio final: %.3f\n", calcularPrecioFinal(p,d));
}