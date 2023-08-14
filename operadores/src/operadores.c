/*
 ============================================================================
 Name        : operadores.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumarNum(int valor1, int valor2);
int restarNum(int valor1, int valor2);
int multiplicarNum(int valor1, int valor2);
float dividirNum(int valor1, int valor2);

int main(void) {
    setbuf(stdout, NULL);

    int num1;
    int num2;
    char operacion;
    int resultadoInt;  // operando valor
    float resultadoFloat;  // operando valor

    do {

        printf("Ingrese operación s, r, m, d (o 'q' para salir): \n");
        scanf(" %c", &operacion);  // Nota el espacio antes de %c para ignorar el salto de línea residual.

        if (operacion == 'q') {
            break;  // Salir del bucle si el usuario ingresa 'q'.
        }

        printf("Ingrese números: \n");
        scanf("%d", &num1);

        printf("Ingrese números: \n");

        scanf("%d", &num2);

        switch (operacion) {
            case 's':
                resultadoInt = sumarNum(num1, num2);
                break;
            case 'r':
                resultadoInt = restarNum(num1, num2);
                break;
            case 'm':
                resultadoInt = multiplicarNum(num1, num2);
                break;
            case 'd':
                resultadoFloat = dividirNum((float)num1, num2);
                break;
            default:
                printf("Operación no válida.\n");
                continue;  // Volver al inicio del bucle si la operación no es válida.
        }

        if (operacion != 'd') {
            printf("El resultado es %d\n\n", resultadoInt);
        } else {
            printf("El resultado es %f\n\n", resultadoFloat);
        }


    } while (1);

    printf("\n¡Hasta luego!\n");
    return EXIT_SUCCESS;
}

int sumarNum(int valor1, int valor2) {
    return valor1 + valor2;
}

int restarNum(int valor1, int valor2) {
    return valor1 - valor2;
}

int multiplicarNum(int valor1, int valor2) {
    return valor1 * valor2;
}

float dividirNum(int valor1, int valor2) {
    if (valor2 != 0) {
        return (float)valor1 / valor2;
    } else {
        printf("No se puede dividir por cero\n");
        return 0;
        //La declaración return 0; se utiliza para indicar que una función ha finalizado su ejecución correctamente.
    }
}
