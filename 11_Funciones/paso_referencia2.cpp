#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void incrementa( int *incrementa, int numero){

   *incrementa = *incrementa + numero;

   printf("%i \n", *incrementa);

}


int main(){

   int a = 2, b = 5;

   incrementa(&a, 5);
   incrementa(&b, 3);
   incrementa(&a, -2);


 return EXIT_SUCCESS;
}




