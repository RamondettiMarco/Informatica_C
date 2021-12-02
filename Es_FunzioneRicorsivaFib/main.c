#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

int fibonacci(int n)
{
    int ris;
    if (n <= 1){
        ris = n;        //se n=0 il risultato è 0 se n=1 il risultato è 1
    }else{
        ris = fibonacci(n-1) + fibonacci(n-2);
    }

    return ris;
}

int main()
{
    int n, risultato;

    n = leggiNumeroPositivo();

    risultato = fibonacci(n);
    printf("il numero di fibonacci di %d e' %d", n, risultato);

    printf("\n");
    system("Pause");
    return 0;
}
