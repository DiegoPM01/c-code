#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero, acumulador;

	for (int contador = 0; contador < 10; contador++){

		printf("Número %i: ", contador+1);
		scanf(" %i", &numero);

		if (contador == 0)
			acumulador = numero;
	
		if (numero < acumulador)
			  acumulador = numero;

		}


	printf("El número mas bajo es: %i \n", acumulador);
			


 return EXIT_SUCCESS;
}
