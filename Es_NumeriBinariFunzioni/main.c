#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"


int leggiBit()
{
    int n;
    do{
        printf("inserisci un bit: ");
        scanf("%d", &n);
        fflush(stdin);
        if (n!=0 && n!=1){
            printf("il numero deve essere zero o uno");

        }

    }while(n!=0 && n!=1);

    return n;

}

int converti(int n)
{
    int i, bit;
    int conv=0;

    for(i=0; i<n; i++){
        bit = leggiBit();
        conv = 2 * conv + bit;
    }
    return conv;
}

int main()
{
    int n;
    int dec;
    n = leggiNumeroPositivo();

    dec = converti(n);

    printf("il numero decimale e %d\n", dec);

    printf("\n");
    system("Pause");
    return 0;
}
