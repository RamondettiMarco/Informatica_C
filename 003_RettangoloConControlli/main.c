#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 3: Calcolare area di un rettangolo con controllo di validità dei dati

Autore: Marco Ramondetti
Classe: 3 B ROB
Data: 23 Ottobre 2020
*/

int main() {
    //definizione delle variabili di input, lavoro e output
    float base, altezza, perimetro, area;

    //prendo in input la base
    printf("inserisci la base del rettangolo:");
    scanf("%f", &base);
    fflush(stdin);

    //controllo la base e se ha un valore valido
    //procedo con l'input dell'altezza
    if (base>0) {
        printf("inserisci l'altezza:");
        scanf("%f", &altezza);
        fflush(stdin);

        //controllo la validità dell'altezza
        //in caso positivo calcolo e visualizzo i risultati
        //in caso negativo mostro messaggio di errore
        if (altezza>0) {
            //calcolo i risultati
            perimetro= (base + altezza) * 2;
            area= base * altezza;
            //visualizzo i risultati
            printf("il perimetro e' %f \n", perimetro);
            printf("l'area e' %f \n", area);

        } else {
            printf("il valore dell'altezza deve essere un numero positivo e maggiore di zero.");
        }

    } else {
        printf("il valore della base deve essere un numero positivo e maggiore di zero.");
    }

    printf("\n");
    system("Pause");
    return 0;
}
