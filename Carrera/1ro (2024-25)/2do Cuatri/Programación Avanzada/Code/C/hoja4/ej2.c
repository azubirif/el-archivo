#include<stdio.h>

int main()
{
    int i1, i2;
    int *pi1 = &i1, *pi2 = &i2;

    printf("Dame dos números:\n");
    scanf("%d", pi1);
    scanf("%d", pi2);

    printf("Resultado: %d\n", *pi1*(*pi2));
}