/*
 ============================================================================
 Name        : Arraysnew.c
 Author      : Geral
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "utnbiblio.h"

#define EDADESLEN 8

void imprimirArray(int listaDeEdades[],int len);//protototipo

int main(void) {
	//Ejercicio pedirle al usuario 5 edades y luego
	//imprmir las 5 edades. Defeinir un array de 5 posiciones
	// y usarla funcion getNumero() para pedir los valores

	int edad;
	int edades[EDADESLEN];//ARRAY
	int i;
///
	for(i=0;i<EDADESLEN;i++){
		if(utn_getNumero(&edad,"ingrese edad","edad incorrecta",1,150,3)){
			edades[i]=edad;
		}
		else{
			printf("dato invalido para edad solicitada");
		}
	}

	//recorrro para imprimir edadesS
	imprimirArray(edades,EDADESLEN);//(nombre del array con su tamaño)-siempre
	//el nombr del array solo (edades) es la direccion de memoria de mi primer casillero del array
///
	return EXIT_SUCCESS;
}

void imprimirArray(int listaDeEdades[],int len){//es equivalente a pasaje por diferencia, se puede escribir y leer
	//lista de edades es equivalente (int* lista de edades),y es = al array (edades)
	int i;
	for(i=0;i<len;i++){
		printf("%d",listaDeEdades[i]);
	}
}
