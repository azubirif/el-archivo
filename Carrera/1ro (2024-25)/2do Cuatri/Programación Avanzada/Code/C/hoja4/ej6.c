#include<stdio.h>

void sum(int *a, int *b, int *result)
{
    *result = *a + *b;
}

void diff(int *a, int *b, int *result)
{
    *result = *a - *b;
}

int main()
{
    int a, b, suma, resta;
    printf("Dame dos números: ");
    scanf("%d %d", &a, &b);

    sum(&a, &b, &suma);
    diff(&a, &b, &resta);

    printf("Suma: %d\nResta: %d\n", suma, resta);
}