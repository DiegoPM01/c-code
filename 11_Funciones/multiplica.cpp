#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Metase 23 <intro> para probar

int multiplica (int op1, int op2){ /*Creo una funcion a la cual la tienen que dar estos valroes. Una vez que se la den estos valores ya nos devulve el return.*/

	return op1 * op2;
}

int main(){

	int a, b;
	a = getchar()- '0';
    b = getchar()- '0';
	printf(" %i x %i = %i \n", a, b, multiplica(a,b));

 return EXIT_SUCCESS;
}
