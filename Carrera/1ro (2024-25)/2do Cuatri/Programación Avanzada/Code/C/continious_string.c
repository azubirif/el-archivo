// includes
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    // leer continuamente input
    int count = 0;
    char c;
    char *p = malloc(1);
    while (read(STDIN_FILENO, &c, 1) == 1)
    {
        p[count] = c;
        p = realloc(p, count+1);
        count++;
    }
    // incrementar la memoria alocada por 1 byte
    // asignar a cada posición una letra
    //
    for (int i = 0; i < count; i++)
    {
        printf("%c", p[i]);
    }

    printf("\n");
}
