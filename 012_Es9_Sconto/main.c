#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 9: Stabilita la percentuale di sconto, dato il prezzo di un prodotto,
calcolare lo sconto, il prezzo scontato e comunicare i risultati.

Autore: Marco Ramondetti

Data: 30 Ottobre 2020
*/

int main()
{
    //dichiarazione delle variabili
    float ps, prezzo, sconto, tot;
    int ret;

    //prendo in input la percentuale di sconto
    printf("inserisci la perentuale di sconto: ");
    scanf("%f", &ps);
    fflush(stdin);

    //controllo se la variabile inserita è maggiore di zero, quindi accettabile
    if (ps > 0) {
        //prendo in input il prezzo del prodotto
        printf("inserisci il prezzo del prodotto: ");
        scanf("%f", &prezzo);
        fflush(stdin);

        //controllo se la variabile inserita è maggiore di zero, quindi accettabile
        if (prezzo > 0) {
            //calcolo lo sconto e il prezzo scontato
            sconto= prezzo * ps / 100;
            tot= prezzo - sconto;

        } else {
           printf("il dato inserito deve essere maggiore di zero");
           ret -1; //errore
        }
    } else {
        printf("il dato inserito deve essere maggiore di zero");
        ret -1; //errore
    }

    //stampo come output lo sconto e il prezzo scontato
    printf("lo sconto e': %f \n", sconto);
    printf("il prezzo scontato e': %f", tot);

    printf("\n");
    return ret;
}
