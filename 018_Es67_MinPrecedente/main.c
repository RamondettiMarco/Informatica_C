#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, max, i;
    float num, min;

    printf("inserire la quantita di numeri: ");
    scanf("%d", &n);
    fflush(stdin);

    min = 0;
    max = 0;

    if (n >= 0) {
        for (i=0; i<n; i++) {
            printf("inserisci un numero: ");
            scanf("%f", &num);
            fflush(stdin);

            if (num > min) {
                max = max + 1;
            }
            min = num;
        }
        printf("i numeri maggiori del precedente sono %d", max);

    } else {
        printf("errore");
    }

    printf("\n");
    system("Pause");
    return 0;
}
