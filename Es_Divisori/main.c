#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

char ePrimo(int n);

void divisoriPrimi(int n)
{
    int d = 2;

    while(d <= (n / 2)){

        if(n % d == 0 && ePrimo(d) == 1){
            printf("%d\n", d);
        }

        d++;

    }
}

void divisori(int n)
{
    int i;
    for(i = 1; i <= (n / 2); i++){
        if (n % i == 0){
            printf("%d\n", i);
        }
    }
    printf("%d\n", n);
}

int main()
{
    int n;
    n = leggiNumeroPositivo();
    //divisori(n);
    divisoriPrimi(n);

    printf("\n");
    system("Pause");
    return 0;
}
