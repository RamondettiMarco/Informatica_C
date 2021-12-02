#include <stdio.h>
#include <stdlib.h>

/*3. Usando le funz/proc create degli esercizi precedenti stampare triangolo fare un
programma che letto un numero non negativo H e un carattere C, stampare a video
un triangolo rettangolo isoscele di altezza H. Per esempio se H = 3
X
XX
XXX*/

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
    int h;
    int c;
    int i;
    int j;

    h = leggiNumeroPositivo();
    c = inserisciCarattere();

    for(i = 0; i < h+1; i++){
            printf("\n");
        for(j = 0; j < i; j++){
            printf("%c", c);
        }
    }

    printf("\n");
    system("Pause");
    return 0;
}
