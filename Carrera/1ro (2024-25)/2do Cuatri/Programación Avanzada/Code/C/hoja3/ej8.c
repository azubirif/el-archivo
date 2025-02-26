#include<stdio.h>

float imc(float peso, float altura)
{
    return peso/(altura*altura);
}

int main()
{
    float peso, altura;
    printf("Dame peso y altura: ");
    scanf("%f %f", &peso, &altura);

    float i = imc(peso,altura);
    if (i < 18.5)
    {
        printf("Pesas muy poco :/\n");
    }
    else if (i < 25)
    {
        printf("Estás muy bien :]\n");
    }
    else
    {
        printf("Tienes sobrepeso :(\n");
    }
}