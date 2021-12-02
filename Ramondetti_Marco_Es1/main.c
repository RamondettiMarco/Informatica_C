#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define DIM_MAX 31

void codiceFiscale(char *str, char *strF)
{
    int i = 0;
    int j = 0;
    int y = 0;
    bool finito = false;
    bool finito2 = false;
    while(str[i] != '\0' && finito == false){
        if(str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
            strF[j] = str[i];
            j++;
        }
        if(j > 2){
            finito = true;
        }
        i++;
    }
    if(j < 2){

        while(str[y] != '\0' && finito2 == false){
            if(str[y] == 'A' || str[y] == 'E' || str[y] == 'I' || str[y] == 'O' || str[y] == 'U'){
                strF[j] = str[y];
                j++;
            }
            if(j > 2){
                finito2 = true;
            }
            y++;
        }

    }
    if(i < 3){
        strF[2] = 'X';
    }
    strF[3] = '\0';
}

int main()
{
    char str[DIM_MAX];  //input
    char strF[DIM_MAX]; //output

    printf("inserisci il cognome: \n");
    gets(str);
    strupr(str);

    codiceFiscale(str, strF);

    printf("le prime 3 lettere del tuo codice fiscale sono: %s", strF);


    printf("\n");
    system("Pause");
    return 0;
}
