#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char frase[] = "Hola me llamo Diego";
	int contador = strlen(frase);
	int i = contador;

//	printf("Nº de letras: %i \n", contador);

	do {
  			printf("%c", frase[i]);
			i--;
			} while (i >= 0);

				printf("\n");
											

	return EXIT_SUCCESS;
}
