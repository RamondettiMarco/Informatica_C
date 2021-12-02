#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

int convertiSecondi(int secondiTot, int *min, int * ore)
{
    int secondi;

    *ore = secondiTot / 3600;
    secondiTot = secondiTot - (*ore * 3600);
    *min = secondiTot / 60;
    secondi = secondiTot - (*min *60);

    return secondi;


}

int main()
{
    int n, min, ore, sec;

    n = leggiNumeroPositivo();

    sec = convertiSecondi(n, &min, &ore);

    printf("i %d secondi corrispondono a: %d ore, %d minuti, %d secondi.", n, ore, min, sec);

    printf("\n");
    system("Pause");
    return 0;
}
