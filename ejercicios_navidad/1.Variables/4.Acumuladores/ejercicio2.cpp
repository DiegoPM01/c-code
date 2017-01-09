#include <stdio.h>
#include <stdlib.h>

int main(){
//Multiplicacion a la rusa
	int op1, op2, ac1, ac2, resultado = 0;

	printf("Operando 1: ");
	scanf(" %i", &op1);
	ac1 = op1;

	printf("Operando 2: ");
	scanf(" %i", &op2);
	ac2 = op2;

	 do {
	 	if (op2 % 2 == 1)
			resultado += op1;
			op2 >>= 1;
			op1 <<= 1;
	 } while (op2 > 0);

	 printf(" %i x %i = %i\n", ac1, ac2, resultado);

 return EXIT_SUCCESS;
}
