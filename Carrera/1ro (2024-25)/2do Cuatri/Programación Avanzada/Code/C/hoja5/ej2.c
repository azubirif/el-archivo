#include<stdio.h>

int sumArr(int *arr, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i ++)
    {
        sum += *(arr+i);
    }

    return sum;
}

int main()
{
    int c[] = {1, 3, 6, -2, 5};

    printf("Suma: %d\n", sumArr(c, 5));
}
