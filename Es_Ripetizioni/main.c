#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

/*
Leggere un numero positivo N che rappresenta la quantità di numeri
da chiedere in input, leggere un numero Q, stabilire quante volte il numero
Q compare nella sequenza di numeri inseriti dall'utente.
*/

int ripetizioneNumero(int n, int q)
{
    int ripetizione = 0, i, num;

    for(i=0; i<n; i++){
        printf("inserisci un numero: ");
        scanf("%d", &num);
        fflush(stdin);

        if(num == q){
            ripetizione = ripetizione + 1;
        }
    }
    return ripetizione;
}

int main()
{
    int n, q, contq;

    n = leggiNumeroPositivo();

    printf("inserisci il numero da verificare: ");
    scanf("%d", &q);
    fflush(stdin);

    contq = ripetizioneNumero(n, q);

    printf("il numero %d e' stato inserito %d volte", q, contq);

    printf("\n");
    system("Pause");
    return 0;
}
