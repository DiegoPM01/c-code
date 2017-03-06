#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double f(double pol[20], double x){

	const char multiplicador [] = {"1, 2, 4, 8, 16, 32"};
	float final;
	for (int n = 0; n < 19; n++){
		printf(" Número %i : ", n);
		scanf(" %lf", &pol[n]);
	}

	for (int n = 0; n < 20; n++){
		float res = pol[n] * multiplicador[n];
		final = res ++;
	}


	return final;
}


int main(int argc, char *argv[]){

	f(pol[20], 2);


 return EXIT_SUCCESS;
}




