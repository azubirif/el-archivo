#include<stdio.h>

double mean(int *arr, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(arr+i);
    }

    return (double)sum / size;
}

int main()
{
    int c[] = {1, 5, 2 ,9 ,0};

    printf("Media: %.3f\n", mean(c, 5));
}
