#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 20

int ugualiInPosUguale(int *vetA, int *vetB, int *vetC, int nA, int nB)
{
    int i, dimC = 0;
    int dimMin;
    if(nA<nB){
        dimMin = nA;
    }else{
        dimMin = nB;
    }
    for(i = 0; i < dimMin; i++){
        if(vetA[i] == vetB[i]){
            vetC[dimC] = vetA[i];
            dimC++;
        }
    }
    return dimC;
}

int main()
{
    int vetA[DIM_MAX];
    int vetB[DIM_MAX];
    int vetC[DIM_MAX];
    int nA, i, nB, dimC;

    nA = leggiArray(vetA);
    printf("\n");
    nB = leggiArray(vetB);

    dimC = ugualiInPosUguale(vetA, vetB, vetC, nA, nB);

    stampaArray(nA, vetA);
    stampaArray(nB, vetB);
    stampaArray(dimC, vetC);

    printf("\n");
    return 0;
}
