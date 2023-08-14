/*
 ============================================================================
 Name        : programa2GW.c
 Author      : Geraldine
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// bibliotecas include stdio.h, stdlib.h
#include <stdio.h>
#include <stdlib.h>

#define MENSAJE "hola Layla bienvenida , esto es una prueba\n"
//funcion main
int main(void) {
	//defino variables arrriba
	setbuf(stdout,NULL);

	int numero;
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	printf(MENSAJE);

	printf("Ingrese numero:");

	//scanf("%d",direccion de la varible);
	scanf("%d",&numero); //hasta que no precione enter el progrma no lo trasforma
	printf("ingresaste: %d ",numero);// me trasforma el %d en el num ingresado

	return EXIT_SUCCESS;
}
