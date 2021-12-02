#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100
#include <stdbool.h>

bool eVocale(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void rimuoviVocali(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while(str1[i] != '\0'){
        if(eVocale(str1[i]) == false){
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

    printf("inserisci una parola o frase: ");
    gets(str1);

    rimuoviVocali(str1, str2);

    printf("la parola e' %s", str2);

    printf("\n");
    system("Pause");
    return 0;
}
