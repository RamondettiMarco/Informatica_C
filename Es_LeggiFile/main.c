#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 1024
//file, può essere DI TESTO o BINARIO
//TESTO : caratteri BINARIO : sequenza di bit
//indirizzo ASSOLUTO o RELATIVO, noi useremo l'indirizzo relativo
//quando apro più file li chiudo in modo inverso
int main()
{
    /*FILE *fOut; //FILE : tipo
                //fOut : puntatore

    fOut = fopen("FileOut.txt", "w"); //nome file, w:scrittura(sovrascrive) / r:lettura / a:aggiungi in fondo(se c'è già qualcosa)
    if(fOut == NULL){
        printf("non sono riuscito ad aprire il file.");
        return -1;
    }

    fprintf(fOut, "ciao mondo");

    fclose(fOut);
*/

    FILE *fIn;
    char buffer[DIM_MAX];

    fIn = fopen("FileOut.txt", "r");
    if(fIn == NULL){
        printf("non sono riuscito ad aprire il file.");
        return -1;
    }

    while(fgets(buffer, DIM_MAX, fIn) != NULL){
        printf("%s", buffer);
    }

    fclose(fIn);

    printf("\n");
    system("Pause");
    return 0;
}
