#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include<time.h>


//===Color font code===/
#define BLACK   "\x1B[30m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define WHITE   "\x1B[37m"
#define ORANGE  "\x1B[38;2;255;128;0m"
#define ROSE    "\x1B[38;2;255;151;203m"
#define LBLUE   "\x1B[38;2;53;149;240m"
#define LGREEN  "\x1B[38;2;17;245;120m"
#define DGREEN  "\x1B[38;2;0;102;0m"
#define GRAY    "\x1B[38;2;176;174;174m"
#define RESET   "\x1b[0m"
//===Color background code===/
#define BG_BLACK   "\x1B[40m"
#define BG_RED     "\x1B[41m"
#define BG_GREEN   "\x1B[42m"
#define BG_YELLOW  "\x1B[43m"
#define BG_BLUE    "\x1B[44m"
#define BG_MAGENTA "\x1B[45m"
#define BG_CYAN    "\x1B[46m"
#define BG_WHITE   "\x1B[47m"
#define BG_ORANGE  "\x1B[48;2;255;128;0m"
#define BG_LBLUE   "\x1B[48;2;53;149;240m"
#define BG_LGREEN  "\x1B[48;2;17;245;120m"
#define BG_GRAY    "\x1B[48;2;176;174;174m"
#define BG_DGRAY    "\x1B[48;2;47;47;47m"
#define BG_DLGRAY    "\x1B[48;2;70;70;70m"
#define BG_ROSE    "\x1B[48;2;255;151;203m"


// para ir a una posicion

void gotoxy(short x, short y)
{
	HANDLE hConsoleOutput;

    COORD Cursor_an_Pos = { x, y };

    hConsoleOutput = GetStdHandle( STD_OUTPUT_HANDLE );

    SetConsoleCursorPosition( hConsoleOutput, Cursor_an_Pos );
}


void Limpia(int x1, int x2, int y1, int y2)

{

	int x,y;

	for(x = x1; x <= x2; x++)
	{
		for(y = y1; y <= y2; y++)
		{
			gotoxy(x,y);	printf(" ");
		}
	}

}


