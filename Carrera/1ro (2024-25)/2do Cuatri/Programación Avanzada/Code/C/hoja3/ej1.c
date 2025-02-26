#include <stdio.h>

int sumar(int a, int b)
{
    return a + b;
}

int main()
{
    int n, m;
    printf("Dame dos números: ");
    scanf("%d %d", &n, &m);

    printf("Resultado: %d\n", sumar(n, m));
}