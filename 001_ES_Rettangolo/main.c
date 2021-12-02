#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 1: Calcolare area di un rettangolo

Autore: Marco Ramondetti
Classe: 3 B ROB
Data: 23 Ottobre 2020
*/

int main()
{
    float base, altezza, perimetro, area;
    //prendo in input la base
    printf("inserisci la base del rettangolo: ");
    scanf("%f", &base);
    fflush(stdin);
    //prendo in input l'altezza
    printf("inserisci l'altezza del rettangolo: ");
    scanf("%f", &altezza);
    fflush(stdin);
    //calcolo del perimetro e dell'area
    perimetro=(base + altezza) * 2;
    area=base * altezza;
    //visualizzo i risultati
    printf("il perimetro del rettangolo e' %f\n", perimetro);
    printf("l'area del rettangolo e' %f ", area);

    system("Pause");
    return 0;
}
