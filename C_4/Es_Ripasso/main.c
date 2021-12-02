#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"
#define DIM 100

/*Dati 2 vettori i interi di dimensione N, ne costruisca un terzo di dimensione 2N in cui gli elementi
del primo vettore vengano copiati in posizioni pari e nelle posizioni dispari copiare gli elementi del secondo;
verificare i valori pari e i valori dispari del terzo vettore e crearne ulteriori 2 uno per i pari e uno per
i dispari*/

void  leggiArrayN(int *vet, int n)
{
    int i;

    for(i = 0; i < n; i++){
        printf("iserisci un numero: ");
        scanf("%d", &vet[i]);
    }
}

void terzoArray(int *vet1, int *vet2, int n, int *vetFinale)
{
    int i;
    int j = 0;
    int y = 0;

    for(i = 0; i < 2*n; i++){
        if(i % 2 == 0){
            vetFinale[i] = vet1[j];
            j++;
        }else{
            vetFinale[i] = vet2[y];
            y++;
        }
    }
}

int pariDispari(int *vetFinale, int n, int *vetPari, int *vetDispari, int *nPari)
{
    int nDispari = 0;
    int i;

    for(i = 0; i < n; i++){
        if(vetFinale[i] % 2 == 0){
            vetPari[*nPari] = vetFinale[i];
            *nPari = *nPari + 1;
        }else{
            vetDispari[nDispari] = vetFinale[i];
            nDispari++;
        }
    }

    return nDispari;
}

int main()
{
    int n;
    int vet1[DIM];
    int vet2[DIM];
    int vetFinale[DIM];
    int vetPari[DIM];
    int vetDispari[DIM];
    int nPari = 0;
    int nDispari;

    n = leggiArray(vet1);
    printf("\n");
    leggiArrayN(vet2, n);

    printf("Primo array:\n");
    stampaArray(n, vet1);
    printf("\n");
    printf("Secondo array:\n");
    stampaArray(n, vet2);

    terzoArray(vet1, vet2, n, vetFinale);

    printf("\n");
    printf("Array finale:\n");
    stampaArray(2*n, vetFinale);
    printf("\n");

    nDispari = pariDispari(vetFinale, 2*n, vetPari, vetDispari, &nPari);

    printf("Array pari:\n");
    stampaArray(nPari, vetPari);
    printf("\n");
    printf("Array dispari:\n");
    stampaArray(nDispari, vetDispari);

    printf("\n");
    system("Pause");
    return 0;
}