void paisaje()
{

    //ESTRELLAS
    int posx;
    int posy;

    printf(BLUE "");
    for(int x = 1; x <= 20; x++)
    {
        posx = rand()%120;
        posy = rand()%32;
        gotoxy(posx,posy);  printf("*");    
    }
    printf(RESET "");

    //FIGURA DEL ARBOL

    
    /*
           ┤
         o┤└
         ─┼ o─
        ┌─┼─ ┌
       ─┘─┼───o
     o──o ├─┬──o                
    o┬ ───┼─┴────
          ┴
          */
    printf(DGREEN "");
    // Figura del Arbol 1
    gotoxy(88, 24) ; printf("%c",180);
    gotoxy(87, 25) ; printf("%c",111 );
    gotoxy(88, 25) ; printf("%c",180 );
    gotoxy(89, 25) ; printf("%c",192);
    gotoxy(86, 26) ; printf("%c",196);
    gotoxy(87, 26) ; printf("%c",196);
    gotoxy(88, 26) ; printf("%c",197);
    gotoxy(89, 26) ; printf("");
    gotoxy(90, 26) ; printf("%c",111);
    gotoxy(91, 26) ; printf("%c",196);
    gotoxy(86, 27) ; printf("%c",218);
    gotoxy(87, 27) ; printf("%c",196);
    gotoxy(88, 27) ; printf("%c",197);
    gotoxy(89, 27) ; printf("%c",196);
    gotoxy(90, 27) ; printf(" ");
    gotoxy(91, 27) ; printf("%c",218);
    gotoxy(85, 28) ; printf("%c",196);
    gotoxy(86, 28) ; printf("%c",217);
    gotoxy(87, 28) ; printf("%c",196);
    gotoxy(88, 28) ; printf("%c",197);
    gotoxy(89, 28) ; printf("%c",196);
    gotoxy(90, 28) ; printf("%c",196);
    gotoxy(91, 28) ; printf("%c",196);
    gotoxy(92, 28) ; printf("%c",111);
    gotoxy(83, 29) ; printf("%c",111);
    gotoxy(84, 29) ; printf("%c",196);
    gotoxy(85, 29) ; printf("%c",196);
    gotoxy(85, 29) ; printf("%c",196);
    gotoxy(86, 29) ; printf("%c",111);
    gotoxy(87, 29) ; printf(" ");
    gotoxy(88, 29) ; printf("%c",195);
    gotoxy(89, 29) ; printf("%c",196);
    gotoxy(90, 29) ; printf("%c",194);
    gotoxy(91, 29) ; printf("%c",196);
    gotoxy(92, 29) ; printf("%c",196);
    gotoxy(93, 29) ; printf("%c",111);
    gotoxy(89, 29) ; printf("%c",196);
    gotoxy(82, 30) ; printf("%c",111);
    gotoxy(83, 30) ; printf("%c",194);
    gotoxy(84, 30) ; printf(" ");
    gotoxy(85, 30) ; printf("%c",196);
    gotoxy(86, 30) ; printf("%c",196);
    gotoxy(87, 30) ; printf("%c",196);
    gotoxy(88, 30) ; printf("%c",197);
    gotoxy(89, 30) ; printf("%c",196);
    gotoxy(90, 30) ; printf("%c",193);
    gotoxy(91, 30) ; printf("%c",196);
    gotoxy(92, 30) ; printf("%c",196);
    gotoxy(93, 30) ; printf("%c",196);
    gotoxy(94, 30) ; printf("%c",196);
    gotoxy(88, 31) ; printf("%c",179);

    // Figura del Arbol 2
    gotoxy(88+20, 24) ; printf("%c",180);
    gotoxy(87+20, 25) ; printf("%c",111 );
    gotoxy(88+20, 25) ; printf("%c",180 );
    gotoxy(89+20, 25) ; printf("%c",192);
    gotoxy(86+20, 26) ; printf("%c",196);
    gotoxy(87+20, 26) ; printf("%c",196);
    gotoxy(88+20, 26) ; printf("%c",197);
    gotoxy(89+20, 26) ; printf("");
    gotoxy(90+20, 26) ; printf("%c",111);
    gotoxy(91+20, 26) ; printf("%c",196);
    gotoxy(86+20, 27) ; printf("%c",218);
    gotoxy(87+20, 27) ; printf("%c",196);
    gotoxy(88+20, 27) ; printf("%c",197);
    gotoxy(89+20, 27) ; printf("%c",196);
    gotoxy(90+20, 27) ; printf(" ");
    gotoxy(91+20, 27) ; printf("%c",218);
    gotoxy(85+20, 28) ; printf("%c",196);
    gotoxy(86+20, 28) ; printf("%c",217);
    gotoxy(87+20, 28) ; printf("%c",196);
    gotoxy(88+20, 28) ; printf("%c",197);
    gotoxy(89+20, 28) ; printf("%c",196);
    gotoxy(90+20, 28) ; printf("%c",196);
    gotoxy(91+20, 28) ; printf("%c",196);
    gotoxy(92+20, 28) ; printf("%c",111);
    gotoxy(83+20, 29) ; printf("%c",111);
    gotoxy(84+20, 29) ; printf("%c",196);
    gotoxy(85+20, 29) ; printf("%c",196);
    gotoxy(85+20, 29) ; printf("%c",196);
    gotoxy(86+20, 29) ; printf("%c",111);
    gotoxy(87+20, 29) ; printf(" ");
    gotoxy(88+20, 29) ; printf("%c",195);
    gotoxy(89+20, 29) ; printf("%c",196);
    gotoxy(90+20, 29) ; printf("%c",194);
    gotoxy(91+20, 29) ; printf("%c",196);
    gotoxy(92+20, 29) ; printf("%c",196);
    gotoxy(93+20, 29) ; printf("%c",111);
    gotoxy(89+20, 29) ; printf("%c",196);
    gotoxy(82+20, 30) ; printf("%c",111);
    gotoxy(83+20, 30) ; printf("%c",194);
    gotoxy(84+20, 30) ; printf(" ");
    gotoxy(85+20, 30) ; printf("%c",196);
    gotoxy(86+20, 30) ; printf("%c",196);
    gotoxy(87+20, 30) ; printf("%c",196);
    gotoxy(88+20, 30) ; printf("%c",197);
    gotoxy(89+20, 30) ; printf("%c",196);
    gotoxy(90+20, 30) ; printf("%c",193);
    gotoxy(91+20, 30) ; printf("%c",196);
    gotoxy(92+20, 30) ; printf("%c",196);
    gotoxy(93+20, 30) ; printf("%c",196);
    gotoxy(94+20, 30) ; printf("%c",196);
    gotoxy(88+20, 31) ; printf("%c",179);

    printf(RESET "");
    

    
    // Cesped
    printf(BG_GREEN "");
    Limpia(0, 120, 32, 34);
    printf(RESET "");

    // Figura del muñequito
    gotoxy(75, 28) ; printf("%c",63);
    gotoxy(73, 29) ; printf("%c", 40);
    gotoxy(74, 29) ; printf("%c",111 );
    gotoxy(75, 29) ; printf("%c",95);  
    gotoxy(76, 29) ; printf("%c",111); 
    gotoxy(77, 29) ; printf("%c", 41); 
    gotoxy(74, 30) ; printf("%c",47 );
    gotoxy(75, 30) ; printf("%c", 124);
    gotoxy(76, 30) ; printf("%c", 92);
    gotoxy(74, 31) ; printf("%c", 47);
    gotoxy(76, 31) ; printf("%c", 92);

}



