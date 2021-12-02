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

char ePrimo(int n)
{
    int i=2;
    char primo;
    primo = 1;
    while((i < n/2) && (primo == 1)) {
        if (n % i == 0) {
            primo = 0;
        }

        i++;
    }
    return primo;

}
