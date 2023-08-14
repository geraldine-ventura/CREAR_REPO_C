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

// declaro prototipo de mi funncion acon ; arriba de todas las funciones
int sumarConLimite (int operador1,int operador2);

//funcion main
int main(void) {
	setbuf(stdout,NULL);// esto siempre se pone para window
	//setbuf(stdout,NULL); //siempre!!
	//defino variables arrriba
	int numero1;
	int numero2;
	int suma;

	printf("Ingrese numero:");
	scanf("%d",&numero1);
	printf("ingrese otro numero");
	scanf("%d",&numero2);//enter

	suma=sumarConLimite(numero1,numero2);//prototipo (las variables se copian en los argumentos de mi funcion
	// el resultado se asigna a la funcion existente hacia la izq
	printf("la suma es %d",suma);

	return EXIT_SUCCESS;
}
	// def de una funcion sumarConLimite
	//TIPO,NOMBREDELAFUNCION(void)
	//TIPO,NOMBREDELAFUNCION(TIPO(int) NOMBRE ARG(operador1),..)


int sumarConLimite(int operador1,int operador2)//prototipo (las variables se copian en los argumentos de mi funcion)
{
	int resultado;// variable local
	//operado1:33
	//operador2:27
	resultado= operador1 + operador2;
	if(resultado>100)
	{
		resultado=100;
	}
		//retornar valor
		return resultado;
}




