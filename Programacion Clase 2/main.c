
#include <stdlib.h>
#include "Aritmeticas.h"
/*usar factorial solamente cuando no exista otra manera de resolver el agoritmo
 */

int factorial(int);
int main()
{
    int resultado;
    resultado = factorial(5);
    printf("El factorial es: %d", resultado);






    return 0;

    /*int edad = pedirEntero("Ingrese edad: ", 1,100);
    int legajo = pedirEntero("Ingrese legajo: ", 0, 200);
    int nota = pedirEntero("Ingrese nota: ", 0, 10);
    int documento = pedirEntero("Ingrese documento: ", 0, 10000);

    printf("%d\n%d\n%d\n%d\n\n", edad, legajo, nota, documento);*/

}
int factorial(int numero)
{
    int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * factorial(numero - 1);
    }

    return resultado;

}


