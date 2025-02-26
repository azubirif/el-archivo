#include<stdio.h>

float convertirFahrenheitACelsius(float f)
{
    return (f-32)*5/9;
}

int main()
{
    float f;
    printf("Dame fahrenheit: ");
    scanf("%f", &f);

    printf("En Celsius: %.3fC\n", convertirFahrenheitACelsius(f));
}