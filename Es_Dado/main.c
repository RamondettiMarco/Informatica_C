#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preparaNumeriCasuali();

int main()
{
    int numeroLanci;
    int i;
    int d;
    int d1 = 0;
    int d2 = 0;
    int d3 = 0;
    int d4 = 0;
    int d5 = 0;
    int d6 = 0;
    preparaNumeriCasuali();



    printf("introduci il numero di lanci: ");
    scanf("%d", &numeroLanci);
    fflush(stdin);

    for (i=0; i<numeroLanci; i++) {
        d = dado(6);
        //printf("%d \t", d);
        switch(d) {
    case 1:
        d2 = d2+1;
        break;
    case 2:
        d3 = d3+1;
        break;
    case 3:
        d4 = d4+1;
         break;
    case 4:
        d4 = d4+1;
         break;
    case 5:
        d5 = d5+1;
         break;
    case 6:
        d6 = d6+1;

        }
    }

    printf("la faccia 1 e uscita %d volte\n", d1);
    printf("la faccia 2 e uscita %d volte\n", d2);
    printf("la faccia 3 e uscita %d volte\n", d3);
    printf("la faccia 4 e uscita %d volte\n", d4);
    printf("la faccia 5 e uscita %d volte\n", d5);
    printf("la faccia 6 e uscita %d volte\n", d6);


    printf("\n");
    system("PAUSE");
    return 0;
}

void preparaNumeriCasuali()
{
    int i;
    srand(time(0));
    i = rand();

}
int dado(int n)
{
    int f;

    f = rand() % n + 1;

    return f;

}
