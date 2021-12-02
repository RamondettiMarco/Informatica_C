#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int contaParole(char *str)
{
    int conta = 0;
    bool spazio = true;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == ' '){
            spazio = true;
        }else if(spazi == true){
            conta++;
            spazio = false
        }
        i++;
    }
    return conta;
}

int main()
{
    printf("\n");
    system("Pause");
    return 0;
}
