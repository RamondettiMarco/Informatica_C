#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM 20
#define DIM_MAX 1024

typedef struct
{
    char cognome[DIM];
    int giorno;

} Appuntamento;

void stampaAppuntamenti(Appuntamento *appuntamenti, int n, int giorno)
{
    int i;
    int j = 1;
    bool nessuno = true;

    for(i = 0; i < n; i++){
        if(appuntamenti[i].giorno == giorno){
            printf("Appuntamento numero: %d\n", j);
            printf("Nome: %s\n", appuntamenti[i].cognome);
            j++;
            nessuno = false;
        }
    }
    if(nessuno == true){
        printf("nessun appuntamento per il giorno %d\n", giorno);
    }
}

void stampaGiorniLiberi(Appuntamento *appuntamenti, int n)
{
    int i;
    int j;
    int libero = 0;

    printf("giorni liberi: \n");
    for(i = 1; i < 31; i++){
        for(j = 0; j < n; j++){
            if(appuntamenti[j].giorno == i){
                libero = -1;
            }else if(appuntamenti[j].giorno != i && libero != -1){
                libero = i;
            }
        }
        if(libero != -1){
            printf("%d\t", libero);
        }
        libero = 0;
    }
}

int leggiFile(Appuntamento *appuntamenti)
{
    FILE* fIn;
    int i = 0;

    fIn = fopen("input.txt", "r");

    if(fIn == NULL){
        printf("errore nell'apertura del file.\n");
        return -1;
    }
    while(fscanf(fIn, "%s %d", appuntamenti[i].cognome, &appuntamenti[i].giorno) == 2){
        i++;
    }
    fclose(fIn);
    return i;
}
//giorniLiberi è un array di booleani di 30 elementi
void trovaGiorniLiberi(Appuntamento *appuntamenti, int n)
{
    bool giorniLiberi[30];
    int i;
    for(i = 0; i < 30; i++){
        giorniLiberi[i] = true;
    }
    for(i = 0; i < n; i++){
        giorniLiberi[appuntamenti[i].giorno -1] = false;
    }
    printf("giorni liberi: \n");
    for(i = 0; i < 30; i++){
        if(giorniLiberi[i] == true){
            printf("%d\t", i+1);
        }
    }
}

int main()
{
    int giorno;
    int i;
    int j = 0;
    bool errore = false;
    Appuntamento appuntamenti[DIM_MAX];

    i = leggiFile(appuntamenti);
    if(i == 1){
        return -1;
    }

    while(j < i && errore == false){
        if(appuntamenti[j].giorno < 1 || appuntamenti[j].giorno > 30){
            errore = true;
        }
        j++;
    }
    if(errore == true){
        printf("la data %d non è valida, errore", j);
        return -1;
    }

    do{
        printf("inserisci il giorno da controllare: ");
        scanf("%d", &giorno);
        if(giorno < 1 || giorno > 30){
            printf("giorno non valido\n");
        }
    }while(giorno < 1 || giorno > 30);

    stampaAppuntamenti(appuntamenti, i, giorno);

    //stampaGiorniLiberi(appuntamenti, i);

    trovaGiorniLiberi(appuntamenti, i);

    printf("\n");
    system("Pause");
    return 0;
}
