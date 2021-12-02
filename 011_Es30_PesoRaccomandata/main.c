#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 30: Dato il peso della raccomandata scrivere l’importo da versare:
<= 50g si paga 2 euro
<=100g si paga 3,50 euro
>100g si paga 4,50 euro

Autore: Marco Ramondetti

Data: 29 Ottobre 2020
*/

int main()
{
    //dichiarazione delle variabili
    float p;
    int ret;

    //prendo in input il peso della raccomandata
    printf("inserisci il peso della raccomandata: ");
    scanf("%f", &p);
    fflush(stdin);

    //verifico che il dato inserito sia maggiore di zero
    if (p > 0) {

        //controllo il valore del peso della raccomandata e stampo gli output corrispondenti
        if (p <= 50) {
            printf("si paga 2 euro");

        } else if (p <= 100) {
           printf("si paga 3.50 euro");

        } else {
            printf("si paga 4.50 euro");
        }
    } else {
        printf("il dato inserito deve essere maggiore di zero");
        ret -1; //errore
    }

    printf("\n");
    system("Pause");
    return 0;
}
