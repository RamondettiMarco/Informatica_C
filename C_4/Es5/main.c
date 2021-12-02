#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/*5. Creare la funzione isTriangolo() che, dati 3 numeri, restituisce true/1 se possono
essere le misure di un triangolo, false/0 altrimenti. Creare un main che testi questa
funzione.*/

/*
a < b+c
b < a+c
c < a+b	a > |b-c|
b > |a-c|
c > |a-b|
*/

bool isTriangolo(int a, int b, int c)
{
    bool triangolo;

    if(a < b+c && b < a+c && c < a+b && a > abs(b-c) && b > abs(a-c) && c > abs(a-b) && a > 0 && b > 0 && c > 0){
        triangolo = true;
    }else{
        triangolo = false;
    }

    return triangolo;
}

int main()
{
    int a, b ,c;
    bool triangolo;

    printf("inserisci il primo lato del triangolo: \n");
    scanf("%d", &a);
    printf("inserisci il secondo lato del triangolo: \n");
    scanf("%d", &b);
    printf("inserisci il terzo lato del triangolo: \n");
    scanf("%d", &c);

    triangolo = isTriangolo(a, b, c);

    if(triangolo == true){
        printf("le misure date possono formare un triangolo. \n");
    }else{
        printf("le misure date NON possono formare un triangolo. \n");
    }

    printf("\n");
    system("Pause");
    return 0;
}
