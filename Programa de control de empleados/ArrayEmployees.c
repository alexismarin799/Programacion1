#include "ArrayEmployees.h"

int initializeEmployee(sEmployee* lista, int cant)
{
    int retorno = -1;
    int i;
    if(cant > 0 && lista != NULL)
    {
        for(i = 0; i < cant; i++)
        {
            lista[i].isEmpty = LIBRE;
        }
        retorno = 0;
    }
    return retorno;
}

int searchForFreeSpace(sEmployee* lista, int cant)
{
    int i;
    int index = -1;
    for(i = 0; i < cant; i ++)
    {
        if(lista[i].isEmpty == LIBRE)
        {
            index = 1;
            break;
        }
    }
    return index;
}

sEmployee askEmployee()
{
    sEmployee myEmployee;

    printf("Ingrese nombre del empleado: \n");
    fflush(stdin);
    gets(myEmployee.name);
    printf("Ingrese apellido del empleado: \n");
    fflush(stdin);
    gets(myEmployee.lastName);
    printf("Igrese salario del empleado: \n");
    scanf("%f", & myEmployee.salary);
    printf("Ingrese sector del empleado: \n");
    scanf("%d", & myEmployee.sector);

    return myEmployee;

}

int loadEmployee(sEmployee* lista, int cant, int id)
{
    int i;
    int retorno = 0;
    i = searchForFreeSpace(lista, cant);

    if(i != -1)
    {
        lista[i] = askEmployee();
        lista[i].id = id;
        lista[i].isEmpty = OCUPADO;
        retorno = 1;
    }
    return retorno;
}


int showEmployeeList(sEmployee* lista, int cant)
{
    int i;
    int retorno = -1;
    if((cant > 0 && cant < 1001) && lista != NULL)
    {
        for(i = 0; i < cant; i++)
        {
            if(lista[i].isEmpty == OCUPADO)
            {
                 printf("%d --- %s --- %s --- %f --- %d\n", lista[i].id, lista[i].name, lista[i].lastName, lista[i].salary, lista[i].sector);

                retorno = 1;
            }
        }
    }
    return retorno;

}
int findEmployeeById(sEmployee* list, int length,int id)
{
    int i;
    int retorno = -1;
    if(list != NULL && length > 0)
    {
        for(i = 0; i < length; i++)
        {
            if(list[i].id == id)
            {
                retorno = i;
            }
        }
    }
    return retorno;
}

/*int ordenarEmpleados(sEmployee* employee, int cant)
{
    int i;
    int j;
    sEmployee auxEmployee;

    for(i = 0; i < cant-1; i++)
    {
        for(j = i+1; j < cant; j++)
        {
            if(employee[i].sector < employee[j].sector)
            {
                auxEmployee = employee[i];
                employee[i] = employee[j];
                employee[j] = auxEmployee;
            }
            if(strcmp(employee[i].lastName, employee[j].lastName)<0)
            {
                auxEmployee = employee[i];
                employee[i] = employee[j];
                employee[j] = auxEmployee;
            }
        }
    }
}*/

/*int eliminarEmpleados(sEmployee* employee, int cant)
{
    int retorno = -1;
    int id;
    int index;
    char respuesta;

    if(employee != NULL && cant >0)
    {
        showEmployeeList(employee, cant);
        printf("Ingrese un ID: \n");
        scanf("%d", & id);

        index = findEmployeeById(employee, cant, id);
        if(index != -1)
        {
            showEmployee(employee[index]);
            printf("Esta seguro de eliminar al empleado? ");
            respuesta = getche();
            if(respuesta == 's')
            {
                employee[index].isEmpty = LIBRE;
                retorno = 0;

            }else
            {
                retorno = 1;
            }
        }
    }
    return retorno;
}*/
/*int modificEmployee(sEmployee* employee, int cant)
{
    int id;
    int index;
    int mod;
    int retorno = -1;

    showEmployeeList(employee, cant);
    printf("Ingrese un ID: \n");
    scanf("%d", & id);
    index = findEmployeeById(employee, cant, id);

    if(index != -1)
    {
        do
        {
            printf("\nIngrese que desea modificar:\n1-Nombre.\n2-Apellido.\n3-Salario.\n4-Sector\n5-Salir.\n");
            printf("Ingrese una opcion: ");
            scanf("%d", & mod);

            switch(mod)
            {
                case 1:
                    printf("Ingrese nuevo nombre: \n");
                    fflush(stdin);
                    gets(employee.name);
                    retorno = 0;
                    break;

                case 2:
                   printf("Ingrese nuevo apellido: \n");
                   fflush(stdin);
                   gets(employee.lastName);
                   retorno = 0;
                   break;

            }

        }while(opcion != 5);
    }

}*/
