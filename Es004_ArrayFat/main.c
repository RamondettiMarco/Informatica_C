#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 100

void calcolaFattoriale(int *vet, int n)
{
    int i;
    vet[0] = 1;

    for (i = 1; i <= n; i++) {
            vet[i] = vet[i-1] * i;
        }

}
int main()
{
    int vet[DIM_MAX];
    int n;

    n = leggiNumeroPositivo();

    calcolaFattoriale(vet, n);

    stampaArray(n, vet);

    printf("\n");
    system("Pause");
    return 0;
}
