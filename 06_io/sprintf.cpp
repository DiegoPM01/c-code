#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero = 12345678;
	char dni[8];

	sprintf(dni, "%i", numero); //Me guarda en dni cada numero de la variable numero por separado.
	
	//la funcion "atoi" y "itoa" hacen lo mismo que esto. Convierten de entero a ascii y de ascii a entero.

 return EXIT_SUCCESS;
}




