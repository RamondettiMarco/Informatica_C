#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mialibreria.h"
#define DIM_MAX 20

bool trova(int i, int *vet, int num)
{
    bool trovato = false;
    int j = 0;
    while(trovato == false && j < i){

            if(vet[i] == num){
                trovato = true;
            } else{
                j++;
            }

    }
    return trovato;

}

int  leggiArrayDisgiunto(int *vet)
{
    int n;
    int i;
    bool trovato;
    int num;

    do{
         n = leggiNumeroPositivo();
    }while(n < 0 || n > DIM_MAX);

    for(i = 0; i < n; i++){
        printf("iserisci un numero: ");
        scanf("%d", &num);
        trovato = trova(i, vet, num);
        if(trovato == false){
            vet[i] = num;
        }
    }


    return n;
}

int main()
{
    int vet[DIM_MAX];
    int n;
    bool trovato;

    n = leggiArrayDisgiunto(vet);

    stampaArray(n, vet);

    printf("\n");
    system("Pause");
    return 0;
}
