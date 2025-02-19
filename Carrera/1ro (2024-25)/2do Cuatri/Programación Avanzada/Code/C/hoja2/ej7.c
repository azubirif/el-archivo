#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s[50];

    printf("Dame una cadena menor a 50 chars: ");
    scanf("%s", s);

    int i = 0;

    for (i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
    }

    return 0;
}
