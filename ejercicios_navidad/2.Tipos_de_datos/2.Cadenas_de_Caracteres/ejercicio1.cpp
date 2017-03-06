#include <stdio.h>
#include <stdlib.h>

int main(){

	char dni [] = "09064982S";
	char dni_2;

	// Usando Atoi
	printf("%i \n", atoi(dni));

	// Usando sscanf
	sscanf(dni, "%c", dni_2);

	printf("%c", dni_2);;


	

 return EXIT_SUCCESS;
}




