#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM 100

typedef struct   // struct=celle di memoria consecutive, che possono avere tipi diversi
{
    char nome[DIM];
    int vittorie;
    int sconfitte;
    bool giaGiocato;
} Squadra;

int main()
{
    Squadra squadre;
    char giocato;

    printf("Inserire il nome della squadra: ");
    gets(squadre.nome);

    printf("Inserire il numero di vittorie: ");
    scanf("%d", &squadre.vittorie);

    printf("Inserire il numero di sconfitte: ");
    scanf("%d", &squadre.sconfitte);

    do{
        printf("Inserire se ha già giocato [s/n]: ");
        fflush(stdin);
        giocato = getchar();
        fflush(stdin);
    }while(giocato != 's' && giocato != 'n');
    squadre.giaGiocato = (giocato == 's');
    //se è 's' giaGiocato è TRUE

    printf("Dettagli squadra: \n");
    printf("Nome: %s\n", squadre.nome);
    printf("Vittorie: %d\n", squadre.vittorie);
    printf("Sconfitte: %d\n", squadre.sconfitte);
    if(squadra.giaGiocato == true){
        printf("Ha gia giocato\n");
    }else{
        printf("Non ha ancora giocato\n");
    }
    system("Pause");
    return 0;
}
