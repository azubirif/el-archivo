#include<stdio.h>

void ordenarNumeros(int *a, int *b, int *c)
{
    int arr[] = {*a, *b, *c};

    int max = arr[0];
    int min = arr[2];
    int mid = arr[1];

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] < max && arr[i] > min)
        {
            mid = arr[i];
        }
    }
    *a = max;
    *b = mid;
    *c = min;
}

int main()
{
    int p,q,r;

    printf("Dame tres números enteros: ");
    scanf("%d %d %d", &p, &q, &r);
    ordenarNumeros(&p, &q, &r);

    printf("Ordenados: %d > %d > %d\n", p, q, r);
}