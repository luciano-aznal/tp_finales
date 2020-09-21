#ifndef REGISTROS_H_INCLUDED
#define REGISTROS_H_INCLUDED



struct Materias
{
    char cod_mat[5];
    char nombre[30];
    int anio;
    int cuatri;
    char tdc;
};

void menu_principal();
void linea();
int selector_menuP(int, int, char);
void planner(int);
void sub_materias();
void sub_alumnos();
void sub_finales();
void sub_reportes();
void config();
bool emergente(char[], int, int);
void fin();
void notify();
void bloquear_resize();

#endif // REGISTROS_H_INCLUDED
