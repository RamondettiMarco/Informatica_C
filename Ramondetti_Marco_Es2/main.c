#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM_MIN 2  //dimensione minima matrice
#define DIM_MAX 10 //dimensione massima matrice
#define DIM 100    //dimensione massima array 100 perche è 10 * 10

void bubbleSort(int n, int *vet)
{
    int i=0, j, a;
    bool ordinato = false;
    while(ordinato == false){
        ordinato = true;
        for(j = 0; j < n-1-i; j++){
            if(vet[j+1] < vet[j]){
                //scambio i valori
                a = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = a;
                ordinato = false;
            }
        }
        i++;
    }
}

void leggiMatrice(int *r, int *c, int mat[DIM_MAX][DIM_MAX])
{
    int i, j;

    do{
        printf("inserisci il numero di righe: ");
        scanf("%d", r);
        if(*r < DIM_MIN || *r > DIM_MAX){
            printf("errore\n");
        }
    }while(*r < DIM_MIN || *r > DIM_MAX);

    do{
        printf("inserisci il numero di colonne: ");
        scanf("%d", c);
        if(*c < DIM_MIN || *c > DIM_MAX){
            printf("errore\n");
        }
    }while(*c < DIM_MIN || *c > DIM_MAX);

    for(i = 0; i < *r; i++){
        for(j = 0; j < *c; j++){
            printf("inserire il valore in posizione %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void copiaVet(int *vetA, int *vetB, int mat[DIM_MAX][DIM_MAX], int r, int c)
{
    int i, j;
    int dimVA = 0, dimVB = 0;
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            if((i+j) % 2 == 0){
                vetA[dimVA] = mat[i][j];
                dimVA++;
            }else{
                vetB[dimVB] = mat[i][j];
                dimVB++;
            }
        }

    }
}

void stampaMat(int mat[DIM_MAX][DIM_MAX], int r, int c)
{
    int i, j;
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void stampaArray(int n, int *vet)
{
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", vet[i]);
    }
}

int main()
{
    int mat[DIM_MAX][DIM_MAX];
    int r, c;      //righe e colonne
    int vetA[DIM]; //vettore dei numeri in somma degli indici pari
    int vetB[DIM]; //vettore dei numeri in somma degli indici pari
    int dimensioneVet;
    float mediana;
    int operando;
    int posMediana;
    int i;

    leggiMatrice(&r, &c, mat);

    dimensioneVet = (r * c) /2; //i numeri in posizione pari e i numeri in posizione dispari sono uguali
                                // e sono la metà dei numeri totali della matrice
    printf("la matrice e':\n ");
    stampaMat(mat, r, c);

    copiaVet(vetA, vetB, mat, r, c);


    bubbleSort(dimensioneVet, vetA);

    bubbleSort(dimensioneVet, vetB);

    printf("il vettore con i numeri in posizione pari e':\n ");
    stampaArray(dimensioneVet, vetA);
    printf("\n");
    printf("il vettore con i numeri in posizione dispari e':\n ");
    stampaArray(dimensioneVet, vetB);

    if(dimensioneVet % 2 != 0){
        posMediana = dimensioneVet / 2;
        mediana = vetA[posMediana];
    }else{
        operando = dimensioneVet / 2;
        posMediana = (dimensioneVet / 2)-1;
        mediana = (vetA[posMediana] + vetA[operando]) / 2;
    }
    printf("\nla mediana del vettore A e' %d", mediana);

    bool maggiore = false;
    while(maggiore == false){
        for(i = 0; i < dimensioneVet; i++){
            if(vetB[i] < mediana){
                printf("%d\t", vetB[i]);
            }else{
                maggiore = true;
            }
        }
    }

    printf("\n");
    system("Pause");
    return 0;
}
