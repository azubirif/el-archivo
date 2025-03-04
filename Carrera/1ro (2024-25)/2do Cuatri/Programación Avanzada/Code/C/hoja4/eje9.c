#include<stdio.h>

void sumArray(int *arr, int size, int *result)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    *result = sum;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr+i));
    }
}

int main()
{
    int size;
    printf("Dime el tamaño del array: ");
    scanf("%d", &size);

    int arr[size], result;

    for (int i = 0; i < size; i++)
    {
        printf("Elemento %d: ", i+1);
        scanf("%d", arr + i);
    }

    printArray(arr, size);

    sumArray(arr, size, &result);

    printf("Resultado: %d\n", result);
}