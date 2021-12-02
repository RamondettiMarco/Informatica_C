#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100

int main()
{
    int n, i;
    int vet[DIM_MAX];

    do{
        printf("inserisci la quantita di numeri: ");
        scanf("%d", &n);
    }while(n < 0 || n > DIM_MAX);

    for(i = 0; i < n; i++){
        printf("inserisci un numero: ");
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < n; i++){
        vet[i] = vet[i] * 2;
    }
    for(i = 0; i < n; i++){
        printf("%d\t", vet[i]);
    }

    printf("\n");
    system("Pause");
    return 0;
}
