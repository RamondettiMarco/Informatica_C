#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "mialibreria.h"
#define DIM_MAX 20

void arrayOrdinatoCrescente(int v[], int dim){
    int i=0, j=0, varscambio=0;
    for(i=0; i<dim; i++){
        j=i;
        while(j>0 && v[j-1]>v[j]){
            varscambio=v[j];
            v[j]=v[j-1];
            v[j-1]=varscambio;
            j--;
        }
    }
}

/*bool*/int trovaXseq(int n, int *vet, int x)
{
    int i = 0;
    //bool a = false;
    int pos = -1;
    while(/*a ==false*/pos == -1 &&  i < n){
        if(x == vet[i]){
            //a = true;
            pos = i;
        }
        i++;
    }
    return pos;
}

bool trovaXbin(int n, int *vet, int x)
{
    int sx = 0;
    int dx = n;
    int m;
    bool b=0;
    int i;

    m = dx / sx;

    for(i = 0; i < log(n); i++){
            if(sx < dx-1){
                if(vet[m] == x){
                    b = 1;
                    return b;
                }else if(vet[m] > x){
                    dx = m;
                }else if(vet[m] < x){
                    sx = m+1;
                }
            }
    }
    return b;
}

int main()
{
    int vetA[DIM_MAX];
    int vetB[DIM_MAX];
    int n, x;
    bool a, b;
    int pos;

    x = leggiNumeroPositivo();

    n = leggiArray(vetA);

    printf("inserisci un numero: ");
    scanf("%d", vetB[0]);
    //n = leggiArray(vetB);
    arrayOrdinatoCrescente(vetB, n);

    //stampaArray(n, vetB);

    /*a*/pos = trovaXseq(n, vetA, x);
    printf("l'elemento si trova in posizione %d", pos);
    /*if(a==1){
        printf("l'elemento %d si trova nel primo vettore", x);
    }else{
        printf("l'elemento %d non si trova nel primo vettore", x);
    }
*/
    b = trovaXbin(n, vetB, x);
    if(b==1){
        printf("l'elemento %d si trova nel secondo vettore", x);
    }else {
        printf("l'elemento %d non si trova nel primo vettore", x);
    }

    printf("\n");
    system("Pause");
    return 0;
}
