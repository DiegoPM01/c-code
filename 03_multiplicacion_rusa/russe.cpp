#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	//Declaro las variables op1, op2, resultado
	//Pedir op1 y op2 al usuario.
	//Poner resultado a 0 antes de acumular
	//
	//	Si op2 es impar
	//		Acumular op1 en resultado
	//	Divide op2 /2
	//	Duplica 0p1
	// Repetir si op2 es > 0

	int op1, o1,
	    op2, o2,
	    resultado = 0; 	 //Damos valor 0 a esta variable. Para que el contador esté en 0
	printf("Operando 1: ");	 //Imprime la cadena de caracteres "operando 1" por pantalla.
	scanf(" %i", &op1); 		//El espacio es para que saque todos los caracteres y que luego coga los que indiquemos.
	o1 = op1;

	printf("Operando 2: ");
	scanf(" %i", &op2);
	o2 = op2;

	do{
	   if (op2 % 2 == 1)
	     resultado += op1; //Operador taquigrafico.
	op2 >>= 1; //podemos usar tanto >>= 1; o /= 2; //son operadores de desplazamiento.
	op1 <<= 1;
	} while (op2 > 0);

	printf(" %i x %i = %i\n", o1, o2, resultado); // Se pone una variable por cada valor de formato. coge el 1º %i y nos muestra el op1.

     return EXIT_SUCCESS;
}




