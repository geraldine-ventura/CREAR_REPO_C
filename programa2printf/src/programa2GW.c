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
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	printf(MENSAJE);

	int i= 15;
	int j= 38;
	int k= 23;


	float pi=3.14;
	char c='A';

	printf("precio: %d pesos, talle:  %d y edad: %d \n" ,i,j,k);
	printf("numero pi: %f\n",pi);
	printf("letra abc: %c\n", c);

	return EXIT_SUCCESS;
}
