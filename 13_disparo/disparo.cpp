#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define X 0
#define Y 10

// Integrar velocidad
// Aceleracion x = 0
// Acelaracion y = 10 m/s2

double calc (double vx, double vy, int segundos){
	
	double dif = vx - vy;



}


int main(){

	double velocidad_x;
	double velocidad_y;
	int seg;

	printf("Velocidad de x : ");
	scanf(" %lf", &velocidad_x);

	printf("Velocidad de y : ");
	scanf(" %lf", &velocidad_y);

	printf("Segundos : ");
	scanf(" %i", &seg);

	calc(velocidad_x, velocidad_y, seg);


 return EXIT_SUCCESS;
}




