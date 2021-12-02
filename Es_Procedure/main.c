#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
void primiNNumeri(int n) //non ha un ritorno (return)
{
    for(int i=0; i<n; i++){
        printf("%d\n", i);
    }
    printf("\n");
}

int main()
{
    int n;

    n = leggiNumeroPositivo();

    primiNNumeri(n); //non lo assegno a variabili perché non ha un return

    printf("\n");
    system("Pause");
    return 0;
}
