#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100

int contaParole(char *str1)
{
    int i = 0;
    int j = 1;
    while(str1[i] != '\0'){
        if(str1[i] != ' ' && str1[i+1] == ' ' && str1[i+2] != ' '){
            j++;
        }
        i++;
    }

    return j;
}

void rimuoviSpazi(char *str1, char *str2)
{
    int i = 1;
    int j = 0;
    while(str1[i] != '\0'){
        if(str1[i] != ' '){
           str2[j] = str1[i];
           j++;
        }
        if(str1[i] == ' ' && str1[i-1] != ' '){
            str2[j] = str1[i];
            j++;
        }

        i++;
    }
    str2[j] = '\0';
}

int main()
{
    char str1[DIM_MAX];
    char str2[DIM_MAX];
    int parole = 0;

    printf("inserisci una parola o frase: ");
    gets(str1);

    rimuoviSpazi(str1, str2);

    printf("la parola e' %s", str2);

    printf("\n");

    parole = contaParole(str1);

    printf("le parole sono %d \n", parole);

    system("Pause");
    return 0;
}
