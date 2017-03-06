#include <stdio.h>
#include <stdlib.h>

int main(){
	int elementos [10];
	
	for (int i = 1; i <= 10; i++)
		elementos[i] = i * i;


	printf ("El valor del array es %i, %i, %i, %i, %i, %i, %i, %i, %i, %i \n",
						 elementos[1],
						 elementos[2],
						 elementos[3],
						 elementos[4],
						 elementos[5],
						 elementos[6],
						 elementos[7],
						 elementos[8],
						 elementos[9],
						 elementos[10]);
		


 return EXIT_SUCCESS;
}




