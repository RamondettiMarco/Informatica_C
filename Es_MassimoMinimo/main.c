#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

int leggiNumeroPositivo();

int minMax(int n, int *ma)
{
    int mi, i, num;
    printf("inserisci un numero: ");
    scanf("%d", &mi);
    fflush(stdin);

    *ma = mi;

    for(i = 0; i < n-1; i++){
        printf("inserisci un numero: ");
        scanf("%d", &num);

        if(num < mi){
            mi = num;
        } else if(num > *ma){
            *ma = num;
        }
    }
    return mi;
}

int main()
{
    int n, ma, mi;

    n = leggiNumeroPositivo();
    mi = minMax(n, &ma);

    printf("il numero minimo e' %d\n", mi);
    printf("il numero massimo e' %d\n", ma);


    printf("\n");
    system("Pause");
    return 0;
}
