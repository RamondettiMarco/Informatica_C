#include <stdio.h>
#include <stdlib.h>
#define DIM 10
int main()
{
    int i;
    float vet[DIM];

    for(i = 0; i < DIM; i++){
        printf("inserisci un valore: ");
        scanf("%f", &vet[i]);
        printf("\n");
    }
    for(i = 0; i < DIM; i++){
        printf("%f ", vet[i]);
    }

    printf("\n");
    system("Pause");
    return 0;
}
