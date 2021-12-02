#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, f;

    printf("inserisci un numero: ");
    scanf("%d", &n);
    fflush(stdin);

    f= 1;

    if (n >= 0) {

        for (i=n; i>=1; i--) {
            f = f * i;
        }
        printf("il fattoriale e' %d", f);


    } else {
        printf("errore");
    }

    printf("\n");
    system("Pause");
    return 0;
}
