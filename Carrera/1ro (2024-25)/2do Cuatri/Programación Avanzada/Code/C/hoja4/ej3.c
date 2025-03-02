#include<stdio.h>
#include<math.h>

#define PI 3.14159

int main()
{
    int r;
    int *pr = &r;

    printf("Dame el radio: ");
    scanf("%d", pr);

    printf("Resultado: %.3f\n", PI*pow(*pr, 2));
}