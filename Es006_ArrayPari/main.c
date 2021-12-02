#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 100

void arrayPari(int n, int *v1, int *v2)
{
    int i;
    v2[0] = v1[0];
    for(i = 2; i < n; i+=2){
        v2[i-1] = v1[i];
    }
}

int main()
{
    int v1[DIM_MAX];
    int v2[DIM_MAX];
    int n, num;

    n = leggiArray(v1);

    arrayPari(n, v1, v2);

    num = n / 2;

    stampaArray(num, v2);

    printf("\n");
    system("Pause");
    return 0;
}
