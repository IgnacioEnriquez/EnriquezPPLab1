#include <stdio.h>
#include <stdlib.h>
#include "trabajo.h"
#include "colores.h"
#include "bicicletas.h"
#include "servicios.h"
#include "validaciones.h"
#include "tipos.h"

#define TAMB 5
#define TAMT 5

int main()
{
  eTipo tipos[4] = {{1000,"Rutera"},{1001,"Carrera"},{1002,"Mountain"},{1003,"BMX"}};
  eColor colores[5] = {{5000,"Gris"},{5001,"Negro"},{5002,"Blanco"},{5003,"Azul"},{5004,"Rojo"}};
  eServicio servicios[4] = {{20000,"Limpieza",250},{20001,"Parche",300},{20002,"Centrado",400},{20003,"Cadena",350}};
  eBicicleta bicicletas[TAMB];
  eTrabajo Trabajos [TAMT];

  char seguir = 's';

  iniciarBicicletas(bicicletas,TAMB);

  do{
        system("cls");
        switch(menu())
        {
        case 'A':
            altaBicicleta(bicicletas,TAMB);
            break;
        case 'D':
            mostrarBicicletas(bicicletas,TAMB,tipos,TAMT);
            system("pause");
            break;
        case 'E':
            listarTipos();
            break;
        case 'F':
            listarColores();
            break;
        case 'G':
            listarServicios();
            break;

        default:
            printf("Opcion elegida incorrecta,recuerde elegir en Mayuscula");
            system("pause");
            break;



        }










  }while(seguir == 's');





}
