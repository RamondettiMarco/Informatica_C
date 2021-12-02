#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, s, num;
    int i;

    printf("inserisci la quantita' di numeri: ");
    scanf("%f", &n);
    fflush(stdin);

    if (n >= 0) {
        s = 0;
        for (i=0; i<n; i++) {
            printf("Insersci un numero: ");
            scanf("%f", &num);
            fflush(stdin);
            s= s + num;
        }
        printf("la somma e' %f\n", s);

    } else {
        printf("il numero deve essere positivo");
    }

    printf("\n");
    system("Pause");
    return 0;
}
