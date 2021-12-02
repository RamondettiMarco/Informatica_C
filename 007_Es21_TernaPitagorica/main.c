#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 20: si richiedono 3 valori (per il ultimo il maggiore)
 e si verifica se si tratta di una terna pitagorica

 Autore: Marco Ramondetti

 Data: 27 Ottobre 2020
*/

int main()
{
    //dichiarazione dell variabili
    float a, b, c, c2, ab;

    //prendo in input il primo valore
    printf("inserisci il primo valore: ");
    scanf("%f", &a);
    fflush(stdin);

    //prendo in input il secondo valore
    printf("inserisci il secondo valore: ");
    scanf("%f", &b);
    fflush(stdin);

    //prendo in input il terzo valore
    printf("inserisci il terzo valore: ");
    scanf("%f", &c);
    fflush(stdin);

    //calcolo il terzo valore al quadrato e pongo il risultato in una variabile
    c2= c * c;

    //calcolo il primo valore al quadrato sommato al quadrato del secondo e lo pongo in una variabile
    ab= (a * a) + (b * b);

    if (c2 == ab) {
        printf("e' una terna pitagorica");
    } else {
        printf("non e' una terna pitagorica");
    }
    printf("\n");
    system("Pause");
    return 0;
}
