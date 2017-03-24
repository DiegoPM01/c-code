#include <stdio.h>
#include <stdlib.h>
#include <string.h>	


#define N 3

int main(int argc, char *argv[]){

	int  A[N][N]= { {1, 2, 3}, {2, -3, 1}, {-4, 3, 2} },
		 B[N][N]= { {7, 2, 5}, {1, 2,  4}, {-3, 2, 2} },
	 	 C[N][N];

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




