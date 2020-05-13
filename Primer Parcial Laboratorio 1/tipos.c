#include <stdio.h>
#include <stdlib.h>
#include "trabajo.h"
#include "colores.h"
#include "bicicletas.h"
#include "servicios.h"
#include "validaciones.h"
#include "tipos.h"

int menuTipos()
{
    int opcion;

    printf("********* Menu de Tipos *********\n");
    printf(" 1 - Rutera \n");
    printf(" 2 - Carrera\n");
    printf(" 3 - Mountain\n");
    printf(" 4 - BMX\n");
    printf("************************************\n\n");
    printf("Ingresa una opcion : ");
    fflush(stdin);
    scanf("%d",&opcion);

    return opcion;
}
void listarTipos()
{
    system("cls");
    printf("*********Lista de Tipos *********\n");
    printf(" 1 - Rutera \n");
    printf(" 2 - Carrera\n");
    printf(" 3 - Mountain\n");
    printf(" 4 - BMX\n");
    printf("************************************\n\n");
    system("pause");

}
