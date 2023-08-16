/*
 ============================================================================
 Name        : bibliotecas_h_c.c
 Author      : Geral
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utnbiblio.h"

int main(void) {

	setbuf(stdout, NULL);//siempre

	int edad;
	int peso;
	int respuesta;
	char letra;
	float altura;

	respuesta=utn_getCaracter(&letra,"ingrese una letra: \n","Error la letra  debe ser entre A a J\n",'A','J',2);
	//utilizo esta funcion para cualquier pregunta que se quiera hacer con un numero entero

	if(respuesta ==0){
		printf("\nla letra es %c: ",letra);
	}else{
		printf("\nError");
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////

	respuesta=utn_getNumero(&edad,"ingrese su edad: \n","Error, edad debe ser entre 0 a199\n",0,199,2);
	//utilizo esta funcion para cualquier pregunta que se quiera hacer con un numero entero

	if(respuesta ==0){
		printf("la edad es %d: ",edad);
	}else{
		printf("\nError");
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////

	respuesta=utn_getNumero(&peso,"ingrese su peso: \n","Error, peso debe ser entre 0 a 500\n",0,500,3);
	//utilizo esta funcion para cualquier pregunta que se quiera hacer con un numero entero

	if(respuesta ==0){
		printf("el peso es %d: ",peso);
	}else{
		printf("\nError");
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////


	respuesta=utn_getNumeroFlotante( &altura ,"ingrese su altura: \n","Error, su altura debe estar entre 0 mtrs a 2,30 mts\n",0.0,2.3,2);
	//utilizo esta funcion para cualquier pregunta que se quiera hacer con un numero entero

	if(respuesta ==0){
		printf("\nSu altura es %f: ",altura);
	}else{
		printf("\nError");
	}
	return EXIT_SUCCESS; // esto me devuelve cero para todas mis funciones llamadas de la biblioteca
}
