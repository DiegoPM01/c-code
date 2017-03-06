#include <stdio.h>
#include <stdlib.h>
#include <string.h>


bool es_primo(int n){

      for (int i = 2 ; i < n; i++){
      	if ( n % i  == 0){
      		return (0);
      	}
      }

      return(1);
    
 };
	

int main(){

      printf(" %i %s primo.\n", 4, es_primo(4)? "es " : "no es");


 return EXIT_SUCCESS;
}




