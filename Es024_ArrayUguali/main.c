#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mialibreria.h"
#define DIM_MAX 20

bool tuttiUguali(int dim, int *vet)
{
    bool uguali = true;
    int i = 0;
    while(uguali == true && i < dim-1){
        if(vet[i] != vet[i+1]){
            uguali = false;
        }

        i++;
    }
    return uguali;
}

int main()
{
    int vet[DIM_MAX];
    int dim;
    bool uguali;

    dim = leggiArray(vet);

    uguali = tuttiUguali(dim, vet);
    if(uguali == true){
        printf("i numeri nel vettore sono tutti uguali");
    } else {
        printf("i numeri nel vettore non sono tutti uguali");
    }

    printf("\n");
    return 0;
}
