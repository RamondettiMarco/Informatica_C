#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 23: Dati in input A e B, interi positivi, verificare se uno è multiplo dell’altro.

Autore: Marco Ramondetti

Data: 27 Ottobre 2020
*/

int main()
{
    //dichiarazione delle variabili
    int a, b, r;

    //prendo in input il primo numero
    printf("inserisci un numero intero positivo: ");
    scanf("%d", &a);
    fflush(stdin);

    //prendo in input il secondo numero
    printf("inserisci un altro numero intero positivo: ");
    scanf("%d", &b);
    fflush(stdin);

    //verifico quale dei due sia il maggiore
    if (a > b) {
        r= a % b;
    } else {
        r= b % a;
    }

    if (r==0) {
        printf("sono multipli");
    } else {
        printf("non sono multipli");
    }

    printf("\n");
    system("Pause");
    return 0;
}
