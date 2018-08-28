#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad=0;
    int edad2;
    int contador=0;
    float promedio;

    while(contador<4){
        printf("Ingrese edad");
        scanf("%d",edad2);
        contador=contador+1;
        edad=edad+edad2;

    }
    promedio=(float)edad/contador;
    printf("%f",promedio);

    return 0;
}
