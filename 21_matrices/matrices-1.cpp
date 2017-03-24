#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

//Hacer una matriz que la eliga el usuario.
//Terminar el de invertir la matriz con los punteros.
//Estudiar realloc.

// for, funciones, pasos valor y referencia, funcinones, punteros, malloc, free, realloc y estructuras.

#define N 3
#define K 2
#define N 4

int main(int argc, char *argv[]){

	int  A[M][K]= { {1, 2, 3}, {2, -3, 1}, {-4, 3, 2} },
		 B[K][N]= { {7, 2, 5}, {1, 2,  4}, {-3, 2, 2} },
	 	 C[M][N];

	 // Limpiamos la matriz C de resultados.
	 bzero(C, sizeof(C));


	 //Bucles anidados.
	 // Cuando acabo el 1º bucle entero pasa al siguiente y así continuamente.
	 for (int f=0; f<N; f++)  //recorre filas
	 	for(int c=0; c<N; c++) //recorre columnas
	 		for(int K=0; K<N; K++)
	 			C[f][c] += A[f][K] * B[K][c];



	 //Imprimimos los resultados por pantalla.
	 for (int f=0; f<N; f++){
	 	for (int c=0; c<N; c++)
	 		printf("%7i", C[f][c]);
	 		printf("\n");
	 }




	 
 return EXIT_SUCCESS;
}




