#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

/*
float suma(float, float);
float resta(float, float);
float multiplicacion(float, float);
float division(float, float);
float factorial(float);
float factorial_2(float);
*/


main ()
{
    int opcion;
    float op1, op2;
    float reSuma;
    float resResta;
    float resDiv;
    float resMulti;
    float resFact1;
    float resFact2;



    printf("\n Ingrese 1 para iniciar la calculadora o 5 para salir: ");
    scanf("%d", &opcion);


    if(opcion==1)
    {
        printf("\nIngrese primer operando: ");
        scanf("%f",&op1 );
        printf("\nIngrese segundo operando: ");
        scanf("%f",&op2);
        reSuma=suma(op1, op2);
        resResta=resta(op1, op2);
        resDiv=division(op1, op2);
        resMulti=multiplicacion(op1, op2);
        resFact1=factorial(op1);
        resFact2=factorial_2(op2);
        printf("\n\n El resultado de la suma entre  es: %2.f",reSuma);
        printf("\n\n El resultado de la resta es: %2.f",resResta);
        printf("\n\n El cociente de la operancion es: %2.f",resDiv);
        printf("\n\n El producto de la multiplicacion es: %2.f",resMulti);
        printf("\n\n El factorial del operando 1 es: %2.f", resFact1);
        printf("\n\n El factorial del operando 2 es: %2.f", resFact2);



    }
    return 0;

}
