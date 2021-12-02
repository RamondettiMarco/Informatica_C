#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM_MAX 100
#define DIM_STR 50

/*Implementa un programma che, dato un vettore di studenti (il tipo Studente conterrà
nome cognome e i voti scritto, orale e pratica di ogni quadrimestre),
individui e ritorni il il nome dello studente più bravo nelle diverse materie e con media generale più alta*/

typedef struct
{
    char nome[DIM_STR];
    char cognome[DIM_STR];
    int votoScritto[2];
    int votoOrale[2];
    int votoPratico[2];
}Studente;

int leggiAlunni()
{
    int n;
    do{
        printf("inserisci il numero di alunni: ");
        scanf("%d", &n);
        fflush(stdin);
        if (n<0){
            printf("il numero deve essere maggiore di zero");

        }

    }while(n<0);

    return n;

}

int leggiMaterie()
{
    int n;
    do{
        printf("inserisci il numero di materie: ");
        scanf("%d", &n);
        fflush(stdin);
        if (n<0){
            printf("il numero deve essere maggiore di zero");

        }

    }while(n<0);

    return n;

}

void inserisciDati(Studente *studenti, int n)
{
    int i;
    int j;

    for(i = 0; i < n; i++){
        printf("inserisci il nome del %d alunno: ", i+1);
        fflush(stdin);
        gets(studenti[i].nome);

        printf("inserisci il cognome del %d alunno: ", i+1);
        fflush(stdin);
        gets(studenti[i].cognome);

        for(j = 0; j < 2; j++){
            printf("inserisci il %d voto scritto del %d alunno: ", j+1, i+1);
            scanf("%d", &studenti[i].votoScritto[j]);

            printf("inserisci il %d voto orale del %d alunno: ", j+1, i+1);
            scanf("%d", &studenti[i].votoOrale[j]);

            printf("inserisci il %d voto pratico del %d alunno: ", j+1, i+1);
            scanf("%d", &studenti[i].votoPratico[j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    int m;
    int i;
    int j;
    float max = 0;
    float somma = 0;
    float media;
    char vincitoreNome[DIM_STR];
    char vincitoreCognome[DIM_STR];
    char materia[DIM_STR];

    n = leggiAlunni();
    m = leggiMaterie();

    for(i = 0; i < m; i++){
        printf("inserisci la materia: ");
        fflush(stdin);
        gets(materia);

        Studente studenti[DIM_MAX];
        inserisciDati(studenti, n);

        for(j = 0; j < n; j++){
            somma = somma + studenti[j].votoOrale[0] + studenti[j].votoScritto[0] + studenti[j].votoPratico[0] + studenti[j].votoOrale[1] + studenti[j].votoScritto[1] + studenti[j].votoPratico[1];
            if(somma > max){
                max = somma;
                somma = 0;
                strcpy(vincitoreCognome, studenti[j].cognome);
                strcpy(vincitoreNome, studenti[j].nome);
            }
        }
        media = max / 6;
        printf("il migliore nella materia %s e' %s %s con la media di %f\n", materia, vincitoreNome, vincitoreCognome, media);
        max = 0;
        media = 0;
        somma = 0;
    }

    printf("\n");
    system("Pause");
    return 0;
}
