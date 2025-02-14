#include<stdio.h>

int main(int argc, char const *argv[])
{
    char s[50];

    printf("Dame una cadena menor a 50 chars: ");
    scanf("%s", s);

    int i = 0;

    while (1)
    {
        char c = s[i];
        if (c != '\0') printf("%c\n", s[i]);
        else break;

        i++;
    }

    return 0;
}
