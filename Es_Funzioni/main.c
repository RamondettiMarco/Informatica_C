#include <stdio.h>
#include <stdlib.h>

int somma (int a, int b)    // Passaggio di parametri per valore
{
    a = a + 1;
    return (a + b);
}

int main()
{
    int x = 1;
    int y =  2;
    int z = somma(x, y);

    printf("\n");
    system("Pause");
    return 0;
}
