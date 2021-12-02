#include <stdio.h>
#include <stdlib.h>

/*4. Usando le funz/proc create degli esercizi precedenti stampare una scacchiera 3x3
così fatta

XX00XX
XX00XX
00XX00
00XX00
XX00XX
XX00XX*/

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

void stampa(int n,char a,char b){
    int cont = 0;
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n/2; j++){

            if(cont % 2 == 0){
                printf("%c",a);
                printf("%c",a);
            }
            else{
                printf("%c",b);
                printf("%c",b);
            }
            cont++;
        }
        printf("\n");
    }

}

int main()
{
    int n = 6;
    char a = 'x';
    char b = 'o';

    //a = inserisciCarattere();
    //b = inserisciCarattere();

    stampa(n, a, b);

    printf("\n");
    system("Pause");
    return 0;
}
