#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define LIBRE 0
#define OCUPADO 1
#define A 1000

int main()
{
    sEmployee listEmployee[A];
    if(initializeEmployee(listEmployee, A) == 0)
    {
        int opcion;
        int retorno;
        int contadorId = 0;
        //int retorno;

        do
        {
            printf("1-Cargar empleado. \n");
            printf("2-Modificar Empleado. \n");
            printf("3-Eliminar empleado.\n");
            printf("Elija una opcion: ");
            scanf("%d", & opcion);

            switch(opcion)
            {
            case 1:
                contadorId ++;
                if(loadEmployee(listEmployee, A, contadorId) == 1)
                {
                    printf("Empleado cargado con exito\n");
                }
                else
                {
                    printf("No hay mas espacio\n");
                }

            case 2:
                showEmployeeList(listEmployee, A);

                break;

            //case 3:
                /*retorno = eliminarEmpleados(listEmployee, A);
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
                }*/


            }

            system("pause");
            system("cls");

        }
        while(opcion != 4);
    }
    else
    {
        printf("Hubo un error en crear la lista.\n");
    }

    return 0;
}
