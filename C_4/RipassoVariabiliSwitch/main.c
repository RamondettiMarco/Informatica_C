#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*calcola la temp media di 2 citta prelevando 2 temperature
dove un sottoprogramma le mette nelle variabili locali
mentre un secondo esegue le medie e le visualizza*/

float tempCuneo;
float tempTorino;

void temperature(float *contT, float *contC, float *sommaC, float *sommaT)
{
    float temperatura;
    bool esci = false;
    int scelta;

    while(scelta != 0 && esci == false){

        printf("inserisci la scelta della temperature da inserire 1 = Cuneo, 2 = Torino, 0 = esci \n");
        scanf("%d", &scelta);

        switch(scelta){
            case 1:
                printf("inserire la temperatura: \n");
                scanf("%f", &temperatura);
                *sommaC = *sommaC + temperatura;
                *contC = *contC +1;
                break;
            case 2:
                printf("inserire la temperatura: \n");
                scanf("%f", &temperatura);
                *sommaT = *sommaT + temperatura;
                *contT = *contT + 1;
                break;
            case 0:
                esci = true;
        }

    }
}

void stampaMedie(float sommaC, float sommaT, float contC, float contT)
{
    tempCuneo = sommaC / contC;
    tempTorino = sommaT / contT;

     printf("la media delle temperature a Cuneo e': %f\n", tempCuneo);
     printf("la media delle temperature a Torino e': %f\n", tempTorino);
}

int main()
{
    float sommaT = 0;
    float sommaC = 0;
    float contC = 0;
    float contT = 0;

    temperature(&contT, &contC, &sommaC, &sommaT);

    stampaMedie(sommaC, sommaT, contC, contT);

    printf("\n");
    system("Pause");
    return 0;
}
