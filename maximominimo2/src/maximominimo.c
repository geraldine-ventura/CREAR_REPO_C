/*
 ============================================================================
 Name        : maximominimo.c
 Author      : gera
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
//#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) {
	//defino variables arrriba
	setbuf(stdout,NULL);
	int maximo;
	int minimo;
	int bufferInt;//variable que usamos , que ingresa el usuario
	int flag=TRUE;

	do{
		printf("ingrese numero distinto al 888 para calcular max y min: \n");
		scanf("%d", &bufferInt); //guardo el numero en bufferInt, obtengo la direccion dememoria con &
		//LA VARIABLE BUFF.. ESTA DECLARADA EN EL MAIN TENGO QUE PONER UN &
		if(flag){
			maximo= bufferInt;
			minimo= bufferInt;
			flag= FALSE;
		}
		else{
			if(bufferInt>maximo){
				maximo= bufferInt;
			}
			if(bufferInt<minimo){
				minimo=bufferInt;
			}
		}
	}while(bufferInt!=888);// itero mientras que no sea 888, poruqe si es 888 se quiebra el bucle y sale
	printf("el valor minimo es: %d y el maximo es: %d",minimo,maximo);

	return 0;
}
