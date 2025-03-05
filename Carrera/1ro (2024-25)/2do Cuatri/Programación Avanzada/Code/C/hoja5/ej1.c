#include<stdio.h>

int azMax(int a, int b)
{
    if (a > b) return a;
    return b;
}

int main()
{
    int p, q;

    printf("Dame dos números: ");
    scanf("%d %d", &p, &q);

    printf("Max: %d\n", azMax(p, q));
}

