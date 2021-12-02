#include <stdio.h>
#include <stdlib.h>

/*
Esercizio 20: Data la quantità, e il prezzo unitario della merce venduta,
lo sconto da applicare se la quantità venduta supera le 100 unità,
lo sconto da applicare in caso contrario, l’IVA:
scrivere l’importo da pagare calcolando l'IVA sul prezzo scontato.

Autore: Marco Ramondetti

Data: 27 Ottobre 2020
*/

int main()
{
    //inizializzo tutte le variabili
    float p, sconto1, sconto2, iva, imp, impf, tot;
    int ret, q;

    //chiedo in input la quantità del prodotto
    printf("inserisci la quantita: ");
    scanf("%d", &q);
    fflush(stdin);

    if (q>0) {
        //chiedo in input il prezzo del prodotto
        printf("inserisci il prezzo: ");
        scanf("%f", &p);
        fflush(stdin);
        if (p>0) {
            //chiedo in input lo sconto se la quantita' supera 100
            printf("inserisci lo sconto se la quantita' supera 100: ");
            scanf("%f", &sconto1);
            fflush(stdin);
            if (sconto1>0) {
                //chiedo in input lo sconto se la quantita' non supera 100
                printf("inserisci lo sconto se la quantita' non supera 100: ");
                scanf("%f", &sconto2);
                fflush(stdin);
                if (sconto2>=0) {
                    //chiedo in input l'iva
                    printf("inserisci l'iva: ");
                    scanf("%f", &iva);
                    fflush(stdin);
                    if (iva>0) {
                        imp = q * p; //calcolo l'importo senza sconto e sena iva

                        //controllo se la quantità è maggiore zero
                        if (q>100) {
                            //calcolo l'importo scontato se la quanttà è maggiore di 100
                            impf= imp - (imp*sconto1/100);
                        } else {
                            //calcolo l'importo scontato se la quanttà non è maggiore di 100
                            impf= imp - (imp*sconto2/100);
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
        } else {
            printf("il valore deve essere maggiore di zero");
            ret -1; //errore
        }

    } else {
      printf("il valore deve essere maggiore di zero");
      ret -1; //errore
    }

    //calcolo il totale da pagare finale
    tot= impf + (impf*iva/100);

    //stampo il risultato finale
    printf("il totale da pagare e' %f\n", tot);

    printf("\n");
    system("Pause");
    return ret;
}
