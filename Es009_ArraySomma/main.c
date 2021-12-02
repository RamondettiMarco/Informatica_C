#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 10

int arraySomma(int *vet)
{
    int i;
    int s = 0;

    for(i = 0; i < DIM_MAX; i++){
        s = s + vet[i];
    }
    return s;
}

int main()
{
    int vet[DIM_MAX];
    int somma;
    int n;

    n = leggiArray(vet);

    somma = arraySomma(vet);

    printf("la somma e': %d", somma);

    printf("\n");
    system("Pause");
    return 0;
}
