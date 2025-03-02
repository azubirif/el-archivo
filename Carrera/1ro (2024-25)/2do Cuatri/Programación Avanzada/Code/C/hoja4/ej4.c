#include<stdio.h>

int main()
{
    int a[] = {1,2,3};
    int b[] = {4,5,6};

    int c[3];

    for (int i = 0; i < 3; i++)
    {
        *(c+i) = *(a+i) + *(b+i);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(c+i));
    }
}