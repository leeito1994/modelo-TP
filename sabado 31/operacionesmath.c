#include "operacionesmath.h"

sumar(int num1, int num2)
{
    int lasuma;
    lasuma = num1+num2;
    return lasuma;
}

restar(int num1, int num2)
{
    int laresta;
    laresta = num1-num2;
    return laresta;
}

division(int num1, int num2)
{
    int ladivision;
    ladivision = num1/num2;
    return ladivision;
}

multiplicacion(int num1, int num2)
{
    int lamultiplicacion;
    lamultiplicacion = num1*num2;
    return lamultiplicacion;
}

int calcular(int num1, int num2, int operador)
{
    int resultadoCalcular;
    int resultado;


    switch(operador)
    {
    case 1:
        resultado = sumar(num1,num2);
        resultadoCalcular = 1;
        break;

    case 2:
        resultado = restar(num1,num2);
        resultadoCalcular = 1;
        break;

    case 3:
        if (num2 != 0)
        {
            resultado = division(num1,num2);
            resultadoCalcular = 1;
        }
        else{
            resultadoCalcular = 0;
        }

        break;

    case 4:
        resultado = multiplicacion(num1,num2);
        resultadoCalcular = 1;
        break;
    }
    if(resultadoCalcular == 1)
    {
        mostrar(resultado);
    }

    return resultadoCalcular;
}

void mostrar(float resultado)
{
    printf("\nel resultado es %f",resultado);
}

int pedirNumero()
{
    int num1;
    printf("\ningrese numero ");
    scanf("%d",&num1);
    return num1;
}

int pedirOperacion()
{
    int operacion;
    printf(" que operacion desea realizar? \n");
    printf("\n 1. suma\n 2. resta\n 3. division\n 4. multiplicacion\n ");
    scanf("%d",&operacion);

    while(operacion < 1 || operacion > 4)
    {
        printf("error, reingrese operacion ");
        scanf("%d",&operacion);
    }

    return operacion;
}

