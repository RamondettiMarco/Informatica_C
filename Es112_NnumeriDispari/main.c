#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

/*
RAMONDETTI MARCO 3BROB
Es 112
Dato in input un numero intero N, sommare i primi N numeri dispari e verificare che tale somma
sia uguale al quadrato di N
*/

void numeriDispari(int n)
{
    int somma;
    for(int i=1; i<n*2; i+=2){
        printf("%d\n", i);
        somma = somma + i;
    }
    printf("\n");
    if(somma = (n * n)){
        printf("la somma dei %d numeri e' %d\n", n, somma);
    } else {
        printf("errore\n");
    }

}

int main()
{
    int n;
    n = leggiNumeroPositivo();

    numeriDispari(n);

    printf("\n");
    system("Pause");
    return 0;
}
