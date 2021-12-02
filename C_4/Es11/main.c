#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100

/*11. Caricare un vettore con la tabellina del numero x letto da tastiera (se x è 3 il vettore
conterrà 0,3,6,9,...,30)*/

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
    int i;
    int vet[DIM_MAX];

    n = leggiNumeroPositivo();

    for(i = 0; i < 11; i++){
        vet[i] = n*i;
    }

    stampaArray(11, vet);

    printf("\n");
    system("Pause");
    return 0;
}
