#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM 21
#define DIM_MAX 1024

typedef struct
{
    char nome[DIM];
    int codice;
    int golFatti;
    int golSubiti;

} Squadra;

void stampaSquadre(Squadra *squadre, int n)
{
    int i;
    for(i = 0; i < n; i++){
        if(squadre[i].golFatti > squadre[i].golSubiti){
            printf("Nome: %s\n", squadre[i].nome);
            printf("Codice Squadra: %d\n", squadre[i].codice);
            printf("Gol Fatti: %d\n", squadre[i].golFatti);
            printf("Gol Subiti: %d\n", squadre[i].golSubiti);
            printf("\n");
        }
    }
}

int riconosciCodice(Squadra *squadre, int n, int codice)
{
    int trovato = -1;
    int i = 0;
    while(i < n && trovato == -1){
        if(codice == squadre[i].codice){
            trovato = i;
        }
        i++;
    }
    return trovato;
}

int stampaVettoreFile(char *nomeFile, int dim, Squadra *squadre)
{
    FILE *fOut;
    fOut = fopen(nomeFile, "w");
    if(fOut == NULL){
        return -1;
    }

    int i;
    for(i = 0; i< dim; i++){
        fprintf(fOut, "%s %d %d %d\n", squadre[i].nome, squadre[i].codice, squadre[i].golFatti, squadre[i].golSubiti);
    }

    fclose(fOut);
    return 0;
}
int main()
{
    Squadra squadre[DIM_MAX];
    int i = 0;
    FILE *fIn;
    int codice;
    int trovato;

    fIn = fopen("input.txt", "r");
    if(fIn == NULL){
        printf("errore nell'apertura del file\n");
        return -1;
    }

    while(fscanf(fIn, "%s %d %d %d", squadre[i].nome, &squadre[i].codice, &squadre[i].golFatti, &squadre[i].golSubiti) == 4){
        i++;
    }

    stampaSquadre(squadre, i);

    printf("inserisci il codice da trovare: ");
    scanf("%d", &codice);

    trovato = riconosciCodice(squadre, i, codice);
    if(trovato == -1){
        printf("squadra non trovata");
    }else{
        printf("Nome: %s\n", squadre[trovato].nome);
        printf("Codice Squadra: %d\n", squadre[trovato].codice);
        printf("Gol Fatti: %d\n", squadre[trovato].golFatti);
        printf("Gol Subiti: %d\n", squadre[trovato].golSubiti);
        printf("\n");
    }

    //stampaVettoreFile("vincitori.txt", dimFiltrato, campionatoFiltrato); //dovrei creare un Squadra campionatofiltrato
    //che contiene le squadre con i gol fatti maggiori dei subiti

    printf("\n");
    system("Pause");
    return 0;
}
