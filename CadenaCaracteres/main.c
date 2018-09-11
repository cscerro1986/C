#include <stdio.h>
#include <stdlib.h>
#include <string.h> // de tipo string
#include <ctype.h>// de tipo char

/*
CADENA DE CARACTERES.

STRING

como char solo te permite un caracter... hay que fabricar el String o cadena de caracteres, y lo fabricas con un vector.
por ejemplo

char Palabra[10]="hola"; voy a tener un vector de tipo char con 10 elementos... terina con \0.. no es necesario ponerlo
pero lo tenemos que tener presenter para asignarle memoria.

si declaron un vector de cadena de caracteres tengoq eu declarar un espacio extra.
tambien puedo:
letra="a"; letra es del tipo nativo por eso se puede...

lo que no puedo hacer es:
palabra="algo"; solo se puede hacer cuando se declara e inicializa... no se puede por que el array no es nativo, es una cadena de caracteres.

para resolver esto lo primero es incluir: String.h

y de ahi usamos la funcion STRCPY(Destino, Origen), el origen puede ser una variable, constante o literal entre "".
el del destino si o si tiene que ser una variable.
la de origen va a ser copiada en la destino.


la cual tiene dos paramentros

*/
/*
int main()
{
    char nombre[31];

    printf("ingrese su nombre");
    fflush(stdin);
    scanf("%s", nombre);// &nombre[0].. es = ....aca va sin & porque la cadena no es un dato nativo sino un vector del tipo char
                        // con scanf la barra espaciadora corta la cadena de caracteres.
    //strcpy(nombre,"Santiago Cerro");
    printf("%s", nombre);// cuando es cadena de caracteres es %s, si es un solo char es %c

    return 0;
}
*/









/*
int main()
{
    char nombre[31];

    printf("ingrese su nombre");
    fflush(stdin);
    scanf("%[^\n]", nombre);// &nombre[0].. es = ....aca va sin & porque la cadena no es un dato nativo sino un vector del tipo char
                        // con scanf la barra espaciadora corta la cadena de caracteres.
    //strcpy(nombre,"Santiago Cerro");
    printf("%s", nombre);// cuando es cadena de caracteres es %s, si es un solo char es %c

    return 0;
}
*/

/*

para tomar datos

fgets(cadena, cantidad de caracteres que quiero que lea, stdin);


*/










/*
int main()
{
    char nombre[31];

    printf("ingrese su nombre");
    fflush(stdin);
    gets(nombre);// esta tiene problemas de seguridad por eso no se usa.
    printf("%s", nombre);// cuando es cadena de caracteres es %s, si es un solo char es %c

    return 0;
}
*/















/*
int main()
{
    char nombre[31];
    printf("ingrese su nombre");

    fgets(nombre,31,stdin);// antes del\0 va a poner un \n
    printf("%s", nombre);


    return 0;
}
*/















int main()
{
    char nombre[31];
    char apellido[31];
    char apeNom[62];
    int cantidadNom;
    int cantidadApe;
    int i;


    printf("nombre: ");
    fgets(nombre,sizeof(nombre)-2,stdin);
    cantidadNom = strlen(nombre);
    nombre[cantidadNom-1] = '\0';//
    strlwr(nombre);

    printf("Apellido: ");
    fgets(apellido,sizeof(apellido)-2,stdin);
    cantidadApe = strlen(apellido);// te dice la cantidad de elementos que tiene una cadena
    apellido[cantidadApe-1] = '\0';
    strlwr(apellido);
    apellido[0]=toupper(apellido[0]);
    nombre[0]=toupper(nombre[0]);

    for(i=0;i<cantidadNom;i++){

        if(nombre[i]==' '&&nombre[i+1]!='\0'){

            nombre[i+1]=toupper(nombre[i+1]);

        }

    }
                                // tengo que copiar lo de la variable apellido en la variable apenom.

    strcpy(apeNom,apellido);// en apeNom se pone inicialmente el apellido...esta es una manera.OPCION A
    strcat(apeNom," ");//lo que hace es concatenar al apellido y nombre el espacio...
    strcat(apeNom,nombre);


    printf("%s", apeNom);


    //apeNom[0]='\0'// poner el \0 al inicio es decir que esta vacio. OPCION B

   return 0;
}




















    //SEGUNDA FORMA DE HACERLO.
/*

int main()
{
    char nombre[31];
    char apellido[31];
    char apeNom[62];
    int cantidad;



    printf("nombre: ");
    fgets(nombre,sizeof(nombre)-2,stdin);
    cantidad = strlen(nombre);
    nombre[cantidad-1] = '\0';//


    printf("Apellido");
    fgets(apellido,sizeof(apellido)-2,stdin);
    cantidad = strlen(apellido);
    apellido[cantidad-1] = '\0';



    apeNom[0]='\0';//pongo entre comillas simples por que es un solo caracter... sino va comillas dobles.
    strcat(apeNom,apellido);
    strcat(apeNom, " ");
    strcat(apeNom, nombre);

    printf("%s", apeNom);







    return 0;
}

*/
/*
MAS FUNCIONES


strlwr(nombre);// pasa todos los caracteres de la cadena a minuscula.
strupr(nombre);// pasa todos los caracteres de la cadena a mayuscula.

de libreria #include <ctype.h>// de tipo char
para pasar a minuscula toda la cadeda, uso strlwr(nombre); paso todo el nombre a minuscula.
pero si quiero pasar a minuscula o mayuscula solo la inicia?

nombre[0]=toupper(nombre[0]);//la funcion touper toma el nombre en la posicion 0 o sea la inicial... la pone enmayuscula y la ubica en la primera
                            //posicion de la 0 o sea la inicial.

*/

/*
strcmp(cadena1,cadena2);// compara dos cadenas de caracteres y devuelve un int.. devuelve 3 valores: va a servir para ordenar alfabeticamente.

    si la cadena 1 es igual a la 2: 0
    si la cadena 1 es mayor a la 2: >0
    si la cadena 1 es menor a la 2: <0



int valor

valor=strcmp(nombre,apellido);
printf("%d",valor);





*/


