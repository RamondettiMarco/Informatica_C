#include <stdio.h>
#include <stdlib.h>
//#include "mialibreria.h"
#define DIM_MAX 100

int leggiNumeroPositivo()
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


void stampaArray(int n, int *vet)
{
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", vet[i]);
    }
}

/*int  leggiArray(int *vet)
{
    int n;
    int i;

    do{
         n = leggiNumeroPositivo();
    }while(n < 0 || n > DIM_MAX);

    for(i = n-1; i >= 0; i--){
        printf("iserisci un numero: ");
        scanf("%d", &vet[i]);
    }


    return n;
}
*/

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

void invertiArray(int n, int *vet)
{
    int i;
    int a;
    for(i = 0; i < n/2; i++){
        a = vet[i];
        vet[i] = vet[n-1-i];
        vet[n-1-i] = a;
    }
}

int main()
{
    int n;
    int vet[DIM_MAX];

    n = leggiArray(vet);

    invertiArray(n, vet);


    stampaArray(n, vet);

    printf("\n");
    system("Pause");
    return 0;
}
