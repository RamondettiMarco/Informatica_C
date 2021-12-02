#include <stdio.h>
#include <stdlib.h>

/*2. Usando le funz/proc create nell'esercizio precedente fare un programma che letto un
numero non negativo N e un carattere C, stampare a video un quadrato NxN di
caratteri C (a video NON sembrerà un quadrato, ma fa lo stesso, l'importante è che ci
siano N caratteri in N righe). Per esempio se N=2 e C= 'A' a schermo compare
AA
AA*/

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
    int j;

    n = leggiNumeroPositivo();
    c = inserisciCarattere();

    for(i = 0; i < n; i++){
        printf("\n");
        for(j = 0; j < n; j++){
            printf("%c", c);
        }
    }

    printf("\n");
    system("Pause");
    return 0;
}
