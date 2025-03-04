#include<stdio.h>
#include<string.h>

int palindromo(char *c)
{
    //Loopeamos por cada letra, y vemos si coincide
    //con la del final
    int len = strlen(c);

    if (len % 2 == 0) // si es par
    {
        for (int i = 0; i < len / 2; i++)
        {
            if (c[i] != c[len-1-i])
            {
                return 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < (int)len/2; i++)
        {
            if (c[i] != c[len-1-i])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    char s[30];

    printf("Dame una cadena: ");
    scanf("%s", s);
    int result = palindromo(s);

    if (result == 1)
    {
        printf("Es palindroma\n");
    }
    else
    {
        printf("No es palindroma\n");
    }
}