#include <stdio.h>
#include <stdlib.h>
#define ESC 27


int main()
{
    char seguir;
    int max,min,valor;


    do{

        printf("Ingrese un numero");
        scanf("%d",valor);
            if(valor>max){
                max=valor;
            }else if(valor<min){

                min=valor;

            }

    }while(seguir!=ESC);

    printf("el maximo es: .");

    return 0;
    }
