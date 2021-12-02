#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

int main()
{
    int n, a, min, i, somma=0;
    float media;
    n = leggiNumeroPositivo();
    int vet[n];


    for(i = 0; i < n; i++){
        a = leggiNumeroPositivo();
        min = a;
        if(a < min){
            min = a;
        }
        vet[i] = a;
        somma = somma + a;
    }
    media = somma / n;
    printf("il minimo e' %d\n", min);
    printf("la media e' %f\n", media);

    printf("\n");
    system("Pause");
    return 0;
}
