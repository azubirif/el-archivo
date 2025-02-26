#include<stdio.h>

int abs(int n)
{
    if (n < 0)
        {
            return -n;
        }
    return n;
}

int main()
{
    int a;
    printf("Dame un número: ");
    scanf("%d", &a);

    printf("Abs: %d\n", abs(a));
}