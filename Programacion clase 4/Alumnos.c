#include "Alumnos.h"

void mostrarAlumno(sAlumno unAlumno)
{
    printf("%d--%s--%d", unAlumno.legajo, unAlumno.nombre, unAlumno.nota);
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
void cargarAlumnos(sAlumno lista[], int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        /*printf("Ingrese legajo: ");
        scanf("%d", & listaAlumnos[i].legajo); //primero obtengo el alumno, luego la direccion de memoria*/
        lista[i] = pedirAlumno();

    }
}
void mostrarListadoDeAlumnos(sAlumno lista[], int cant)
{
    int i;
     for(i = 0; i < cant; i++)
    {
        /*printf("Ingrese legajo: ");
        scanf("%d", & listaAlumnos[i].legajo); //primero obtengo el alumno, luego la direccion de memoria*/
        mostrarAlumno(lista[i]);

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
    }


}
