#include <stdio.h>

int main()
    {
    int i,numero,suma=0;

    printf("Ingresa un numero para determinar si es primo, o no. \n");
    scanf("%d",&numero);
    for (i=1;i<numero;i++) {
        if (numero % i == 0) {
            suma=suma+1;
        }
    }
    if (suma==1) {
        printf("%i Es un numero primo",numero);
    } else {
        printf("%i No es un numero primo",numero);
    }

    return 0;
    }
