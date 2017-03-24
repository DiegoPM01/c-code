#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3
#define F 0

int main(int argc, char *argv[]){

	int A[N][N] = { {1, 2, 3}, {2, -3, 1}, { -4, 3, 2 } };
    int B[N][N] = { {7, 2, 5}, {1,  2, 4}, { -3, 2, 1 } };
    int C[N][N];  

	//Resolviendo matriz coordenadas (0,[0-2])
    for (int i = 0 ; i<N; i++){

   		C[F][i] = (A[F][F] * B[F][i]) + (A[F][F+1] * B[F+1][i]) + (A[F][F+2] * B[F+2][i]);
    };
 
    for (int i = 0; i<N ;i++){

    	C[F+1][i] = (A[F+1][F] * B[F][i]) + (A[F+1][F+1] * B[F+1][i]) + (A[F+1][F+2] * B[F+2][i]);

    };

    for (int i = 0; i<N ;i++){

    	C[F+2][i] = (A[F+2][F] * B[F][i]) + (A[F+2][F+1] * B[F+1][i]) + (A[F+2][F+2] * B[F+2][i]);

    };




	for (int i = 0; i<N; i++){
    	printf("%7i", C[0][i]);
    	printf("\n");
     };

    for (int i = 0; i<N; i++){
 		printf("%7i", C[1][i]);
 		printf("\n");
     };

     for (int i = 0; i<N; i++){
 		printf("%7i", C[2][i]);
 		printf("\n");
     };

 return EXIT_SUCCESS;
}




