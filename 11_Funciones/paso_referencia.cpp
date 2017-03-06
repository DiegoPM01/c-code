#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Que carge en esas bases lo que lee del teclado.

void leer(double *base, double *exponente){

	printf("Base: ");
	scanf(" %lf", base);

	printf("Exponente: ");
	scanf(" %lf", exponente);

}

int main(){

   double base, exponente;

   leer(&base, &exponente);

   printf(" La base es: %lf y el Exponente es: %lf \n", base, exponente );

   

 	return EXIT_SUCCESS;
}




