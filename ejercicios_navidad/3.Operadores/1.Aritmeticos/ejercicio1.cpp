#include <stdio.h>
#include <stdlib.h>

int main(){
	int n_lista, columna, fila = 1;

	printf("Nº de la lista: ");
	scanf("%i", &n_lista);

	if (n_lista > 170){
			  printf("No hay mas de 170 Alumnos \n");
				return 0;
		};
	
	do {
		if (n_lista > 17){
			n_lista -= 17;
			fila++;
		}
	} while (n_lista > 17);

	columna = n_lista;

	printf("Fila %i, Columna %i \n", fila, columna);

 return EXIT_SUCCESS;
}




