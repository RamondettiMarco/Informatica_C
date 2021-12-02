#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100

/*12. Calcolare la somma degli elementi di posizione pari e quelli di posizione dispari di un
vettore (procedura con 2 parametri per indirizzo) LO ZERO è CONSIDERATO PARI*/

int leggiNumeroPositivo()
{
    int n;
    do{
        printf("inserisci un numero positivo: ");
        scanf("%d", &n);
        fflush(stdin);
        if (n<0){
            printf("il numero deve essere maggiore di zero");

        }

    }while(n<0);

    return n;

}

int  leggiArray(int *vet)
{
    int n;
    int i;

    do{
         n = leggiNumeroPositivo();
    }while(n < 0 || n > DIM_MAX);

    for(i = 0; i < n; i++){
        printf("iserisci un numero: ");
        scanf("%d", &vet[i]);
    }


    return n;
}

int sommaPariDispari(int *vet, int n, int *sommaDispari)
{
    int sommaPari = 0;
    int i;

    for(i = 0; i < n; i++){
        if(i % 2 == 0){
            sommaPari = sommaPari + vet[i];
        }else{
            *sommaDispari = *sommaDispari + vet[i];
        }
    }
    return sommaPari;
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
    int n;
    int vet[DIM_MAX];
    int sommaPari = 0;
    int sommaDispari = 0;

    n = leggiArray(vet);

    sommaPari = sommaPariDispari(vet, n, &sommaDispari);

    stampaArray(n, vet);
    printf("\n");

    printf("la somma degli elementi in posizione pari e' %d, la somma degli elementi in posizione dispari e' %d", sommaPari, sommaDispari);

    printf("\n");
    system("Pause");
    return 0;
}
