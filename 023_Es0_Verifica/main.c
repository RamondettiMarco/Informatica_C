#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, c;

    do {
        printf("inserisci il primo numero: ");
        scanf("%d", &a);
        fflush(stdin);

        if (a<0) {
            printf("errore");
        }

   } while (a<0);

   do {
        printf("inserisci il secondo numero: ");
        scanf("%d", &b);
        fflush(stdin);

        if (b<0) {
            printf("errore");
        }

   } while (b<0);
    c=a;
    for (i=1; i<b; i++) {
        a= a+c;
    }

    printf("il risultato e %d", a);


    printf("\n");
    system("Pause");
    return 0;
}
