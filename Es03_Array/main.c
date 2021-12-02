#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 11
/*
Caricare un vettore con la tabellina del numero x letto da tastiera (se x è 3 il
vettore conterrà 0,3,6,9,…,30)
*/

void arrayTabellina(int n, int *vet)
{
    int i;
    for(i = 0; i < DIM_MAX; i++){
        vet[i] = n * i;
    }
}

int main()
{
    int vet[DIM_MAX];
    int x;

    x = leggiNumeroPositivo();

    arrayTabellina(x, vet);

    stampaArray(DIM_MAX, vet);

    printf("\n");
    system("Pause");
    return 0;
}
