#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100
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
void raddoppiaArray(int n, int *vetIniziale, int *vetFinale)
{
    int i;
    for(i = 0; i < n; i++){
        vetFinale[i] = vetIniziale[i] * 2;
    }
}
int  leggiArray(int vet[DIM_MAX])
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
void stampaArray(int n, int vet[DIM_MAX])
{
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", vet[i]);
    }
}

int main()
{
    int vet1[DIM_MAX];
    int vet2[DIM_MAX];
    int n;

    n = leggiArray(vet1);

    raddoppiaArray(n, vet1, vet2);

    stampaArray(n, vet2);

    printf("\n");
    system("Pause");
    return 0;
}
