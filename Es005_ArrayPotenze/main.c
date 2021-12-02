#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 5

void calcolaPotenza(int n, int *vet)
{
    int i;
    vet[0] = 1;

        for(i=1; i<=DIM_MAX; i++) {
            vet[i] = vet[i-1] * n;
        }

    }


int main()
{
    int vet[DIM_MAX];
    int n;

    printf("inserisci un numero: ");
    scanf("%d", &n);
    fflush(stdin);

    calcolaPotenza(n, vet);

    stampaArray(DIM_MAX, vet);

    printf("\n");
    system("Pause");
    return 0;
}
