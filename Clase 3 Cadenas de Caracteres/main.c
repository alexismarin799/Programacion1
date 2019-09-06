#include <stdio.h>
#include <stdlib.h>
#include <string.h> // biblioteca para manejo de caracteres

int main()
{
    /*
    strlen
    strcpy
    strupr
    strlwr
    strcmp
    stricmp
    strcat (+ NO CONCATENA)
    */
    char nombre[15];
    char apellido[15];
    char apellidoNombre[30]; //= "perro"; para testear el programa con esta asignacion al vector
    int lenght;


    printf("Ingrese nombre: \n");
    //lenght = strlen(nombre);
    gets(nombre);


    printf("Ingrese apellido: \n"); //funcion para copiar una variable a otro (igualar) primero va el destino y despues la asignacion.
    //lenght = strlen(apellido);
    gets(apellido);


    strcpy(apellidoNombre, apellido);
    strcat(apellidoNombre, ", ");
    strcat(apellidoNombre, nombre);
    printf("\n %s", apellidoNombre);
                                            /*funcion especializada en leer cadenas de caracteres, recibe la direccion de memoria don
                                                    de se guarda el string solo funciona en windos*/

                                                    //fgets(palabra, 10, stdin); //stdin, se le estaria indicando que valla a leer el baffer de entrada


    //printf("La palabra es: %s y el largo es %d", palabra2, lenght);

    return 0;
}
