#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;

    printf("edad: ");
    scanf("%d",&edad);

    while(edad<0||edad>100){
        printf("edad: ");
        scanf("%d",&edad);

    }

    return 0;
}
