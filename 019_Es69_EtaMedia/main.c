#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media, eta, s;
    int n, i;

    printf("inserisci la quantita di persone: ");
    scanf("%d", &n);
    fflush(stdin);

    s = 0;

    if (n >= 0) {
        for (i=0; i<n; i++) {
            printf("inserisci l'eta: ");
            scanf("%d", &eta);
            fflush(stdin);

            if (eta >= 0) {
                s = s + eta;
            } else {
                printf("errore");
            }

        }
        media = s / n;
        printf("l'eta media e %d", media);

    } else {
        printf("errore");
    }

    printf("\n");
    system("Pause");
    return 0;
}
