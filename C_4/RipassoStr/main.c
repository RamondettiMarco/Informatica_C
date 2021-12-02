#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM 100
/*scrivi una funzione che ritorna vero(0) se 2 stringhe sono identiche
oppure un numero che indica quanti caratteri consecutivi sono uguali*/

int stringheUguali(char *str1, char *str2)
{
    int i = 0;
    int n = 0;
    bool uguali = true;

    while(str1[i] != '\0' && str2[i] != '\0' && uguali == true){
        if(str1[i] != str2[i]){
            uguali = false;
        }else{
            n++;
        }
        i++;
    }

    if(str1[i] == '\0' && str2[i] == '\0' && uguali == true){
            uguali = true;
            n = -1;
        }else{
            uguali = false;
        }


    return n;
}

int main()
{
    char str1[DIM];
    char str2[DIM];
    int uguali;

    printf("inserisci una parola o frase: ");
    gets(str1);

    printf("inserisci la parola o frase precedente: ");
    gets(str2);

    uguali = stringheUguali(str1, str2);

    if(uguali == -1){
        printf("le stringhe inserite sono uguali.");
    }else{
        printf("le stringhe sono diverse, e hanno %d caratteri consecutivi uguali", uguali);
    }

    printf("\n");
    system("Pause");
    return 0;
}
