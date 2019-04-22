
#include <stdio.h>
#include "funciones.h"

//PEDIR UN NUMERO:
    int pedirEntero(char texto[])
{
    int unEntero;
    printf("%s", texto);
    scanf("%d", &unEntero);
}

//sumar:
    int cuenta(int numeroX,int numeroY)
    {
        int resultado= numeroX + numeroY;
        return resultado;
    }

    void cuentaYResultado(int numeroX,int numeroY)
    {
        int resultado= numeroX + numeroY;
        printf("el resultado es: %d", resultado);
    }
//dividir:
    float cuentaDivision(int numeroX,int numeroY)
    {
        float resultado= (float)numeroX/numeroY;
        return resultado;
    }

    void cuentaDivisionYResultado(int numeroX,int numeroY)
    {
        float resultado= (float)numeroX/numeroY;
        printf("el resultado es: %.2f", resultado);
    }
//PEDIR NOTA DEL 1 AL 10:
    int pedirNota(void)
    {
         int notaIngresada;

        do{
            printf("ingrese una nota entre 0 y 10:");
            scanf("%d", &notaIngresada);
            printf("ingrese otra nota entre 0 y 10:");
            scanf("%d", &notaIngresada);
        }while(notaIngresada<0 || notaIngresada>10);

        return notaIngresada;
    }
//SACAR PROMEDIO:
    float sacarPromedio(int suma, int cantidad)
    {
        float promedio;

        promedio= (float)suma/cantidad;

        return promedio;
    }

//APROBAR MATERIA:
    int aprovarMateria(int notaMinima, int nota)
{
    if(nota>=notaMinima)
        return 1;
       else
        return 0;
}

//FACTORIAR:
int factorial(int numero)
{
    int resultado;

    if(numero == 0 || numero == 1)
    {
        resultado = 1;
    }else{
        resultado= numero * factorial(numero -1);
    }


    return resultado;
}

