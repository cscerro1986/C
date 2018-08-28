#include <stdio.h>
#include <stdlib.h>
//int suma(int, int);
int main()
{
    int nro1,nro2,res;
    printf("ingrese nro 1: ");
    scanf("%d",&nro1);
    printf("Ingrese nro 2: ");
    scanf("%d",&nro2);

    res=suma(nro1,nro2);

    printf("resultado: %d",res);

    return 0;
}



int suma(int op1,int op2){
    int resultado;
    resultado=op1+op2;
    return resultado;

}


/*

en printf si quiero poner "número" la u con tilde no me va a aparecer... asi que lo que tengo que hacer es
printf("n%cmero, 163); se crea la mascara con %c y se va a reemplazar por el 163 en numero ascii que es ú.


*/
