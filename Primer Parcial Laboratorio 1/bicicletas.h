#ifndef BICICLETAS_H_INCLUDED
#define BICICLETAS_H_INCLUDED


typedef struct
{
  int id;
  char marca[20];
  int idTipo;
  int idColor;
  float rodados;
  int isEmpty;


}eBicicleta;

#include "tipos.h"

#endif // BICICLETAS_H_INCLUDED

int iniciarBicicletas(eBicicleta* list, int len);
int altaBicicleta(eBicicleta* list,int tam);
int buscarLibre(eBicicleta* list,int tam);
int buscarIDBicicletas(eBicicleta* list,int tam,int id);
int menuRodados();
int cargarDescripTipos(char descripcion[], int idTipo,eTipo tipos[], int tamT);
void mostrarBicicletas(eBicicleta* list, int tam,eTipo* tipos,int tamT);
void mostrarBicicleta(eBicicleta x,eTipo* tipos,int tamT);
