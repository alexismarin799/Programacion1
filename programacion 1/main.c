#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>


int main()
{
    int edad;
    float altura;
    char sexo;
    char seguir;
    int edadMujerMasVieja;
    float alturaMujerMasVieja;
    int minimaEdad;
    int flagPersonaJoven = 0;
    float alturaPersonaMasJoven;
    int flagVieja = 0;
    int edadHombreMasBajo;
    float minimaAltura;
    int flagPetiso = 0;
    int contadorPersonas = 0;
    int acumuladorDeEdades = 0;
    float promedioEdades;



    do
    {
        printf("\nIngrese edad: \n");
        scanf("%d", & edad);
        while(edad < 0 || edad > 100)
        {
            printf("Error, ingrese una edad adecuada: \n");
            scanf("%d", & edad);
        }

        printf("Ingrese altura: \n");
        scanf("%f", & altura);
        while(altura < 1 || altura > 2)
        {
            printf("Error, ingrese una altura adecuada: \n");
            scanf("%f", & altura);
        }

        printf("Ingrese sexo: ");
        sexo = getche();
        sexo = tolower(sexo);
        //en una sola linea seria sexo = tolower(getche());
        while(sexo != 'f' && sexo != 'm')
        {
            printf("\nError, reingrese sexo: ");
            sexo = getche();
            sexo = tolower(sexo);
        }


        //altura de la mujer mas vieja
        if(sexo == 'f')
        {
            if(flagVieja == 0 || edad > edadMujerMasVieja)
            {
                edadMujerMasVieja = edad;
                alturaMujerMasVieja = altura;
                flagVieja = 1;
            }
        }
        else
        {
            //edad del hombre mas bajo
            if(flagPetiso = 0 || altura < minimaAltura)
            {
                minimaAltura = altura;
                edadHombreMasBajo = edad;
                flagPetiso = 1;
            }
        }

        //altura de la persona mas joven
        if(flagPersonaJoven == 0 || edad < minimaEdad)
        {
            minimaEdad = edad;
            alturaPersonaMasJoven = altura;
            flagPersonaJoven = 1;
        }



        contadorPersonas++;
        acumuladorDeEdades = acumuladorDeEdades + edad;


        printf("\nDesea continuar? s/n");
        //fflush(stdin);
        //scanf("%c", & seguir);
        seguir = getche();


    }while(seguir == 's');
    promedioEdades = (float)acumuladorDeEdades / contadorPersonas;

    printf("\nLa altura de la mujer mas vieja es: %f\n", alturaMujerMasVieja);
    printf("La altura de la persona mas joven es: %f\n", alturaPersonaMasJoven);
    printf("La edad del hombre mas bajo es: %d", edadHombreMasBajo);
    printf("El promedio de edades es: %f", promedioEdades);










    //int numero = 5;
    //float potencia;
    //potencia = pow(numero, 3);

    //printf("Ingresa un numero: \n");
    //scanf("%d", & numero);

    //printf("La potencia es: %f \n", potencia);

    //system("pause");




}
