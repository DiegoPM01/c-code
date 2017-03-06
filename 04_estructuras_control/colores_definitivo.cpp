#include <stdio.h>
#include <stdlib.h>

#define rojo 1
#define azul 2
#define amarillo 3


int main(){

	int color1, color2, color3;

	printf ("Ves el color rojo ? 1=SI 0=NO\n");
	scanf (" %i", &color1);

	printf ("Ves el color azul? 2=SI 0=NO\n");
        scanf (" %i", &color2);

	printf ("Ves el color amarillo 3=SI 0=NO\n");
        scanf (" %i", &color3);

system ("clear");

	if (color1 == 1 && color2 == 2 && color3 == 0)
		printf ("\nSu color es Morado\n");

	if (color1 == 1 && color2== 0 &&  color3 == 3)
		printf ("\nSu color es Naranja\n");

	if (color1 == 1 && color2 == 0  && color3 == 0)
		printf ("\nSu color es el Rojo\n");

	if (color1 == 0 && color2 == 2 && color3 == 0)
		printf ("\nSu color es el Azul\n");

	if (color1 == 0 && color2 == 2 && color3 == 3)
		printf ("\nSu color es Verde\n");

	if (color1 == 1 and color2 == 2 && color3 == 3)
		printf ("\nSu color es Blanco\n");

	if (color1 == 0 and color2 == 0 && color3 == 3)
		printf ("\nSu color es Amarillo\n");

	if (color1 == 0 and color2 == 0 && color3 == 0)
		printf ("\nSu color es Negro\n");


	return EXIT_SUCCESS;
}


