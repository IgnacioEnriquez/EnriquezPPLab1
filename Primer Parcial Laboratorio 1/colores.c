#include <stdio.h>
#include <stdlib.h>
#include "trabajo.h"
#include "colores.h"
#include "bicicletas.h"
#include "servicios.h"
#include "validaciones.h"
#include "tipos.h"

int menuColores()
{
    int opcion;

    printf("********* Menu de Colores *********\n");
    printf(" 1 - Gris\n");
    printf(" 2 - Negro\n");
    printf(" 3 - Blanco\n");
    printf(" 4 - Azul\n");
    printf(" 5 - Rojo\n");
    printf("************************************\n\n");
    printf("Ingresa una opcion : ");
    fflush(stdin);
    scanf("%d",&opcion);

    return opcion;
}
void listarColores()
{
    system("cls");
    printf("********* Menu de Tipos *********\n");
    printf(" 1 - Gris\n");
    printf(" 2 - Negro\n");
    printf(" 3 - Blanco\n");
    printf(" 4 - Azul\n");
    printf(" 5 - Rojo\n");
    printf("************************************\n\n");
    system("pause");
}
