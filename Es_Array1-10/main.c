#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 10

void copiaArray(int *vet1, int *vet2)
{
    int i;
    for(i = 0; i < DIM_MAX; i++){
        vet2[i] = vet1[i];
    }

}

int main()
{
    int vetA[DIM_MAX];
    int vetB[DIM_MAX];
    int i;

    for(i = 0; i < DIM_MAX; i++){
        vetA[i] = i +1;
    }

    copiaArray(vetA, vetB);

    stampaArray(DIM_MAX, vetB);

    printf("\n");
    system("Pause");
    return 0;
}
