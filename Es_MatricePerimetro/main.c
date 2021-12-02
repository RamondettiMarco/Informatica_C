#include <stdio.h>
#include <stdlib.h>
#define DIM 100
//Il valore di ritorno può essere:
//- 0 se non ci sono stati errori, un valore diverso da 0 altrimenti
int leggiMatriceFile(int *nr, int *nc, int mat[DIM][DIM])
{
    int i, j;
    FILE *fIn;
    fIn = fopen("input.txt", "r");
    if(fIn == NULL){
        return -1;
    }
    fscanf(fIn, "%d", nr);
    fscanf(fIn, "%d", nc);

    for(i = 0; i < *nr; i++){
        for(j = 0; j < *nc; j++){
            fscanf(fIn, "%d", &mat[i][j]);
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    fclose(fIn);
    return 0;
}

int sommaRiga(int nr, int nc, int mat[DIM][DIM], int riga)
{
    int i;
    int somma = 0;
    for(i = 0; i < nc; i++){
        somma = somma + mat[riga][i];
    }
    return somma;
}

int sommaColonna(int nr, int nc, int mat[DIM][DIM], int colonna)
{
    int somma = 0;
    int i;
    for(i = 0; i < nr; i++){
        somma = somma + mat[i][colonna];
    }
    return somma;
}

int sommaCornice(int nr, int nc, int mat[DIM][DIM])
{
    int somma = 0;
    if(nr == 0 || nc == 0){
        return 0;
    }
    //le 3 istruzioni successive hanno senso perchè hanno almeno una riga e una colonna
    somma = somma + sommaRiga(nr, nc, mat, 0);
    somma = somma + sommaColonna(nr, nc, mat, 0);
    somma = somma - mat[0][0];

    if(nc == 1 || nr == 1){
        return somma;
    }
    somma = somma + sommaRiga(nr, nc, mat, nr-1);
    somma = somma + sommaColonna(nr, nc, mat, nc-1);
    somma = somma - mat[nr-1][nc-1];
    somma = somma - mat[nr-1][0];
    somma = somma - mat[0][nc-1];

    return somma;

}

int main()
{
    int r, c;
    int mat[DIM][DIM];
    int somma;

    if(leggiMatriceFile(&r, &c, mat) != 0){
        printf("errore nella lettura del file\n");
        return -1;
    }

    printf("\n");

    somma = sommaCornice(r, c, mat);
    printf("la somma della cornice vale: %d\n", somma);

    printf("\n");
    system("Pause");
    return 0;
}
