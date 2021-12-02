#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM_MAX 100

bool stringheUguali(char *str1, char *str2)
{
    int i = 0;
    bool uguali = true;
    while(str1[i] != '\0' && str2[i] != '\0' && uguali == true){
        if(str1[i] != str2[i]){
            uguali = false;
        }
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0' && uguali == true){
    //((str1[i] != '\0' || str2[i] != '\0') && uguali == true)
            uguali = true;
        }else{
            uguali = false;
        }

    return uguali;
}

int main()
{
    char str1[DIM_MAX];
    char str2[DIM_MAX];
    bool uguali;

    printf("inserisci una parola o frase: ");
    gets(str1);

    printf("inserisci la parola o frase precedente: ");
    gets(str2);

    uguali = stringheUguali(str1, str2);
    if(uguali == true){
        printf("le stringhe sono uguali.\n");
    }else{
        printf("le stringhe non sono uguali.\n");
    }

    printf("\n");
    system("Pause");
    return 0;
}
