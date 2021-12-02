#include <stdio.h>
#include <stdlib.h>

void equazioneSecondoGrado(float a, float b, float c, float *x1, float *x2)
{
    float delta;
    delta = (b * b) - (4 * a * c);
    *x1 = (b + sqrt(delta)) / (2 * a);
    *x2 = (b - sqrt(delta)) / (2 * a);
}


int main()
{
    float a, b, c;
    float n1, n2;

    printf("inserisci il coefficiente di secondo grado: ");
    scanf("%f", &a);
    fflush(stdin);

    printf("inserisci il coefficiente di primo grado: ");
    scanf("%f", &b);
    fflush(stdin);

    printf("inserisci il termine noto: ");
    scanf("%f", &c);
    fflush(stdin);

    equazioneSecondoGrado(a, b, c, &n1, &n2);

    printf("le soluzioni dell'equazione sono %f e %f\n", n1, n2);

    printf("\n");
    system("Pause");
    return 0;
}
