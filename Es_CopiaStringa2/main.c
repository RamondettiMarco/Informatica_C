#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100

void copiaStringaSpazi(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while(str1[j] != '\0'){
        str2[i] = str1[j];
        str2[i+1] = ' ';
        i+=2;
        j++;
    }
    str2[i] = '\0';
}

int main()
{
    char str1[DIM_MAX];
    char str2[DIM_MAX];

    printf("inserisci una parola o una frase: ");
    gets(str1);

    copiaStringaSpazi(str1, str2);
    printf("la stringa copiata e: %s", str2);

    printf("\n");
    system("Pause");
    return 0;
}
