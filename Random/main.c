#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    srand(time(0));
    rand();

    for (i=0;i<10;i++) {
        printf("%d\n", rand()%101);
    }

    printf("\n");
    system("Pause");
    return 0;
}
