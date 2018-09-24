#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
/*


MATRICES.

EXISTEN DOS PARES DE CORCHETES. NO ES ALGO QUE SE USE MUCHO.
POR EL MOMENTO VENIMOS LAS MATRICES DEL TIPO:
CHAR NOMBRE [3] [31]; DONDE TENGO 3 NOMBRES DE 31 ESPACIOS. ARRAY DE CADENA DE CARACTERES.

PERO AHORA LAS QUE VAMOS A VER SON DEL TIPO:

INT MAT [3][3]; MATRIZ DE 3X3... TIPO TATETI.



TIPOS DE DATOS PROPIOS-- ESTRUCTURAS.

las tablas tipificadas se utilizan cuando las opciones son finitas.



*/

typedef struct eFecha{

};

typedef struct{
long int dni;
char apellido[31];
char nombre[31];
efecha fecNac;
int idNacionalidad;// cuando se piden datos que en la mayoria es la misma respuesta...se hace una funcion para
                    // para ponerle codigo; ej 1 es argentina, 2 chile.. etc.



}ePersona;

typedef struct {

int id;
char descripcion[31];

}ePais;


ePersona pers[10];

ePais paises[3]={{1,argentina},{2,chile},{3,brasil};

for(i=0;i<10;i++){
    for(j=0;i<3;j++){

        if (pers[i].idNacionalidad==paises[j].id){

            printf("%s\t%s", pers[i].nombre,paises[j].descripcion);
        }
    }

}
