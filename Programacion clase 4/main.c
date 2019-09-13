#include <stdio.h>
#include <stdlib.h>
#include "Alumnos.h"
#define A 3

int main()
{
    sAlumno listaAlumnos[A];
    int opcion;
    do
    {

        printf("1-Cargar alumnos: \n");
        printf("2-Mostrar alumnos: \n");
        printf("3-Ordenar alumnos: \n");
        printf("ELija una opcion: ");
        scanf("%d", & opcion);

        switch(opcion)
        {
        case 1:
            //cargarAlumnos(listaAlumnos, A);
            harcodearAlumnos(listaAlumnos, A);
            break;

        case 2:
            mostrarListadoDeAlumnos(listaAlumnos, A);
            break;

        case 3:
            ordenarAlumnosPorNombre(listaAlumnos, A);
            break;
        }
        system("pause");
        system("cls");


    }while(opcion != 5);


    //sAlumno = tipo de dato //miAlumno = variable
    /*sAlumno miAlumno;
    sAlumno otroAlumno;

     if(miAlumno > otroAlumno) asi no se pueden comparar


    miAlumno = pedirAlumno();
    otroAlumno = pedirAlumno();//funcion que devuelve algo de tipo estructura
    if(compararALumnoPorLegajo(miAlumno, otroAlumno)) //comparacion de variables en este caso alumnos
    {
        printf("Los alumnos son iguales.\n");
    }
    else
    {
        printf("Los alumnos no son iguales.\n");
    }

    mostrarAlumno(miAlumno);




    //printf("%d", sizeof(miAlumno));*/

    return 0;
}

