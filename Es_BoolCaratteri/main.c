#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool leggiBooleano()
{
    bool c;
    do{
        printf("inserisci s o n: ");
        scanf("%c", &c);
        fflush(stdin);
    }while(c!='s' && c!='n');
    return c;
}

char quantoDista(char c)
{
    char dis;
    if(c > 'Z'){
        dis = c - 97;
    }else if(c < 'a'){
        dis = c - 65;
    }
    return dis;
}

int main()
{
    bool c;
    char ci;
    char distanza;

    printf("inserisci una lettera maiuscola o minuscola: ");
    scanf("%c", &ci);
    fflush(stdin);

    distanza = quantoDista(ci);

    printf("il carattere dista %d dalla prima lettera", distanza);

    printf("\n");

    c = leggiBooleano();

    printf("\n");
    system("Pause");
    return 0;
}
