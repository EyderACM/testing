#include <stdio.h>

int main()
    {
    int positivos=0,negativos=0;
    float numero;

    printf("Ingresa un numero real diferente de 0, (Ingresa 0 para salir).  \n");
    scanf("%f",&numero);
    while (numero!=0){
        if (numero>0){
            positivos++;
        } else {
            negativos++;
        }
        printf("Ingresa otro numero real diferente de 0, (Ingresa 0 para salir). \n");
        scanf("%f",&numero);
    }
    printf("Se encontraron %i positivos \n",positivos);
    printf("Se encontraron %i negativos",negativos);

    return 0;
    }
