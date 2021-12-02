#include <stdio.h>
#include <stdlib.h>

/*Progetta una struttura per definire le figure geometriche utilizzando la definizione del loro tipo
(triangolo, rettangolo, quadrato, cerchio).
Quindi scrivi un programma in grado di calcolare l'area e il perimetro di tali figure.*/

typedef struct
{
    float cateto1;
    float cateto2;
    float ipotenusa;
    float base;
    float altezza;

}Triangolo;

typedef struct
{
    float base;
    float altezza;

}Rettangolo;

typedef struct
{
    float lato;

}Quadrato;

typedef struct
{
    float raggio;

}Cerchio;

Quadrato inserisciQ()
{
    Quadrato q;

    printf("inserisci il lato del quadrato: \n");
    scanf("%f", &q.lato);

    return q;
}

Triangolo inserisciT()
{
    Triangolo t;

    printf("inserisci il primo cateto del triangolo: \n");
    scanf("%f", &t.cateto1);

    printf("inserisci il secondo cateto del triangolo: \n");
    scanf("%f", &t.cateto2);

    printf("inserisci l'ipotenusa del triangolo: \n");
    scanf("%f", &t.ipotenusa);

    printf("inserisci la base del triangolo: \n");
    scanf("%f", &t.base);

    printf("inserisci l'altezza del triangolo: \n");
    scanf("%f", &t.altezza);

    return t;
}

Rettangolo inserisciR()
{
    Rettangolo r;

    printf("inserisci la base del rettangolo: \n");
    scanf("%f", &r.base);

    printf("inserisci l'altezza del rettangolo: \n");
    scanf("%f", &r.altezza);

    return r;
}

Cerchio inserisciC()
{
    Cerchio c;

    printf("inserisci il raggio del cerchio: \n");
    scanf("%f", &c.raggio);

    return c;
}

float areaPerimetroQ(Quadrato q, float *perimetroQ)
{
    float area;

    *perimetroQ = q.lato * 4;
    area = q.lato * q.lato;

    return area;
}

float areaPerimetroT(Triangolo t, float *perimetroT)
{
    float area;

    *perimetroT = t.cateto1 + t.cateto2 + t.ipotenusa;
    area = (t.base * t.altezza) / 2;

    return area;
}

float areaPerimetroR(Rettangolo r, float *perimetroR)
{
    float area;

    *perimetroR = r.altezza + r.altezza + r.base + r.base;
    area = r.base * r.altezza;

    return area;
}

float areaPerimetroC(Cerchio c, float *perimetroC)
{
    float area;

    *perimetroC = 2 * 3.14 * c.raggio;
    area = c.raggio * c.raggio * 3.14;

    return area;
}

int main()
{
    Quadrato q;
    Triangolo t;
    Rettangolo r;
    Cerchio c;
    float areaC;
    float areaQ;
    float areaT;
    float areaR;
    float perimetroQ;
    float perimetroR;
    float perimetroC;
    float perimetroT;


    q = inserisciQ();
    t = inserisciT();
    r = inserisciR();
    c = inserisciC();

    areaC = areaPerimetroC(c, &perimetroC);
    areaQ = areaPerimetroQ(q, &perimetroQ);
    areaR = areaPerimetroR(r, &perimetroR);
    areaT = areaPerimetroT(t, &perimetroT);

    printf("Cerchio:\n Area: %f \t Perimetro: %f\n", areaC, perimetroC);
    printf("Quadrato:\n Area: %f \t Perimetro: %f\n", areaQ, perimetroQ);
    printf("Triangolo:\n Area: %f \t Perimetro: %f\n", areaT, perimetroT);
    printf("Rettangolo:\n Area: %f \t Perimetro: %f\n", areaR, perimetroR);

    printf("\n");
    system("Pause");
    return 0;
}
