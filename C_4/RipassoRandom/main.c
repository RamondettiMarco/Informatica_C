#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mialibreria.h"
#define DIM_MAX 100

/*scrivi un programma che riempia casualmente un vettore di N numeri garantendo che siano presenti in senso
crescente*/

int leggiDimensione()
{
    int n;
    do{
        printf("inserisci la dimensione dell'array: ");
        scanf("%d", &n);
        fflush(stdin);
        if (n<0){
            printf("il numero deve essere maggiore di zero");

        }

    }while(n<0);

    return n;

}

void selectionSort(int *vet, int n){
	int i, j, minimo, pos;
	for(i = 0; i < n; i++){
		minimo = vet[i];
		pos = i;
		for(j = i; j < n; j++){
			if(vet[j] < minimo){
				minimo = vet[j];
				pos = j;
			}
		}
		minimo = vet[i];
		vet[i] = vet[pos];
		vet[pos] = minimo;
	}
}

int main()
{
    int n;
    int vet[DIM_MAX];
    int i;

    n = leggiDimensione();

    srand(time(NULL));

    for(i = 0; i < n; i++){
        vet[i] = 0 +rand()%101;
    }

    stampaArray(n, vet);
    printf("\n");

    selectionSort(vet, n);

    printf("il vettore ordinato in modo crescente e':\n");
    stampaArray(n, vet);

    printf("\n");
    system("Pause");
    return 0;
}
