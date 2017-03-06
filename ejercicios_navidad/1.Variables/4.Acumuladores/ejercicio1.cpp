#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero, acumulador = 0, resultado;	
	for (int i = 0; i < 10; i++){
		printf("Introduzca un número: ");
		scanf("%i", &numero);
		acumulador += numero;
		resultado = acumulador / 10;

	}

	printf("La nota media es: %i \n", resultado);

 return EXIT_SUCCESS;
}
