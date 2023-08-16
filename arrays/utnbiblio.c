/*
 * utnbiblio.c
 *
 *  Created on: 14 ago. 2023
 *      Author: Geral
 */
#include <stdio.h>
#include <stdlib.h>

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos){

	int retorno=-1;
	int bufferInt;//guardo el dato q me da el usuario

	if(pResultado!=NULL && mensaje !=NULL && mensajeError != NULL && minimo<=maximo && reintentos>=0){

		do{
			printf("%s",mensaje);//el usuario ingreso algo
			fflush(stdin);
			scanf("%d", &bufferInt);//guardo en el espacio de memoria lo ingreso

			if (bufferInt >= minimo && bufferInt <= maximo) {
				*pResultado= bufferInt;
				retorno=0;
				break;
			}else{
				printf("%s\n",mensajeError);
				reintentos --;
			}

		}while(reintentos>=0);
	}
	return retorno;
}

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError,char minimo, char maximo, int reintentos){

	int retorno=-1;
	char bufferChar;//guardo el dato q me da el usuario

	if(pResultado!=NULL && mensaje !=NULL && mensajeError != NULL && minimo<=maximo && reintentos>=0){

		do{
			printf("%s",mensaje);//el usuario ingreso algo
			fflush(stdin);// fpuege linux
			scanf("%c", &bufferChar);//guardo en el espacio de memoria lo ingreso

			if (bufferChar >= minimo && bufferChar <= maximo) {
				*pResultado= bufferChar;
				retorno=0;
				break;
			}else{
				printf("%s\n",mensajeError);
				reintentos --;
			}

		}while(reintentos>=0);
	}
	return retorno;
}
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError,float minimo, float maximo, int reintentos){

	int retorno=-1;
	float bufferFloat;//guardo el dato q me da el usuario

	if(pResultado!=NULL && mensaje !=NULL && mensajeError != NULL && minimo<=maximo && reintentos>=0){

		do{
			printf("%s",mensaje);//el usuario ingreso algo
			fflush(stdin);// fpurge para linux
			scanf("%f", &bufferFloat);//guardo en el espacio de memoria lo ingreso

			if (bufferFloat >= minimo && bufferFloat <= maximo) {
				*pResultado= bufferFloat;
				retorno=0;
				break;
			}else{
				printf("%s\n",mensajeError);
				reintentos --;
			}

		}while(reintentos>=0);
		}
		return retorno;
	}
