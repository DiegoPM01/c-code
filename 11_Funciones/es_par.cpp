#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool es_par(int n){

      	return (n % 2 == 0);
      };

int main(){

      int numero;

      printf("numero: ");
      scanf(" %i", &numero);
      printf("Tu número %s es par \n", es_par(numero)? "": "no ");

 return EXIT_SUCCESS;
}

