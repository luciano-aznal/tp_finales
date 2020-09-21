#include <iostream>
using namespace std;
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <windows.h>

#include <rlutil.h>
using namespace rlutil;
#include "registros.h"

void menu_principal()
{
    system("cls");
    system("color f5");

    linea();
    gotoxy(30,2);
    cout <<  "Menu Principal";
    gotoxy(1,3);
    linea();
    gotoxy(30,5);
    cout << "  Materias";
    gotoxy(30,6);
    cout << "  Alumnos";
    gotoxy(30,7);
    cout << "  Finales";
    gotoxy(30,8);
    cout << "  Reportes";
    gotoxy(30,9);
    cout << "  Configuracion";
    gotoxy(1,11);
    linea();
    gotoxy(1,13);
    cout << "Presione ESC para salir";

    int y = selector_menuP(30,9,'p');
    planner(y);

}


void linea()
{
    for(int i = 0; i < 72; i++)
    {
        cout << (char)205;
    }


}

int selector_menuP(int x, int i, char menu)
{
    bool v = false;
    char k;
    int y = 5;
    do
    {
        gotoxy(x,y);
        cout << (char)26;
        k = getch();
        gotoxy(x,y);
        cout << " ";

        switch(k)
        {
        case 'w':
        case 72:
            if (y>5)
            {
                y--;
            }
            else
            {
                y = i;
            }
            break;
        case 's':
        case 80:
            if(y < i)
            {
                y ++;
            }
            else
            {
                y = 5;
            }
            break;
        case 13:
            return y;
            break;
        case 27:
            if(menu == 'p')
            {
                v = emergente("¿Esta seguro que desea salir?", 23, 6);
                if(v == false)
                {
                    menu_principal();
                }
                else
                {
                    fin();
                }
            }
            else{
                menu_principal();
            }

            break;
        }


    }
    while(v == false);

}

void planner(int m)
{
    switch(m)
    {
    case 5:
        sub_materias();
        break;
    case 6:
        sub_alumnos();
        break;
    case 7:
        sub_finales();
        break;
    case 8:
        sub_reportes();
        break;
    case 9:
        config();
        break;
    }
}
void sub_materias()
{
    system("cls");
    linea();
    gotoxy(30,2);
    cout <<  "Menu Materias";
    gotoxy(1,3);
    linea();
    gotoxy(24,5);
    cout << "  Alta Materia";
    gotoxy(24,6);
    cout << "  Baja Logica Materia";
    gotoxy(24,7);
    cout << "  Modificacion Tipo de Cursada";
    gotoxy(24,8);
    cout << "  Listar Materia Por Codigo";
    gotoxy(24,9);
    cout << "  Listar Todas Las Materia";
    gotoxy(1,11);
    linea();
    gotoxy(1,13);
    cout << "Presione ESC para volver al menu principal";
    selector_menuP(24,9, 'm');
}

void sub_alumnos()
{
    system("cls");
    linea();
    gotoxy(30,2);
    cout <<  "Menu Alumnos";
    gotoxy(1,3);
    linea();
    gotoxy(24,5);
    cout << "  Alta Alumno";
    gotoxy(24,6);
    cout << "  Baja Logica Alumno";
    gotoxy(24,7);
    cout << "  Modificacion E-mail";
    gotoxy(24,8);
    cout << "  Listar Alumno por Legajo";
    gotoxy(24,9);
    cout << "  Listar Todos Los Alumnos";
    gotoxy(1,11);
    linea();
    gotoxy(1,13);
    cout << "Presione ESC para volver al menu principal";
    selector_menuP(24,9, 'a');
}
void sub_finales()
{
    system("cls");
    linea();
    gotoxy(30,2);
    cout <<  "Menu Finales";
    gotoxy(1,3);
    linea();
    gotoxy(24,5);
    cout << "  Alta Final";
    gotoxy(24,6);
    cout << "  Baja Logica Final";
    gotoxy(24,7);
    cout << "  Listar Finales por Materias";
    gotoxy(24,8);
    cout << "  Listar Todos los Finales";
    gotoxy(1,10);
    linea();
    gotoxy(1,12);
    cout << "Presione ESC para volver al menu principal";
    selector_menuP(24,8, 'f');
}

