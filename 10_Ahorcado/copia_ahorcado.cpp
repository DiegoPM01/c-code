#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define calculo_palabras (sizeof(palabras) / sizeof(char *) -2)
#define MAX 29
#define N 10


// Variables y constantes del programa

const char *palabras[] = {
			"hola",
			"prueba",
			"ordenador",
			"periferico",
			"dispositivo",
			"pantalla",
			"teclado",
			"boligrafo",
			NULL
		};

const char *palabra_elegida;
char adivinado[MAX];
int aleatoria;
char letra;

char l_error;

char almacen_errores[MAX]; 

char contador_letras;

char buffer[100];
char *l_palabra;

int contador_errores = 0;
int total_errores = 0;


//Funciones

void mostrar_palabras(){

	for (int i = 0; i <= calculo_palabras ; i++){
			printf("%s \n", palabras[i]);
		};
};

void palabras_aleatorias(){

	srand(time(NULL));
	aleatoria = rand() % calculo_palabras;
	palabra_elegida = palabras[aleatoria];


	//printf("%s \n", palabra_elegida);
};

void palabra_misteriosa(){

	strcpy(adivinado, palabra_elegida);

	bzero(adivinado, MAX);

    for (int i=0; i< strlen(palabra_elegida); i++)
        adivinado[i] = '-';

    printf("%s \n", adivinado);

};

void preguntar_letra(){

	printf("Letra: ");
	scanf(" %c", &letra);
};

void letra_correcta(){

	for (int i = 0; i < strlen(palabra_elegida); i++)
	{
		if (letra == palabra_elegida[i])	
			adivinado[i] = letra;

	};
	 
	printf("%s \n", adivinado);
};

void letra_error(){

	int acumulador;
	char error_array[4];	

	for (int i = 0; i < strlen(palabra_elegida); i++)
	{
		if (letra == palabra_elegida[i])
		{	
			acumulador = 1;	
		}		
		else 
		{
			acumulador = 0;

		}

		if (acumulador == 1)
		{
			break;
		}
	};	

	if (acumulador == 0)
	{
		total_errores ++;
		l_error = letra;
		error_array[contador_errores] = l_error;
		contador_errores ++;
	}
	

	printf("\t\t Letras falladas: %s \n", error_array);
	printf("\n\n");

	
		
};
 
int main(){

	palabras_aleatorias();

	palabra_misteriosa();

	preguntar_letra();

	for (int i = 0; i < strlen(palabra_elegida); i++)
	{

	if (total_errores == 4)
	{
		printf("HAS MUERTO \n");
		return 0;
	}

	letra_correcta();

	letra_error();

	preguntar_letra();

	};

	return 0;		
};
