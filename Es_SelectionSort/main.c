#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 20
/*
void selectionSort(int *vet, int n)
{
    int i, j;
    int min, pos;
    for(i = 0; i < n; i++){
        min = vet[i];
        pos = i;

        for(j = 0; j < n; j++){
            if(vet[j] < min){
                min = vet[j];
                pos = j;
            }
        }
        min = vet[i];
        vet[i] = vet[pos];
        vet[pos] = min;
    }
}
*/
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

    n = leggiArray(vet);

    selectionSort(vet, n);

    stampaArray(n, vet);

    printf("\n");
    system("Pause");
    return 0;
}
