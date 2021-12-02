#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM_MAX 100

typedef struct
{
    float voti[DIM_MAX];
    char cognome[DIM_MAX];
    char nome[DIM_MAX];
}Alunno;

int main()
{
    Alunno studente;
    studente.voti[0] = 8;
    strcpy(studente.cognome, "rossi");
    strcpy(studente.nome, "mario");

    printf("alunno: %s %s ha preso %f\n", studente.cognome, studente.nome, studente.voti[0]);

    Alunno classe[DIM_MAX];
    int i;

    for(i = 0; i < DIM_MAX; i++){
        classe[i].voti[0] = 8;
        strcpy(classe[i].cognome, "rossi");
        strcpy(classe[i].cognome, "mario");
    }

    printf("\n");
    system("Pause");
    return 0;
}
