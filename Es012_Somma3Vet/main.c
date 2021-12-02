#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 20

void sommaArray(int *vet1, int *vet2, int *vet3, int n)
{
    int i;
    for(i = 0; i < n; i++){
        vet3[i] = vet2[i] + vet1[i];
    }
}

int main()
{
    int v1[DIM_MAX];
    int v2[DIM_MAX];
    int v3[DIM_MAX];
    int n;

    n = leggiArray(v1);
    inserisciArray(v2, n);

    sommaArray(v1, v2, v3, n);

    stampaArray(n, v3);

    printf("\n");
    system("Pause");
    return 0;
}
