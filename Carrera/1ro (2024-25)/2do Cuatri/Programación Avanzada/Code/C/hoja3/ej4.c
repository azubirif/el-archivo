#include<stdio.h>

int isEven(int n)
{
    return n % 2;
}

int main()
{
    int a;
    printf("Número: ");
    scanf("%d", &a);
    printf("Resultado: %d\n", isEven(a));
}