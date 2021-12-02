#include <stdio.h>
#include <stdlib.h>

/*Si scriva un programma che definisca una struttura che permette di contenere una serie di dati
di una Squadra del tipo:● nome squadra (stringa di lunghezza 20) ;
● vettore goal fatti: sequenza di 4 interi (uno per ogni settimana del mese) ;
● vettore goal subiti: sequenza di 4 interi (uno per ogni settimana del mese.
Il programma restituisce il punteggio finale per ogni settimana (4 settimane in un mese),
assegnando ad ogni goal fatto 3 punti, ad ogni goal subito -1,
0 nel caso in cui non si è andati a segno e/o non si è subito goal.*/

typedef struct
{
    char nome[21]; //21 cosi sono 20 caratteri + il carattere terminatore
    int golFatti[4]; // 4 settimane analizzate (1 mese)
    int golSubiti[4];
}Squadra;

Squadra inizializzaSquadra()
{
    Squadra squadra;
    int i;

    printf("inserisci il nome della squadra (massimo 20 caratteri): ");
    gets(squadra.nome);

    for(i = 0; i < 4; i++){
        printf("inserisci i gol fatti nella %d settimana : ", i+1);
        scanf("%d", &squadra.golFatti[i]);

        printf("inserisci i gol subiti nella %d settimana: ", i+1);
        scanf("%d", &squadra.golSubiti[i]);
    }

    return squadra;
}

void stampaPunteggi(Squadra squadra, int *punteggio)
{
    int i;
    for(i = 0; i < 4; i++){
        printf("la squadra %s nella %d settimana ha totalizzato %d punti: ", squadra.nome, i+1, punteggio[i]);
        printf("\n");
    }
}

int main()
{
    Squadra squadra;
    int i;
    int j;
    int punteggio[4];

    squadra = inizializzaSquadra();

    for(j = 0; j < 4; j++){
        punteggio[j] = 0; //metto tutti i punteggi a zero perchè altrimenti all'interno ci sono numeri casuali
    }

    for(i = 0; i < 4; i++){
        punteggio[i] = punteggio[i] + (squadra.golFatti[i] * 3) - squadra.golSubiti[i]; //3 punti a gol fatto e -1 a gol subito
    }

    stampaPunteggi(squadra, punteggio);

    printf("\n");
    system("Pause");
    return 0;
}
