#include<stdio.h>
#include<string.h>

void concat(char *s1, char *s2, char *result)
{
    int l1 = strlen(s1), l2 = strlen(s2);
    int len = l1 + l2 + 1;

    //Sustituimos la primera parte
    for (int i = 0; i < l1; i++)
    {
        result[i] = s1[i];
    }

    //Concatenamos la segunda cadena, empezando desde
    //el final de la primera
    for (int i = 0; i < l2; i++)
    {
        result[l1 + i] = s2[i];
    }

    //Marcamos el final de la cadena
    result[len-1] = '\0';    
}

int main()
{
    char s1[30], s2[30];

    printf("Dame dos cadenas:\n");
    scanf("%s", s1);
    scanf("%s", s2);
    int len = strlen(s1)+strlen(s2) + 1;
    char r[len];

    concat(s1, s2, r);
    
    printf("Resultado: ");

    for (int i = 0; i < strlen(r); i++)
    {
        printf("%c", *(r+i));
    }

    printf("\n");
}