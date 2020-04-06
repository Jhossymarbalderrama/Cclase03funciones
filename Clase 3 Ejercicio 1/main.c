#include <stdio.h>
#include <stdlib.h>

int getAltura(char mensaje[],char mensajeError[], int min, int max);
int getEdad(char mensaje[],char mensajeError[], int min, int max);
char getSexo(char mensaje[],char mensajeError[]);
//se debe pedir la altura de una persona, la edad y el sexo ,( tres funciones)

int main()
{
    int altura;
    int edad;
    char sexo;

    altura = getAltura("Ingrese Altura(cm): ","Error, Reingrese Altura(cm): ",100,300);
    edad = getEdad("Ingrese su Edad: ","Error, Reingrese Edad: ",1,120);
    sexo = getSexo("Ingrese su Sexo (M o F): ","Error, Reingrese Sexo (M o F): ");

    printf("\nSu Altura es: %d", altura);
    printf("\nSu Edad es: %d", edad);
    printf("\nSu Sexo es: %c",sexo);

    return 0;
}


int getAltura(char mensaje[],char mensajeError[], int min, int max){
    int valorEntero;

    printf("%s",mensaje);
    scanf("%d",&valorEntero);
        while(valorEntero < min || valorEntero > max )
        {
            printf("%s",mensajeError);
            scanf("%d",&valorEntero);
        }

    return valorEntero;
}

int getEdad(char mensaje[],char mensajeError[], int min, int max){
    int valorEntero;

    printf("%s",mensaje);
    scanf("%d",&valorEntero);
        while(valorEntero < min || valorEntero > max )
        {
            printf("%s",mensajeError);
            scanf("%d",&valorEntero);
        }

    return valorEntero;
}

char getSexo(char mensaje[],char mensajeError[]){
    char valorSexo = 'N';

    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&valorSexo);


    while((valorSexo != 'F' && valorSexo != 'M') && (valorSexo != 'f' && valorSexo != 'm')){
        printf("%s",mensajeError);
        fflush(stdin);
        scanf("%c",&valorSexo);
    }



    return valorSexo;
}
