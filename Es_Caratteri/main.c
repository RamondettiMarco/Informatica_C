#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char c = 'A';
    //printf("%c", c);

    //char scelta;
    //scanf("%c", &scelta);
    //fflush(stdin);
    //printf("%c", scelta);

    //scelta = getchar();
    //putchar(scelta);

    //int i = 5;
    //char ci = '5';
    //putchar(ci);
    char c;
    do{
        printf("inserisci un carattere maiuscolo: ");
        c = getchar();
    }while(c<'A' || c>'Z');

    c = c + 32;
    putchar(c);



    printf("\n");
    system("Pause");
    return 0;
}
