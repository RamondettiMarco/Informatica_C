//Ramondetti Marco
//07/01/2021
//Funzione per la lettura di un numero positvo da console
//il messaggio di output è fisso
int leggiNumeroPositivo()
{
    int n;
    do{
        printf("inserisci un numero positivo: ");
        scanf("%d", &n);
        fflush(stdin);
        if (n<0){
            printf("il numero deve essere maggiore di zero");

        }

    }while(n<0);

    return n;

}
