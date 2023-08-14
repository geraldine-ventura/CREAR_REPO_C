/*
 * utn.c
 *
 *  Created on: 14 ago. 2023
 *      Author: Geral
 */
#include <stdio.h>
#include <stdlib.h>

int dividir(float* pResultado, int operador1, int operador2){
	int retorno=-1;// inicializo la variable retorno en -1
	float resultado;
	if (pResultado!= NULL && operador2!=0){// validacion que se hacesiembre con el puntero, sinos paso una direccion de memo
		resultado=(float) operador1/operador2;
		*pResultado=resultado; // el * me permite escribir en el valor apuntado en ese puntero
	    retorno = 0;
	}
	return retorno;
}


