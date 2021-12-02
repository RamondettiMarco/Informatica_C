#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 22: Scrivere un programma per il calcolo dell’acconto di imposta:
se il saldo di imposta è negativo non si deve pagare nulla, se
è positivo si deve versare il 98% dell’importo come acconto.
Se l’acconto è inferiore a 50 euro non si deve pagare nulla.

Autore: Marco Ramondetti

Data: 27 Ottobre 2020
*/

int main()
{
    //dichiarazione delle variabili
    float saldo, acconto;

    //prendo in input il saldo dell'imposta
    printf("inserisci il saldo di imposta: ");
    scanf("%f", &saldo);
    fflush(stdin);

    if (saldo>= 0) {
        acconto= saldo * 98 / 100;
        if (acconto>= 50) {
            printf("si deve pagare come acconto di imposta euro %f ", acconto);
        } else {
           printf("non si deve pagare nullao.");
        }
    } else {
        printf("non si deve pagare nulla, l'acconto di imposta e' zero.");
    }

    printf("\n");
    system("Pause");
    return 0;
}
