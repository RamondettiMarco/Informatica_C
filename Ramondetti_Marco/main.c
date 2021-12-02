#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define DIM 32
#define DIM_MAX 1024

typedef struct
{
    int accessi;
    char nome[DIM];
    char password[DIM];

} Utente;

int leggiFile(Utente *utenti) //leggo da file
{
    FILE* fIn;
    int i = 0;

    fIn = fopen("utenti.dat", "r");

    if(fIn == NULL){
        return -1;
    }
    while(fscanf(fIn, "%d %s %s", &utenti[i].accessi, utenti[i].nome, utenti[i].password) == 3){
        i++;
    }
    fclose(fIn);
    return i;
}

void selectionSort(Utente *utenti, int n, int m){ //ordino in modo decrescente gli "m" utenti
	int i, j, pos;
	Utente minimo;
	for(i = 0; i < m; i++){
		minimo = utenti[i];
		pos = i;
		for(j = i; j < n; j++){
			if(utenti[j].accessi > minimo.accessi){
				minimo = utenti[j];
				pos = j;
			}
		}
		if(i != pos){
            minimo = utenti[i];
            utenti[i] = utenti[pos];
            utenti[pos] = minimo;
		}
	}
}

void stampaUtentiMaggiori(Utente *utenti, int m) //stampo gli "m" utenti(in ordine decrescente) e censuro la password
{
    int i;
    int j;
    int dim = 0;
    char psw[DIM];
    for(i = 0; i < m; i++){
        strcpy(psw, utenti[i].password);
        //nascondiPsw(psw);
        dim = strlen(psw);
        for(j = 1; j < dim-1; j++){
            psw[j] = '*';
        } //nasconde la password tranne il primo e l'ultimo carattere
        printf("%d\n", utenti[i].accessi);
        printf("%s\n", utenti[i].nome);
        printf("%s\n", psw);
        printf("\n");
        dim = 0; //azzero la dimensione perchè la password successiva potrebbe essere più grande
    }
}
/*
void nascondiPsw(char *psw)
{
    int i = 2;
    if(psw[0] == '\0' || psw[1] == '0'){
        return;
    }
    while(psw[i] != '\0'){
        psw[i-1] = '*';
        i++
    }
}
*/
float mediaAccessiPsw(char *psw, Utente *utenti, int n)
{
    int i;
    int div = 0;
    float media = 0;
    bool almenoUno = false; //verifico se ho trovato elementi, per non andare in casi di risultato impossibile della divisoine
    for(i = 0; i < n; i++){
        if(strcmp(utenti[i].password, psw) == 0){
            media = media + utenti[i].accessi;
            div++;
            almenoUno = true;
        }
    }
    if(almenoUno == true){
        media = media / div;
    }else{
        media = -1; //password non trovata
    }

    return media;
}

bool controllaCarattere(Utente *utenti, int n , char c) //fa ritornare un booleano che mi dice se
                                                        //ho trovato almeno un nome che inizia con
                                                        //quel carattere
{
    int i = 0;
    bool trovato = false;
    while(i < n && trovato == false){
        if(utenti[i].nome[0] == c){
            trovato = true;
        }
        i++;
    }
    return trovato;
}

void diminuisciAccessi(Utente *utente) //un singolo utente passato per indirizzo, per modificarlo
{
    if(utente->accessi > 0){
        utente->accessi = utente->accessi - 1; //-> serve per deferenziare
    }
}

int main()
{
    Utente utenti[DIM_MAX];
    int n;
    int m;
    float media;
    char psw[DIM];
    char c;

    n = leggiFile(utenti);
    if(n == -1){
        printf("errore nell'apertura del file.\n");
        return -1;
    }

    do{
        printf("inserisci il numero di utenti da verificare: ");
        scanf("%d", &m);
        fflush(stdin);
        if(m < 1 || m > n){
            printf("numero non valido\n");
        }
    }while(m < 1 || m > n);

    selectionSort(utenti, n, m);

    stampaUtentiMaggiori(utenti, m);

    printf("inserisci la password da verificare: ");
    gets(psw);

    media = mediaAccessiPsw(psw, utenti, n);
    if(media == -1){
        printf("la password non e' valida\n");
    }else{
        printf("la media e' %f\n", media);
    }

    fflush(stdin);
    printf("inserisci un carattere da verificare: \n");
    c = getchar();
    fflush(stdin);
    /*if(c > 96 && c < 123){ //se è minuscolo lo porto maiuscolo(se serve)
        c = c - 32;
    }
    */
    if(controllaCarattere(utenti, n, c) == true){
        printf("esiste almeno un nome che inizia con %c\n", c);
    }else{
        printf("non esistono nomi che iniziano con %c\n", c);
    }

    //ESEMPIO STRUTTURA PASSATA PER INDIRIZZO
    diminuisciAccessi(&utenti[0]);

    printf("\n");
    system("Pause");
    return 0;
}



