#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define FATTORIALE 1

int leggiEsponente()
{
    int esp;
    printf("inserisci l'esponente: ");
    scanf("%d", &esp);
    return esp;
}

float leggiBase()
{
    float b;

    printf("inserisci la base della potenza: ");
    scanf("%f", &b);
    fflush(stdin);

    return b;
}

float calcolaPotenza(float b, int e)
{
    float ris=1;
    int i;

        for(i=1; i<=e; i++) {
            ris=ris*b;
        }
        if (e<0) {
            ris=1/ris;

       }
    return ris;
}

int calcolaFattoriale(n)
{
   int f = FATTORIALE, i;

    if (n >= 0) {

        for (i=n; i>=1; i--) {
            f = f * i;
        }

    } else {
        printf("errore");
    }
    return f;
}

int main()
{
    int esponente, f, n;
    float base, prodotto;

    esponente = leggiEsponente();
    base = leggiBase();

    prodotto = calcolaPotenza(base, esponente);

    printf("la potenza e %f\n", prodotto);

    n = leggiNumeroPositivo();
    f = calcolaFattoriale(n);

    printf("il fattoriale e' %d", f);


    printf("\n");
    system("Pause");
    return 0;
}
