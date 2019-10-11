#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    float b;
    char c;

}sDato;

void cargarDatos(sDato*, int);
void mostrarDatos(sDato*, int);

int main()
{
        ///EJEMPLO 1

    /*sDato unDato = {1,5.3,'B'};
    sDato* pDato;

    pDato = &unDato;
    //pDato = unDato; INCORRECTO!!

    printf("%d -- %f -- %c\n", pDato->a, //*pDato.a ESTA MAL NO RECONOCE EL OPERADOR PUNTO (.)!!
                               pDato->b,
                               pDato->c);

*/
        ///EJEMPLO 2
    sDato unDato[2] = {{2,3.26,'C'},{1,5.3,'B'}};
    //sDato* pDato;

    //pDato = unDato;
    //pDato = unDato; INCORRECTO!!

    cargarDatos(unDato,2);
    mostrarDatos(unDato,2);







    return 0;
}

void cargarDatos(sDato* listaDatos, int tam)
{
    int i;
    for(i = 0; i <tam; i++)
    {
        printf("\nIngrese entero: \n");
        scanf("%d", &(listaDatos+i)->a);
        printf("Ingrese flotante: \n");
        scanf("%f", &(listaDatos+i)->b);
        printf("Ingrese caracter: \n");
        fflush(stdin);
        (listaDatos+i)->c = getche();
    }
}

void mostrarDatos(sDato* listaDatos, int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        printf("\n%d -- %f -- %c", (listaDatos+i)->a, //*pDato.a ESTA MAL NO RECONOCE EL OPERADOR PUNTO (.)!!
                                   (listaDatos+i)->b,
                                   (listaDatos+i)->c);
    }

}
