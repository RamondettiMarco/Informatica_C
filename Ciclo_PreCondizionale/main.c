#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    do {
        printf("inserisci un numero: ");
        scanf("%d", &n);
        fflush(stdin);
    } while (n<=0);

    for (i=0; i<2*n; i+=2) {
        printf("%d \n", i);
    }
    printf("sequenza finita");

    //al posto del do-while e del for insieme come sopra si può fae questo
    i = 0

    while (i<2*n) {
        printf("%d \n", i)
        i+=2

    }

    printf("\n");
    system("Pause");
    return 0;
}
