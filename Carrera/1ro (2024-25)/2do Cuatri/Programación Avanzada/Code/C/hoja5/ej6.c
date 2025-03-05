#include<stdio.h>
#include<string.h>

int contarCaracteres(char *s, char c, int size)
{
    int count = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (*(s+i) == c) count++;
    }

    return count;
}
