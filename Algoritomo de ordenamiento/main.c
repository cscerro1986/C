#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{

    int puntos[CANT]={1,0,3,3,1},auxPuntos,i,j;//cuando a un array lo igual a llaves ={}.. lo que hago es ya darle valores a sus indices.
    int DifGoles[CANT]={1,-2,5,8,4},auxDif;

    for(i=0;i<CANT-1;i++){

        for(j=i+1;j<CANT;j++){// es j+1 porque compara dos indices de un vector con diferencia de 1

            if(puntos[i]<puntos[j]){//se busca comparar los puntos de i y los de j

                auxPuntos=puntos[i];// esto se usa para ordenar... usas un auxiliar para no perder el
                puntos[i]=puntos[j];
                puntos[j]=auxPuntos;

                auxDif=DifGoles[i];
                DifGoles[i]=DifGoles[j];
                DifGoles[j]=auxDif;
            }else {// tanto si tienen los mismos puntos o si i tiene mas puntos q j

                    if(puntos[i]==puntos[j]){//si dos equipos tienen los mismos puntos..
                        if(DifGoles[i]<DifGoles[j]){
                            auxPuntos=puntos[i];
                            puntos[i]=puntos[j];
                            puntos[j]=auxPuntos;

                            auxDif=DifGoles[i];
                            DifGoles[i]=DifGoles[j];
                            DifGoles[j]=auxDif;

                        }

                    }

            }
        }
    }

    for(i=0;i<CANT;i++){

        printf("\n\n%d %d", puntos[i],DifGoles[i]);
    }


   return 0;
}



/*




*/
