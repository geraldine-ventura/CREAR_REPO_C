/*
 ============================================================================
 Name        : punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"//ruta a donde va encontrar ese archivo
//prototipo.h ,lo mande a utn.h


int main(void){

	setbuf(stdout,NULL); //siempre!!

	float resultado;
	int num1;
	int num2;
	int respuesta;

	printf("\n ingrese numero1: ");
	scanf("%d",&num1);
	printf("\n ingrese numero2: ");
	scanf("%d",&num2);

	respuesta = dividir(&resultado,num1,num2);// func q me va devolver una respuesta
	if(respuesta==0){
	 printf("\n el resultado es: %f\n", resultado);
	}else{
		printf("\n no es posible dividirpor cero!\n");
	}
	return EXIT_SUCCESS;
}
//desarrollo de la funcion, lo mande a utn.c

