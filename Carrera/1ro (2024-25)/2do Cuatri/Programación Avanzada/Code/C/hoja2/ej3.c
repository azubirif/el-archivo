#include<stdio.h>

int main(int argc, char const *argv[])
{
    int p1, p2;

    printf("Introduce la puntuación de ambos (separado por espacio): ");
    scanf("%d %d", &p1, &p2);

    if (p1 > p2) printf("Ha ganado el equipo 1\n");
    else if (p1 < p2) printf("Ha ganado el equipo 2\n");
    else printf("Han empatado\n");

    return 0;
}