void pintaPared(int inicio, int fin, char col)
{
    int x1 = 11;
    int x2 = 64;
    //colores
    if(col == 'W')
    {
        printf(BG_WHITE "");
        x1--;
        x2++;
    }
    else if(col == 'B')
    {
        printf(BG_LBLUE "");
    }

    for(int x = x1; x <= x2; x++)
    {
        if(x == 28)
        {
            x = 47; 
        }

        for(int y = inicio; y <= fin; y++)
        {
            gotoxy(x,y);    printf(" ");
        }
    }

    printf("" RESET);
}

void edificio()
{
    printf(BG_DGRAY "");
    for (int x = 11; x <= 64; x++)
    {
        //lineas horizontales
        gotoxy(x, 1); printf("%c", 196);
        gotoxy(x, 11); printf("%c", 196);
        gotoxy(x, 21); printf("%c", 196);
        gotoxy(x, 31); printf(BG_GRAY "%c" BG_DGRAY, 196);

        //PARA que dibuje el tubo de detrás
        if(x == 32)
        {
            gotoxy(x, 1); printf(BG_DLGRAY "%c", 196);
            gotoxy(x, 11); printf("%c", 196);
            gotoxy(x, 21); printf("%c" BG_DGRAY, 196);
        }

    }
    printf(RESET "");

    for (int y = 1; y <= 30; y++)
    {
        //lineas verticales
        gotoxy(11, y); printf("%c", 179);
        gotoxy(27, y); printf("%c", 179);
        gotoxy(47, y); printf("%c", 179);
        gotoxy(64   , y); printf("%c", 179);
    }
    
    // esquinas
    gotoxy(11, 1); printf("%c", 218);
    gotoxy(11, 11); printf("%c", 195);
    gotoxy(11, 21); printf("%c", 195);
    gotoxy(11, 31); printf("%c", 192);
    gotoxy(27, 1); printf("%c", 194);
    gotoxy(27, 11); printf("%c", 197);
    gotoxy(27, 21); printf("%c", 197);
    gotoxy(27, 31); printf("%c", 193);
    gotoxy(47, 1); printf("%c", 194);
    gotoxy(47, 11); printf("%c", 197);
    gotoxy(47, 21); printf("%c", 197);
    gotoxy(47, 31); printf("%c", 193);
    gotoxy(64, 1); printf("%c", 191);
    gotoxy(64, 11); printf("%c", 180);
    gotoxy(64, 21); printf("%c", 180);
    gotoxy(64, 31); printf("%c", 217);

    // posicion inicial del ascensor
    printf(BG_GRAY "");
    Limpia(28, 46, 25, 30);

    // linea horizontal
    printf(BG_GRAY "");
    for (int x = 28; x <= 46; x++)
    {
        gotoxy(x, 24); printf("%c", 196);
    }

    // linea vertical
    for(int y = 25; y <= 30; y++)
    {
        gotoxy(28, y); printf("%c", 179);
        gotoxy(37, y); printf("%c", 179);
        gotoxy(46, y); printf("%c", 179);
    }

    //esquinas
    gotoxy(28, 24); printf("%c", 218);
    gotoxy(46, 24); printf("%c", 191);
    gotoxy(37, 24); printf("%c", 194);
    gotoxy(28, 31); printf("%c", 193);
    gotoxy(37, 31); printf("%c", 193);
    gotoxy(46, 31); printf("%c", 193);
    
    printf(RESET "");

    //parte blanca del edificio
    pintaPared(8, 11, 'W');
    pintaPared(18, 21, 'W');
    pintaPared(28, 31, 'W');

    //ventanas
    pintaPared(1, 7, 'B');
    pintaPared(12, 17, 'B');
    pintaPared(22, 27, 'B');

    gotoxy(35, 1);   printf(BG_DGRAY GRAY "%c", 220);
    gotoxy(36, 1);   printf("%c", 220);

    printf("" RESET);

    gotoxy(1, 40);
}

