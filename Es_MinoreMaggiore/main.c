#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

void scambia(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void ordinaNumeri(int *a, int *b)
{
    if(*a > *b){
        scambia(a, b);
    }
}


int main()
{
    int n , m;

    n = leggiNumeroPositivo();
    m = leggiNumeroPositivo();

    ordinaNumeri(&n, &m);

    printf("i numeri ordinati sono: %d e %d\n", n, m);

    printf("\n");
    system("Pause");
    return 0;
}
