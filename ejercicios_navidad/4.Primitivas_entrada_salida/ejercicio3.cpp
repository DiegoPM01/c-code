#include <stdio.h>
#include <stdlib.h>

int main(){

	char nombre_1 [30];
	char nombre_2 [30];
	char nombre_final [30];
	
	printf("1º Nombre: ");
	scanf(" %s", nombre_1);	

	printf("2º Nombre: ");
	scanf(" %s", nombre_2);

	sprintf(nombre_final, "%s %s", nombre_1, nombre_2);

	printf("Su nombre junto es : %s \n", nombre_final);

 return EXIT_SUCCESS;
}




