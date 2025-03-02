#include<stdio.h>

void ordenarNumeros(int *a, int *b, int *c)
{
    int arr[] = {*a, *b, *c};

    int max = arr[0];
    int min = arr[2];

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
    }
    *a = max;
    *c = min;


}