#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 100

int  leggiArray(int *vet)
{
    int n;
    int i;

    do{
         n = leggiNumeroPositivo();
    }while(n < 0 || n > DIM_MAX);

    for(i = 0; i < n; i++){
        printf("iserisci un numero: ");
        scanf("%d", &vet[i]);
    }


    return n;
}


void stampaArray(int n, int *vet)
{
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", vet[i]);
    }
}

int main()
{
    int vet[DIM_MAX];
    int i, n;

    n = leggiArray(vet);

    stampaArray(n, vet);

    printf("\n");
    system("Pause");
    return 0;
}
