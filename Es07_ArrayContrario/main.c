#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 100

void arrayContrario(int n, int *v1, int *v2)
{
    int i, m=0;
    for(i = n-1; i >= 0; i--){
        v2[i] = v1[m];
        m++;
    }
}

int main()
{
    int n;
    int v1[DIM_MAX];
    int v2[DIM_MAX];

    n = leggiArray(v1);

    arrayContrario(n, v1, v2);

    stampaArray(n, v1);

    printf("\n");

    stampaArray(n, v2);

    printf("\n");
    return 0;
}
