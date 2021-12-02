#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM_MAX 100

void leggiMatrice(int *nr, int *nc, int mat[DIM_MAX][DIM_MAX])
{
    int i, j;

    do{
        printf("inserisci il numero di righe: ");
        scanf("%d", nr);
        if(*nr < 0){
            printf("errore\n");
        }
    }while(*nr < 0);

    do{
        printf("inserisci il numero di colonne: ");
        scanf("%d", nc);
        if(*nc < 0){
            printf("errore\n");
        }
    }while(*nc < 0);

    for(i = 0; i < *nr; i++){
        for(j = 0; j < *nc; j++){
            printf("inserire il valore in posizione %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

int sommaColonne(int mat[DIM_MAX][DIM_MAX], int nr, int colonna)
{
    int i;
    int somma = 0;

    for(i = 0; i < nr; i++){
        somma = somma + mat[i][colonna];
    }
    return somma;
}

int sommaRighe(int mat[DIM_MAX][DIM_MAX], int nc, int riga)
{
    int i;
    int somma = 0;

    for(i = 0; i < nc; i++){
        somma = somma + mat[riga][i];
    }

    return somma;
}

int sommaDiagonaleP(int dim, int mat[DIM_MAX][DIM_MAX]){
    int somma = 0, i;

    for(i = 0; i < dim; i++){
        somma = somma + mat[i][i];
    }
    return somma;
}

int sommaDiagonaleS(int n, int mat[DIM_MAX][DIM_MAX]){
    int somma=0, i;
    //int j=dim-1;

    for(i = 0; i < n; i++){
        somma = somma + mat[i][n-1-i]; //oppure j nel posto delle colonne
        //j--;
    }
    return somma;
}

bool matricePerfetta(int mat[DIM_MAX][DIM_MAX], int n)
{
    bool perfetta = true;
    int riga = 0, colonna = 0;
    int sommaR, sommaC, sommaDPrinc, sommaDsec;
    int tmp = 0;

    sommaDPrinc = sommaDiagonaleP(n, mat);
    sommaDsec = sommaDiagonaleS(n, mat);
    tmp = sommaDPrinc;

    while(perfetta == true && riga < n && colonna < n){
        sommaR = sommaRighe(mat, n, riga);
        sommaC = sommaColonne(mat, n, colonna);

        if(tmp != sommaR || tmp != sommaC){
            perfetta = false;
        }

        riga++;
        colonna++;
    }
    if(perfetta == true){
        if(sommaDPrinc != sommaDsec){
            perfetta = false;
        }
    }
    return perfetta;
}

void stampaMatrice(int mat[DIM_MAX][DIM_MAX], int nr, int nc)
{
    int i, j;

    for(i = 0; i < nr; i++){
        for(j = 0; j < nc; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[DIM_MAX][DIM_MAX];
    int n, i, j;
    bool perfetta;

    do {
        printf("inserisci l'indice della matrice: ");
        scanf("%d", &n);
        if(n < 0 || n > DIM_MAX){
            printf("errore");
        }
    }while(n < 0 || n > DIM_MAX);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("inserire il valore in posizione %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    stampaMatrice(mat, n, n);

    perfetta = matricePerfetta(mat, n);

    if(perfetta == true){
        printf("la matrice e' perfetta.");
    }else{
        printf("la matrice non e' perfetta.");
    }

    printf("\n");
    system("Pause");
    return 0;
}
