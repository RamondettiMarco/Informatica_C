#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 20

int arrayPari(int *vet, int *pari, int n)
{
    int i;
    int dimPari = 0;
    for(i = 0; i < n; i++){
        if(vet[i] % 2 == 0){
            pari[dimPari] = vet[i];
            dimPari++;
        }
    }
    return dimPari;
}

int arrayDispari(int *vet, int *dispari, int n)
{
    int i;
    int dimDispari = 0;
    for(i = 0; i < n; i++){
        if(vet[i] % 2 != 0){
            dispari[dimDispari] = vet[i];
            dimDispari++;
        }
    }
    return dimDispari;
}

int main()
{
    int vet[DIM_MAX];
    int pari[DIM_MAX];
    int dispari[DIM_MAX];
    int n, nPari, nDispari;

    n = leggiArray(vet);

    nPari = arrayPari(vet, pari, n);
    nDispari = arrayDispari(vet, dispari, n);

    stampaArray(nPari, pari);
    printf("\n");
    stampaArray(nDispari, dispari);

    printf("\n");
    system("Pause");
    return 0;
}
