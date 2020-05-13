#ifndef COLORES_H_INCLUDED
#define COLORES_H_INCLUDED


typedef struct
{
    int id;
    char descripcion[20];


}eColor;
#include "trabajo.h"
#include "bicicletas.h"
#include "servicios.h"
#include "validaciones.h"
#include "tipos.h"
#endif // COLORES_H_INCLUDED

int menuColores();
void listarColores();
