#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED


typedef struct
{
    char dia[20];
    char mes[20];
    char anio[20];

}eFecha;

#include "colores.h"
#include "bicicletas.h"
#include "servicios.h"
#include "validaciones.h"
#include "tipos.h"
typedef struct
{
 int id;
 int idBicicleta;
 int idServicio;
 eFecha fecha;


}eTrabajo;






#endif // TRABAJO_H_INCLUDED
