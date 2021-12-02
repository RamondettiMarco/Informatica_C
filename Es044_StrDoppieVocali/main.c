#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100

void doppieVocali(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while(str1[i] != '\0'){
        str2[j] = str1[i];
        if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u'){
            j++;
            str2[j] = str1[i];
        }
        if(str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U'){
            j++;
            str2[j] = str1[i];
        }

        i++;
        j++;
    }
    str2[j] = '\0';
}

int main()
{
    char str1[DIM_MAX];
    char str2[DIM_MAX];

    printf("inserisci una parola o frase: ");
    gets(str1);

    doppieVocali(str1, str2);

    printf("la parola e' %s", str2);

    printf("\n");
    system("Pause");
    return 0;
}
