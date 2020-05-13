#include <stdio.h>
#include <stdlib.h>
#include "trabajo.h"
#include "colores.h"
#include "bicicletas.h"
#include "servicios.h"
#include "validaciones.h"
#include "tipos.h"
#include "string.h"

int altaBicicleta(eBicicleta* list,int tam)
{
    int retorno = -1;
    int indice;
    int validacion;
    eBicicleta aux;


    indice = buscarLibre(list,tam);
    system("cls");

    if(indice == -1)
    {
        printf("El sistema esta completo\n");
        system("pause");


    }
    else
    {

        validacion = utn_getEntero(&aux.id,0,"Ingrese ID de la nueva bicicleta : ","Error,debe ingresar un ID entero,reingrese datos\n\n",0,100000);

        if(validacion == 0)
        {

            validacion = buscarIDBicicletas(list,tam,aux.id);

            if(validacion == -1)
            {

                validacion = utn_getCadena(aux.marca,20,0,"Ingrese Marca de la nueva bicicleta : ","Error,debe ingresar una Marca Correcta,reingrese datos\n\n");

                if(validacion == 0)
              {

                system("cls");
                switch(menuTipos())
                {
                case 1:
                    aux.idTipo = 1000;
                     validacion = 0;
                    break;
                case 2:
                    aux.idTipo = 1001;
                     validacion = 0;
                    break;

                case 3:
                    aux.idTipo = 1002;
                     validacion = 0;
                    break;
                case 4:
                    aux.idTipo = 1003;
                    validacion = 0;
                    break;
                default:
                    printf("Error,el tipo de bicicleta es incorrecto,reingrese datos\n");
                    system("pause");
                    validacion = -1;
                    break;

                    }


                }

                if(validacion == 0)
                {
                    system("cls");
                switch(menuColores())
                {
                case 1:
                    aux.idColor = 5000;
                     validacion = 0;
                    break;
                case 2:
                    aux.idColor = 5001;
                     validacion = 0;
                    break;

                case 3:
                    aux.idColor = 5002;
                     validacion = 0;
                    break;
                case 4:
                    aux.idColor = 5003;
                    validacion = 0;
                    break;
                case 5:
                    aux.idColor = 5004;
                    validacion = 0;
                    break;

                default:
                    printf("Error,el Color de bicicleta es incorrecto,reingrese datos\n");
                    system("pause");
                    validacion = -1;
                    break;


                }
                if(validacion == 0)
                {
                    system("cls");
                      switch(menuRodados())
                {
                case 1:
                    aux.rodados = 20;
                     validacion = 0;
                    break;
                case 2:
                    aux.rodados = 26;
                     validacion = 0;
                    break;

                case 3:
                    aux.rodados = 27.5;
                     validacion = 0;
                    break;
                case 4:
                    aux.rodados = 29;
                    validacion = 0;
                    break;

                default:
                    printf("Error,el rodado de bicicleta es incorrecto,reingrese datos\n");
                    system("pause");
                    validacion = -1;
                    break;


                }
                if(validacion == 0)
                {
                    list[indice] = aux;
                    list[indice].isEmpty = 0;
                    printf("-------------------------------------\n");
                    printf("Bicicleta ingresada correctamente\n");
                    printf("-------------------------------------\n\n");
                    system("pause");


                }



                }







                }








            }
            else
            {
              printf("Error : Ya existe una bicicleta con ese ID,Reingrese datos\n\n");
              system("pause");


            }



        }





    }




    return retorno;
}
int iniciarBicicletas(eBicicleta* list, int len)
{
    int retorno = -1;


    if(list != NULL)
    {

        for(int i = 0; i < len ; i++)
        {

            list[i].isEmpty = 1;

        }

        retorno = 0;

    }

    return retorno;
}
int buscarLibre(eBicicleta* list,int tam)
{
    int indice = -1;

    for(int i = 0; i <tam; i++)
    {
        if( list[i].isEmpty == 1)
        {
            indice = i;
            break;

        }
    }

    return indice;

}
int buscarIDBicicletas(eBicicleta* list,int tam,int id)
{
    int indice = -1;

    for(int i = 0; i <tam; i++)
    {
        if(list[i].id == id)
        {
            indice = list[i].id;
            break;

        }
    }

    return indice;

}
int menuRodados()
{
    int opcion;

    printf("********* Menu de Rodados *********\n");
    printf(" 1 - 20\n");
    printf(" 2 - 26\n");
    printf(" 3 - 27,5\n");
    printf(" 4 - 29\n");
    printf("************************************\n\n");
    printf("Ingresa una opcion : ");
    fflush(stdin);
    scanf("%d",&opcion);

    return opcion;
}
void mostrarBicicleta(eBicicleta x,eTipo* tipos,int tamT)
{
    char descripcionTipos[20];
    cargarDescripTipos(descripcionTipos,x.idTipo,tipos,tamT);

    printf("\n%d %d %s %.2f %s \n\n",x.id,x.idColor,x.marca,x.rodados,descripcionTipos);

}
int cargarDescripTipos(char descripcion[], int idTipo, eTipo tipos[], int tamT)
{
	int isOk = 0;

	for(int i = 0; i < tamT; i++)
	{
		if(tipos[i].id == idTipo) //si el id del sector es igual al id sector que estoy buscando(lo pase por parametros)
		{
			strcpy(descripcion, tipos[i].descripcion); //copio a descripcion la descripcion que tengo en ese sector
			isOk = 1; //exito
			break;
		}
	}

	return isOk;
}
void mostrarBicicletas(eBicicleta* list, int tam,eTipo* tipos,int tamT)
{

    int flag = 0;

    printf("\n********** Lista de Empleados************\n");
    for(int i = 0; i < tam ; i++)
    {

        if(list[i].isEmpty == 0)
        {
            mostrarBicicleta(list[i],tipos,tamT);
            flag = 1;
        }

    }

    if(flag == 0)
    {

        printf("\nNo hay Bicicletas para Mostrar\n\n");
    }

}
