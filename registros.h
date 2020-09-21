#ifndef REGISTROS_H_INCLUDED
#define REGISTROS_H_INCLUDED



struct Materias{
    char cod_mat[5];
    char nombre[30];
    int anio;
    int cuatri;
    char tdc;
    int horas_semanales;
};

void menu_principal();
void linea();
int selector_menuP(int, int);
void planner(int);
void sub_materias();
void sub_alumnos();
void sub_finales();

#endif // REGISTROS_H_INCLUDED
