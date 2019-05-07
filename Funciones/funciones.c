
#include <stdio.h>
#include "funciones.h"

//PEDIR UN NUMERO:
    int pedirEntero(char texto[])
{
    int unEntero;
    printf("%s", texto);
    scanf("%d", &unEntero);
    return unEntero;

}

//sumar/drestar/multiplicar:
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
        }while(notaIngresada<0 || notaIngresada>10);

        return notaIngresada;
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
//CARGAR VECTOR:
void cargarVector(int numerosEnteros[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("ingrese un numero: ");
        scanf("%d",&numerosEnteros[i]);
    }
}
//MOSTRAR CONTENIDO DEL VECTOR:
void mostrarNumeros(int numerosEnteros[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d-",numerosEnteros[i]);
    }
}

//BUSCAR MAXIMO EN UN VECTOR:
int buscarMaximo(int numeros[],int tam)
{
    int i;
    int flag=0;
    int maximo;

    for(i=0;i<tam;i++)
    {
        if(flag==0)
        {
            maximo=numeros[i];
            flag=1;
        }
        else if(numeros[i]>maximo)
        {
            maximo=numeros[i];
        }
    }
    return maximo;
}

//BUSCAR VALOR DENTRO DE UN VECTOR:
int buscarValor(int numeros[],int tam,int valor)
{
    int indiceValor=-1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(valor==numeros[i])
        {
            indiceValor=i;
           break;
        }
    }
    return indiceValor;
}

//BURBUJEO:
void ordenarVector(int numeros[], int tam)
    {
        int i;
        int j;
        int aux;
        for(i=0;i<tam-1;i++)
        {
            for(j=i+1;i<tam;j++)
            {
                if(numeros[i]>numeros[j])
                {
                    aux=numeros[i];
                    numeros[i]=numeros[j];
                    numeros[j]=aux;
                }
            }
        }
    }

//MENU DE OPCIONES:
void menuDeOpciones(void)
{
    int opcion;
    char seguir = 's';

    do{
        printf("1. Alta\n2.Baja\n3.Informar\n4.Salir\nElija una opcion:");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            seguir = 'n';
            break;
        default:

            break;
        }
        system("pause");
        system("cls");
    }while(seguir =='s');
}
//-----------------------------------------------------------------------------------------
                    //ESTRUCTURAS//

//CARGAR UNA ESTRUCTURA:
void cargarEmpleados(eEmpleado lista[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("ingrese legajo: ");
        scanf("%d", &lista[i].legajos );

        printf("ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);


        printf("ingrese sexo (M o F): ");
        fflush(stdin);
        scanf("%c",&lista[i].sexo);

        printf("ingrese sueldo bruto: ");
        scanf("%f", &lista[i].sueldoBruto);

        lista[i].sueldoNeto= lista[i].sueldoBruto*0.85;

        mostrarUnempleado(lista,i);
    }
}

//MOSTRAR UN SOLO EMPLEADO:
void mostrarUnempleado(eEmpleado lista[],int tam)
{
    printf("%d - %s - %c - %f - %f\n ",lista[tam].legajos,lista[tam].nombre,lista[tam].sexo,lista[tam].sueldoBruto,lista[tam].sueldoNeto);
}

//MOSTRAR TODOS LOS EMPLEADOS:
void mostrarLista(eEmpleado lista[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarUnempleado(lista,i);
    }
}
