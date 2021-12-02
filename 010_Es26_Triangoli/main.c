#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 26: Date le misure dei lati di un triangolo dire se è isoscele, equilatero o scaleno

Autore: Marco Ramondetti

Data: 29 Ottobre 2020
*/

int main()
{
    //dichiarazione delle variabili
    float l1, l2,l3;
    int ret;

    //prendo in input il primo lato del triangolo
    printf("inserisci il primo lato del triangolo: ");
    scanf("%f", &l1);
    fflush(stdin);

    //controllo la validità del dato inserito, lo accetto se è maggiore di zero
    if (l1 > 0) {
        //prendo in input il secondo lato del triangolo
        printf("inserisci il secondo lato del triangolo: ");
        scanf("%f", &l2);
        fflush(stdin);

        //controllo la validità del dato inserito, lo accetto se è maggiore di zero
        if (l2 > 0) {
            //prendo in input il terzo lato del triangolo
            printf("inserisci il terzo lato del triangolo: ");
            scanf("%f", &l3);
            fflush(stdin);

            //controllo la validità del dato inserito, lo accetto se è maggiore di zero
            if (l3 > 0) {
                //controllo se il triangolo è equilatero
                if (l2 == l3 && l1 == l2) {
                    printf("il triangolo e' equilatero");

                } else if (l1 == l3 || l1 == l2 || l2 == l3) { //controllo se il triangolo è isoscele
                    printf("il triangolo e' isoscele");

                } else {
                    printf("il triangolo e' scaleno");
                }
            } else {
                printf("il valore deve essere maggiore di zero");
                ret -1; //errore
            }
        } else {
            printf("il valore deve essere maggiore di zero");
            ret -1; //errore
        }
    } else {
        printf("il valore deve essere maggiore di zero");
        ret -1; //errore
    }




    printf("\n");
    system("Pause");
    return 0;
}
