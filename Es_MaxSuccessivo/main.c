#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

int leggiNumeroPositivo();

/*
Il primo parametro contiene la quantità di numeri da prendere in input
Il secondo parametro contiene la posizione dell'ultimo multiplo di 5
Il secondo parametro contiene -1 nel caso in cui non ci sono stati multipli
Il terzo parametro contiene 0 nel caso in cui non ci sono stati multipli
*/

/*
int multiplo5(int a, int *u)
{
    int num, i;
    *u = 0;
    int p = -1;

    for(i=0; i<a; i++){
        printf("inserisci un numero: ");
        scanf("%d", &num);
        fflush(stdin);

        if(num % 5 == 0){
            *u = num;
            p = i;
        }

    }
    return p;
}
*/

void multiplo5(int a, int *p, int *u)
{
    int num, i;
    *u = 0;
    *p = -1;

    for(i=0; i<a; i++){
        printf("inserisci un numero: ");
        scanf("%d", &num);
        fflush(stdin);

        if(num % 5 == 0){
            *u = num;
            *p = i;
        }

    }
}

int maxSuccessivo(int n)
{
    int max, i, num, contm = 0;


    printf("inserire il primo numero: ");
    scanf("%d", &num);
    fflush(stdin);

    max = num;

        for (i=0; i<n-1; i++) {
            printf("inserisci un numero: ");
            scanf("%d", &num);
            fflush(stdin);

            if (num < max) {
                contm = contm + 1;
               }
                max = num;
            }
        return contm;
}

int main()
{
    int n, a, maggioriSuccessivo;
    int pos, mul;
    n = leggiNumeroPositivo();

    maggioriSuccessivo = maxSuccessivo(n);

    printf("i numeri maggiori del successivo sono %d\n", maggioriSuccessivo);

    a = leggiNumeroPositivo();

    multiplo5(a, &pos, &mul);
    if (pos == -1){
        printf("non sono stati inseriti numeri multipli di cinque.\n");
    } else {
        printf("l'ultimo multiplo di 5 e' stato %d in posizione %d\n", mul, pos);
    }


    printf("\n");
    system("Pause");
    return 0;
}
