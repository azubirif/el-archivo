#include<stdio.h>
#include<time.h>

int isPrime(int n)
{
    for (int i = 2; i < (int)n/2; i++)
    {
        if (n % i == 0) return 0;
    }

    return 1;
}


int main()
{
    clock_t start = clock();

    int count = 0;
    double runtime = (double)(clock()-start)/CLOCKS_PER_SEC;
    int current = 3;

    while (runtime < 1)
    {
        if (isPrime(current) == 1) count++;
        runtime = (double)(clock()-start)/CLOCKS_PER_SEC;
        //current++; Nos saltamos los números pares
        current += 2;
    }

    printf("Cuenta: %d\nTiempo de ejecución: %f\n", count, runtime);
}