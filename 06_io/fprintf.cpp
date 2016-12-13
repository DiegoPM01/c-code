#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *tubo; //Crea un tubo o string. SIempre que tengamos FILE * crea un tubo.

	//Sirve para conectar el tubo a algo. //Tenemos que pone el modo en el que lo abrimos. En caso de que exista lo borra y lo crea de nuevo. Si no existe lo crea. Si lo abrimos en modo lectura lo leemos desde el principio y si ponemos "a" de append lo añade a un fichero que ya exista.
	//Podemos poner modificadores "+" que nos permite leer y escribir. Ademas podemos poner "b" si son binarios, etc...
	// fopen nos devuleve el tubo.
	
	tubo = fopen("iberos.txt", "w");
	fclose(tubo); //Cerramos el tubo. (Siempre es aconsejable cerrarlos).

	printf("HOlaaa\n"); //Imprimimos por el tubo principal "stdout".
	fprintf(tubo, "hola\n"); //Imprimimos por el nuevo tubo.
	fprintf(stdout, "hola\n"); //Imprimimos por el tubo de pantalla.		


	//Los tubos pueden ser para leer, escribir, ejecutar o adjuntar.
	
		


 return EXIT_SUCCESS;
}