void dibujaCentro(int inicio, int final)
{

    for(int y = inicio; y <= final; y++)
    {
        for (int x = 28; x <= 46; x++)
        {
            gotoxy(x, y);   printf(BG_DGRAY " ");
            //PARA que dibuje el tubo de detrás
            if (x == 32)
            {
                gotoxy(x, y);   printf(BG_DLGRAY " ");
            }
        }
    }
    printf("" RESET);

    //DIBUJO DE LOS ALAMBRES DETRAS DEL ASCENSOR
    
    gotoxy(35, 1);   printf(BG_DGRAY GRAY "%c", 220);
    gotoxy(35, 2);   printf( RED "%c", 179);
    gotoxy(35, 3);   printf("%c", 179);
    gotoxy(35, 4);   printf("%c", 179);
    gotoxy(35, 5);   printf("%c", 192);
    for(int x = 36; x <= 46; x++)
    {
        gotoxy(x, 5);   printf("%c", 196);
    }
    printf("" RESET);
    
    gotoxy(36, 1);   printf(BG_DGRAY GRAY "%c", 220);
    gotoxy(36, 2);   printf(CYAN "%c", 179);
    gotoxy(36, 3);   printf("%c", 179);
    gotoxy(36,4);   printf("%c", 192); 
    for(int x = 37; x <= 46; x++)
    {
        gotoxy(x, 4);   printf("%c", 196);
    }

    printf(RESET "");

}

