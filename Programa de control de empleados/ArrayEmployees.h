#include <stdio.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

}sEmployee;

int initializeEmployee(sEmployee*, int);
int searchForFreeSpace(sEmployee*, int);
sEmployee askEmployee();
int loadEmployee(sEmployee*, int, int);
void showEmployee(sEmployee);
int showEmployeeList(sEmployee*, int);
int findEmployeeById(sEmployee*, int,int);
int ordenarEmpleados(sEmployee*, int, int);
int modificEmployee(sEmployee*, int);
// int sacarPromedio(sEmployee; int);
// int empleadosSobreElPromedio(sEmployee,int,int);
int eliminarEmpleados(sEmployee*, int);

