#include <stdio.h>
#include <stdlib.h>
#define DIM 21
#define DIM_MAX 1024

typedef struct
{
    char nome[DIM];
    char cognome[DIM];
    int iscritti;

} Corso;

void stampaMaggiore(Corso *corsi, int n)
{
    int i;
    int max = corsi[0].iscritti;
    int j;
    for(i = 1; i < n; i++){
        if(corsi[i].iscritti >= max){
            max = corsi[i].iscritti;
            j = i;
        }
    }
    printf("il corso con maggior numero di iscritti e' il %d\n", j+1);
    printf("Nome: %s\n", corsi[j].nome);
    printf("Cognome docente: %s\n", corsi[j].cognome);
    printf("Numero iscritti: %d\n", corsi[j].iscritti);
    printf("\n");
}

float mediaIscritti(Corso *corsi, int n)
{
    int i;
    float media = 0;
    if(n == 0){
        return -1;
    }
    for(i = 0; i < n; i++){
        media = media + corsi[i].iscritti;
    }
    media = media / n;
    return media;
}

void stampaCorsi(Corso *corsi, int n)
{
    int i;

    for(i = 0; i < n; i++){
        printf("Nome: %s\n", corsi[i].nome);
        printf("Cognome docente: %s\n", corsi[i].cognome);
        printf("Numero iscritti: %d\n", corsi[i].iscritti);
        printf("\n");
    }
}
/*
int stampaCorsiFile(Corso *corsi, int n)
{
    int i;
    FILE *fOut;

    fOut = fopen("tantiIscritti.txt", "w");
    if(fOut == NULL){
        printf("errore nell'apertura del file\n");
        return -1;
    }

    for(i = 0; i < n; i++){
        fprintf(fOut, "Nome: %s\n", corsi[i].nome);
        fprintf(fOut, "Cognome docente: %s\n", corsi[i].cognome);
        fprintf(fOut, "Numero iscritti: %d\n", corsi[i].iscritti);
    }
}
*/
int filtraTantiIscritti(Corso *corsiFiltrati, Corso *corsi, int n)
{
    int i;
    float media;
    int nFiltrati;
    media = mediaIscritti(corsi, n);
    for(i = 0; i < n; i++){
        if(corsi[i].iscritti >= media){
            corsiFiltrati[nFiltrati] = corsi[i];
            nFiltrati++;
        }
    }
    return nFiltrati;
}

int main()
{
    int numCorsi = 0;
    Corso corsi[DIM_MAX];
    Corso corsiFiltrati[DIM_MAX];
    int nFiltrati;
    FILE *fIn;

    fIn = fopen("input.txt", "r");
    if(fIn == NULL){
        printf("errore nell'apertura del file\n");
        return -1;
    }

    while(fscanf(fIn, "%s %s %d", corsi[numCorsi].nome, corsi[numCorsi].cognome, &corsi[numCorsi].iscritti) == 3){
        numCorsi++;
    }

    nFiltrati = filtraTantiIscritti(corsiFiltrati, corsi, numCorsi);

    stampaCorsi(corsiFiltrati, nFiltrati);

    stampaMaggiore(corsiFiltrati, nFiltrati);

    fclose(fIn);

    printf("\n");
    system("Pause");
    return 0;
}
