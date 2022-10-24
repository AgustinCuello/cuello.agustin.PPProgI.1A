/*
 ============================================================================
 Name        : ParcialPracticoProgramacion1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

float aplicarDescuento(float );
int contarLetras(char [],char ,int );

int main(void) {
	float valor;
	printf("Ingrese un precio");
	scanf("%f", &valor);

	valor=aplicarDescuento(valor);

	printf("%f", valor);

	/************/

	char arrayC[TAM];
	char letra;
	int cantidad;

	printf("Ingrese muchas letras");
	scanf("%s", arrayC);

	printf("Ingrese una letra");
	scanf("%c", &letra);

	cantidad=contarLetras(arrayC,letra,TAM);

	printf("Hay %d de esa letra", cantidad);

	return EXIT_SUCCESS;
}

float aplicarDescuento(float precio){
	float resultado;

	resultado=precio-(precio*5/100);

	return resultado;
}

int contarLetras(char cadena[],char caracter,int tam){
	int contador;

	for(int i=0;i<tam;i++){
		if((strcmp(cadena[i],caracter))==0){
			contador++;
		}
	}

	return contador;
}
