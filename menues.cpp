#include <iostream>
using namespace std;
#include <cstdlib>
#include <cstdio>
#include <cstring>

#include <rlutil.h>
using namespace rlutil;
#include "registros.h"

void menu_principal(){
    system("cls");

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
    cout << "<< Salir";

    int y = selector_menuP(30,9);
    planner(y);

}


void linea(){
    for(int i = 0; i < 72; i++){
        cout << (char)205;
    }


}

int selector_menuP(int x, int i){
    bool v = true;
    char k;
    int y = 5;
    do {
        gotoxy(x,y);
        cout << (char)26;
        k = getch();
        gotoxy(x,y);
        cout << " ";

    switch(k){
    case 'w':
    case 72:
        if (y>5){
            y--;
        }
        else {
            y = i;
        }
        break;
    case 's':
    case 80:
        if(y < i){
            y ++;
        }
        else {
            y = 5;
        }
        break;
    case 13:
        return y;
        break;
    case 27:
        v = false;
        break;
    }


    } while(v == true);

}

void planner(int m){
    switch(m){
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
    //sub_reportes();
    break;
    case 9:
    //config();
    break;
    }
}
void sub_materias(){
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
    cout << "<< Atras";
    selector_menuP(24,9);
}

void sub_alumnos(){
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
    cout << "<< Atras";
    selector_menuP(24,9);
}
void sub_finales(){
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
    cout << "<< Atras";
    selector_menuP(24,8);
}
