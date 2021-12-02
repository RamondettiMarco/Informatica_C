#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100

int valoreMin(int num, float *vet)
{
    int min, i;
    min = vet[0];
    for(i = 1; i < num; i++){
        if(vet[i] < min){
            min = vet[i];
        }
    }
    //scrivere vet[i] è la stessa cosa di scrivere *(vet+i)
    return min;
}

float valoreMedia(int num, float *vet)
{
    int i;
    float media, somma = 0;
    for(i = 0; i < num; i++){
        somma = somma + vet[i];
    }
    media = somma / num;
    return media;
}

int main()
{
    int n, i, min;
    float media;
    float vet[DIM_MAX];

    do{
        printf("inserisci la quantita di numeri: ");
        scanf("%d", &n);
    }while(n < 0 || n > DIM_MAX);

    for(i = 0; i < n; i++){
        printf("inserisci un numero: ");
        scanf("%f", &vet[i]);
        min = valoreMin(n, vet);
        media = valoreMedia(n, vet);
    }

        printf("il minimo e %d\n", min);
        printf("la media e %f\n", media);

    printf("\n");
    system("Pause");
    return 0;
}
