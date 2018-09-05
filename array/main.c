#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 2

int main()// esto es carga secuencial... voy cargando elemento por elemento del array del primero al ultimo sin saltear.
{
    int edad[CANTIDAD],i;
    float salario[CANTIDAD];


    for(i=0;i<CANTIDAD;i++){
        printf("ingrese edad: ");
        scanf("%d",&edad[i]);
        printf("ingrese salario: ");
        scanf("%f",&salario[i]);
    }
    for(i=0;i<CANTIDAD;i++){
        printf("\nLa edad es: %d, y tiene un salario de %f",edad[i],salario[i]);// tambien se muestra de forma secuencial... lo contrario seria la carga aleatoria.
    }


    return 0;
}

