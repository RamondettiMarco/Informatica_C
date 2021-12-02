#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utility.h"

/*void muoviPersonaggio(short y)
{
    short x;
    //setTextColor();

    gotoxy(0, y);
    printf("~");
    delay(100);

    for(x = 1; x < 120; x++){
        clrscr();
        gotoxy(x-1, y);
        printf(" ");

        gotoxy(x, y);
        printf("~");
        delay(100);

    }
}
*/
void cornice()
{
    short x;
    short y;
    for(x = 0; x < 120; x++){
        for(y = 0; y < 40; y++){
            if(y == 0 || y == 38){
                gotoxy(x, y);
                putchar('-');

            }
            if(x == 0 || x == 119){
                gotoxy(x, y);
                putchar('|');
            }
        }
    }
}

void haiVinto()
{
    short x;
    short y;

    clrscr();
    for(x = 0; x < 120; x+=12){
        for(y = 0; y < 40; y++){
            gotoxy(x, y);
            printf("HAI VINTO!!!");
        }
    }
}

void haiPerso()
{
    short x;
    short y;

    clrscr();
    for(x = 0; x < 120; x+=12){
        for(y = 0; y < 40; y++){
            gotoxy(x, y);
            printf("HAI PERSO!!!");
        }
    }
}

void oggettiCasuali(short *x1, short *y1)
{
    rand();

    *x1 = rand()%118+1;
    *y1 = rand()%38+1;
    gotoxy(*x1, *y1);
    putchar('*');

}

int muoviPersonaggioInterattivo(short y)
{
    short x = 1;
    bool esci = false;
    char tasto;
    short x1;
    short y1;
    int punti = 0;

    oggettiCasuali(&x1, &y1);

    while(esci == false && punti != 100){
        if(kbhit()){
            tasto = getch();
            switch(tasto){
                case'q':
                    esci = true;
                    break;
                case 'a':
                    if(x > 1){
                        x--;
                    }else{
                        haiPerso();
                        esci = true;
                    }
                    break;
                case 'd':
                    if(x < 118){
                        x++;
                    }else{
                        haiPerso();
                        esci = true;
                    }
                    break;
                case 'w':
                    if(y > 1){
                        y--;
                    }else{
                        haiPerso();
                        esci = true;
                    }
                    break;
                case 's':
                    if(y < 37){
                        y++;
                    }else{
                        haiPerso();
                        esci = true;
                    }
                    break;
            }
        }
        gotoxy(x, y);
        putchar('@');
        delay(50);
        if(x1 != x || y1 != y){
            gotoxy(x, y);
            putchar(' ');
        }
        if(x1 == x && y1 == y){
            oggettiCasuali(&x1, &y1);
            punti++;

        }
        gotoxy(2, 39); //in basso a sinistra fuori dalla cornice
        printf("PUNTI: %d", punti);
    }
    if(punti == 100){
        haiVinto();
    }
    return punti;
}

int main()
{
    srand(time(0));
    impostaSchermo();
    cursor_hide();
    short y = 1;
    int punti;

    cornice();

    punti = muoviPersonaggioInterattivo(y);

    clrscr();
    gotoxy(20, 60);
    printf("PUNTI: %d", punti);

    printf("\n");
    system("Pause");
    return 0;
}
