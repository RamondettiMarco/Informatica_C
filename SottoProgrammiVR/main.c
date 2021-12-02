#include <stdio.h>
#include <stdlib.h>

void scambia(int *x, int *y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int a, b;

    printf("Introduci il primo numero: ");
    scanf("%d", &a);
    fflush(stdin);

    printf("Introduci il secondo numero: ");
    scanf("%d", &b);
    fflush(stdin);

    printf("il valore di a e' %d\n", a);
    printf("il valore di b e' %d\n", b);

    scambia(&a, &b);
    printf("\n");

    printf("il valore di a e' %d\n", a);
    printf("il valore di b e' %d\n", b);

    printf("\n");
    system("Pause");
    return 0;
}
