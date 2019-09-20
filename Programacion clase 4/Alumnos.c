#include "Alumnos.h"
int incializarAlumnos(sAlumno* lista, int cant)
{
    int retorno = -1;
    int i;
    if(cant > 0 && lista != NULL)
    {
        for(i = 0; i < cant; i++)
        {
            lista[i].estaVacio = LIBRE;
        }
        retorno = 0;
    }
    return retorno;
}

void mostrarAlumno(sAlumno unAlumno)
{
    printf("%d--%s--%d\n", unAlumno.legajo, unAlumno.nombre, unAlumno.nota);
    //operador punto (.) para mostrar el tipo de dato
}
sAlumno pedirAlumno()
{
    sAlumno miAlumno;//={100, "Pepe", 7};

    //pedir datos
    printf("Ingrese legajo: ");
    scanf("%d", & miAlumno.legajo); //devuelve la direccion de memoria de legajo en la estructura
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("Ingrese nota: ");
    scanf("%d", & miAlumno.nota);

    return miAlumno;

}
int compararALumnoPorLegajo(sAlumno unAlumno, sAlumno otroAlumno) //comparacion de variables en este caso alumnos
{
    int comparar = 0;
    if(unAlumno.legajo == otroAlumno.legajo)
    {
        comparar = 1;
    }
    return comparar;
}
int cargarAlumnos(sAlumno* lista, int cant)
{
    int i;
    int retorno = 0;
    i = buscarAlumnoLibre(lista, cant);

        if(i != -1)
        {
            lista[i] = pedirAlumno();
            lista[i].estaVacio = OCUPADO;
            retorno = 1;

        }
        return retorno;
        /*printf("Ingrese legajo: ");
        scanf("%d", & listaAlumnos[i].legajo); //primero obtengo el alumno, luego la direccion de memoria*/
}
void mostrarListadoDeAlumnos(sAlumno lista[], int cant)
{
    int i;
     for(i = 0; i < cant; i++)
    {
        if(lista[i].estaVacio == OCUPADO)
        {
            mostrarAlumno(lista[i]);
        }
        /*printf("Ingrese legajo: ");
        scanf("%d", & listaAlumnos[i].legajo); //primero obtengo el alumno, luego la direccion de memoria*/


    }
}
void ordenarAlumnosPorNombre(sAlumno lista[], int cant)
{
    int i;
    int j;
    sAlumno auxAlumno;
    for(i = 0; i <  cant-1; i++)
    {
        for(j = i+1; j < cant; j++)
        {
            if(strcmp(lista[i].nombre, lista[j].nombre)<0)
            {
                auxAlumno = lista[i];
                lista[i] = lista[j];
                lista[j] = auxAlumno;
            }
        }
    }
}
int buscarAlumnoLibre(sAlumno* lista, int cant)
{
    int i;
    int index;
    for(i = 0; i < cant; i ++)
    {
        if(lista[i].estaVacio == LIBRE)
        {
            index = 1;
            break;
        }
    }
    return index;

}
int buscarAlumnoPorLegajo(sAlumno* lista, int cant, int legajo)
{
    int i;
    int retorno = -1;
    if(lista!= NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {
            if(lista[i].legajo == legajo)
               {
                   retorno = i;
                    break;
               }
        }
    }
    return retorno;
}
void harcodearAlumnos(sAlumno lista[], int cant)
{
    int legajo[3] = {101, 102, 105};
    int nota[3] = {10, 5, 9};
    char nombre[3][50] = {"Juan", "Maria","Jose"};
    int i;

    for(i = 0; i < cant; i++)
    {
        lista[i].legajo = legajo[i];
        lista[i].nota = nota[i];
        strcpy(lista[i].nombre, nombre[i]);
        lista[i].estaVacio = OCUPADO;
    }


}
int darDeBaja(sAlumno* lista, int cant)
{
    int retorno = -1;
    int legajo;
    int index;
    char respuesta;
    if(lista != NULL && cant > 0)
    {
        mostrarListadoDeAlumnos(lista, cant);
        printf("Ingrese un legajo: \n"); //hacerlo con funcion
        scanf("%d", & legajo);

        index = buscarAlumnoPorLegajo(lista, cant, legajo);
        if(index != -1)
        {
            mostrarAlumno(lista[index]);
            printf("Esta seguro de eliminar el dato: ");
            respuesta = getche();
            if(respuesta == 's')
            {
                lista[index].estaVacio = LIBRE;
                retorno = 0;
            }
            else
            {
                retorno = 1;
            }


        }



    }
    return retorno;
}
