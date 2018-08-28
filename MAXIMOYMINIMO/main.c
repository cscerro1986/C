#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ESC 27

int main()
{
        char seguir;
    int max,min,numero,bandera=0;

    do{

        system("cls");
        printf("ingrese un numero:");
        scanf("%d",&numero);

        if(bandera==0){
            min=numero;
            max=numero;
            bandera=1;


        }
        if(numero>max){
            max=numero;
        }
        if(numero<min){
            min=numero;
        }

        printf("Presione Esc para salir, cualquier otra tecla para continuar");
        //scanf("%c",&seguir);
        seguir=getch();

    }while(seguir!=ESC);

    printf("Mayor: %d\n Menor: %d",max,min);


    /*

        if(flag==0||numero>max){
            max=numero;

        }
        if(flag==0||numero<min){
                min=numero;
        }


    */


    return 0;
}
