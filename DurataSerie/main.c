// Ramondetti Marco
// 23/10/2020
// Data la durata (media) in minuti di una puntata di una serie televisiva
// e il numero di puntate, calcolare la durata della serie in ore.


#include <stdio.h>
#include <stdlib.h>

// float * float = float
// int * float = float
// int * int = int


// In un quoziente tra interi il C "tronca"

// Il resto divisione intera con %
// 10/3 = 3 con resto 1

// Il simbolo per l'AND logico è &&
// Il simbolo per l'OR logico è ||

int main()
{
    // Dichiarazione variabili
    float durata, durataSerie; // La durata non è detto sia intera
    int nPuntate; // Il numero di puntate ha solo senso se è intero
    int ret=0; // Se il programma termina correttamente restituisco 0

    printf("Inserire la durata media di una puntata: ");
    scanf("%f", &durata);

    if(durata>0) {
        printf("Inserire il numero di puntate: ");
        scanf("%d", &nPuntate);
        if(nPuntate>0) {
            //durataSerie=(nPuntate/60.0)*durata;
            durataSerie=nPuntate*durata/60;
            //printf("La durata della serie è %f", durataSerie);
            printf("La durata di una serie con ogni puntata lunga %f minuti e composta da %d episodi è %f in ore", durata, nPuntate, durataSerie);
        } else { // nPuntate<=0
            printf("Il numero di puntate deve essere positivo");
            ret = -1; // C'è stato un errore
        }
    } else { // durata <= 0
        printf("La durata deve essere positiva\n");
        ret = -1; // C'è stato un errore
    }
    return ret;
}
