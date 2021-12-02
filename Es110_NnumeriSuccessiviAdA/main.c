#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

void numeriSuccessivi(int n, int a)
{
    if(a%2==0){
        for(int i=a+2; i<=a+(n*2); i+=2){
        printf("%d\n", i);
    }
    printf("\n");
    } else{
        for(int i=a+1; i<=a+(n*2); i+=2){
        printf("%d\n", i);
    }
    printf("\n");
    }

}

int main()
{
    int n, a;

    n= leggiNumeroPositivo();
    a= leggiNumeroPositivo();

    numeriSuccessivi(n, a);

    printf("\n");
    system("Pause");
    return 0;
}
