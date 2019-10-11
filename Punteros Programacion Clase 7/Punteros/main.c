#include <stdio.h>
#include <stdlib.h>

void cargarVector(int*, int);
void mostrarVector(int*, int);
void incrementarId(int*);


    ///EJEMPLO 1
    /*int unEntero;
    int* puntero = NULL;
    int* otroPuntero;

    puntero =  &unEntero; //IMPORTANTE!!

    printf("Ingrese un numero: \n"); //lectura de varibale a traves de puntero..
    scanf("%d", puntero);

    if(puntero != NULL) //Control de NULL
    {
        otroPuntero = puntero;
        printf("El numero es : %d\n", *otroPuntero);
    }
    else
    {
        printf("Apunta a nada.\n");
    }*/



        ///EJEMPLO 2
    /*int* puntero;
    int unEntero;

    puntero = &unEntero;

    ///ARITMETICA DE PUNTEROS (FUNCIONAMIENTO DE UN ARRAY, REPRESENTAR UN VECTOR)
    printf("%p\n", puntero);
    printf("%p\n", puntero - 1);
    printf("%p\n", puntero + 1);//LE SUMA 4 BYTES
    printf("%p\n", puntero + 2);
    printf("%p\n\n\n", puntero + 3);

    puntero++;

    printf("%p\n", puntero);*/

int main()
{
    int contId = 0;
    int vector[5]; //= {5,7,9,8,3};
    //cargarVector(vector, 5);
    //mostrarVector(vector, 5);

    incrementarId( & contId);
    printf("Siguiente ID: %d\n", contId);
    incrementarId( & contId);
    printf("Siguiente ID: %d\n", contId);
    incrementarId( & contId);
    printf("Siguiente ID: %d\n", contId);
    incrementarId( & contId);
    printf("Siguiente ID: %d\n", contId);

    return 0;
}

void cargarVector(int* vector, int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d", vector + i);
    }

}

void mostrarVector(int* vector, int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        printf("\n%d", vector[i]); //vector[i]    VECTOR CON NOTACION DE PUNTEROS!!!
    }
}

void incrementarId(int* ultimoId)
{
    *ultimoId = *ultimoId + 1;
}
