#include <stdio.h>
#include <stdlib.h>
#define MESE_MAX 12
#define MESE_MIN 1

int main()
{
    int n;
    printf("inserire un numero: ");
    scanf("%d", &n);
    fflush(stdin);

    if(n < MESE_MIN || n > MESE_MAX){
        printf("errore");
    }

    printf("\n");
    system("Pause");
    return 0;
}
