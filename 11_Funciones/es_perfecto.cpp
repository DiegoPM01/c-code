#include <stdio.h>
#include <stdlib.h>
#include <string.h>


bool es_perfecto(int n){
	int numero = 0;
	for (int i = 1; i < n; i++){
		if ( n % i == 0){
			numero = numero + i;
		}	
	}

	if (numero == n){
		return (1);
	} else {
		return(0);
	}
 };
	

int main(){

      printf(" %i %s perfecto.\n", 27, es_perfecto(27)? "es " : "no es");


 return EXIT_SUCCESS;
}




