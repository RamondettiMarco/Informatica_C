/*
|===========================================================================================|
|                                                                                           |
|                                   Libreria UTILITY                                        |
|                                                                                           |
|                                       Ver. 2.1                                            |
|                                                                                           |
|                              Ult.Agg. 06 settembre 2019                                   |
|                                                                                           |
|  Elenco funzioni:                                                                         |
|  - void impostaSchermo();     imposta le dimensioni della console a 120x40
|  - clrscr():             pulisce lo schermo di lavoro;                                    |
|  - gotoxy(x,y):          posiziona il cursore in una specifica posizione sullo schermo X colonna;   |
|  - setTextColor(Colore): modifica colore del testo (256 colori);                          |
|  - colore getTextColor():restituisce il colore corrente del testo                         |
|  - delay(MilliSecondi):  crea un attesa di tot millisecondi;                              |
|  - cursor_hide():        nasconde il cursore;                                             |
|  - cursor_show():        rende visibile il cursore;                                       |
|                                                                                           |
|===========================================================================================|
*/

#include <time.h>
#include <windows.h>
#include <wincon.h>
#include <stdio.h>
#include <conio.h>

void impostaSchermo();      //imposta le dimensioni della console a 120x40
void clrscr();                           //pulisce lo schermo di lavoro;
int gotoxy(short x, short y);            //posiziona il cursore in una specifica posizione sullo schermo;
void setTextColor(unsigned short Colore);   //modifica colore del testo (256 colori);
unsigned short getTextColor();           //restituisce il colore corrente del testo
void delay(int MilliSecondi);            //crea un attesa di tot millisecondi;
void cursor_hide();                      //nasconde il cursore;
void cursor_show();                      //rende visibile il cursore;

 //imposta le dimensioni della console a 120x40
void impostaSchermo(){
    system("mode con: cols=120 lines=40");
}

//pulisce lo schermo di lavoro;
void clrscr() {
     system("cls");
}

//posiziona il cursore in una specifica posizione sullo schermo;
int gotoxy(short X, short Y){
	 HANDLE hStdout;
	 CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	 hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	 if (! GetConsoleScreenBufferInfo(hStdout, &csbiInfo))    {
		 MessageBox(NULL, "GetConsoleScreenBufferInfo", "Console Error", MB_OK);
		 return 1;
    }
	 csbiInfo.dwCursorPosition.X = X;
	 csbiInfo.dwCursorPosition.Y = Y;
	 if (! SetConsoleCursorPosition(hStdout, csbiInfo.dwCursorPosition))	    {
		 MessageBox(NULL, "SetConsoleCursorPosition", "Console Error", MB_OK);
		 return 1;
    }
     return 0;
}

//modifica colore del testo (256 colori);
void setTextColor(unsigned short color)    {
     HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hCon,color);
}

//restituisce il colore corrente del testo
unsigned short getTextColor(){
    unsigned short wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
      wColor = (csbi.wAttributes);
    return wColor;
}

//crea un attesa di tot millisecondi;
void delay( int MilliSecondi)    {
     double Secondi = 0;
     if (MilliSecondi > 0)
        Secondi = MilliSecondi / 1000.0;
     clock_t endwait;
     endwait = clock () + Secondi * CLOCKS_PER_SEC;
     while (clock() < endwait) {}
}



/*funzione che nasconde il cursore*/
void cursor_hide(){
    HANDLE hOut;
    CONSOLE_CURSOR_INFO ConCurInf;

    hOut=GetStdHandle(STD_OUTPUT_HANDLE);

    ConCurInf.dwSize=10; //imposto la dimensione del cursore alla dimensione standart di 10(valore massimo 100)
    ConCurInf.bVisible=FALSE;

    SetConsoleCursorInfo(hOut, &ConCurInf);
}

/*funzione che rende visibile un cursore di dimensione standart 10 */
void cursor_show(){
    HANDLE hOut;
    CONSOLE_CURSOR_INFO ConCurInf;
    hOut=GetStdHandle(STD_OUTPUT_HANDLE);

    ConCurInf.dwSize=10; //imposto la dimensione del cursore alla dimensione standart di 10(valore massimo 100)
    ConCurInf.bVisible=TRUE;

    SetConsoleCursorInfo(hOut, &ConCurInf);
}
