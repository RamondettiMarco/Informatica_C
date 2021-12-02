#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100

void invertiStr2(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while(str1[i] != '\0'){
        i++;
    }
    for(j = 0; j < i; j++){
        str2[j] = str1[i-1-j];
    }
    str2[i] = '\0';

}

void invertiStr1(char *str1)
{
    int i = 0;
    int j = 0;
    char a;
    while(str1[i] != '\0'){
        i++;
    }
    for(j = 0; j < i/2; j++){
        a = str1[j];
        str1[j] = str1[i-1-j];
        str1[i-1-j] = a;
    }
    str1[i] = '\0';
}

int main()
{
    char str1[DIM_MAX];
    //char str2[DIM_MAX];

    printf("inserisci una frase o una parola: ");
    gets(str1);

    //invertiStr2(str1, str2);

    //printf("la stringa invertita e': %s", str2);

    invertiStr1(str1);

    printf("la stringa invertita e': %s", str1);

    printf("\n");
    system("Pause");
    return 0;
}
