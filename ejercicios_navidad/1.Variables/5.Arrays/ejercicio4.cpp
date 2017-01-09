#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1 = 1, num2 = 1, op;
	int cadena[20];
	
	cadena[0] = 1;
	cadena[1] = 1;
	
	for (int i = 2; i < 20; i++){
		op = num1 + num2; 
		cadena[i] = op;
		num2 = num1;
		num1 = op;
	
	}

	for (int i = 0; i < 20; i++) 
	printf("%i bloque(%i)\n", cadena[i], i);



	


 return EXIT_SUCCESS;
}




