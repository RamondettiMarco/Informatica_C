#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int annoBisestile (int a);

int main()
{
    int anno, mese, giorno;
    int bisestile;
    int maxGiorniMese;
    int contoGiorni;
    int i;
    int giornoDellaSettimana;

    do {
        printf("inserisci l'anno: ");
        scanf("%d", &anno);
        fflush(stdin);
        if (anno<1900) {
            printf("deve essere maggiore o uguale a 1900.\n");

        }

    } while (anno<1900);
    bisestile = annoBisestile(anno);
    do {
        printf("inserisci il mese: ");
        scanf("%d", &mese);
        fflush(stdin);
        if ((mese<1) || (mese>12)) {
            printf("il mese deve essere tra 1 e 12.\n");
            }
    } while ((mese<1) || (mese>12));

    /*switch (mese) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        maxGiorniMese = 31;
        break;
    case 2:
        if (bisestile == 1) {
            maxGiorniMese = 29;
        } else {
            maxGiorniMese = 28;
        }
        break;
    default:
        maxGiorniMese = 30;
    }*/
    maxGiorniMese = giorniMese(mese, anno);
    do {
        printf("inserisci il giorno: ");
        scanf("%d", &giorno);
        fflush(stdin);
        if ((giorno<1) || (giorno > maxGiorniMese)) {
            printf("devi introdurre un giorno compreso tra 1 e %d \n", maxGiorniMese);
        }
    }while((giorno<1) || (giorno > maxGiorniMese));

    contoGiorni = 0;

    for (i=1900; i<anno; i++) {

        contoGiorni = contoGiorni + 365 + annoBisestile(i);

}

    for (i=1; i<mese; i++) {
            /*switch (i) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            maxGiorniMese = 31;
            break;
        case 2:
            if (bisestile == 1) {
                maxGiorniMese = 29;
            } else {
                maxGiorniMese = 28;
            }
            break;
        default:
            maxGiorniMese = 30;
        }*/

        contoGiorni= contoGiorni + giorniMese(i, anno); //maxGiorniMese;
    }
    contoGiorni= contoGiorni + giorno -1;
    giornoDellaSettimana= contoGiorni % 7;

    printf("sono passati %d giorni dal 1/1/1900 \n", contoGiorni);

    printf("il %d / %d / %d e' ", giorno, mese, anno);
    switch (giornoDellaSettimana) {
case 0:
    printf("lunedi ");
    break;
case 1:
    printf("martedi ");
    break;
case 2:
    printf("mercoledi ");
    break;
case 3:
    printf("giovedi ");
    break;
case 4:
    printf("venerdi ");
    break;
case 5:
    printf("sabato ");
    break;
case 6:
    printf("domenica ");
    break;


    }

    printf("\n");
    system("Pause");
    return 0;



}

int annoBisestile (int a) {
    int bisestile;

    bisestile = 0;
    if ((a%4)==0) {
        if ((a%100)==0) {
            if ((a%400)==0) {
                bisestile = 1;
            }
        } else {
            bisestile = 1;
        }
    }
    return bisestile;
}

int giorniMese (int m, int a) {
 int giorni;
 int bisestile;

 switch (m) {
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    giorni = 31;
    break;
case 2:
    giorni = 28 + annoBisestile(a);
    break;
default:
    giorni = 30;

 }
 return giorni;
}

