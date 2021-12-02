#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define DIM_MAX 16
#define DIM_MIN 5

bool risposteCandidatoCorrette(char *r, int l)
{
    bool risultato = true;
    int i;
    int lung;

    lung = strlen(r);

    if(lung != l){
        risultato = false;
    }else{
        for(i = 0; i < lung; i++){
            if(r[i] < 'A' || r[i] > 'E'){
                if(r[i] != 'X'){
                    risultato = false;
                }

            }
        }
    }


    return risultato;
}

bool risposteCorretteErrore(char *r, int l)
{
    bool risultato = false;
    int i;
    int lung;

    lung = strlen(r);

    if(lung != l){
        risultato = true;
    }else{
        for(i = 0; i < lung; i++){
            if(r[i] < 'A' || r[i] > 'E'){
                risultato = true;
            }
        }
    }


    return risultato;
}

int main()
{
    char risposteCorrette[DIM_MAX];
    char risposteCandidato[DIM_MAX];
    int numeroCandidato = 0;
    int maxPunti = 0;
    int maxCandidato = 0;
    int numeroDomande;
    int punti;
    int lunghezzaRisposte;
    int i;

    do{
        printf("inserisci il numero di domande del test: ");
        scanf("%d", &numeroDomande);
        fflush(stdin);
        if(numeroDomande < DIM_MIN || numeroDomande >= DIM_MAX){
            printf("errore\n");
        }
    }while(numeroDomande < DIM_MIN || numeroDomande >= DIM_MAX);

    do{
        printf("introduci la stringa delle risposte corrette: ");
        gets(risposteCorrette);
        strupr(risposteCorrette);
        if(risposteCorretteErrore(risposteCorrette, numeroDomande)){
            printf("errore\n");
        }
    }while(risposteCorretteErrore(risposteCorrette, numeroDomande));

    printf("inserisci le risposte del %d candidato: ", numeroCandidato+1);
    gets(risposteCandidato);
    strupr(risposteCandidato); //trasforma in maiuscolo
    //strlwr(risposteCandidato); trasforma in minuscolo

    while(strcmp(risposteCandidato, "FINE") != 0){ //strcmp restituisce 0 se le due stringhe sono uguali
                                                   //-1 se la stringa di sinistra è alfabeticamente prima di quella a destra
                                                   //+1 o un valore positivo se la prima è alfabeticamente dopo quella a destra
        if(risposteCandidatoCorrette(risposteCandidato, numeroDomande) == true){
            lunghezzaRisposte = strlen(risposteCandidato);
            punti = 0;
            for(i = 0; i < lunghezzaRisposte; i++){
                if(risposteCorrette[i] == risposteCandidato[i]){
                    punti = punti + 5;
                }else if(risposteCandidato[i] == 'X'){
                    punti = punti + 1;
                }
            }
            printf("il candidato %d ha fatto %d punti.\n", numeroCandidato+1, punti);
            if(punti > maxPunti){
                maxPunti = punti;
                maxCandidato = numeroCandidato;
            }
            numeroCandidato++;
        }

        printf("inserisci le risposte del %d candidato: ", numeroCandidato+1);
        gets(risposteCandidato);
        strupr(risposteCandidato);
    }
    printf("il miglior risultato e' stato fatto dal candidato %d con %d punti.\n", maxCandidato+1, maxPunti);

    printf("\n");
    system("Pause");
    return 0;
}
