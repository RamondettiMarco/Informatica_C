#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b, e, p, tot, i;

    printf("inserisci la base: ");
    scanf("%d", &b);
    fflush(stdin);

    printf("inserisci l'esponente: ");
    scanf("%d", &e);
    fflush(stdin);

    if (e==0) {
        p=1;
    } else if (e==1) {
        p=b;
    } else {
        tot=b;
        for(i=2; i<=e; i++) {
            tot=tot*b;
        }
        if (e<0) {
            p=1/tot;
        } else {
            p=tot;
        }

    }
    printf("la potenza e %d", p);

    printf("\n");
    system("Pause");
    return 0;
}
