#in	};clude <stdio.h>
#include <stdlib.h>

int main(){
	int numero, resultado;
	
	printf("Introduzca un número: ");
	scanf(" %i", &numero);
	
	for (int pos_divisor = 1; pos_divisor <= numero; pos_divisor ++){
		if (numero % pos_divisor == 0)
			printf("%i es un divisor de %i \n", pos_divisor, numero);
	};
 return EXIT_SUCCESS;
}




