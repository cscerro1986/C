#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcion;
    float op1, op2;


    do{
        system("cls");
        printf("Menu");
        printf("\n1 1.Ingresar primer operando(A=%.2f)", op1);
        printf("\n 2. ingresar segundo operando(A=%.2f)", op2);// este .2 asigna la cantidad de decimales... en este caso 2 decimales.
        printf("\3. Calcular todas las operaciones.");
        printf("\n4. Mostrar todos los resultados ");
        printf("Seleccionar opcion");
        scanf("%d", &opcion);



        switch(opcion){

            case 1:
                break;
            case 2:
                break;
            case 3:// dentro de cada caso tenes que llamar a una funcion determinada.
                break;
            case 4:
                break;
            case 5:
                break;
            default;


        }

    }while(opcion!=5){


    }




    return 0;
}



int menu(){
    printf;
    printf();

    printf("Seleccione: ");
    scanf("%d",&opcion);


}
