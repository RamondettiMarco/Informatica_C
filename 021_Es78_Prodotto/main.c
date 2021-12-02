#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, y, n;

    p = 1;
    y = 0;

    do {
      printf("inserisci un numero: ");
      scanf("%d", &n);
      fflush(stdin);

      if (n!=0) {
        y= 1;
        p= p * n;
      }

    } while (n!=0);
    if (y=0) {
        printf("nessun numero inserito");
      } else {
        printf("e stato inserito il numero zero, il prodotto e %d", p);
      }

    printf("\n");
    system("Pause");
    return 0;
}
