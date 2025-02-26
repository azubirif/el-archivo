#include<stdio.h>

int charToAscii(char c)
{
    return (int)c;
}

int main()
{
    char s;
    printf("Carácter: ");
    scanf("%c", &s);
    printf("En ASCII: %d\n", charToAscii(s));
}