#include <stdio.h>
#include <stdlib.h>

int NumeriBinari(i, n, nbit, nc) {
    do {
        printf("inserisci un numero positivo intero: ");
        scanf("%d", &n);
        fflush(stdin);

    } while (n<=0);

    nc=0;

    for (i=1; i<=n; i++) {
        printf("inserisci ogni bit del numero del numero binario: ");
        do {
            scanf("%d", &nbit);
            fflush(stdin);

            if (nbit!=1 && nbit!=0) {
                printf("devi inserire 1 o 0");
            } else {
                nc= 2 * nc + nbit;


            }

        } while (nbit!=01 && nbit!=00);
    }
    return nc;
}

int main()
{
    int nc, x;

    x= NumeriBinari();

    printf("il numero inserito e %d", nc);

    printf("\n");
    system("Pause");
    return 0;
}
