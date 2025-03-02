#include<stdio.h>

int main()
{
    int a[3], b[3];

    printf("Dame dos vectores:\n");
    scanf("%d %d %d", a, a+1, a+2);
    scanf("%d %d %d", b, b+1, b+2);

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += *(a+i)*(*(b+i));
    }

    printf("Resultado: %d\n", sum);
}