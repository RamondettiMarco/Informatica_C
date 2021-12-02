#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 51

char maiuscolo(char c)
{
    char risultato;
    //controllo se il carattere è maiuscolo
    if(c >= 'a' && c <= 'z'){
        //32 è la distanza dall A alla a
        c = c - 32;
    }else{
        risultato = c;
    }
    return risultato;
}

char minuscolo(char c)
{
    char risultato;
    //controllo se il carattere è maiuscolo
    if(c >= 'A' && c <= 'Z'){
        //32 è la distanza dall A alla a
        c = c + 32;
    }else{
        risultato = c;
    }
    return risultato;
}

void trasformaStr(char *str, char *strC)
{
    int i = 0;
    int contaParole = 1;
    while(str[i] != '\0'){
        if(str[i] == ' '){
            contaParole++;
        }else{
            if(contaParole % 2 == 0){
                //parola in posizione pari
                str[i] = minuscolo(str[i]);
                strC[i] = ' ';
            }else{
                //parola in posizione dispari
                str[i] = maiuscolo(str[i]);
                strC[i] = str[i];
            }
        }
        i++;
        strC[i] = '\0';
    }

}

int main()
{
    char str[DIM_MAX];
    char strC[DIM_MAX];

    printf("inserire la stringa: ");
    gets(str);

    trasformaStr(str, strC);

    printf("la stringa e' diventata: %s \n", str);
    printf("la stringa accorciata e': %s \n", strC);

    printf("\n");
    system("Pause");
    return 0;
}
