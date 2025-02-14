#include<stdio.h>

int main(int argc, char const *argv[])
{
    char s[50];

    printf("Introduce una frase: ");
    fgets(s, 50, stdin);

    int n = 1;

    for (int i = 0; i < 50; i++)
    {
        char c = s[i];

        if (c == '\0') break;
        if (c == ' ') n += 1;
    }

    printf("%d\n", n);

    return 0;
}
