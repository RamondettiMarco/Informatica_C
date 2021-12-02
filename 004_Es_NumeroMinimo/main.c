#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 4: Dati in input due numeri determinare il minore

Autore: Marco Ramondetti
Classe: 3 ROB
Data: 23 Ottobre 2020
*/

int main()
{
    float n1, n2, min;

    //prendo in input il primo numero
    printf("inserisci un numero:");
    scanf("%f", &n1);
    fflush(stdin);

    //prendo in input il secondo numero
    printf("inserisci un secondo numero:");
    scanf("%f", &n2);
    fflush(stdin);

    //verifico quale dei due numeri è il minore
    if (n1 > n2) {
        min= n2;
    } else {
        min= n1;
    }

    //procedo con l'output del numero minore
    printf("il numero minore e' %f", min);

    printf("\n");
    system("Pause");
    return 0;
}
