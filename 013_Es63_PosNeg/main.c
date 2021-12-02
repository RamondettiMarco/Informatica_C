#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeri, num, positivi, i;

    printf("inserisci quanti numeri vuoi inserire in sequenza: ");
    scanf("%d", &numeri);
    fflush(stdin);

    if (numeri > 0) {
        positivi = 0;
        for (i=1; i<=numeri; i++) {
        printf("inserisci un numero:");
        scanf("%d", &num);
        fflush(stdin);

        if (num >= 0) {
           positivi= positivi + 1;
        }
      }
      printf("hai introdotto %d numeri positivi\n", positivi);
      printf("hai introdotto %d numeri negativi\n", numeri-positivi);

    } else {
        printf("il numero deve essere positivo");
    }

    printf("\n");
    system("Pause");
    return 0;
}
