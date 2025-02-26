#include <stdio.h>
//1 piedra
//2 papel
//3 tijera
int ppt(int p1, int p2)
{
    if (p1 == p2)
    {
        return 0; //Empate
    }
    else if (
        p1 == 1 && p2 == 3 ||
        p1 == 2 && p2 == 1 ||
        p1 == 3 && p2 == 2
    )
    {
        return 1; //gana el jugador 1
    }
    return 2; //gana jugador 2
}

int main()
{
    int points_1 = 0, points_2 = 0;
    int p1, p2, result;

    while(1)
    {
        printf("Dime lo que ha sacado el jugador 1: ");
        scanf("%d", &p1);

        printf("Dime lo que ha sacado el jugador 2: ");
        scanf("%d", &p2);

        result = ppt(p1, p2);
        if (result == 1)
        {
            printf("Ha ganado el jugador 1\n");
            points_1++;
        }
        else if (result == 2)
        {
            printf("Ha ganado el jugador 2\n");
            points_2++;
        }
        else
        {
            printf("Empate\n");
        }
        
        printf("Puntuación:\nJugador 1: %d\nJugador 2: %d\n", points_1, points_2);
        if (points_1 == 3)
        {
            printf("Ha ganado la partida el jugador 1\n");
            break;
        }
        else if (points_2 == 3)
        {
            printf("Ha ganado la partida el jugador 2\n");
            break;
        }
    }
}