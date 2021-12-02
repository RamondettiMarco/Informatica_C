#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM 100

typedef struct   // struct=celle di memoria consecutive, che possono avere tipi diversi
{
    char nome[DIM];
    int vittorie;
    int sconfitte;

} Squadra;

int main()
{
    Squadra squadre[DIM];
    FILE* fIn;
    int i = 0;

    fIn = fopen("input.txt", "r");
    if(fIn == NULL){
        printf("errore nell'apertura del file\n");
        return -1;
    }

    while(fscanf(fIn, "%s %d %d", squadre[i].nome, &squadre[i].vittorie, &squadre[i].sconfitte) != 0){
        printf("Dettagli squadra %d: \n", i+1);
        printf("Nome: %s\n", squadre[i].nome);
        printf("Vittorie: %d\n", squadre[i].vittorie);
        printf("Sconfitte: %d\n", squadre[i].sconfitte);
        printf("\n");
        i++;
    }



    system("Pause");
    return 0;
}
