#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu (){

	int numero;
	printf("Menu:\n 1.Sumar \n 2.Restar \n 3.Multiplicar \n 4.Dividir \n");
	printf("Número: ");
	scanf(" %i", &numero);

	return numero;
}

int sumar(int op1, int op2){

	return (op1 + op2);
}

int restar(int op1, int op2){
	
	return (op1 - op2);
}

int multiplicar(int op1, int op2){
	
	return (op1 * op2);
}

int dividir(int op1, int op2){
	
	return (op1 / op2);
}

int main(){

	int opcion = menu();
	int num1;
	int num2;
	
	//printf(" %i", opcion);
	printf("Primer numero: \n");
	scanf(" %i", &num1);
	printf("Segundo numero: \n");
	scanf(" %i", &num2);


	if (opcion == 1)
	{
		printf("El resultado es : %i \n", sumar(num1, num2));
	}
	
	if (opcion == 2)
		printf("El resultado es : %i \n", restar(num1, num2));

	if (opcion == 3)
		printf("El resultado es : %i \n", multiplicar(num1, num2));

	if (opcion == 4)
		printf("El resultado es : %i \n", dividir(num1, num2));




 return EXIT_SUCCESS;
}




