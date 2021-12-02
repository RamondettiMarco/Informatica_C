#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 100

void mystrcpy(char *str1, char *str2){
    int i = 0;
    while(str1[i] != '\0'){
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}

int main(){

    char stringa1[DIM_MAX];
    char stringa2[DIM_MAX];

    printf("Inserire una parola o una frase: ");
    gets(stringa1);

    mystrcpy(stringa1, stringa2);
    printf("La stringa copiata e: %s", stringa2);

    printf("\n");
    system("Pause");
    return 0;
}
