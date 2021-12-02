#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100
#define DIM_STR 50

/*Realizzare una tabella per inserire i voti di una verifica e scrivere
due funzioni rispettivamente per caricare i dati e per visualizzarli sullo schermo.*/

typedef struct
{
    char nome[DIM_STR];
    char cognome[DIM_STR];
    int voto;
}Alunno;

int leggiNumeroPositivo()
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

void inserisciDati(Alunno *classe, int n)
{
    int i;

    for(i = 0; i < n; i++){
        printf("inserisci il nome del %d alunno: ", i+1);
        fflush(stdin);
        gets(classe[i].nome);

        printf("inserisci il cognome del %d alunno: ", i+1);
        fflush(stdin);
        gets(classe[i].cognome);

        printf("inserisci il voto del %d alunno: ", i+1);
        scanf("%d", &classe[i].voto);
        printf("\n");
    }
}

void stampaDati(Alunno *classe, int n)
{
    int i;

    for(i = 0; i < n; i++){
        printf("Nome %d alunno: %s\n", i+1, classe[i].nome);

        printf("Cognome %d alunno: %s\n", i+1, classe[i].cognome);

        printf("Voto %d alunno: %d\n", i+1, classe[i].voto);
        printf("\n");
    }
}

int main()
{
    Alunno classe[DIM_MAX];
    int n;

    n = leggiNumeroPositivo();

    inserisciDati(classe, n);

    stampaDati(classe, n);

    printf("\n");
    system("Pause");
    return 0;
}
