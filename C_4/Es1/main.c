#include <stdio.h>
#include <stdlib.h>

/*1. Fare un programma che letto un numero non negativo N e un carattere C, stampi a
video N volte C Per esempio se N=4 e C= 'A' a schermo compare
AAAA
*/

int leggiNumeroPositivo()
{
    int n;
    do{
        printf("inserisci un numero positivo: ");
        scanf("%d", &n);
        fflush(stdin);
        if (n<0){
            printf("il numero deve essere maggiore di zero");

        }

    }while(n<0);

    return n;

}

char inserisciCarattere()
{
    char c;

    printf("inserisci un carattere: \n");
    c = getchar();
}

int main()
{
    int n;
    char c;
    int i;

    n = leggiNumeroPositivo();

    c = inserisciCarattere();
    printf("\n");

    for(i = 0; i < n; i++){
        printf("%c", c);
    }

    printf("\n");
    system("Pause");
    return 0;
}
