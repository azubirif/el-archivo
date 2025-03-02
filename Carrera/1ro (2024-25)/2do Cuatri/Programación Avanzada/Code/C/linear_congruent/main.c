#include<stdio.h>
#include<math.h>

int next_in_seq(int a, int c, long M, int r)
{
    return (a*r+c)%M;
}

int main()
{
    int r = next_in_seq(22695477, 1, pow(2,15), 3);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", r);
        r = next_in_seq(4, 1, 2, r);
    }
}