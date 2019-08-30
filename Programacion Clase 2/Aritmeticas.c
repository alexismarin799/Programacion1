#include "Aritmeticas.h"
/*



*/

int pedirEntero(char msj[], int min, int max)
{

    int numeroUno;
    printf("%s", msj);
    scanf("%d", & numeroUno);
    while(numeroUno < min || numeroUno > max)
    {
        printf("ERROR, \a %s", msj);
        scanf("%d", & numeroUno);
    }
    return numeroUno;
}
