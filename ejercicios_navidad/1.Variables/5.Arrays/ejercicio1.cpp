#include <stdio.h>
#include <stdlib.h>

int main(){
	int elementos[10];
	
	for (int i = 0; i < 10; i++)
			  elementos[i] = i + 1;

	printf ("El valor del array es %i, %i, %i \n", elementos[0], elementos[1], elementos[2]);

 return EXIT_SUCCESS;
}




