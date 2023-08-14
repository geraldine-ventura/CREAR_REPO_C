/*
 * utnbiblio.h
 *
 *  Created on: 14 ago. 2023
 *      Author: Geral
 */

#ifndef UTNBIBLIO_H_
#define UTNBIBLIO_H_

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError,float minimo, float maximo, int reintentos);
int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError,char minimo, char maximo, int reintentos);


#endif /* UTNBIBLIO_H_ */
