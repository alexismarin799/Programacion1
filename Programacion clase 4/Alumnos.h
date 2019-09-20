//prototipos, estructuras y define
#include <stdio.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct //no guarda datos, es una forma en la que se representa el dato //se manejan por valor, NO POR REFERENCIA
{
    //se define los campos o atributos
    int legajo;
    char nombre[50];
    int nota;
    int estaVacio;

} sAlumno;
//estructura siempre afuera del main y las funciones siempre por debajo de la estructura
void mostrarAlumno(sAlumno);
sAlumno pedirAlumno(); //funcion que devuelve una estructura
int compararALumnoPorLegajo(sAlumno, sAlumno);
int cargarAlumnos(sAlumno*, int);
void mostrarListadoDeAlumnos(sAlumno[], int);
void ordenarAlumnosPorNombre(sAlumno[], int);
int buscarAlumnoLibre(sAlumno*, int);
int incializarAlumnos(sAlumno*, int);
int darDeBaja(sAlumno*, int);
/*void harcodearAlumnos(sAlumno[], int);*/