void ascensor(int VaAlpiso, int pisoActual)
{

    if(VaAlpiso == 1)
    {
        int inicioAltura = 0;
        int finAltura = 31;

        if(pisoActual == 2)
        {
            inicioAltura = 14;
        }
        else if(pisoActual == 3)
        {
            inicioAltura = 4;
        }

        //-------------------------
        int inicio;
        int final;

        if (inicioAltura < finAltura)
        {
            inicio = inicioAltura;
            final = finAltura;
        }
        else
        {   
            inicio = finAltura;
            final = inicioAltura;
        }

        for(int y = inicioAltura; y <= 24; y++)
        {
            dibujaCentro(inicioAltura, finAltura);

            printf(BG_GRAY "");
            Limpia(28, 46, y, y+ 7);

            // linea horizontal
            for (int x = 28; x <= 46; x++)
            {
                gotoxy(x, y); printf("%c", 196);
            }
            // linea vertical
            for(int y1 = y+1; y1 <= y+7; y1++)
            {
                gotoxy(28, y1); printf("%c", 179);
                gotoxy(46, y1); printf("%c", 179);
                // LINEA DEL CENTRO
                gotoxy(37, y1); printf("%c", 179);
            }
            //esquinas
            //esquina sup e inf del centro
            gotoxy(37, y); printf("%c", 194);
            gotoxy(28, y); printf("%c", 218);
            gotoxy(46, y); printf("%c", 191);

           
            Sleep(200); 
            printf(RESET "");
        }
        printf(BG_DGRAY "");
        for(int x = 28; x <= 46; x++)
        {
            gotoxy(x, 11);   printf("%c", 196);
            gotoxy(x, 21);   printf("%c", 196);
            gotoxy(x, 31);   printf(BG_GRAY "%c" BG_DGRAY, 196);

            //PARA que dibuje el tubo de detrás
            if(x == 32)
            {
                gotoxy(x, 21);   printf(BG_DLGRAY "%c", 196);
                gotoxy(x, 11);   printf("%c" BG_DGRAY , 196);

            }
        }
        printf(BG_GRAY "");
        gotoxy(37, 31); printf("%c", 193);
        gotoxy(28, 31); printf("%c", 193);
        gotoxy(46, 31); printf("%c", 193);

        printf(RESET"");

    }

    else if(VaAlpiso == 2)
    {
        int inicioAltura = 0;
        int finAltura = 14;

        // desde el piso 2 hasta el piso 1
        if(pisoActual == 1)
        {
            inicioAltura = 24;

            //-------------------------
            int inicio;
            int final;

            if (inicioAltura < finAltura)
            {
                inicio = inicioAltura;
                final = finAltura + 7;
            }
            else
            {   
                inicio = finAltura;
                final = inicioAltura + 7;
            }

            for(int y = inicioAltura; y >= 14; y--)
                {
                    dibujaCentro(inicio, final);
                    printf(BG_GRAY "");
                    Limpia(28, 46, y, y+ 7);
                    
                    // linea horizontal
                    for (int x = 28; x <= 46; x++)
                    {
                        gotoxy(x, y); printf("%c", 196);
                    }
                    // linea vertical
                    for(int y1 = y+1; y1 <= y+7; y1++)
                    {
                        gotoxy(28, y1); printf("%c", 179);
                        gotoxy(46, y1); printf("%c", 179);
                        gotoxy(37, y1); printf("%c", 179);
                    }
                    //esquinas
                    gotoxy(37, y); printf("%c", 194);
                    gotoxy(28, y); printf("%c", 218);
                    gotoxy(46, y); printf("%c", 191);
                    
                    Sleep(200);
                }
        }

        // desde el piso 3 hasta el piso 2
        else if(pisoActual == 3)
        {
            inicioAltura = 4;
            int finAltura = 14;

            int inicio;
            int final;

            if (inicioAltura < finAltura)
            {
                inicio = inicioAltura;
                final = finAltura + 7;
            }
            else
            {   
                inicio = finAltura;
                final = inicioAltura + 7;
            }
            
            for(int y = inicioAltura; y <= 14; y++)
                {
                    dibujaCentro(inicio, final);
                    printf(BG_GRAY "");
                    Limpia(28, 46, y, y+ 7);
                    
                    // linea horizontal
                    for (int x = 28; x <= 46; x++)
                    {
                        gotoxy(x, y); printf("%c", 196);
                    }
                    // linea vertical
                    for(int y1 = y+1; y1 <= y+7; y1++)
                    {
                        gotoxy(28, y1); printf("%c", 179);
                        gotoxy(46, y1); printf("%c", 179);
                        // Linea del centro
                        gotoxy(37, y1); printf("%c", 179);
                    }
                    //esquinas
                    gotoxy(37, y); printf("%c", 194);
                    gotoxy(28, y); printf("%c", 218);
                    gotoxy(46, y); printf("%c", 191);
                    
                    Sleep(200);
                    
                }
        }

        printf(BG_DGRAY "");
        for(int x1 = 28; x1 <= 46; x1++)
        {
            gotoxy(x1, 11);   printf("%c", 196);
            gotoxy(x1, 21);   printf(BG_GRAY "%c" BG_DGRAY, 196);
            gotoxy(x1, 31);   printf("%c", 196);

            //PARA que dibuje el tubo de detrás
            if(x1 == 32)
            {
                gotoxy(x1, 11);   printf(BG_DLGRAY "%c", 196);
                gotoxy(x1, 31);   printf("%c" BG_DGRAY, 196);

            }
        }
        gotoxy(37, 21); printf(BG_GRAY"%c", 193);
        gotoxy(28, 21); printf("%c", 193);
        gotoxy(46, 21); printf("%c", 193);
        printf(RESET"");
    }
    // -------------------------

    else if(VaAlpiso == 3)
    {   int inicio;
        int final;
        int finAltura = 31;

        int inicioAltura = 0;
        if(pisoActual == 1)
        {
            inicioAltura = 24;

            inicio = inicioAltura - 20;
            final = finAltura;
        }
        else if(pisoActual == 2)
        {
            inicioAltura = 14;

            inicio = 4;
            final = 21;
        }


        for(int y = inicioAltura; y >= 4; y--)
        {
            dibujaCentro(inicio, final);
            printf(BG_GRAY "");
            Limpia(28, 46, y, y+ 7);

            // linea horizontal
            for (int x = 28; x <= 46; x++)
            {
                gotoxy(x, y); printf("%c", 196);
            }
            // linea vertical
            for(int y1 = y+1; y1 <= y+7; y1++)
            {
                gotoxy(28, y1); printf("%c", 179);
                gotoxy(37, y1); printf("%c", 179);
                gotoxy(46, y1); printf("%c", 179);
            }
            //esquinas
            gotoxy(37, y); printf("%c", 194);
            gotoxy(28, y); printf("%c", 218);
            gotoxy(46, y); printf("%c", 191);
            
            Sleep(200);
        }

        printf(BG_DGRAY "");
        for(int x1 = 28; x1 <= 46; x1++)
        {
            gotoxy(x1, 11);   printf(BG_GRAY "%c" BG_DGRAY, 196);
            gotoxy(x1, 21);   printf("%c", 196);
            gotoxy(x1, 31);   printf("%c", 196);

            //PARA que dibuje el tubo de detrás
            if(x1 == 32)
            {
                gotoxy(x1, 21);   printf(BG_DLGRAY "%c", 196);
                gotoxy(x1, 31);   printf("%c" BG_DGRAY, 196);
            }
        }

        gotoxy(28, 11); printf(BG_GRAY "%c", 193);
        gotoxy(37, 11); printf("%c", 193);
        gotoxy(46, 11); printf("%c", 193);
        printf(RESET"");

    }
    
}


