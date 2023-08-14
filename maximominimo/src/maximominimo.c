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
	int i;
	int bufferInt;
	int flag=TRUE;

	for(i=0;i<5;i++){// adentro del for se ejecuta 5 veces
		printf("ingrese numero %d\n",i+1);
		scanf("%d", &bufferInt); //guardo el numero en bufferInt
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
	}
	printf("el valor minimo es: %d y el maximo es: %d",minimo,maximo);

	return 0;
}
