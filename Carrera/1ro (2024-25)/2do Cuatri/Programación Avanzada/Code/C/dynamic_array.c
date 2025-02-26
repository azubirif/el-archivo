#include<stdlib.h>
#include<stdio.h>

int main()
{
    //Asignamos manualmente memoria al array
    int size = 8, current = 0;
    int* arr = malloc(size * sizeof(int));

    for (int i = 0; i < 20; i++) {
        if (current == size) //Si está lleno
        {
            size = (size*3)/2 + 8;
            printf("Array lleno. Nuevo tamaño: %d\n", size);
            arr = realloc(arr, size * sizeof(int)); //Cambiar la memoria del array
        }
        arr[current++] = i;
        //Imprimir array
        printf("%d\n", i);
    }
    free(arr);
}