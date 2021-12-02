#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 10

int controllaArray(int *vet, int n, int x)
{
    int cont=0;
    int i;
    for(i = 0; i < n; i++){
        vet[i] = leggiNumeroPositivo();
        if(vet[i] == x){
            cont++;
        }
    }
    return cont;
}

int main()
{
    int x;
    int vet[DIM_MAX];
    int n;

    x = leggiNumeroPositivo();

    n = controllaArray(vet, DIM_MAX, x);

    printf("il numero %d e' stato ripetuto %d volte", x, n);

    printf("\n");
    system("Pause");
    return 0;
}
