#include <stdio.h>  //Para trabajar con tuberias*/
#include <stdlib.h>

int main(){
	int decimal; //Declaramos la variable decimal*/

	printf("Decimal: "); //Imprime cadena de caracteres*/
	scanf(" %i", &decimal); //lee desde el teclado lo que meta el usuario, %i le dice que saque de la tubería un  nº entero. El resultado lo guarda en una variable*/

	// Hacer
	// Imprimir decimlal %2
	//  decimal = decimal  /2
	//  Mientras decimal > 0

	do {
	 printf("%i", decimal % 2);
	 decimal /= 2; //se pone /= para no volver a poner decimal.
	} while (decimal>0);

	printf("\n");

	return EXIT_SUCCESS;
}

