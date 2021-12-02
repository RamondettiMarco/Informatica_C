#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100

int mystrlen(char *str)
{
    int cont = 0;
    while(str[cont] != '\0'){
        cont++;
    }
    return cont;
}

int main()
{
    char messaggio [DIM_MAX];
    int lunghezza;

    printf("inserisci una parola: ");
    scanf("%s", messaggio);
    fflush(stdin);

    printf("hai inserito %s", messaggio);

    printf("\n");

    lunghezza = mystrlen(messaggio);
    printf("la lunghezza della parola e %d", lunghezza);

    printf("\n");
    system("Pause");
    return 0;
}
