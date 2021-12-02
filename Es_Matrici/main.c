#include <stdio.h>
#include <stdlib.h>
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


void leggiMatriceFile(int *nr, int *nc, int mat[DIM_MAX][DIM_MAX])
{
    FILE* f;
    f = fopen("input.txt", "r");
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
    int nr;
    int nc;

    leggiMatrice(&nr, &nc, mat);

    stampaMatrice(mat, nr, nc);

    printf("\n");
    system("Pause");
    return 0;
}
