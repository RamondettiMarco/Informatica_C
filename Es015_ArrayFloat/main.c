#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 100

void sommaArray(int *vet, int n)
{
    int i;
    int somma = 0;
    for(i = 0; i< n-2; i++){
        somma = vet[i] + vet[i+1] + vet[i+2];
        printf("%d \t", somma);
        somma = 0;
    }
    somma = vet[n-2] + vet[0] + vet[n-1];
    printf("%d \t", somma);
    somma = 0;
    somma = vet[n-1] + vet[0] + vet[1];
    printf("%d \t", somma);
}

int main()
{
    int n;
    int vet[DIM_MAX];

    n = leggiArray(vet);

    sommaArray(vet, n);

    printf("\n");
    system("Pause");
    return 0;
}
