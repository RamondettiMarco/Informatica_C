#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 100
/*int leggiNumeroPositivo()
{
    int n;
    do{
        printf("inserisci un numero positivo: ");
        scanf("%d", &n);
        fflush(stdin);
        if (n<0){
            printf("il numero deve essere maggiore di zero");

        }

    }while(n<0);

    return n;

}
int  leggiArray(int *vet)
{
    int n;
    int i;

    do{
         n = leggiNumeroPositivo();
    }while(n < 0 || n > DIM_MAX);

    for(i = 0; i < n; i++){
        printf("iserisci un numero: ");
        scanf("%d", &vet[i]);
    }


    return n;
}


void stampaArray(int n, int *vet)
{
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", vet[i]);
    }
}
*/

void duplicaArray(int n, int *vetIniziale, int *vetFinale)
{
    int i;
    for(i = 0; i < n; i++){
        vetFinale[2*i] = vetIniziale[i];

        vetFinale[2*i+1] = vetIniziale[i];
    }

}

int main()
{
    int n, n2;
    int vet1[DIM_MAX];
    int vet2[DIM_MAX*2];

    n = leggiArray(vet1);

    duplicaArray(n, vet1, vet2);

    n2 = n * 2;

    stampaArray(n2, vet2);

    printf("\n");
    return 0;
}
