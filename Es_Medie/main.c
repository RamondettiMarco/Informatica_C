#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

float medie(int n, float *mQuad)
{
    float media = 0;
    int i, x;
    *mQuad = 0;

    for(i=0; i<n; i++){
        x = leggiNumeroPositivo();

        media = media + x;
        *mQuad = *mQuad + (x * x);
    }
    media = media / n;
    *mQuad = *mQuad /n;

    return media;
}

int main()
{
    float media, mediaQuad;
    int n;

    n = leggiNumeroPositivo();

    media = medie(n, &mediaQuad);

    printf("la media e' %f e la media dei quadrati e' %f\n", media, mediaQuad);

    printf("\n");
    system("Pause");
    return 0;
}
