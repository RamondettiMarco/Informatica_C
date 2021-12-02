#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 20

void rimuoviX(int *vet, int *n, int x)
{
    int i, cont = 0;
    for(i = 0; i < *n; i++){
        if(vet[i] != x){
           vet[cont] = vet[i];
           cont++;

    }
    *n = cont;


}

int main()
{
    int vet[DIM_MAX];
    int n, x;

    x = leggiNumeroPositivo();

    n = leggiArray(vet);

    rimuoviX(vet, &n, x);

    stampaArray(n, vet);

    printf("\n");
    system("Pause");
    return 0;
}
