#include <stdio.h>
#include <stdlib.h>
#define CANT 5


int main()
{
    int legajo[CANT];
    float salario[CANT];
    char nombre[CANT][31];// metes dos corchetes... el primeros es para la cantidad de nombres.. el segundo es para la
                        // cantidad de caracteres por nombre.
    int cantidad;

   for(i=0;i<CANT;i++){

    printf("legajo: ");
    scanf("%d",&legajo[i]);

    printf("salario: ");
    scanf("%d",&salario[i]);

    fgets(nombre[i],sizeof(nombre[i]-2),stdin);// el primer elemento es la cadena, el segundo es la cantidad de elementos de la varaible.

    cantidad = strlen(nombre[i]);

    nombre[cantidad-1]='\0';



   }

    for(i=0;i<CANT;i++);
    printf("%d\t%s\t\t%.2f"legajo[i],nombre[i],salario[i]);


    return 0;
}
