Ejercicio 25 C
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Jimmy Nathan Ojeda Arana
Fecha: 3 de Febrero 2019
Entradas: Una letra perteneciente al código ASCII
Salidas: El código decimal en ASCII correspondiente a la letra introducida
---------------------------------------
Instrucción:
Escribir un programa para mostrar los códigos ASCII de las letras mayúsculas y minúsculas.
---------------------------------------
Procedimiento General:
---------------------------------------
1.-Se solicita al usuario ingresar una letra
2.-Se imprime la misma letra en tipo entero
---------------------------------------
#include <stdio.h>

int main()
    {
    char letra;
    printf("Ingresa una letra \n");
    scanf("%c",&letra);
    printf("El codigo ASCII para %c es %d",letra,letra);

    return 0;
    }
