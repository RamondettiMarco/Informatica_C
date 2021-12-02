#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100

int contaSpazi(char *str1)
{
    int i = 0;
    int conta = 0;
    while(str1[i] != '\0'){
        if(str1[i] == ' '){
            conta++;
        }
        i++;
    }
    return conta;
}

int main()
{
    char str1[DIM_MAX];
    int spazi;

    printf("inserisci una parola o una frase: ");
    gets(str1);

    spazi = contaSpazi(str1);
    printf("gli spazi sono: %d", spazi);

    printf("\n");
    system("Pause");
    return 0;
}
