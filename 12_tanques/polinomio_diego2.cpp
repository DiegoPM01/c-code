#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double f(int exponente){

	double usuario[4];

	for (int n = 0; n < 4; n++){
		printf("Numero %i: ", n);
		scanf(" %i", &usuario[n]);
	}


	double exp[4];

	for (int n = 1; n < 4; n++){
		exp[0] = 1;
		exp[n] = exponente * exp[n-1];
	}


	double resultado[4];
	double respuesta = 0;
	for (double n = 0; n < 4; n++){
		resultado[n] = usuario[n] * exp[n];
		respuesta = resultado[n] + respuesta;
	}
	printf("Resultado: %i \n", respuesta);

	return respuesta;
}

int main(int argc, char *argv[]){

	f(-1);
	f(1);

 return EXIT_SUCCESS;
}




