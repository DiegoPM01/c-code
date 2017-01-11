#include <stdio.h>
#include <stdlib.h>

int main(){
	char cadena[] = "Hola";
	
	for (int i = 0; i < sizeof(cadena)/sizeof(char) -1; i++)

			  printf("%c", cadena[i] + 3);

	
				printf(" \n");

	


 return EXIT_SUCCESS;
}




