#include <stdio.h>
#include <stdlib.h>

int main(){
	// Es perfecto cuando la suma de sus divisores es = al nº.
	int numero, pos_divisor, acumulador = 0;

	printf("Número: ");
	scanf(" %i", &numero);
	
	for (pos_divisor = 1; pos_divisor < numero; pos_divisor++){
			  if (numero % pos_divisor == 0)
					acumulador += pos_divisor;

		}

	if (acumulador == numero)
			  printf("Su número es perfecto \n");
				else
				printf("Su número NO es perfecto \n");


 return EXIT_SUCCESS;
}




