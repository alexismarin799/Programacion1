#include <stdio.h>
#include <stdlib.h>
#include "Alumnos.h"
#define LIBRE 0
#define OCUPADO 1

#define A 3


int main()
{


    sAlumno listaAlumnos[A];
    if(incializarAlumnos(listaAlumnos, A)==0)
    {
        int opcion;
        int index;
        int retorno;

        do
        {

            printf("1-Cargar alumnos: \n");
            printf("2-Mostrar alumnos: \n");
            printf("3-Ordenar alumnos: \n");
            printf("4-Buscar Alumno. \n");
            printf("5-Eliminar alumno.\n");
            printf("Elija una opcion: ");
            scanf("%d", & opcion);

            switch(opcion)
            {
            case 1:
                /*if(cargarAlumnos(listaAlumnos, A)== 1)
                {
                    printf("Alumno cargado con exito\n");
                }
                else
                {
                    printf("No hay espacio.\n");
                }*/

                //cargarAlumnos(listaAlumnos, A);
                harcodearAlumnos(listaAlumnos, A);
                break;

            case 2:
                mostrarListadoDeAlumnos(listaAlumnos, A);
                break;

            case 3:
                ordenarAlumnosPorNombre(listaAlumnos, A);
                break;

            case 4:
                index = buscarAlumnoPorLegajo(listaAlumnos, A, 102);
                mostrarAlumno(listaAlumnos[index]);

                break;

            case 5:
                retorno = darDeBaja(listaAlumnos, A);
                switch(retorno)
                {
                case 0:
                    printf("\nSe elimino.\n");
                    break;

                case 1:
                    printf("\nAccion cancelada por el usuario.\n");
                    break;

                case -1:
                    printf("\nEl usuario ha sido eliminado.\n");
                    break;
                }

            }
            system("pause");
            system("cls");


        }
        while(opcion != 10);
    }
    else
    {
        printf("Hubo un error en crear la lista.\n");
    }


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


/*int incrementar(int*);//prototipo
//main
int numero = 0;
incrementar(&numero);
incrementar(&numero);
incrementar(&numero);
printf("%d", numero);
return 0;

//C
int incrementar(int* n)
{
    *n = *n+1,
    return 1;
}*/



