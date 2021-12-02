#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eta;
    float costo, tot;

    printf("inserisci l'eta: ");
    scanf("%d", &eta);
    fflush(stdin);

    if (eta > 0) {
        printf("inserisci il costo del biglietto: ");
        scanf("%f", &costo);
        fflush(stdin);

        if (costo > 0) {
            if (eta >= 60) {
                tot= costo - (costo * 15 / 100);
            } else if (eta <= 12) {
                tot= costo - (costo * 10 / 100);
            } else {
                tot= costo;
            }
            printf("il totale da pagare e' %f\n", tot);

        } else {
            printf("il dato inserito deve essere maggiore di zero");
        }
    } else {
        printf("il dato inserito deve essere maggiore di zero");
    }


    printf("\n");
    system("Pause");
    return 0;
}
