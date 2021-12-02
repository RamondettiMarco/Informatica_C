#define DIM_MAX 100
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

int  leggiArray(int *vet)
{
    int n;
    int i;

    do{
         n = leggiNumeroPositivo();
    }while(n < 0 || n > DIM_MAX);

    for(i = 0; i < n; i++){
        printf("iserisci un numero: ");
        scanf("%d", &vet[i]);
    }


    return n;
}


void stampaArray(int n, int *vet)
{
    int i;

    for(i = 0; i < n; i++){
        printf("%d\t", vet[i]);
    }
}

void invertiArray(int n, int *vet)
{
    int i;
    int a;
    for(i = 0; i < n/2; i++){
        a = vet[i];
        vet[i] = vet[n-1-i];
        vet[n-1-i] = a;
    }
}

void arrayContrario(int n, int *v1, int *v2)
{
    int i, m=0;
    for(i = n-1; i >= 0; i--){
        v2[i] = v1[m];
        m++;
    }
}

int controllaArray(int *vet, int n, int x)
{
    int cont=0;
    int i;
    for(i = 0; i < n; i++){
        vet[i] = leggiNumeroPositivo();
        if(vet[i] == x){
            cont++;
        }
    }
    return cont;
}

int ugualiInPosUguale(int *vetA, int *vetB, int *vetC, int nA, int nB)
{
    int i, dimC = 0;
    int dimMin;
    if(nA<nB){
        dimMin = nA;
    }else{
        dimMin = nB;
    }
    for(i = 0; i < dimMin; i++){
        if(vetA[i] == vetB[i]){
            vetC[dimC] = vetA[i];
            dimC++;
        }
    }
    return dimC;
}

/*bool tuttiUguali(int dim, int *vet)
{
    bool uguali = true;
    int i = 0;
    while(uguali == true && i < dim-1){
        if(vet[i] != vet[i+1]){
            uguali = false;
        }

        i++;
    }
    return uguali;
}
*/
void calcolaFattoriale(int *vet, int n)
{
    int i;
    vet[0] = 1;

    for (i = 1; i <= n; i++) {
            vet[i] = vet[i-1] * i;
        }

}

/*bool trovaXseq(int n, int *vet, int x)
{
    int i = 0;
    bool a = false;
    while(a ==false &&  i < n){
        if(x == vet[i]){
            a = true;
        }
        i++;
    }
    return a;
}

void arrayOrdinatoCrescente(int v[], int dim){
    int i=0, j=0, varscambio=0;
    for(i=0; i<dim; i++){
        j=i;
        while(j>0 && v[j-1]>v[j]){
            varscambio=v[j];
            v[j]=v[j-1];
            v[j-1]=varscambio;
            j--;
        }
    }
}
*/
int trovaPosXseq(int n, int *vet, int x)
{
    int i = 0;
    int pos = -1;
    while(pos == -1 &&  i < n){
        if(x == vet[i]){
            pos = i;
        }
        i++;
    }
    return pos;
}
