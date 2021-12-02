#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define LAT_CUNEO 44.38
#definr LONG_CUNEO 7.52
float prendiNumeroRealeLimitato(float min, float max);

int main()
{
    int quanteLocalita;
    int nord, sud, ovest, est;
    int i;
    float lat, lon;

    quanteLocalita = leggiNumeroPositivo();

    nord = 0;
    sud = 0;
    ovest = 0;
    est = 0;

    for (i = 1; i <= quanteLocalita; i++) {
        printf ("Introduci la latitudine della %d localita':", i);
        lat = prendiNumeroRealeLimitato(-90.0, 90.0);
        printf ("Introduci la longitudine della %d localita':", i);
        lon = prendiNumeroRealeLimitato(-180.0, 180.0);

        if (lat < LAT_CUNE) {
            sud = sud + 1;
        } else {
            nord = nord + 1;
        }

        if (lon < LONG_CUNEO) {
            ovest = ovest + 1;
        } else {
            est = est + 1;
        }
    }

    printf("Sono state inserite %d localita a sud di Cuneo.\n", sud);
    printf("Sono state inserite %d localita a nord di Cuneo.\n", nord);
    printf("Sono state inserite %d localita a ovest di Cuneo.\n", ovest);
    printf("Sono state inserite %d localita a est di Cuneo.\n", est);

    printf("\n");
    system("Pause");
    return 0;
}


float prendiNumeroRealeLimitato(float min, float max) {
    float f;

    do {
        scanf("%f", &f);
        fflush(stdin);
        if ((f<min) || (f>max)) {
            printf("Devi inserire un numero compreso tra %f e %f", min, max);
        }
    } while ((f<min) || (f>max));

    return f;
}
