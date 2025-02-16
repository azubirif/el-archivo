#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int n = rand() % 15 + 1;

    int c = 0;

    while (c < 10)
    {
        int try;
        printf("Adivina: ");
        scanf("%d", &try);
        if (try == n)
        {
             printf("¡Lo adivinaste!\n");
             break;
        }
        else if (try > n) printf("El número es más pequeño. Te quedan %d intentos.\n", 10-(c+1));
        else if (try < n) printf("El número es más grande. Te quedan %d intentos.\n", 10-(c+1));
        c++;
    }

    return 0;
}