int main()
{
    int piso = 1;
    int pisoActual = 1;
    bool primera = true;

    do{

        // system("cls");

        if(primera)
        {   
            system("cls");
            paisaje();
            dibujaCentro(1, 31);
            edificio();
        }

        do
        {
            Limpia(75,100,13,14);
            gotoxy(75,8); printf("A que piso desea ir?: ");
            gotoxy(75,9); printf("1. Piso 1");
            gotoxy(75,10); printf("2. Piso 2");
            gotoxy(75,11); printf("3. Piso 3");
            gotoxy(75,12); printf("0. Salir");
            gotoxy(75,13); printf("Ingrese una opcion: ");

            scanf("%d", &piso);
            
            if (piso < 0 || piso > 3)
            {
                gotoxy(75,8); printf("Error, el piso debe estar entre 1 y 3");
                getch();
            }

        } while (piso < 0 || piso > 3);
        
        if(piso != pisoActual)
        {
            // edificio();
            ascensor(piso, pisoActual);
            pisoActual = piso;
            primera = false;
        }

        else
        {
            gotoxy(75,8); printf("Error - Ya se encuentra en el piso %i", pisoActual);
            getch();
            Limpia(75,105,8,8);
        }
        // getch();
    } while(piso != 0);

    return 0;
}

/*



             


196 ─
218 ┌
179 │
191 ┐
192 └
217 ┘
194 ┬
193 ┴
180 ┤
195 ├
197 ┼



─┤
          ┤
         o┤└
         ─┼ o─
        ┌─┼─ ┌
       ─┘─┼───o
     o──o ├─┬──o                
    o┬ ───┼─┴────
          ┴

  ┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───
  ┴───┴───┴─  ──┴───┴───┴───┴───┴───┴───┴───┴───┴

    11                                                   
    ┌────────────────┬──────────────────┬────────────────┐ 1
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    ├────────────────┼──────────────────┼────────────────┤11 
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │ 
    ├────────────────┼──────────────────┼────────────────┤ 22  
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │    
    │                │                  │                │        
    │                │┌────────────────┐│                │    
    │                ││                ││                │    
    │                ││                ││                │    
    │                ││                ││                │    
    │                ││                ││                │    
    │                ││                ││                │    
    │                ││                ││                │    
    │                ││                ││                │    
    └────────────────┴┴────────────────┴┴────────────────┘ 33

٩(-̮̮̃-̃)۶

-(°_o)/¯ 

٩(͡๏̯͡๏)۶ 
 
٩͡[๏̯͡๏]۶

٩(●̮̮̃•̃)۶ 

͡๏_͡๏

*/
