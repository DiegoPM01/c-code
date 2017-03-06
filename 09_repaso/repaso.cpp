#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main(int argc, char *argv[]){

	char buffer[N];
	char *palabra;

	printf("Nombre: ");
	fgets(buffer, N, stdin);

	//malloc(buffer + 1);
	palabra = (char *)malloc(strlen (buffer) + 1);

	//palabra = (char *) malloc +1;

	strcpy (palabra, buffer);

	printf(" %s", palabra);

	free(palabra);

	

		








		
		

 return EXIT_SUCCESS;
}




