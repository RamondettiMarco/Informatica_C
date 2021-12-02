#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Si scriva un programma C che inizializzi un vettore di interi di lunghezza massima pari a d
(acquisire da tastiera il valore di d), riempendolo con valori casuali compresi tra -50 e 50,
e lo stampa. Dato il vettore appena creato, creare due vettori, uno contenente i valori pari
e l’altro contenente i valori dispari del vettore di partenza, e poi stamparli.
Stampare, infine, la somma dei valori pari e la somma dei valori dispari.
(Creare vettori di dimensione esatta).*/

int leggiDimensione()
{
    int n;
    do{
        printf("inserisci la dimensione dell'array: ");
        scanf("%d", &n);
        fflush(stdin);
        if (n < 0){
            printf("il numero deve essere maggiore di zero"); //altrimenti non è valido

        }

    }while(n < 0);

    return n;

}

void stampaArray(int n, int *vet)
{
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", vet[i]);
    }
}

int main()
{
    int d;
    int i;
    int j;
    int pari = 0;
    int dispari = 0;
    int vetP[pari];
    int vetD[dispari];
    int sommaP = 0;
    int sommaD = 0;

    d = leggiDimensione();

    int vet[d];

    srand(time(NULL));

    for(i = 0; i < d; i++){
        vet[i] = -50 + rand()%101; // 101 perchè tra -50 e 50 ci sono 101 numeri
    }

    for(j = 0; j < d; j++){
        if(vet[j] % 2 == 0){
            vetP[pari] = vet[j];
            pari++; //dimensione vettore pari
            sommaP = sommaP + vet[j];
        }else{
            vetD[dispari] = vet[j];
            dispari++; //dimensione vettore dispari
            sommaD = sommaD + vet[j];
        }
    }

    printf("Vettore iniziale: \n");
    stampaArray(d, vet);

    printf("\n Vettore pari: \n");
    stampaArray(pari, vetP);

    printf("\n Vettore dispari: \n");
    stampaArray(dispari, vetD);

    printf("\n Somma elementi pari : %d", sommaP);
    printf("\n Somma elementi dispari : %d", sommaD);

    printf("\n");
    system("Pause");
    return 0;
}
