#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 2: dato in input un numero intero e individuare se è pari o dispari

Autore: Marco Ramondetti
Classe: 3 B ROB
Data: 23 Ottobre 2020
*/

int main()
{
    int num, resto;

    printf("inserisci un numero intero: ");
    scanf("%d", &num);
    fflush(stdin);

    resto=num % 2;
    if (resto==0) {
        printf("il numero e' pari \n");

    } else {
        printf("il numero e' dispari \n");
    }

    printf("\n");
    system("Pause");
    return 0;
}
