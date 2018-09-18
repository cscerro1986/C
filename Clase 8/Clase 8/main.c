#include <stdio.h>
#include <stdlib.h>
#define CANT 2

struct eEmpleado{
    int legajo;
    char nombre[31];
    float salario;
    int isEmpty;

};


int main()// en esta hicimos un array con CANT elementos
{
    struct eEmpleado emple[CANT];
    int i;

    for(i=0;i<CANT;i++){


    printf("ingrese un numero de legajo:");
    scanf("%d",&emple[i].legajo);

    printf("ingrese un nombre:");
    fflush(stdin);
    fgets(emple[i].nombre,31,stdin);//
    //scanf("%s",emple[i].nombre);// no lleva el & porque lleva el nombre del array --emple.nombre = &emple.nombre[].

    printf("ingrese el salario:");
    scanf("%f",&emple[i].salario);

    emple[i].isEmpty =0;

    }


    system("cls");


    for(i=0;i<CANT;i++){
    printf("\n\nEl legajo es: %d",emple[i].legajo);
    printf("\n\nEl nombre es %s",emple[i].nombre);
    printf("\n\nEl salario es: %.f",emple[i].salario);

    }
    return 0;
}

/*
int main()
{
    struct eEmpleado emple[5];

    printf("ingrese un numero de legajo:");
    scanf("%d",&emple.legajo);

    printf("ingrese un nombre:");
    fflush(stdin);
    //fgets(emple.nombre,31,stdin);
    scanf("%s",emple.nombre);// no lleva el & porque lleva el nombre del array --emple.nombre = &emple.nombre[].

    printf("ingrese el salario:");
    scanf("%f",&emple.salario);

    emple.isEmpty =0;


    system("cls");

    printf("el legajo es: %d",emple.legajo);
    printf("\n\nEl nombre es %s",emple.nombre);
    printf("\n\nEl salario es: %f",emple.salario);


    return 0;
}


*/


/*

ESTRUCTURAS DE DATOS:

HASTA AHORA VENIMOS VIENDO LOS TIPOS NATIVOS:
CHAR - VOID- INT - FLOAT - DOUBLE.

con estructura de datos vamos a poder crear nuestros propios tipos de datos.

antes veiamos:
int legajo [CANT]
float salario [CANT]
char nombre [CANT][31]
int isEmpty[CANT]

todo esto pertenecia por ejemplo a un empleado... pero podemos unificar todo con una estructura tipo:

    struct ePersona{

        int legajo [CANT]
        float salario [CANT]
        char nombre [CANT][31]
        int isEmpty[CANT]

    }; // punto y coma despues de la llave.

    el nombre de la varible es ePersona y con la palabra reservada struc.
 es lo mismo pero con la simpleza de tener toda la informacion encapsulada en una estructura.


 AHORA VAMOS A DECLARAR UNA VARIABLE:

 struct eEmpleado emple; // emple es el nombre de la variable,struct eEmpleado es el tipo de dato.

 COMO SE ACCEDE?

 emple.legajo--- este lo vamos a usar con el = de asignacion.
 emple.nombre---
 emple.salario--- este lo vamos a usar con el = de asignacion.
 emple.isEmpety--- este lo vamos a usar con el = de asignacion.



*/
