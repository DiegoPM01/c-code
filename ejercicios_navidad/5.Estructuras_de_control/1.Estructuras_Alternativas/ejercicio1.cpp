#include <stdio.h>
#include <stdlib.h>

int main(){
    int rojo, amarillo, azul;

    /* Bloque de entrada de datos */
    printf("Rojo 0.NO 1.SI: ");
    scanf(" %i", &rojo);

    printf("Amarillo 0.NO 1.SI: ");
    scanf(" %i", &amarillo);

    printf("Azul 0.NO 1.SI ");
    scanf(" %i", &azul);

    

    if (rojo)
        if (amarillo)
            if (azul)
                printf("Su color es Blanco");
            else
                printf("Su color es Naranja");
        else
            if (azul)
                printf("Su color es morado");
            else
                printf("Su color es Rojo");

    else
        if (amarillo)
            if (azul)
                printf("Su color es verde");
            else
                printf("Su color es amarillo");
        else
            if (azul)
                printf("Su color es azul");
            else
                printf("Su color es negro");


    printf("\n");

    return EXIT_SUCCESS;
}

