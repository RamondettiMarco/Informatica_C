#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 100

int main()
{
    int n, i;
    float vet1[DIM_MAX];
    float vet2[DIM_MAX];
    float vetsomma[DIM_MAX];

    do{
        n = leggiNumeroPositivo();
    }while(n < 0 || n > DIM_MAX);

    printf("\n");

    for(i = 0; i < n; i++){
        printf("inserisci un numero: ");
        scanf("%f", &vet1[i]);
    }

    printf("\n");

    for(i = 0; i < n; i++){
        printf("inserisci un numero: ");
        scanf("%f", &vet2[i]);
    }
    for(i = 0; i < n; i++){
        vetsomma[i] = vet1[i] + vet2[i];
        printf("%f\t", vetsomma[i]);
    }

    printf("\n");
    system("Pause");
    return 0;
}