void sub_reportes()
{
    system("cls");
    linea();
    gotoxy(30,2);
    cout <<  "Menu Reportes";
    gotoxy(1,3);
    linea();
    gotoxy(24,5);
    cout << "  Reporte 1";
    gotoxy(24,6);
    cout << "  Reporte 2";
    gotoxy(24,7);
    cout << "  Reporte 3";
    gotoxy(1,9);
    linea();
    gotoxy(1,11);
    cout << "Presione ESC para volver al menu principal";
    selector_menuP(24,7, 'r');
}

void config()
{
    system("cls");
    linea();
    gotoxy(30,2);
    cout <<  "Menu Configuracion";
    gotoxy(1,3);
    linea();
    gotoxy(24,5);
    cout << "  Realizar Backup";
    gotoxy(24,6);
    cout << "  Restaurar Backup";
    gotoxy(24,7);
    cout << "  Cargar datos de inicio";
    gotoxy(1,9);
    linea();
    gotoxy(1,11);
    cout << "Presione ESC para volver al menu principal";
    selector_menuP(24,7, 'c');
}

bool emergente(char alert[], int x, int y)
{


    setColor(LIGHTMAGENTA);
    int T = strlen(alert);
    setlocale(LC_ALL,"spanish");
    gotoxy(x,y+1);
    cout << alert;
    setlocale(LC_ALL,"C");
    int c = T / 2 - 1 + x;
    gotoxy(x, y+2);
    for(int i = 0; i < c; i++)
    {
        cout << " ";
    }
    gotoxy(x + c + 2, y+2);
    for(int i = 0; i < c; i++)
    {
        cout << " ";
    }

    for(int i = 0; i < c; i++)
    {
        cout << " ";
    }
    gotoxy(x + c + 2, y+3);
    for(int i = 0; i < c; i++)
    {
        cout << " ";
    }


    gotoxy(c, y+2);
    cout << "Si";
    gotoxy(c, y+3);
    cout << "No";

    //recuadro

    for(int i = 0; i < T; i ++)
    {
        gotoxy(x + i, y);
        cout << (char)205;
        gotoxy(x + i, y+4);
        cout << (char)205;
    }

    for(int i = y+1; i <= y+3; i++)
    {
        gotoxy(x-1,i);
        cout << (char) 186;
        gotoxy(T + x, i);
        cout << (char) 186;
    }

    //esquinas
    gotoxy(x-1,y);
    cout << (char) 201;
    gotoxy(T + x,y);
    cout << (char) 187;
    gotoxy(x-1,y+4);
    cout << (char) 200;
    gotoxy(T + x,y+4);
    cout << (char) 188;
    notify();
    setColor(MAGENTA);

    char key;
    int si = y +2, no = y +3;

    do
    {
        gotoxy(c - 2, si);
        cout << (char) 26;
        key = getch();
        gotoxy(c - 2, si);
        cout << " ";
        switch(key)
        {
        case 72:
            si = y +2;
            break;
        case 80:
            si = y+3;
            break;
        case 13:
            PlaySound(NULL,NULL,0);
            if(si == y +2)
            {
                return true;
            }
            else
            {
                return false;
            }

            break;
        }

    }
    while(key !=  27);
    return false;

}

void fin()
{
    system("cls");
    exit(0);
}


void notify()
{
    PlaySound(TEXT("notify.wav"), NULL, SND_ASYNC);
}

void bloquear_resize(){
HWND consoleWindow = GetConsoleWindow();
    SetWindowLong(consoleWindow, GWL_STYLE, GetWindowLong(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);
}






