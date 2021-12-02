#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

int fibonacciGeneralizzato(int n)
{
    int prim=0, sec=1, terz=2, i, somma;
    for(i=n; i>=1; i--){
        prim=sec;
        sec=terz;
        terz=somma;
        printf("%d", terz);
    }
    return prim;

}

int main()
{
    int n;

    n=leggiNumeroPositivo();
    int nesimo=fibonacciGeneralizzato(n);
    printf("l'nesimo termine e %d\n", nesimo);





    printf("\n");
    system("Pause");
    return 0;
}
