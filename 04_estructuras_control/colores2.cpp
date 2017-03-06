#include <stdio.h>
#include <stdlib.h>


int main(){

	int color1, color2, color3, resultado;
	
	menu:

	printf ("¿Cual es el primer color que ves?: (Indique el nº)\n"
		"\t1. Rojo \n"
		"\t2. Amarillo \n"
		"\t3. Azul\n"
		"\t0. Ninguno\n"
	       );

	scanf(" %i", &color1);


	printf ("¿Cual es el segundo color que ves? (Indique el nº)\n"
		"\t1. Rojo \n"
		"\t2. Amarillo \n"
		"\t3. Azul\n"
		"\t0. Ninguno\n"
	       );

	scanf(" %i", &color2);

	
	printf ("¿Cual es el tercer color que ves? (Indique el nº)\n"
		"\t1. Rojo \n"
		"\t2. Amarillo \n"
		"\t3. Azul\n"
		"\t0. Ninguno\n"
	       );

	scanf(" %i", &color3);

	resultado = color1 + color2 + color3 + 10;
	

	if (resultado == 10){
		printf("Su color es Negro\n");
	}
        

	if (resultado == 16){
		printf("Su color es Blanco\n");
	}

	if (resultado == 13){
		printf("Su color es Naranja\n");
	}

	if (resultado == 14){
		printf("Su color es Morado\n");
	}

	if (resultado == 15){
		printf("Su color es Verde\n");
	}

	

 return EXIT_SUCCESS;
}




