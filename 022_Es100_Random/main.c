#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, num;

    srand(time(0));
    rand();
    n = rand()%101;

     do {
        printf("inserisci un numero: ");
        scanf("%d", &num);
        fflush(stdin);

        if (num>n) {
            printf("alto\n");
        } else if (num==n) {
            printf("hai indovinato\n");
        } else {
            printf("basso\n");
        }

    } while (num!=n);



    printf("\n");
    system("Pause");
    return 0;
}
