#include <stdio.h>
#include <stdlib.h>

/**Clase 3 Programacion*/
/** Funciones */

/**Instancias:
    -Declaracion o prototipo.
    -Implementacion o desarrollo.
    -llamada o invocacion.
*/

int getInt(char mensaje[],char mensajeError[], int min, int max);


int main()
{
    //int numero;
    int edad;
    int legajo;

    edad = getInt("Ingrese Edad: ","Error, Reingrese Edad: ",1,18);

    legajo = getInt("Ingrese Legajo: ","Error, Reingrese Legajo: ",1000,5000);

    printf("\nLa edad es: %d \n",edad);
    printf("El legajo es: %d \n",legajo);

    return 0;
}

int getInt(char mensaje[],char mensajeError[], int min, int max)
{
    int valorEntero;

    printf("%s",mensaje);
    scanf("%d",&valorEntero);

        while(valorEntero < min || valorEntero > max )
        {
            printf("%s",mensajeError);
            scanf("%d",&valorEntero);
        }//para validar el dato del retorno

    return valorEntero;
}
