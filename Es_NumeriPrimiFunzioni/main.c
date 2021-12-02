#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

char multiploDiTre(int n)
{
    int resto;
    resto = n % 3;
    return (resto == 0);
}

char ePrimo(int n)
{
    int i=2;
    char primo;
    primo = 1;
    while((i < n/2) && (primo == 1)) {
        if (n % i == 0) {
            primo = 0;
        }

        i++;
    }
    return primo;

}

int main()
{
    int n, primo, mul3, contPrimi = 0, contM3 = 0;
    do{
        n=leggiNumeroPositivo();

        primo = ePrimo(n);
    if (primo == 1){
        contPrimi = contPrimi + 1;
    }
    mul3 = multiploDiTre(n);
    if (mul3 == 1){
        contM3 = contM3 + 1;
    }
    }while(n!=0);

    printf("i numeri primi sono : %d\n",contPrimi);
    printf("i multipli di 3 sono : %d\n",contM3);


    printf("\n");
    system("Pause");
    return 0;
}
