#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM 100

typedef struct   // struct=celle di memoria consecutive, che possono avere tipi diversi
{
    int giorno;
    int mese;
    int anno;

} Data;

typedef struct   // struct=celle di memoria consecutive, che possono avere tipi diversi
{
    float votoPreso;
    float dataVoto;

} Voto;


typedef struct   // struct=celle di memoria consecutive, che possono avere tipi diversi
{
    char nome[DIM];
    char cognome[DIM];
    Data dataNascita;
    Voto votiPresi[2];

} Persona;

Voto leggiVoto()
{
    Voto voto[2];
    printf("inserisci il primo voto: \n");
    scanf("%d", &voto[1]);
    printf("inserisci il secondo voto: \n");
    scanf("%d", &voto[2]);
}

bool dataValida(Data data)
{
    bool valida = true;
    if(data.mese < 1 || data.mese > 12){
        valida = false;
    }else if(data.giorno < 1){// il mese va bene
        valida = false;
    }else{
        if(data.mese == 2 ){
            //controllo se è bisestile
            if(data.giorno > 28){
                valida = false;
            }
        }else if(data.mese == 4 || data.mese == 6 || data.mese == 9 || data.mese == 11){
            if(data.giorno > 30){
                valida = false;
            }else if(data.giorno > 31){
                valida = false;
            }
        }
    }
    return valida;
}

Data leggiData()
{
    Data data;
    do{
        printf("inserisci il giorno: ");
        scanf("%d", &data.giorno);
        printf("inserisci il mese: ");
        scanf("%d", &data.mese);
        printf("inserisci il anno: ");
        scanf("%d", &data.anno);
    }while(dataValida(data) == false);
    return data;
}

Persona leggiPersona()
{
    Persona persona;
    printf("inserisci il nome: \n");
    gets(persona.nome);
    printf("inserisci il cognome: \n");
    gets(persona.cognome);
    printf("inserisci la data di nascita\n");
    persona.dataNascita = leggiData();
    printf("inserisci i voti\n");
    leggiVoto(persona.votiPresi);

    return persona;
}

void stampaData(Data data)
{
    printf("%d/%d/%d", data.giorno, data.mese, data.anno);
}

void stampaPersona(Persona persona)
{
    printf("Nome: %s\n", persona.nome);
    printf("cognome: %d\n", persona.cognome);
    printf("data di nascita: %d\n");
    stampaData(persona.dataNascita);
    // stampa voto
}

int main()
{
    Persona persona;
    Data data;
    FILE* fIn;
    //persona = leggiPersona();

    fIn = fopen("input.txt", "r");
    if(fIn == NULL){
        printf("errore nell'apertura del file\n");
        return -1;
    }

    while(fscanf(fIn, "%d %d %d %s %s", data.giorno, data.mese, data.anno, persona.nome, persona.cognome) != 0){
        stampaPersona(persona);
    }


    system("Pause");
    return 0;
}
