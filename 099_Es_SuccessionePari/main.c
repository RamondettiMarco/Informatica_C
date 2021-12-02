#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#include <stdbool.h>

bool successionePari()
{
    int n, num;
    bool pari;

    n = leggiNumeroPositivo();

    if(n % 2 == 0){
        pari = true;
    }else {
        pari = false;
    }

    while(num != 0 && pari == true){
        printf("inerisci un numero: ");
        scanf("%d", &num);
        fflush(stdin);

        if(num % 2 != 0){
                pari = false;

        }


    }
    return pari;
}

int main()
{
    bool successione;

    successione = successionePari();
    if(successione == true){
        printf("i numeri inseriti sono tutti pari");
    }else {
        printf("i numeri inseriti non sono tutti pari.");
    }

    printf("\n");
    system("Pause");
    return 0;
}
