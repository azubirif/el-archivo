#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    int s = 0;

    for (char i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0) s = s + a[i];
    }

    printf("%d\n", s);

    return 0;
}
