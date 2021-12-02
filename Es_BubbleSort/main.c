#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM_MAX 100
#include <stdbool.h>

/*void scambia()
{

}
*/
void bubbleSort(int n, int *vet)
{
    int i=0, j, a;
    bool ordinato = false;
    while(ordinato == false){
        ordinato = true;
        for(j = 0; j < n-1-i; j++){
            if(vet[j+1] < vet[j]){
                //scambia()
                a = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = a;
                ordinato = false;
            }
        }
        i++;
    }
}



int main()
{
    int vet[DIM_MAX];
    int n;

    n = leggiArray(vet);

    bubbleSort(n, vet);

    stampaArray(n, vet);

    printf("\n");
    system("Pause");
    return 0;
}
