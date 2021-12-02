#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 19: dato un importo, controllare se è maggiore di 100
in tal caso applicare uno sconto del 5%, stampare l'importo finale.

Autore: Marco Ramondetti

Data: 27 Ottobre 2020

*/

int main()
{
    //dichiaro le variabili
    float imp, impf;
    int ret;

    //prendo in input l'importo iniziale
    printf("inserisci l'importo: ");
    scanf("%f", &imp);
    fflush(stdin);

    //verifico se l'importo inserito è accettabile
    if (imp>0) {
        //controllo se l'importo è maggiore di zero
        if (imp>100) {
            //calcolo lo sconto
            impf = imp - (imp * 5 / 100);
        } else {
            impf = imp;
        }

    } else {
        printf("l'importo deve essere maggiore di zero");
        ret= -1; //errore

    }
    //stampo l'importo finale
    printf("l'importo finale e' %f", impf);

    printf("\n");
    system("Pause");
    return ret;
}
