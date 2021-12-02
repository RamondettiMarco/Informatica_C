#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

int fat(int n)
{
    int ris;
    if(n == 0){
        ris = 0;
    }else{
        ris =  n * fat(n - 1);
    }
    return ris;
}

int main()
{
    int n, fattoriale;
    n = leggiNumeroPositivo();

    fattoriale = fat(n);

    printf("\n");
    system("Pause");
    return 0;
}
