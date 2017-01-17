#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int numbase, base = 0, divi , con=0, resultado =0;

	printf("Dime un número decimal:\n");
	scanf(" %i", &numbase);

	while(base < 2 || base > 9){
				printf("Introduce la base a la que quieres convertir(menor que 10):\n");
				scanf(" %i", &base);
	
		}

	divi = numbase;
	while(divi > base){
			resultado+= (divi % base) * pow(10, con);
			con ++;
			divi /= base ;
		}
	resultado += divi * pow(10, con);
	printf("El  resultado de pasar el número %i en base decimas a base %i es de : %i\n",numbase,base,resultado);

	return EXIT_SUCCESS;
}
