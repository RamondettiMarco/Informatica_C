#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, dispari;

    printf("inserisci la quantita' di numeri: ");
    scanf("%d", &n);
    fflush(stdin);

    if (n > 0) {
       dispari= 1;
       for (i=0; i<n; i++) {
        printf("%d\t", dispari);
        dispari+=2;
       }
    } else {
        printf("il numero inserito deve essere maggiore");
    }


    printf("\n");
    system("Pause");
    return 0;
}
